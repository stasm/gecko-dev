# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

urlbar =
    [xul/placeholder] Search or enter address
    [xul/accesskey]   d


[[ Toolbar items ]]

bookmarks-button =
    [xul/label]      Bookmarks

# The command key for [lin] should not contain the letters A-F since they
# are reserved shortcut keys on Linux.
bookmarks-key =
    [xul/key]    { OS() ->
        [win] o
        [mac] b
       *[lin] i
    }

history-button =
    [xul/label]      History
history-button-key =
    [xul/key]        h
