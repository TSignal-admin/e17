# Copyright (c) 2008 Simon Busch
#
# This file is part of python-elementary.
#
# python-elementary is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# python-elementary is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with python-elementary.  If not, see <http://www.gnu.org/licenses/>.
#

from c_elementary import Object, Window, Background, Icon, Box, Button, Web, \
    Scroller, Label, Frame, Flip, Table, Clock, Layout, Hover, Entry, Bubble, \
    Photo, Hoversel, Toolbar, ToolbarItem, List, ListItem, Slider, Radio, \
    Check, Naviframe, NaviframeItem, InnerWindow, Image, Spinner, \
    Fileselector, FileselectorEntry, FileselectorButton, Notify, Separator, \
    Progressbar, Menu, MenuItem, MenuItemSeparator, Panel, Genlist, \
    GenlistItem, GenlistItemClass, WidgetItem, Gengrid, GengridItem, \
    GengridItemClass, init, shutdown, run, exit, scale_get, scale_set, \
    config_finger_size_get, config_finger_size_set, coords_finger_size_adjust, \
    theme_overlay_add, theme_extension_add, policy_set, policy_get, \
    tooltip_delay_set, tooltip_delay_get, cursor_engine_only_set, \
    cursor_engine_only_get, focus_highlight_enabled_get, \
    focus_highlight_enabled_set, focus_highlight_animate_get, \
    focus_highlight_animate_set, preferred_engine_get, preferred_engine_set, \
    engine_get, engine_set

ELM_BG_OPTION_CENTER = 0
ELM_BG_OPTION_SCALE = 1
ELM_BG_OPTION_STRETCH = 2
ELM_BG_OPTION_TILE = 3
ELM_BG_OPTION_LAST = 4

ELM_BUBBLE_POS_TOP_LEFT = 0
ELM_BUBBLE_POS_TOP_RIGHT = 1
ELM_BUBBLE_POS_BOTTOM_LEFT = 2
ELM_BUBBLE_POS_BOTTOM_RIGHT = 3

ELM_CLOCK_EDIT_DEFAULT = 0
ELM_CLOCK_EDIT_HOUR_DECIMAL = 1 << 0
ELM_CLOCK_EDIT_HOUR_UNIT = 1 << 1
ELM_CLOCK_EDIT_MIN_DECIMAL = 1 << 2
ELM_CLOCK_EDIT_MIN_UNIT = 1 << 3
ELM_CLOCK_EDIT_SEC_DECIMAL = 1 << 4
ELM_CLOCK_EDIT_SEC_UNIT = 1 << 5
ELM_CLOCK_EDIT_ALL = (1 << 6) - 1

ELM_CNP_MODE_MARKUP = 0
ELM_CNP_MODE_NO_IMAGE = 1
ELM_CNP_MODE_PLAINTEXT = 2

ELM_FILESELECTOR_LIST = 0
ELM_FILESELECTOR_GRID = 1

ELM_FLIP_DIRECTION_UP = 0
ELM_FLIP_DIRECTION_DOWN = 1
ELM_FLIP_DIRECTION_LEFT = 2
ELM_FLIP_DIRECTION_RIGHT = 3

ELM_FLIP_INTERACTION_NONE = 0
ELM_FLIP_INTERACTION_ROTATE = 1
ELM_FLIP_INTERACTION_CUBE = 2
ELM_FLIP_INTERACTION_PAGE = 3

ELM_FLIP_ROTATE_Y_CENTER_AXIS = 0
ELM_FLIP_ROTATE_X_CENTER_AXIS = 1
ELM_FLIP_ROTATE_XZ_CENTER_AXIS = 2
ELM_FLIP_ROTATE_YZ_CENTER_AXIS = 3
ELM_FLIP_CUBE_LEFT = 4
ELM_FLIP_CUBE_RIGHT = 5
ELM_FLIP_CUBE_UP = 6
ELM_FLIP_CUBE_DOWN = 7
ELM_FLIP_PAGE_LEFT = 8
ELM_FLIP_PAGE_RIGHT = 9
ELM_FLIP_PAGE_UP = 10
ELM_FLIP_PAGE_DOWN = 11

ELM_GENLIST_ITEM_NONE = 0
ELM_GENLIST_ITEM_TREE = 1
ELM_GENLIST_ITEM_GROUP = 2
ELM_GENLIST_ITEM_MAX = 3

ELM_GENLIST_ITEM_FIELD_ALL = 0
ELM_GENLIST_ITEM_FIELD_TEXT = 1
ELM_GENLIST_ITEM_FIELD_CONTENT = 2
ELM_GENLIST_ITEM_FIELD_STATE = 3

ELM_HOVER_AXIS_NONE = 0
ELM_HOVER_AXIS_HORIZONTAL = 1
ELM_HOVER_AXIS_VERTICAL = 2
ELM_HOVER_AXIS_BOTH = 3

ELM_ICON_NONE = 0
ELM_ICON_FILE = 1
ELM_ICON_STANDARD = 2

ELM_ILLUME_COMMAND_FOCUS_BACK = 0
ELM_ILLUME_COMMAND_FOCUS_FORWARD = 1
ELM_ILLUME_COMMAND_FOCUS_HOME = 2
ELM_ILLUME_COMMAND_CLOSE = 3

ELM_IMAGE_ORIENT_NONE = 0
ELM_IMAGE_ORIENT_0 = 0
ELM_IMAGE_ROTATE_90 = 1
ELM_IMAGE_ROTATE_180 = 2
ELM_IMAGE_ROTATE_270 = 3
ELM_IMAGE_FLIP_HORIZONTAL = 4
ELM_IMAGE_FLIP_VERTICAL = 5
ELM_IMAGE_FLIP_TRANSPOSE = 6
ELM_IMAGE_FLIP_TRANSVERSE = 7

ELM_INPUT_PANEL_LANG_AUTOMATIC = 0
ELM_INPUT_PANEL_LANG_ALPHABET = 1

ELM_INPUT_PANEL_LAYOUT_NORMAL = 0
ELM_INPUT_PANEL_LAYOUT_NUMBER = 1
ELM_INPUT_PANEL_LAYOUT_EMAIL = 2
ELM_INPUT_PANEL_LAYOUT_URL = 3
ELM_INPUT_PANEL_LAYOUT_PHONENUMBER = 4
ELM_INPUT_PANEL_LAYOUT_IP = 5
ELM_INPUT_PANEL_LAYOUT_MONTH = 6
ELM_INPUT_PANEL_LAYOUT_NUMBERONLY = 7
ELM_INPUT_PANEL_LAYOUT_INVALID = 8
ELM_INPUT_PANEL_LAYOUT_HEX = 9
ELM_INPUT_PANEL_LAYOUT_TERMINAL = 10
ELM_INPUT_PANEL_LAYOUT_PASSWORD = 11

ELM_INPUT_PANEL_RETURN_KEY_TYPE_DEFAULT = 0
ELM_INPUT_PANEL_RETURN_KEY_TYPE_DONE = 1
ELM_INPUT_PANEL_RETURN_KEY_TYPE_GO = 2
ELM_INPUT_PANEL_RETURN_KEY_TYPE_JOIN = 3
ELM_INPUT_PANEL_RETURN_KEY_TYPE_LOGIN = 4
ELM_INPUT_PANEL_RETURN_KEY_TYPE_NEXT = 5
ELM_INPUT_PANEL_RETURN_KEY_TYPE_SEARCH = 6
ELM_INPUT_PANEL_RETURN_KEY_TYPE_SEND = 7

ELM_LIST_COMPRESS = 0
ELM_LIST_SCROLL = 1
ELM_LIST_LIMIT = 2

ELM_NOTIFY_ORIENT_TOP = 0
ELM_NOTIFY_ORIENT_CENTER = 1
ELM_NOTIFY_ORIENT_BOTTOM = 2
ELM_NOTIFY_ORIENT_LEFT = 3
ELM_NOTIFY_ORIENT_RIGHT = 4
ELM_NOTIFY_ORIENT_TOP_LEFT = 5
ELM_NOTIFY_ORIENT_TOP_RIGHT = 6
ELM_NOTIFY_ORIENT_BOTTOM_LEFT = 7
ELM_NOTIFY_ORIENT_BOTTOM_RIGHT = 8

ELM_OBJECT_SELECT_MODE_DEFAULT = 0
ELM_OBJECT_SELECT_MODE_ALWAYS = 1
ELM_OBJECT_SELECT_MODE_NONE = 2
ELM_OBJECT_SELECT_MODE_DISPLAY_ONLY = 3
ELM_OBJECT_SELECT_MODE_MAX = 4

ELM_PANEL_ORIENT_TOP = 0
ELM_PANEL_ORIENT_BOTTOM = 1
ELM_PANEL_ORIENT_LEFT = 2
ELM_PANEL_ORIENT_RIGHT = 3

ELM_POLICY_QUIT = 0
ELM_POLICY_LAST = 1

ELM_POLICY_QUIT_NONE = 0
ELM_POLICY_QUIT_LAST_WINDOW_CLOSED = 1

ELM_SCROLLER_POLICY_AUTO = 0
ELM_SCROLLER_POLICY_ON = 1
ELM_SCROLLER_POLICY_OFF = 2

ELM_TEXT_FORMAT_PLAIN_UTF8 = 0
ELM_TEXT_FORMAT_MARKUP_UTF8 = 1

ELM_TOOLBAR_SHRINK_NONE = 0
ELM_TOOLBAR_SHRINK_HIDE = 1
ELM_TOOLBAR_SHRINK_SCROLL = 2
ELM_TOOLBAR_SHRINK_MENU = 3
ELM_TOOLBAR_SHRINK_EXPAND = 4
ELM_TOOLBAR_SHRINK_LAST = 5

ELM_WEB_ZOOM_MODE_MANUAL = 0
ELM_WEB_ZOOM_MODE_AUTO_FIT = 1
ELM_WEB_ZOOM_MODE_AUTO_FILL = 2

ELM_WIN_BASIC = 0
ELM_WIN_DIALOG_BASIC = 1
ELM_WIN_DESKTOP = 2
ELM_WIN_DOCK = 3
ELM_WIN_TOOLBAR = 4
ELM_WIN_MENU = 5
ELM_WIN_UTILITY = 6
ELM_WIN_SPLASH = 7
ELM_WIN_DROPDOWN_MENU = 8
ELM_WIN_POPUP_MENU = 9
ELM_WIN_TOOLTIP = 10
ELM_WIN_NOTIFICATION = 11
ELM_WIN_COMBO = 12
ELM_WIN_DND = 13
ELM_WIN_INLINED_IMAGE = 14
ELM_WIN_SOCKET_IMAGE = 15

ELM_WIN_INDICATOR_UNKNOWN = 0
ELM_WIN_INDICATOR_HIDE = 1
ELM_WIN_INDICATOR_SHOW = 2

ELM_WIN_INDICATOR_OPACITY_UNKNOWN = 0
ELM_WIN_INDICATOR_OPAQUE = 1
ELM_WIN_INDICATOR_TRANSLUCENT = 2
ELM_WIN_INDICATOR_TRANSPARENT = 3

ELM_WIN_KEYBOARD_UNKNOWN = 0
ELM_WIN_KEYBOARD_OFF = 1
ELM_WIN_KEYBOARD_ON = 2
ELM_WIN_KEYBOARD_ALPHA = 3
ELM_WIN_KEYBOARD_NUMERIC = 4
ELM_WIN_KEYBOARD_PIN = 5
ELM_WIN_KEYBOARD_PHONE_NUMBER = 6
ELM_WIN_KEYBOARD_HEX = 7
ELM_WIN_KEYBOARD_TERMINAL = 8
ELM_WIN_KEYBOARD_PASSWORD = 9
ELM_WIN_KEYBOARD_IP = 10
ELM_WIN_KEYBOARD_HOST = 11
ELM_WIN_KEYBOARD_FILE = 12
ELM_WIN_KEYBOARD_URL = 13
ELM_WIN_KEYBOARD_KEYPAD = 14
ELM_WIN_KEYBOARD_J2ME = 15

ELM_WRAP_NONE = 0
ELM_WRAP_CHAR = 1
ELM_WRAP_WORD = 2
ELM_WRAP_MIXED = 3


c_elementary.init()
