
from __future__ import division
import sys

if (__name__ == "__main__") :
  import libtbx.auto_build.create_cctbx_bundle_for_installer
  libtbx.auto_build.create_cctbx_bundle_for_installer.run(sys.argv[1:])
