#! /bin/sh
# LIBTBX_DISPATCHER DO NOT EDIT
#
# THIS IS AN AUTOMATICALLY GENERATED FILE.
# DO NOT EDIT! CHANGES WILL BE LOST.
# To customize this auto-generated script create
#
#   dispatcher_include*.sh
#
# files in "/home/chris/go/src/github.com/ctessum/fable-go/fable_build" and run
#
#   libtbx.refresh
#
# to re-generate the dispatchers (libtbx.refresh is a subset
# of the functionality of the libtbx/configure.py command).
#
# See also:
#   "/home/chris/go/src/github.com/ctessum/fable-go/fable_build/dispatcher_include_template.sh"
#

# ----------------------------------------------------------------------------
# The shellrealpath function resolves an absolute physical path of its
# first argument and stores it in a global shell variable RESULT.
# The function returns nonzero for unreadable or invalid symlinks
# and resets the RESULT to an empty string.

shellrealpath() {
    local ORGDIR="$PWD"
    local TARGET="$1"
    RESULT=""
    # This test fails for a symlink loop.  We can do without resolution
    # of symlinks that point to existing unreadable files.
    [ -r "$TARGET" ] || return $?
    # Check if the readlink command exists.
    type readlink >/dev/null || return $?
    while true; do
        cd "$(dirname "$TARGET")"
        TARGET="$(basename "$TARGET")"
        if [ -L "$TARGET" ]; then
            TARGET="$(readlink "$TARGET")"
            continue
        fi
        RESULT="$(pwd -P)/$TARGET"
        break
    done
    cd "$ORGDIR"
}
# ----------------------------------------------------------------------------

unset PYTHONHOME
LC_ALL=C
export LC_ALL
LIBTBX_BUILD="$(shellrealpath "$0" && cd "$(dirname "$RESULT")/.." && pwd)"
export LIBTBX_BUILD
LIBTBX_PYEXE_BASENAME="python2.7"
export LIBTBX_PYEXE_BASENAME
LIBTBX_DISPATCHER_NAME="libtbx.bash"
export LIBTBX_DISPATCHER_NAME
if [ -n "$PYTHONPATH" ]; then
  PYTHONPATH="$LIBTBX_BUILD/../fable_sources:$LIBTBX_BUILD/../fable_sources/libtbx/pythonpath:$LIBTBX_BUILD/lib:$PYTHONPATH"
  export PYTHONPATH
else
  PYTHONPATH="$LIBTBX_BUILD/../fable_sources:$LIBTBX_BUILD/../fable_sources/libtbx/pythonpath:$LIBTBX_BUILD/lib"
  export PYTHONPATH
fi
if [ -n "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH="$LIBTBX_BUILD/lib:/usr/lib:$LD_LIBRARY_PATH"
  export LD_LIBRARY_PATH
else
  LD_LIBRARY_PATH="$LIBTBX_BUILD/lib:/usr/lib"
  export LD_LIBRARY_PATH
fi
if [ -n "$PATH" ]; then
  PATH="$LIBTBX_BUILD/bin:$PATH"
  export PATH
else
  PATH="$LIBTBX_BUILD/bin"
  export PATH
fi
# ---------------------------------------------
# lines marked LIBTBX_PRE_DISPATCHER_INCLUDE_SH
# ---------------------------------------------
# ----------------------------------------------
# lines marked LIBTBX_POST_DISPATCHER_INCLUDE_SH
# ----------------------------------------------
LIBTBX_PYEXE="/usr/bin/$LIBTBX_PYEXE_BASENAME"
export LIBTBX_PYEXE
if [ -n "$LIBTBX__VALGRIND_FLAG__" ]; then
  exec $LIBTBX_VALGRIND "$LIBTBX_BUILD/../fable_sources/libtbx/command_line/bash.sh" "$@"
elif [ $# -eq 0 ]; then
  exec "$LIBTBX_BUILD/../fable_sources/libtbx/command_line/bash.sh"
else
  exec "$LIBTBX_BUILD/../fable_sources/libtbx/command_line/bash.sh" "$@"
fi
