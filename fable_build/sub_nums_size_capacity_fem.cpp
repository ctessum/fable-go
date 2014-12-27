#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  arr_cref<int> nums,
  int const& nums_size,
  int const& nums_capacity)
{
  nums(dimension(nums_capacity));
  common_write write(cmn);
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, nums_size) {
    write(6, "(i3)"), nums(i);
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  arr_1d<3, int> nums(fem::fill0);
  nums(1) = 12;
  nums(2) = 34;
  sub(cmn, nums, 2, 3);
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
