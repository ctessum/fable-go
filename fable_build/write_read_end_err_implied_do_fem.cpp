#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_read read(cmn);
  common_write write(cmn);
  int i = fem::int0;
  arr_1d<2, int> nums(fem::fill0);
  cmn.io.open(10, "fable_tmp_184f95d6")
    .status("unknown");
  try {
    write_loop wloop(cmn, 10, "(2i3)");
    FEM_DO_SAFE(i, 8, 9) {
      wloop, i + 23;
    }
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  statement_10:
  cmn.io.close(10);
  cmn.io.open(10, "fable_tmp_184f95d6")
    .status("old");
  try {
    read_loop rloop(cmn, 10, "(2i3)");
    FEM_DO_SAFE(i, 1, 2) {
      rloop, nums(i);
    }
  }
  catch (fem::read_end const&) {
    goto statement_20;
  }
  catch (fem::io_err const&) {
    goto statement_30;
  }
  statement_20:
  statement_30:
  cmn.io.close(10);
  if (nums(1) != 31 || nums(2) != 32) {
    write(6, "(a)"), "FAILURE";
  }
  else {
    write(6, "(a)"), "OK";
  }
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_prog);
}
