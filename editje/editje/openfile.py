#
# Copyright (C) 2009 Samsung Electronics.
#
# This file is part of Editje.
#
# Editje is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as
# published by the Free Software Foundation, either version 3 of the
# License, or (at your option) any later version.
#
# Editje is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with Editje.  If not, see
# <http://www.gnu.org/licenses/>.

import os
import shutil
import string

import evas
import edje
import elementary

from editje import Editje
from fileselector import FileSelector
from popups import NewFilePopUp
from popups import ConfirmPopUp
from swapfile import SwapFile
import sysconfig

class OpenFile(elementary.Window):
    def __init__(self, theme="default"):

        self.theme = sysconfig.theme_file_get(theme)

        elementary.Window.__init__(self, "openfile",
                                   elementary.ELM_WIN_BASIC)
        self.title_set("Open Edje")
        self.autodel_set(True)

        self._notification = None
        self._swapfile = SwapFile()

        bg = elementary.Background(self)
        self.resize_object_add(bg)
        bg.size_hint_weight_set(evas.EVAS_HINT_EXPAND,
                                evas.EVAS_HINT_EXPAND)
        bg.show()

        self._pager = elementary.Pager(self)
        self._pager.size_hint_weight_set(evas.EVAS_HINT_EXPAND,
                                         evas.EVAS_HINT_EXPAND)
        self._pager.size_hint_align_set(evas.EVAS_HINT_FILL,
                                        evas.EVAS_HINT_FILL)
        self.resize_object_add(self._pager)
        self._pager.show()

        self._fs = FileSelector(self)
        self._fs.filter = self._filter
        self._fs.action_add("New", self._new)
        self._fs.action_add("Cancel", self._cancel)
        self._fs.action_add("Ok", self._open)
        self._fs.show()
        self._pager.content_push(self._fs)

        self.resize(600, 480)

    def _filter(self, file):
        return file.endswith(".edc") or file.endswith(".edj")

    def _path_set(self, value):
        self._fs.path = value

    path = property(fset=_path_set)

    def _open(self, bt):
        if not self._fs.file:
            self._notify("Select file")
            return

        if not self._filter(self._fs.file):
            self._notify("Invalid file")
            return

        self._swapfile.file = self._fs.file
        self._swapfile.open()

        editje = Editje(self._swapfile)
        editje.show()
        self._cancel(bt)

    def list_files_on_diretory(self):
        path = os.getenv("PWD")
        list = os.listdir(path)
        list.sort(key=str.lower)
        files = []
        for file in list:
            if not file.startswith("."):
                full = os.path.join(path, file)
                if os.path.isfile(full):
                    if file.endswith(".edj"):
                        files.append(file)
        return files


    def _new(self, bt):
        self._swapfile.file = ""
        self._swapfile.new = True
        self._swapfile.open()

        editje = Editje(self._swapfile)
        editje.show()
        self._cancel(bt)
#        self._templates_load()

    def _cancel(self, bt):
        self.hide()
        self.delete()

    def _notify(self, message):
        if self._notification:
            self._notification.hide()
            self._notification.delete()
            self._notification = None
        self._notification = elementary.Notify(self)
        self._notification.timeout_set(2)
        self._notification.orient_set(elementary.ELM_NOTIFY_ORIENT_BOTTOM_RIGHT)

        bx = elementary.Box(self)
        bx.size_hint_weight_set(evas.EVAS_HINT_EXPAND,
                                evas.EVAS_HINT_EXPAND)
        bx.horizontal_set(True)
        self._notification.content_set(bx)
        bx.show()

        lb = elementary.Label(self)
        lb.label_set(message)
        bx.pack_end(lb)
        lb.show()

        self._notification.show()



    def _templates_load(self):
        tb = elementary.Table(self)
        tb.size_hint_weight_set(evas.EVAS_HINT_EXPAND,
                                evas.EVAS_HINT_EXPAND)
        tb.size_hint_align_set(evas.EVAS_HINT_FILL,
                               evas.EVAS_HINT_FILL)
        tb.show()
        self._pager.content_push(tb)


    def _templates_cancel(self):
        self._pager.content_pop()

    def _templates_ok(self):
        pass
