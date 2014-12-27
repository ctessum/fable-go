#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  common& cmn)
{
  common_write write(cmn);
  write(6, star), "output from sub1.";
}

void
sub2(
  common& cmn)
{
  common_write write(cmn);
  write(6, star), "output from sub2.";
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  write(6, star), "first line in prog.";
  sub1(cmn);
  sub1(cmn);
  sub2(cmn);
  sub2(cmn);
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
