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
  int num1 = fem::int0;
  int num2 = fem::int0;
  cmn.io.open(10, "fable_tmp_95c8b3ac")
    .status("unknown");
  write(10, "(i1)"), 5;
  cmn.io.close(10);
  cmn.io.open(10, "fable_tmp_95c8b3ac");
  try {
    read(10, "(i1)"), num1, num2;
  }
  catch (fem::read_end const&) {
    goto statement_10;
  }
  write(6, "(a)"), "FAILURE: end=10 expected";
  goto statement_20;
  statement_10:
  write(6, "(a)"), "OK";
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
