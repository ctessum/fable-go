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
  int ios = fem::int0;
  int num = fem::int0;
  arr_1d<2, int> nums(fem::fill0);
  int i = fem::int0;
  try {
    read(11, fem::unformatted).rec(21).iostat(ios), num;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  try {
    read(12, fem::unformatted).iostat(ios), num;
  }
  catch (fem::read_end const&) {
    goto statement_20;
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  try {
    read_loop rloop(cmn, 13, fem::unformatted);
    rloop.rec(23).iostat(ios);
    FEM_DO_SAFE(i, 1, 2) {
      rloop, nums(i);
    }
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  try {
    read_loop rloop(cmn, 14, fem::unformatted);
    rloop.iostat(ios);
    FEM_DO_SAFE(i, 1, 2) {
      rloop, nums(i);
    }
  }
  catch (fem::read_end const&) {
    goto statement_40;
  }
  catch (fem::io_err const&) {
    goto statement_30;
  }
  statement_10:
  statement_20:
  statement_30:
  statement_40:;
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
