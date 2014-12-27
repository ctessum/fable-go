#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  int const& num_max)
{
  common_write write(cmn);
  int num = fem::int0;
  if (num_max > 41) {
    num = 41;
  }
  else {
    num = num_max;
  }
  write(6, "(i2)"), num;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  int i = fem::int0;
  FEM_DO_SAFE(i, 39, 42) {
    sub(cmn, i);
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
