MAINTAINERCLEANFILES = Makefile.in
MODULE = cpufreq

# data files for the module
filesdir = $(libdir)/enlightenment/modules/$(MODULE)
files_DATA = \
e-module-$(MODULE).edj module.desktop

EXTRA_DIST = $(files_DATA)

# the module .so file
INCLUDES               = -I. \
                         -I$(top_srcdir) \
                         -I$(top_srcdir)/src/modules/$(MODULE) \
                         -I$(top_srcdir)/src/bin \
                         -I$(top_builddir)/src/bin \
                         -I$(top_srcdir)/src/modules \
                         @e_cflags@
pkgdir                 = $(libdir)/enlightenment/modules/$(MODULE)/$(MODULE_ARCH)
pkg_LTLIBRARIES        = module.la
module_la_SOURCES      = e_mod_main.c \
                         e_mod_main.h
module_la_LIBADD       = @e_libs@ @dlopen_libs@
module_la_LDFLAGS      = -module -avoid-version

freqsetdir = $(pkgdir)

setuid_root_mode = a=rx,u+xs
setuid_root_user = root
install-data-hook:
	@chown $(setuid_root_user) $(DESTDIR)$(freqsetdir)/freqset$(EXEEXT) || true
	@chmod $(setuid_root_mode) $(DESTDIR)$(freqsetdir)/freqset$(EXEEXT) || true

freqset_PROGRAMS       = freqset
freqset_SOURCES        = freqset.c
freqset_CFLAGS         = @e_cflags@ @SUID_CFLAGS@
freqset_LDFLAGS        = @SUID_LDFLAGS@

uninstall:
	rm -rf $(DESTDIR)$(libdir)/enlightenment/modules/$(MODULE)
