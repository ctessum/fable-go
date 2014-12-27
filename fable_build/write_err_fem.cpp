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
  common_write write(cmn);
  int num = fem::int0;
  cmn.io.open(10, "fable_tmp_4d8a04e4")
    .status("unknown");
  num = 7;
  try {
    write(10, "(i1)"), num;
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  write(6, "(a)"), "OK";
  goto statement_20;
  statement_10:
  write(6, "(a)"), "write err";
  goto statement_20;
  statement_20:;
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
