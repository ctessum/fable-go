#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  common& cmn,
  str_cref str)
{
  common_write write(cmn);
  write(6, "(i1)"), fem::len(str);
  write(6, "(a)"), str;
}

void
sub2(
  common& cmn,
  str_cref small)
{
  common_write write(cmn);
  fem::str<2> big = small;
  write(6, "(3a)"), "[", big, "]";
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  fem::str<2> str2 = "Pq";
  fem::str<3> str3 = "rSt";
  sub1(cmn, str2);
  sub1(cmn, str3);
  sub2(cmn, "a");
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
