MAINTAINERCLEANFILES = Makefile.in

SUBDIRS = images

EDJE_CC = @edje_cc@
EDJE_FLAGS = -v -fd $(top_srcdir)/data/themes -id $(top_srcdir)/data/themes/images

filesdir = $(datadir)/$(PACKAGE)
files_DATA = default.edj efl_devels_theme.edj muted_theme.edj pocket.edj

images =

fonts =

EXTRA_DIST = default.edc efl_devels_theme.edc muted_theme.edc pocket.edc $(images) $(fonts)

default.edj: Makefile $(images) $(fonts) default.edc
	$(EDJE_CC) $(EDJE_FLAGS) \
	$(top_srcdir)/data/themes/default.edc \
	$(top_builddir)/data/themes/default.edj

efl_devels_theme.edj: Makefile $(images) $(fonts) efl_devels_theme.edc
	$(EDJE_CC) $(EDJE_FLAGS) \
	$(top_srcdir)/data/themes/efl_devels_theme.edc \
	$(top_builddir)/data/themes/efl_devels_theme.edj

muted_theme.edj: Makefile $(images) $(fonts) muted_theme.edc
	$(EDJE_CC) $(EDJE_FLAGS) \
	$(top_srcdir)/data/themes/muted_theme.edc \
	$(top_builddir)/data/themes/muted_theme.edj

pocket.edj: Makefile $(images) $(fonts) pocket.edc
	$(EDJE_CC) $(EDJE_FLAGS) \
	$(top_srcdir)/data/themes/pocket.edc \
	$(top_builddir)/data/themes/pocket.edj

clean-local:
	rm -f default.edj efl_devels_theme.edj muted_theme.edj pocket.edj
