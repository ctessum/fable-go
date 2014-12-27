#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_test(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_read read(cmn);
  common_write write(cmn);
  fem::str<1> buf = fem::char0;
  fem::integer_star_4 ios = fem::zero<fem::integer_star_4>();
  fem::str<3> buf33 = fem::char0;
  write(buf, "(a1,$)"), "7";
  try {
    read(buf, "(a3)").iostat(ios), buf33;
  }
  catch (fem::read_end const&) {
    goto statement_200;
  }
  catch (fem::io_err const&) {
    goto statement_100;
  }
  write(6, star), "buf33 from buf = ", "\"", buf33, "\"", " ios =", ios;
  goto statement_999;
  statement_100:
  write(6, star), "ERROR: err";
  goto statement_999;
  statement_200:
  write(6, star), "ERROR: end";
  goto statement_999;
  statement_999:;
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_test);
}
