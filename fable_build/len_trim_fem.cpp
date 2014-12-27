#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_unnamed(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  fem::str<5> s = "Abc";
  write(6, "(2a)"), s, "P";
  write(6, "(2a)"), s(1, 4), "Q";
  write(6, "(2a)"), s(1, 3), "R";
  write(6, "(2a)"), s(1, 2), "S";
  write(6, "(2a)"), s(1, fem::len_trim(s)), "T";
  write(6, "(2a)"), s(1, fem::len_trim(s(1, 4))), "U";
  write(6, "(2a)"), s(1, fem::len_trim(s(1, 3))), "V";
  write(6, "(2a)"), s(1, fem::len_trim(s(1, 2))), "W";
  s = " ";
  write(6, "(2a)"), s(1, fem::len_trim(s)), "X";
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_unnamed);
}
