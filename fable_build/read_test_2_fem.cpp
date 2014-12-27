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
  fem::str<2> buf = fem::char0;
  fem::integer_star_4 k = fem::zero<fem::integer_star_4>();
  fem::integer_star_4 l = fem::zero<fem::integer_star_4>();
  //C
  write(buf, "(a2)"), "12";
  //C
  try {
    read(buf, "(i3,i4)"), k, l;
  }
  catch (fem::read_end const&) {
    goto statement_10;
  }
  write(6, star), k, l;
  write(6, star), "OK";
  goto statement_20;
  //C
  statement_10:
  write(6, star), "ERROR: in end";
  //C
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
