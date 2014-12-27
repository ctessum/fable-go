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
  //C
  fem::str<2> buf = fem::char0;
  write(buf, "(a2)"), "12";
  //C
  fem::str<2> buf3 = fem::char0;
  read(buf, "(a3)"), buf3;
  write(6, star), "\"", buf3, "\"";
  //C
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
