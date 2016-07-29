# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

[[ File menu ]]

file-menu =
    [xul/label]     File
    [xul/accesskey] F
tab-cmd =
    [xul/label]      New Tab
    [xul/accesskey]  T
tab-key =
    [xul/key]        t
new-user-context =
    [xul/label]      New Container Tab
    [xul/accesskey]  C
new-navigator-cmd =
    [xul/label]      New Window
    [xul/accesskey]  N
new-navigator-key =
    [xul/key]        N
new-private-window =
    [xul/label]      New Private Window
    [xul/accesskey]  W
new-non-remote-window =
    [xul/label]      New Non-e10s Window

# Only displayed on OS X, and only on windows that aren't main browser windows,
# or when there are no windows but Firefox is still running.
open-location-cmd =
    [xul/label]      Open Location…
open-file-cmd =
    [xul/label]      Open File…
    [xul/accesskey]  O
open-file-key =
    [xul/key]        o

close-cmd =
    [xul/label]      Close
    [xul/accesskey]  C
close-key =
    [xul/key]        W
close-window =
    [xul/label]      Close Window
    [xul/accesskey]  d

# [xul/accesskey2] is for content area context menu
save-page-cmd =
    [xul/label]      Save Page As…
    [xul/accesskey]  A
    [xul/accesskey2] P
save-page-key =
    [xul/key]        s

email-page-cmd =
    [xul/label]      Email Link…
    [xul/accesskey]  E

print-setup-cmd =
    [xul/label]      Page Setup…
    [xul/accesskey]  u
print-preview-cmd =
    [xul/label]      Print Preview…
    [xul/accesskey]  v
print-cmd =
    [xul/label]      Print…
    [xul/accesskey]  P
print-key =
    [xul/key]        p

go-offline-cmd =
    [xul/label]      Work Offline
    [xul/accesskey]  k

quit-application-cmd =
    [xul/label]      { OS() ->
        [win]    Exit
        [mac]    Quit { brand-shorter-name }
       *[lin]    Quit
    }
    [xul/accesskey]  { OS() ->
        [win]    x
        [mac]    Q
       *[lin]    Q
    }
# [xul/key] is used by both Linux and OSX builds
quit-application-key =
    [xul/key]        Q

[[ Edit menu ]]

edit-menu =
    [xul/label]      Edit
    [xul/accesskey]  E
undo-cmd =
    [xul/label]      Undo
    [xul/accesskey]  U
undo-key =
    [xul/key]        Z
redo-cmd =
    [xul/label]      Redo
    [xul/accesskey]  R
redo-key =
    [xul/key]        Y
cut-cmd =
    [xul/label]      Cut
    [xul/accesskey]  t
cut-key =
    [xul/key]        X
copy-cmd =
    [xul/label]      Copy
    [xul/accesskey]  C
copy-key =
    [xul/key]        C
paste-cmd =
    [xul/label]      Paste
    [xul/accesskey]  P
paste-key =
    [xul/key]        V
delete-cmd =
    [xul/label]      Delete
    [xul/accesskey]  D
delete-key =
    [xul/key]        D
select-all-cmd =
    [xul/label]      Select All
    [xul/accesskey]  A
select-all-key =
    [xul/key]        A

find-on-cmd =
    [xul/label]      Find in This Page…
    [xul/accesskey]  F
find-on-key =
    [xul/key]        f
find-again-cmd =
    [xul/label]      Find Again
    [xul/accesskey]  g
find-again-key1 =
    [xul/key]        g
find-again-key2 =
    [xul/keycode]    VK_F3
find-selection-key =
    [xul/key]        e

bidi-switch-text-direction-item =
    [xul/label]      Switch Text Direction
    [xul/accesskey]  w
bidi-switch-text-direction-key =
    [xul/key]        X

preferences-cmd =
    [xul/label]      { OS() ->
        [win]    Options
       *[other]  Preferences
    }
    [xul/accesskey]  { OS() ->
        [win]    O
       *[other]  n
    }


[[ View menu ]]

view-menu =
    [xul/label]      View
    [xul/accesskey]  V
view-toolbars-menu =
    [xul/label]      Toolbars
    [xul/accesskey]  T
view-sidebar-menu =
    [xul/label]      Sidebar
    [xul/accesskey]  e
view-customize-toolbar =
    [xul/label]      Customize…
    [xul/accesskey]  C

synced-tabs-sidebar =
    [xul/label]      Synced Tabs

full-zoom =
    [xul/label]      Zoom
    [xul/accesskey]  Z
full-zoom-enlarge-cmd =
    [xul/label]      Zoom In
    [xul/accesskey]  I
full-zoom-enlarge-key1 =
    [xul/key]        +
full-zoom-enlarge-key2 =
    [xul/key]        =
full-zoom-enlarge-key3 =
    [xul/key]        ""
full-zoom-reduce-cmd =
    [xul/label]      Zoom Out
    [xul/accesskey]  O
full-zoom-reduce-key1 =
    [xul/key]        -
full-zoom-reduce-key2 =
    [xul/key]        ""
full-zoom-reset-cmd =
    [xul/label]      Reset
    [xul/accesskey]  R
full-zoom-reset-key1 =
    [xul/key]        0
full-zoom-reset-key2 =
    [xul/key]        ""
full-zoom-toggle-cmd =
    [xul/label]      Zoom Text Only
    [xul/accesskey]  T

page-style-menu =
    [xul/label]      Page style
    [xul/accesskey]  y
page-style-no-style =
    [xul/label]      No Style
    [xul/accesskey]  n
page-style-persistent-only =
    [xul/label]      Basic Page Style
    [xul/accesskey]  b

show-all-tabs-cmd =
    [xul/label]      Show All Tabs
    [xul/accesskey]  A
bidi-switch-page-direction-item =
    [xul/label]      Switch Page Direction
    [xul/accesskey]  D

# Match what Safari and other Apple applications use on OS X Lion.
[[ Full Screen controls ]]

enter-full-screen-cmd =
    [xul/label]      Enter Full Screen
    [xul/accesskey]  F
exit-full-screen-cmd =
    [xul/label]      Exit Full Screen
    [xul/accesskey]  F
full-screen-cmd =
    [xul/label]      Full Screen
    [xul/accesskey]  F
full-screen-key =
    [xul/key]        f


[[ History menu ]]

history-menu =
    [xul/label]        History
    [xul/accesskey]    s
show-all-history-cmd =
    [xul/label]        Show All History
show-all-history-key =
    [xul/key]          H
clear-recent-history =
    [xul/label]        Clean Recent History…
# This appears in the history menu
synced-tabs-menu =
    [xul/label]        Synced Tabs
history-restore-last-session =
    [xul/label]        Restore Previous Session
history-undo-menu =
    [xul/label]        Recently Closed Tabs
history-undo-window-menu =
    [xul/label]        Recently Closed Windows


[[ Bookmarks menu ]]

bookmarks-menu =
    [xul/label]      Bookmarks
    [xul/accesskey]  B
show-all-bookmarks =
    [xul/label]      Show All Bookmarks
bookmark-this-page-cmd =
    [xul/label]          Bookmark This Page
    [xul/bookmarklabel]  Bookmark This Page
    [xul/editlabel]      Edit This Page
bookmark-this-page-key =
    [xul/key]            d
subscribe-to-page-menuitem =
    [xul/label]      Subscribe to This Page…
subscribe-to-page-menupopup =
    [xul/label]      Subscribe to This Page…
add-cur-pages-cmd =
    [xul/label]      Bookmark All Tabs…
recent-bookmarks =
    [xul/label]      Recently Bookmarked
other-bookmarks-cmd =
    [xul/label]      Other Bookmarks

personalbar-cmd =
    [xul/label]      Bookmarks Toolbar
    [xul/accesskey]  B


[[ Tools menu ]]

tools-menu =
    [xul/label]      Tools
    [xul/accesskey]  T
downloads =
    [xul/label]      Downloads
    [xul/accesskey]  D
downloads-key =
    [xul/key]        { OS() ->
        [lin]    y
       *[other]  j
    }
addons =
    [xul/label]      Add-ons
    [xul/accesskey]  A
addons-key =
    [xul/key]        A

sync-brand-short-name =
   *[xul/label]      Sync

sync-sign-in =
    [xul/label]      Sign In To { sync-brand-short-name }…
    [xul/accesskey]  Y
sync-sync-now-item =
    [xul/label]      Sync Now
    [xul/accesskey]  S
sync-re-auth-item =
    [xul/label]      Reconnect to { sync-brand-short-name }…
    [xul/accesskey]  R
sync-toolbar-button =
    [xul/label]      Sync

web-developer-menu =
    [xul/label]      Web Developer
    [xul/accesskey]  W

page-source-cmd =
    [xul/label]      Page Source
    [xul/accesskey]  o
page-source-key =
    [xul/key]        u
page-info-cmd =
    [xul/label]      Page Info
    [xul/accesskey]  I
page-info-key =
    [xul/key]        i
mirror-tab-cmd =
    [xul/label]      Mirror Tab
    [xul/accesskey]  m
