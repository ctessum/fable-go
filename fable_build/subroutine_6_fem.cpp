#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  common& cmn,
  str_cref cstr,
  str_ref str)
{
  common_write write(cmn);
  write(6, "(3a)"), "!", str, "@";
  str = cstr;
  write(6, "(3a)"), "#", str, "$";
  str = cstr(2, 3);
  write(6, "(3a)"), "%", str, "^";
  str = cstr(3, 3);
  write(6, "(3a)"), "&", str, "*";
  str(2, 2) = cstr(1, 1);
  write(6, "(3a)"), "(", str, ")";
  str(1, 1) = cstr(2, 4);
  write(6, "(3a)"), "-", str, "+";
  str(1, 2) = cstr(3, 4);
}

void
sub2(
  common& cmn,
  str_ref str)
{
  common_write write(cmn);
  str = "xy";
  sub1(cmn, "aBcD", str);
  write(6, "(3a)"), "{", str, "}";
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  fem::str<2> str2 = fem::char0;
  sub2(cmn, str2);
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
