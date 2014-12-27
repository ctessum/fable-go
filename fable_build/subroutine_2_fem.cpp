#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  common& cmn,
  int& i)
{
  common_write write(cmn);
  i = 3;
  write(6, star), "sub1", i;
  i = 7;
}

void
sub2(
  common& cmn,
  int& i,
  int& j)
{
  common_write write(cmn);
  j = 4;
  write(6, star), "sub2", i, j;
  i = 8;
  j = 5;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  write(6, star), "first line in prog.";
  int i = fem::int0;
  sub1(cmn, i);
  write(6, star), "prog", i;
  int j = fem::int0;
  sub2(cmn, i, j);
  write(6, star), "prog", i, j;
  write(6, star), "last line in prog.";
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
