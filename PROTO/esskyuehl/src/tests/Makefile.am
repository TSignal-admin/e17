MAINTAINERCLEANFILES = Makefile.in

AM_CFLAGS = \
  @MYSQL_CFLAGS@ \
  @POSTGRESQL_CFLAGS@ \
  @EFL_CFLAGS@ \
  -I@top_builddir@ \
  -I@top_srcdir@/src/lib

LDADD = \
  @MYSQL_LIBS@ \
  @POSTGRESQL_LIBS@ \
  @EFL_LIBS@ \
  @top_builddir@/src/lib/libesskyuehl.la

check_PROGRAMS = basic_query basic_pool


if SQLITE
check_PROGRAMS += test_sqlite
endif

basic_query_SOURCES = basic_query.c
basic_pool_SOURCES = basic_pool.c
test_sqlite_SOURCES = test_sqlite.c
