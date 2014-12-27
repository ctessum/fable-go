#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
exercise_file_fmt(
  common& cmn)
{
  common_read read(cmn);
  common_write write(cmn);
  int num = fem::int0;
  cmn.io.open(10, "fable_tmp_acb2b385")
    .status("unknown");
  write(10, "(a)"), "U";
  cmn.io.close(10);
  cmn.io.open(10, "fable_tmp_acb2b385");
  try {
    read(10, "(i1)"), num;
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  write(6, "(a)"), "FAILURE exercise_file_fmt";
  goto statement_20;
  statement_10:
  write(6, "(a)"), "success exercise_file_fmt";
  statement_20:;
}

void
exercise_internal_star(
  common& cmn)
{
  common_read read(cmn);
  common_write write(cmn);
  fem::str<5> str = fem::char0;
  float val1 = fem::float0;
  float val2 = fem::float0;
  str = "20. *";
  try {
    read(str, star), val1, val2;
  }
  catch (fem::io_err const&) {
    goto statement_10;
  }
  write(6, "(a)"), "FAILURE exercise_internal_star";
  goto statement_20;
  statement_10:
  write(6, "(a)"), "success exercise_internal_star";
  statement_20:;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  exercise_file_fmt(cmn);
  exercise_internal_star(cmn);
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
