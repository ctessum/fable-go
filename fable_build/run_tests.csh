#! /bin/csh -f
set noglob
set verbose
libtbx.python "/home/chris/go/src/github.com/ctessum/fable-go/fable_sources/libtbx/run_tests.py" $*
libtbx.python "/home/chris/go/src/github.com/ctessum/fable-go/fable_sources/fable/run_tests.py" $*
