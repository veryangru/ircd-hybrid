AC_DEFUN([AX_ARG_ENABLE_DEBUGGING],[
  AC_ARG_ENABLE([debugging],[AS_HELP_STRING([--enable-debugging],[Enable debugging.])],[debugging="$enableval"],[debugging="no"])

  AS_IF([test "x$debugging" = "xyes"], [
    CFLAGS=$(echo "$CFLAGS" | sed -e 's/-O[[0-9s]]*//g' -e 's/-g[[0-9]]*//g')
    AX_APPEND_FLAG([-g -O0], [CFLAGS])
  ])
])
