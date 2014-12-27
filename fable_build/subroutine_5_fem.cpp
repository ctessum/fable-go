#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  str_cref str)
{
  common_write write(cmn);
  if (str(1, 1) == " ") {
    write(6, "(a)"), "str starts with a blank";
  }
  else {
    write(6, "(a)"), "str does not start with a blank";
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  fem::str<2> str2 = " ";
  sub(cmn, str2);
  str2 = "x";
  sub(cmn, str2);
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
