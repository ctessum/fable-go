# THIS IS AN AUTOMATICALLY GENERATED FILE.
# DO NOT EDIT! CHANGES WILL BE LOST.
ocwd="`pwd`"
if [ -n "$LIBTBX_BUILD_RELOCATION_HINT" ]; then
  cd "$LIBTBX_BUILD_RELOCATION_HINT"
  LIBTBX_BUILD_RELOCATION_HINT=
  export LIBTBX_BUILD_RELOCATION_HINT
elif [ -n "$BASH_SOURCE" ]; then
  LIBTBX_BUILD=`dirname "$BASH_SOURCE[0]"`
  cd "$LIBTBX_BUILD"
else
  cd "/home/chris/go/src/github.com/ctessum/fable-go/fable_build"
fi
LIBTBX_BUILD=`pwd -P`
export LIBTBX_BUILD
LIBTBX_OPATH="$PATH"
export LIBTBX_OPATH
PATH="$LIBTBX_BUILD/bin:$PATH"
export PATH
cd "$ocwd"
ocwd=
alias libtbx.setpaths_all=". \"$LIBTBX_BUILD/setpaths_all.sh\""
alias libtbx.unsetpaths=". \"$LIBTBX_BUILD/unsetpaths.sh\""
LIBTBX_DIST="$LIBTBX_BUILD/../fable_sources/libtbx"
export LIBTBX_DIST
FABLE_DIST="$LIBTBX_BUILD/../fable_sources/fable"
export FABLE_DIST
if [ -n "$LIBTBX_OPATH" ]; then
  LIBTBX_TMPVAL="$LIBTBX_OPATH"
else
  LIBTBX_TMPVAL=
fi
export LIBTBX_TMPVAL
PATH=`libtbx.path_utility prepend LIBTBX_TMPVAL "$LIBTBX_BUILD/bin" < /dev/null`
export PATH
if [ "$PATH" = "L_I_B_T_B_X_E_M_P_T_Y" ]; then unset PATH; fi
LIBTBX_TMPVAL=
LIBTBX_OPATH=
