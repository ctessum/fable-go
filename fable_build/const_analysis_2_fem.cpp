#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub1(
  common& cmn,
  int& num)
{
  common_read read(cmn);
  read(5, "(i2)"), num;
}

void
sub2(
  common& cmn,
  int& num)
{
  sub1(cmn, num);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int num = fem::int0;
  sub2(cmn, num);
  write(6, "(i2)"), num * 2;
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
