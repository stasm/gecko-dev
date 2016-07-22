# -*- Mode: Java; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

       <menubar id="main-menubar"
                onpopupshowing="if (event.target.parentNode.parentNode == this &amp;&amp;
                                    !('@mozilla.org/widget/nativemenuservice;1' in Cc))
                                  this.setAttribute('openedwithkey',
                                                    event.target.parentNode.openedWithKey);"
                style="border:0px;padding:0px;margin:0px;-moz-appearance:none">
            <menu id="file-menu" data-l10n-id="file-menu">
              <menupopup id="menu_FilePopup"
                         onpopupshowing="updateUserContextUIVisibility();">
                <menuitem id="menu_newNavigatorTab"
                          data-l10n-id="tab-cmd"
                          command="cmd_newNavigatorTab"
                          key="key_newNavigatorTab"/>
                <menu id="menu_newUserContext"
                      data-l10n-id="new-user-context"
                      hidden="true">
                  <menupopup onpopupshowing="return createUserContextMenu(event);" />
                </menu>
                <menuitem id="menu_newNavigator"
                          data-l10n-id="new-navigator-cmd"
                          key="key_newNavigator"
                          command="cmd_newNavigator"/>
                <menuitem id="menu_newPrivateWindow"
                          data-l10n-id="new-private-window"
                          command="Tools:PrivateBrowsing"
                          key="key_privatebrowsing"/>
#ifdef E10S_TESTING_ONLY
                <menuitem id="menu_newNonRemoteWindow"
                          data-l10n-id="new-non-remote-window"
                          hidden="true"
                          command="Tools:NonRemoteWindow"/>
#endif
#ifdef MAC_NON_BROWSER_WINDOW
                <menuitem id="menu_openLocation"
                          data-l10n-id="open-location-cmd"
                          command="Browser:OpenLocation"
                          key="focusURLBar"/>
#endif
                <menuitem id="menu_openFile"
                          data-l10n-id="open-file-cmd"
                          command="Browser:OpenFile"
                          key="openFileKb"
                          accesskey="&openFileCmd.accesskey;"/>
                <menuitem id="menu_close"
                          data-l10n-id="close-cmd"
                          class="show-only-for-keyboard"
                          key="key_close"
                          command="cmd_close"/>
                <menuitem id="menu_closeWindow"
                          data-l10n-id="close-window"
                          class="show-only-for-keyboard"
                          hidden="true"
                          command="cmd_closeWindow"
                          key="key_closeWindow"/>
                <menuseparator/>
                <menuitem id="menu_savePage"
                          data-l10n-id="save-page-cmd"
                          key="key_savePage"
                          command="Browser:SavePage"/>
                <menuitem id="menu_sendLink"
                          data-l10n-id="email-page-cmd"
                          command="Browser:SendLink"/>
                <menuseparator/>
#if !defined(MOZ_WIDGET_GTK) && !defined(MOZ_WIDGET_QT)
                <menuitem id="menu_printSetup"
                          data-l10n-id="print-setup-cmd"
                          command="cmd_pageSetup"/>
#endif
#ifndef XP_MACOSX
                <menuitem id="menu_printPreview"
                          data-l10n-id="print-preview-cmd"
                          command="cmd_printPreview"/>
#endif
                <menuitem id="menu_print"
                          data-l10n-id="print-cmd"
                          key="printKb"
                          command="cmd_print"/>
                <menuseparator/>
                <menuitem id="goOfflineMenuitem"
                          data-l10n-id="go-offline-cmd"
                          type="checkbox"
                          observes="workOfflineMenuitemState"
                          oncommand="BrowserOffline.toggleOfflineStatus();"/>
                <menuitem id="menu_FileQuitItem"
                          data-l10n-id="quit-application-cmd"
#ifdef XP_UNIX
                          key="key_quitApplication"
#endif
                          command="cmd_quitApplication"/>
              </menupopup>
            </menu>

            <menu id="edit-menu" data-l10n-id="edit-menu">
              <menupopup id="menu_EditPopup"
                         onpopupshowing="updateEditUIVisibility()"
                         onpopuphidden="updateEditUIVisibility()">
                <menuitem id="menu_undo"
                          data-l10n-id="undo-cmd"
                          key="key_undo"
                          command="cmd_undo"/>
                <menuitem id="menu_redo"
                          data-l10n-id="redo-cmd"
                          key="key_redo"
                          command="cmd_redo"/>
                <menuseparator/>
                <menuitem id="menu_cut"
                          data-l10n-id="redo-cmd"
                          key="key_cut"
                          command="cmd_cut"/>
                <menuitem id="menu_copy"
                          data-l10n-id="redo-cmd"
                          key="key_copy"
                          command="cmd_copy"/>
                <menuitem id="menu_paste"
                          data-l10n-id="redo-cmd"
                          key="key_paste"
                          command="cmd_paste"/>
                <menuitem id="menu_delete"
                          data-l10n-id="redo-cmd"
                          key="key_delete"
                          command="cmd_delete"/>
                <menuseparator/>
                <menuitem id="menu_selectAll"
                          data-l10n-id="redo-cmd"
                          key="key_selectAll"
                          command="cmd_selectAll"/>
                <menuseparator/>
                <menuitem id="menu_find"
                          data-l10n-id="find-on-cmd"
                          key="key_find"
                          command="cmd_find"/>
                <menuitem id="menu_findAgain"
                          data-l10n-id="find-again-cmd"
                          class="show-only-for-keyboard"
                          key="key_findAgain"
                          command="cmd_findAgain"/>
                <menuseparator hidden="true" id="textfieldDirection-separator"/>
                <menuitem id="textfieldDirection-swap"
                          data-l10n-id="bidi-switch-text-direction-item"
                          command="cmd_switchTextDirection"
                          key="key_switchTextDirection"
                          hidden="true"/>
#ifdef XP_UNIX
#ifndef XP_MACOSX
                <menuseparator/>
                <menuitem id="menu_preferences"
                          data-l10n-id="preferences-cmd"
                          oncommand="openPreferences();"/>
#endif
#endif
              </menupopup>
            </menu>

            <menu id="view-menu" data-l10n-id="view-menu">
              <menupopup id="menu_viewPopup"
                         onpopupshowing="updateCharacterEncodingMenuState();">
                <menu id="viewToolbarsMenu"
                      data-l10n-id="view-toolbars-menu">
                  <menupopup onpopupshowing="onViewToolbarsPopupShowing(event);">
                    <menuseparator/>
                    <menuitem id="menu_customizeToolbars"
                              data-l10n-id="view-customize-toolbar"
                              command="cmd_CustomizeToolbars"/>
                  </menupopup>
                </menu>
                <menu id="viewSidebarMenuMenu"
                      data-l10n-id="view-sidebar-menu">
                  <menupopup id="viewSidebarMenu">
                    <menuitem id="menu_bookmarksSidebar"
                              key="viewBookmarksSidebarKb"
                              observes="viewBookmarksSidebar"/>
                    <menuitem id="menu_historySidebar"
                              data-l10n-id="history-button"
                              key="key_gotoHistory"
                              observes="viewHistorySidebar"/>
                    <menuitem id="menu_tabsSidebar"
                              data-l10n-id="synced-tabs-sidebar"
                              observes="viewTabsSidebar"/>
                    <!-- Service providers with sidebars are inserted between these two menuseperators -->
                    <menuseparator hidden="true"/>
                    <menuseparator class="social-provider-menu" hidden="true"/>
                  </menupopup>
                </menu>
                <menuseparator/>
                <menu id="viewFullZoomMenu" data-l10n-id="full-zoom"
                      onpopupshowing="FullZoom.updateMenu();">
                  <menupopup>
                    <menuitem id="menu_zoomEnlarge"
                              data-l10n-id="full-zoom-enlarge-cmd"
                              key="key_fullZoomEnlarge"
                              command="cmd_fullZoomEnlarge"/>
                    <menuitem id="menu_zoomReduce"
                              data-l10n-id="full-zoom-reduce-cmd"
                              key="key_fullZoomReduce"
                              command="cmd_fullZoomReduce"/>
                    <menuseparator/>
                    <menuitem id="menu_zoomReset"
                              data-l10n-id="full-zoom-reset-cmd"
                              key="key_fullZoomReset"
                              command="cmd_fullZoomReset"/>
                    <menuseparator/>
                    <menuitem id="toggle_zoom"
                              data-l10n-id="full-zoom-toggle-cmd"
                              type="checkbox"
                              command="cmd_fullZoomToggle"
                              checked="false"/>
                  </menupopup>
                </menu>
                <menu id="pageStyleMenu" data-l10n-id="page-style-menu"
                      observes="isImage">
                  <menupopup onpopupshowing="gPageStyleMenu.fillPopup(this);">
                    <menuitem id="menu_pageStyleNoStyle"
                              data-l10n-id="page-style-no-style"
                              oncommand="gPageStyleMenu.disableStyle();"
                              type="radio"/>
                    <menuitem id="menu_pageStylePersistentOnly"
                              data-l10n-id="page-style-persistent-only"
                              oncommand="gPageStyleMenu.switchStyleSheet('');"
                              type="radio"
                              checked="true"/>
                    <menuseparator/>
                  </menupopup>
                </menu>
#include browser-charsetmenu.inc
                <menuseparator/>
#ifdef XP_MACOSX
                <menuitem id="enterFullScreenItem"
                          data-l10n-id="enter-full-screen-cmd"
                          key="key_fullScreen">
                  <observes element="View:FullScreen" attribute="oncommand"/>
                  <observes element="View:FullScreen" attribute="disabled"/>
                </menuitem>
                <menuitem id="exitFullScreenItem"
                          data-l10n-id="exit-full-screen-cmd"
                          key="key_fullScreen"
                          hidden="true">
                  <observes element="View:FullScreen" attribute="oncommand"/>
                  <observes element="View:FullScreen" attribute="disabled"/>
                </menuitem>
#else
                <menuitem id="fullScreenItem"
                          data-l10n-id="full-screen-cmd"
                          key="key_fullScreen"
                          type="checkbox"
                          observes="View:FullScreen"/>
#endif
                <menuitem id="menu_readerModeItem"
                          observes="View:ReaderView"
                          hidden="true"/>
                <menuitem id="menu_showAllTabs"
                          data-l10n-id="show-all-tabs-cmd"
                          hidden="true"
                          command="Browser:ShowAllTabs"
                          key="key_showAllTabs"/>
                <menuseparator hidden="true" id="documentDirection-separator"/>
                <menuitem id="documentDirection-swap"
                          data-l10n-id="bidi-switch-page-direction-item"
                          hidden="true"
                          oncommand="gBrowser.selectedBrowser
                                             .messageManager
                                             .sendAsyncMessage('SwitchDocumentDirection');"/>
              </menupopup>
            </menu>

            <menu id="history-menu" data-l10n-id="history-menu">
              <menupopup id="goPopup"
#ifndef XP_MACOSX
                         placespopup="true"
#endif
                         oncommand="this.parentNode._placesView._onCommand(event);"
                         onclick="checkForMiddleClick(this, event);"
                         onpopupshowing="if (!this.parentNode._placesView)
                                           new HistoryMenu(event);"
                         tooltip="bhTooltip"
                         popupsinherittooltip="true">
                <menuitem id="menu_showAllHistory"
                          data-l10n-id="show-all-history-cmd"
#ifndef XP_MACOSX
                          key="showAllHistoryKb"
#endif
                          command="Browser:ShowAllHistory"/>
                <menuitem id="sanitizeItem"
                          data-l10n-id="clear-recent-history"
                          key="key_sanitize"
                          command="Tools:Sanitize"/>
                <menuseparator id="sanitizeSeparator"/>
                <menuitem id="sync-tabs-menuitem"
                          data-l10n-id="synced-tabs-menu"
                          class="syncTabsMenuItem"
                          oncommand="BrowserOpenSyncTabs();"
                          hidden="true"/>
                <menuitem id="historyRestoreLastSession"
                          data-l10n-id="history-restore-last-session"
                          command="Browser:RestoreLastSession"/>
                <menu id="historyUndoMenu"
                      data-l10n-id="history-undo-menu"
                      class="recentlyClosedTabsMenu"
                      disabled="true">
                  <menupopup id="historyUndoPopup"
#ifndef XP_MACOSX
                             placespopup="true"
#endif
                             onpopupshowing="document.getElementById('history-menu')._placesView.populateUndoSubmenu();"/>
                </menu>
                <menu id="historyUndoWindowMenu"
                      data-l10n-id="history-undo-window-menu"
                      class="recentlyClosedWindowsMenu"
                      disabled="true">
                  <menupopup id="historyUndoWindowPopup"
#ifndef XP_MACOSX
                             placespopup="true"
#endif
                             onpopupshowing="document.getElementById('history-menu')._placesView.populateUndoWindowSubmenu();"/>
                </menu>
                <menuseparator id="startHistorySeparator"
                               class="hide-if-empty-places-result"/>
              </menupopup>
            </menu>

  <menu id="bookmarksMenu"
        data-l10n-id="bookmarks-menu"
        ondragenter="PlacesMenuDNDHandler.onDragEnter(event);"
        ondragover="PlacesMenuDNDHandler.onDragOver(event);"
        ondrop="PlacesMenuDNDHandler.onDrop(event);">
    <menupopup id="bookmarksMenuPopup"
#ifndef XP_MACOSX
               placespopup="true"
#endif
               context="placesContext"
               openInTabs="children"
               oncommand="BookmarksEventHandler.onCommand(event, this.parentNode._placesView);"
               onclick="BookmarksEventHandler.onClick(event, this.parentNode._placesView);"
               onpopupshowing="BookmarkingUI.onMainMenuPopupShowing(event);
                               if (!this.parentNode._placesView)
                                 new PlacesMenu(event, 'place:folder=BOOKMARKS_MENU');"
               tooltip="bhTooltip" popupsinherittooltip="true">
      <menuitem id="bookmarksShowAll"
                data-l10n-id="show-all-bookmarks"
                command="Browser:ShowAllBookmarks"
                key="manBookmarkKb"/>
      <menuseparator id="organizeBookmarksSeparator"/>
      <menuitem id="menu_bookmarkThisPage"
                command="Browser:AddBookmarkAs"
                observes="bookmarkThisPageBroadcaster"
                key="addBookmarkAsKb"/>
      <menuitem id="subscribeToPageMenuitem"
                data-l10n-id="subscribe-to-page-menuitem"
#ifndef XP_MACOSX
                class="menuitem-iconic"
#endif
                oncommand="return FeedHandler.subscribeToFeed(null, event);"
                onclick="checkForMiddleClick(this, event);"
                observes="singleFeedMenuitemState"/>
      <menu id="subscribeToPageMenupopup"
                data-l10n-id="subscribe-to-page-menupopup"
#ifndef XP_MACOSX
            class="menu-iconic"
#endif
            observes="multipleFeedsMenuState">
        <menupopup id="subscribeToPageSubmenuMenupopup"
                   onpopupshowing="return FeedHandler.buildFeedList(event.target);"
                   oncommand="return FeedHandler.subscribeToFeed(null, event);"
                   onclick="checkForMiddleClick(this, event);"/>
      </menu>
      <menuitem id="menu_bookmarkAllTabs"
                data-l10n-id="add-cur-pages-cmd"
                class="show-only-for-keyboard"
                command="Browser:BookmarkAllTabs"
                key="bookmarkAllTabsKb"/>
      <menuseparator/>
      <menuitem id="menu_recentBookmarks"
                data-l10n-id="recent-bookmarks"
                disabled="true"/>
      <menuseparator id="bookmarksToolbarSeparator"/>
      <menu id="bookmarksToolbarFolderMenu"
            data-l10n-id="personalbar-cmd"
            class="menu-iconic bookmark-item"
            container="true">
        <menupopup id="bookmarksToolbarFolderPopup"
#ifndef XP_MACOSX
                   placespopup="true"
#endif
                   context="placesContext"
                   onpopupshowing="if (!this.parentNode._placesView)
                                     new PlacesMenu(event, 'place:folder=TOOLBAR');"/>
      </menu>
      <menu id="menu_unsortedBookmarks"
            data-l10n-id="other-bookmarks-cmd"
            class="menu-iconic bookmark-item"
            container="true">
        <menupopup id="otherBookmarksFolderPopup"
#ifndef XP_MACOSX
                   placespopup="true"
#endif
                   context="placesContext"
                   onpopupshowing="if (!this.parentNode._placesView)
                                     new PlacesMenu(event, 'place:folder=UNFILED_BOOKMARKS');"/>
      </menu>
      <menuseparator id="bookmarksMenuItemsSeparator"/>
      <!-- Bookmarks menu items -->
    </menupopup>
  </menu>

            <menu id="tools-menu"
                  data-l10n-id="tools-menu"
                  onpopupshowing="mirrorShow(this)">
              <menupopup id="menu_ToolsPopup"
# We have to use setTimeout() here to avoid a flickering menu bar when opening
# the Tools menu, see bug 970769. This can be removed once we got rid of the
# event loop spinning in Weave.Status._authManager.
                         onpopupshowing="setTimeout(() => gSyncUI.updateUI());"
                         >
              <menuitem id="menu_openDownloads"
                        data-l10n-id="downloads"
                        key="key_openDownloads"
                        command="Tools:Downloads"/>
              <menuitem id="menu_openAddons"
                        data-l10n-id="addons"
                        key="key_openAddons"
                        command="Tools:Addons"/>

              <!-- only one of sync-setup, sync-syncnowitem or sync-reauthitem will be showing at once -->
              <menuitem id="sync-setup"
                        data-l10n-id="sync-sign-in"
                        observes="sync-setup-state"
                        oncommand="gSyncUI.openSetup(null, 'menubar')"/>
              <menuitem id="sync-syncnowitem"
                        data-l10n-id="sync-sync-now-item"
                        observes="sync-syncnow-state"
                        oncommand="gSyncUI.doSync(event);"/>
              <menuitem id="sync-reauthitem"
                        data-l10n-id="sync-re-auth-item"
                        observes="sync-reauth-state"
                        oncommand="gSyncUI.openSignInAgainPage('menubar');"/>
              <menuseparator id="devToolsSeparator"/>
              <menu id="webDeveloperMenu"
                    data-l10n-id="web-developer-menu">
                <menupopup id="menuWebDeveloperPopup">
                  <menuitem id="menu_pageSource"
                            data-l10n-id="page-source-cmd"
                            observes="devtoolsMenuBroadcaster_PageSource"/>
                </menupopup>
              </menu>
              <menuitem id="menu_pageInfo"
                        data-l10n-id="page-info-cmd"
#ifndef XP_WIN
                        key="key_viewInfo"
#endif
                        command="View:PageInfo"/>
              <menu id="menu_mirrorTabCmd"
                    data-l10n-id="mirror-tab-cmd"
                    hidden="true">
                <menupopup id="menu_mirrorTab-popup"
                           onpopupshowing="populateMirrorTabMenu(this)"/>
              </menu>
#ifndef XP_UNIX
              <menuseparator id="prefSep"/>
              <menuitem id="menu_preferences"
                        data-l10n-id="preferences-cmd"
                        oncommand="openPreferences();"/>
#endif
              </menupopup>
            </menu>

#ifdef XP_MACOSX
          <menu id="windowMenu" />
#endif
          <menu id="helpMenu" />
        </menubar>
