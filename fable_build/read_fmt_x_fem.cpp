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
  fem::str<2> buf2 = fem::char0;
  fem::str<3> buf3 = fem::char0;
  statement_10:
  read(5, "(a2,3x,a3)"), buf2, buf3;
  write(6, "(5a)"), "[", buf2, "][", buf3, "]";
  if (buf2 != " ") {
    goto statement_10;
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
