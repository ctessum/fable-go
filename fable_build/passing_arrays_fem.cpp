#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  int const& num,
  arr_cref<int> nums1,
  arr_cref<int, 2> nums2)
{
  nums1(dimension(6));
  nums2(dimension(2, 3));
  common_write write(cmn);
  write(6, "(i1)"), num;
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 6) {
    write(6, "(i2)"), nums1(i);
  }
  int j = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    FEM_DO_SAFE(j, 1, 3) {
      write(6, "(i2)"), nums2(i, j);
    }
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  arr_1d<6, int> nums(fem::fill0);
  nums(1) = 3;
  int i = fem::int0;
  FEM_DO_SAFE(i, 2, 6) {
    nums(i) = nums(i - 1) + i;
  }
  sub(cmn, nums, nums, nums);
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
