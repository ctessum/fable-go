#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
show(
  common& cmn,
  str_cref str)
{
  common_write write(cmn);
  write(6, "(a)"), str;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  fem::str<3> a = "x\"z";
  fem::str<4> b = "i\\'l";
  fem::str<7> c = a + b;
  write(6, "(a)"), c;
  fem::str<4> d = b + a;
  write(6, "(a)"), d;
  d = a + b;
  write(6, "(a)"), d;
  a = b + c;
  write(6, "(a)"), a;
  show(cmn, a + b);
  show(cmn, b + c);
  a = "xyz";
  c = "abcdefg";
  c = a(1, 2) + c(2, 6);
  write(6, "(a)"), c;
  c = "hijklmn";
  c = a(1, 2) + c(2, 5);
  write(6, "(a)"), c;
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
