/* -*- indent-tabs-mode: nil; js-indent-level: 2 -*- */
/* vim: set ts=2 et sw=2 tw=80 filetype=javascript: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

"use strict";

this.EXPORTED_SYMBOLS = ["L20n"];

const { classes: Cc, interfaces: Ci, utils: Cu } = Components;

Cu.import("resource://gre/modules/XPCOMUtils.jsm");
Cu.import("resource://gre/modules/Services.jsm");

XPCOMUtils.defineLazyModuleGetter(this, "L20nParser",
                                  "resource://gre/modules/L20nParser.jsm");

Cu.import("resource://gre/modules/IntlMessageContext.jsm");

const { loadKinto } = Cu.import("resource://services-common/kinto-offline-client.js");
const Kinto = loadKinto();

class Env {
  constructor() {
  }

  createContext(langs, resIds) {
    const ctx = new L20nContext(this, langs, resIds);

    return ctx.loadResources().then(() => {
      return ctx;
    });
  }
}

this.L20n = new Env();

const IO = {
  load: function(lang, url) {
    let FirefoxAdapter = Kinto.adapters.FirefoxAdapter;
    let config = {
      remote: "http://localhost:8888/v1",
      headers: {"Authorization": "Basic c3Rhczo=" } ,
      bucket: "l10n",
      adapter: FirefoxAdapter
    };

    let db = new Kinto(config);
    let resources = db.collection(lang);
    let resource;

    return resources.db.open()
      .then(() => resources.sync())
      .then(() => resources.list())
      .then(({data}) => data.filter(resource => resource.resid === url))
      .then(([found]) => resource = found)
      .then(() => resources.db.close())
      .then(() => {
        return resource.content;
      });
  }
};

class L20nContext {
  constructor(env, langs, resIds) {
    this.messageContexts = {};
    this.resCache = {};
    this.resIds = resIds;
    this.langs = langs;
    this.env = env;

  }

  loadResources() {
    let resLoading = [];

    this.langs.forEach(lang => {
      this.messageContexts[lang] = new MessageContext(lang, {
        formatters: {
          OS: function() {
            switch (Services.appinfo.OS) {
              case 'WINNT':
                return 'win';
              case 'Linux':
                return 'lin';
              case 'Darwin':
                return 'mac';
              case 'Android':
                return 'android';
              default:
                return 'other';
            }
          }
        }
      });
      this.resCache[lang] = {};

      this.resIds.forEach(resId => {
        resLoading.push(IO.load(lang, resId).then(source => {
          const [entries, errors] = L20nParser.parseResource(source);
          this.resCache[lang][resId] = entries;
        }));
      });
    });

    return Promise.all(resLoading);
  }

  getValue(id, args) {
    let res;

    this.resIds.forEach(resId => {
      if (this.resCache[this.langs[0]][resId].hasOwnProperty(id)) {
        res = resId;
      }
    });
    if (!res) {
      return 'No Entity for id ' + id;
    }
    const entry = this.resCache[this.langs[0]][res][id];

    return this.messageContexts[this.langs[0]].formatEntry(entry, args);
  }

  getEntity(id, args) {
    let res;

    this.resIds.forEach(resId => {
      if (this.resCache[this.langs[0]][resId].hasOwnProperty(id)) {
        res = resId;
      }
    });
    if (!res) {
      return {
        value: 'No Entity for id ' + id,
        traits: {}
      };
    }

    const entries = this.resCache[this.langs[0]][res];
    const entry = entries[id];
    const msgCtx = this.messageContexts[this.langs[0]];

    let value, traits;

    if (typeof entry === 'string' || Array.isArray(entry)) {
      value = entry;
    } else {
      value = entry.val;
      traits = entry.traits;
    }

    const formatted = {
      value: msgCtx.formatEntry(value, args, entries),
      traits: null
    };
    
    if (traits) {
      formatted.traits = Object.create(null);

      traits.forEach(trait => {
        let key = trait.key.ns ?
          `${trait.key.ns}/${trait.key.name}` : trait.key.name;
        formatted.traits[key] = msgCtx.formatEntry(trait.val, args, entries);
      });
    }

    return formatted;
  }

  formatEntities(...keys) {
    return keys.map(key => {
      let id = Array.isArray(key) ? key[0] : key;
      let args = Array.isArray(key) ? key[1] : undefined;
      
      try {
        return this.getEntity(id, args);
      } catch (e) {
        console.log('Error getting entity: ' + id);
        console.log(e);
        return {
          value: id,
          traits: null
        };
      }
    });
  }
}
