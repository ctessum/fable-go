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
  common_write write(cmn);
  int i = fem::int0;
  const int num1 = 2;
  const int num2 = num1 + 3;
  arr_1d<num2, int> nums(fem::fill0);
  FEM_DO_SAFE(i, 1, num2) {
    nums(i) = i * 12;
  }
  write(6, "(i2)"), nums;
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
