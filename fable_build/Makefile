# DO NOT EDIT THIS FILE!
# This file will be overwritten by the next libtbx/configure.py,
# libtbx.configure, or libtbx.refresh.

default:
	./bin/libtbx.scons -j "`./bin/libtbx.show_number_of_processors`"

nostop:
	./bin/libtbx.scons -j "`./bin/libtbx.show_number_of_processors`" -k

bp:
	./bin/libtbx.scons -j "`./bin/libtbx.show_number_of_processors`" -k boost_python_tests=1

reconf:
	./bin/libtbx.configure .
	./bin/libtbx.scons -j "`./bin/libtbx.show_number_of_processors`"

redo:
	./bin/libtbx.configure . --clear-scons-memory
	./bin/libtbx.scons -j "`./bin/libtbx.show_number_of_processors`"

clean:
	./bin/libtbx.scons -j "`./bin/libtbx.show_number_of_processors`" -c

# example
selfx:
	rm -rf selfx_tmp
	mkdir selfx_tmp
	cd selfx_tmp ; \
		libtbx.start_binary_bundle example boost ; \
		libtbx.bundle_as_selfx example build_id ; \
		mv example_build_id.selfx .. ; \
		cd .. ; \
		ls -l example_build_id.selfx
