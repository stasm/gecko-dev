# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

urlbar =
    [placeholder] Search or enter address (FTL)
    [accesskey]   d


[[ File menu ]]

file-menu =
    [label]     File
    [accesskey] F
tab-cmd =
    [label]      New Tab
    [accesskey]  T
tab-key =
    [key]        t
new-user-context =
    [label]      New Container Tab
    [accesskey]  C
new-navigator-cmd =
    [label]      New Window
    [accesskey]  N
new-navigator-key =
    [key]        N
new-private-window =
    [label]      New Private Window
    [accesskey]  W
new-non-remote-window =
    [label]      New Non-e10s Window

# Only displayed on OS X, and only on windows that aren't main browser windows,
# or when there are no windows but Firefox is still running.
open-location-cmd =
    [label]      Open Location…
open-file-cmd =
    [label]      Open File…
    [accesskey]  O
open-file-key =
    [key]        o

close-cmd =
    [label]      Close
    [accesskey]  C
close-key =
    [key]        W
close-window =
    [label]      Close Window
    [accesskey]  d

# [accesskey2] is for content area context menu
save-page-cmd =
    [label]      Save Page As…
    [accesskey]  A
    [accesskey2] P
save-page-key =
    [key]        s

email-page-cmd =
    [label]      Email Link…
    [accesskey]  E

print-setup-cmd =
    [label]      Page Setup…
    [accesskey]  u
print-preview-cmd =
    [label]      Print Preview…
    [accesskey]  v
print-cmd =
    [label]      Print…
    [accesskey]  P
print-key =
    [key]        p

go-offline-cmd =
    [label]      Work Offline
    [accesskey]  k

quit-application-cmd =
    [label]      { OS() ->
        [win]    Exit
        [mac]    Quit { brand-shorter-name }
       *[lin]    Quit
    }
    [accesskey]  { OS() ->
        [win]    x
        [mac]    Q
       *[lin]    Q
    }
# [key] is used by both Linux and OSX builds
quit-application-key =
    [key]        Q

[[ Edit menu ]]

edit-menu =
    [label]      Edit
    [accesskey]  E
undo-cmd =
    [label]      Undo
    [accesskey]  U
undo-key =
    [key]        Z
redo-cmd =
    [label]      Redo
    [accesskey]  R
redo-key =
    [key]        Y
cut-cmd =
    [label]      Cut
    [accesskey]  t
cut-key =
    [key]        X
copy-cmd =
    [label]      Copy
    [accesskey]  C
copy-key =
    [key]        C
paste-cmd =
    [label]      Paste
    [accesskey]  P
paste-key =
    [key]        V
delete-cmd =
    [label]      Delete
    [accesskey]  D
delete-key =
    [key]        D
select-all-cmd =
    [label]      Select All
    [accesskey]  A
select-all-key =
    [key]        A

find-on-cmd =
    [label]      Find in This Page…
    [accesskey]  F
find-on-key =
    [key]        f
find-again-cmd =
    [label]      Find Again
    [accesskey]  g
find-again-key1 =
    [key]        g
find-again-key2 =
    [keycode]    VK_F3
find-selection-key =
    [key]        e

bidi-switch-text-direction-item =
    [label]      Switch Text Direction
    [accesskey]  w
bidi-switch-text-direction-key =
    [key]        X

preferences-cmd =
    [label]      { OS() ->
        [win]    Options
       *[other]  Preferences
    }
    [accesskey]  { OS() ->
        [win]    O
       *[other]  n
    }


[[ View menu ]]

view-menu =
    [label]      View
    [accesskey]  V
view-toolbars-menu =
    [label]      Toolbars
    [accesskey]  T
view-sidebar-menu =
    [label]      Sidebar
    [accesskey]  e
view-customize-toolbar =
    [label]      Customize…
    [accesskey]  C

synced-tabs-sidebar =
    [label]      Synced Tabs

full-zoom =
    [label]      Zoom
    [accesskey]  Z
full-zoom-enlarge-cmd =
    [label]      Zoom In
    [accesskey]  I
full-zoom-enlarge-key1 =
    [key]        +
full-zoom-enlarge-key2 =
    [key]        =
full-zoom-enlarge-key3 =
    [key]        ""
full-zoom-reduce-cmd =
    [label]      Zoom Out
    [accesskey]  O
full-zoom-reduce-key1 =
    [key]        -
full-zoom-reduce-key2 =
    [key]        ""
full-zoom-reset-cmd =
    [label]      Reset
    [accesskey]  R
full-zoom-reset-key1 =
    [key]        0
full-zoom-reset-key2 =
    [key]        ""
full-zoom-toggle-cmd =
    [label]      Zoom Text Only
    [accesskey]  T

page-style-menu =
    [label]      Page style
    [accesskey]  y
page-style-no-style =
    [label]      No Style
    [accesskey]  n
page-style-persistent-only =
    [label]      Basic Page Style
    [accesskey]  b

# These should match what Safari and other Apple applications use on OS X Lion.
enter-full-screen-cmd =
    [label]      Enter Full Screen
    [accesskey]  F
exit-full-screen-cmd =
    [label]      Exit Full Screen
    [accesskey]  F
full-screen-cmd =
    [label]      Full Screen
    [accesskey]  F
full-screen-key =
    [key]        f
show-all-tabs-cmd =
    [label]      Show All Tabs
    [accesskey]  A
bidi-switch-page-direction-item =
    [label]      Switch Page Direction
    [accesskey]  D


[[ History menu ]]

history-menu =
    [label]        History
    [accesskey]    s
show-all-history-cmd =
    [label]        Show All History
show-all-history-key =
    [key]          H
clear-recent-history =
    [label]        Clean Recent History…
# This appears in the history menu
synced-tabs-menu =
    [label]        Synced Tabs
history-restore-last-session =
    [label]        Restore Previous Session
history-undo-menu =
    [label]        Recently Closed Tabs
# See bug 394759
history-undo-window-menu =
    [label]        Recently Closed Windows


[[ Bookmarks menu ]]

bookmarks-menu =
    [label]      Bookmarks
    [accesskey]  B
show-all-bookmarks =
    [label]      Show All Bookmarks
bookmark-this-page-cmd =
    [label]          Bookmark This Page
    [bookmarklabel]  Bookmark This Page
    [editlabel]      Edit This Page
bookmark-this-page-key =
    [key]            d
subscribe-to-page-menuitem =
    [label]      Subscribe to This Page…
subscribe-to-page-menupopup =
    [label]      Subscribe to This Page…
add-cur-pages-cmd =
    [label]      Bookmark All Tabs…
recent-bookmarks =
    [label]      Recently Bookmarked
other-bookmarks-cmd =
    [label]      Other Bookmarks

personalbar-cmd =
    [label]      Bookmarks Toolbar
    [accesskey]  B


[[ Tools menu ]]

tools-menu =
    [label]      Tools
    [accesskey]  T
downloads =
    [label]      Downloads
    [accesskey]  D
downloads-key =
    [key]        { OS() ->
        [lin]    y
       *[other]  j
    }
addons =
    [label]      Add-ons
    [accesskey]  A
addons-key =
    [key]        A

sync-brand-short-name =
   *[label]      Sync

sync-sign-in =
    [label]      Sign In To { sync-brand-short-name }…
    [accesskey]  Y
sync-sync-now-item =
    [labe1l]      Sync Now
    [accesskey]  S
sync-re-auth-item =
    [label]      Reconnect to { sync-brand-short-name }…
    [accesskey]  R
sync-toolbar-button =
    [label]      Sync

web-developer-menu =
    [label]      Web Developer
    [accesskey]  W

page-source-cmd =
    [label]      Page Source
    [accesskey]  o
page-source-key =
    [key]        u
page-info-cmd =
    [label]      Page Info
    [accesskey]  I
page-info-key =
    [key]        i
mirror-tab-cmd =
    [label]      Mirror Tab
    [accesskey]  m


[[ Toolbar items ]]

bookmarks-button =
    [label]      Bookmarks

# This command key for [lin] should not contain the letters A-F, since these
# are reserved shortcut keys on Linux.
bookmarks-key =
  [key]    { OS() ->
      [win] o
      [mac] b
     *[lin] i
  }

history-button =
    [label]      History
history-button-key =
    [key]        h
