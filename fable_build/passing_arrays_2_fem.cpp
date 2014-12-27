#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  arr_ref<int> nums1,
  arr_ref<int, 2> nums2)
{
  nums1(dim1(0, 1));
  nums2(dim1(2, 4).dim2(-1, 2));
  nums1(0) = 23;
  nums1(1) = 45;
  nums2(4, -1) = 67;
  int i = fem::int0;
  int j = fem::int0;
  FEM_DO_SAFE(i, 2, 4) {
    FEM_DO_SAFE(j, 0, 2) {
      nums2(i, j) = i * 10 + j;
    }
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  arr_1d<12, int> nums(fem::fill0);
  sub(nums, nums);
  int i = fem::int0;
  {
    write_loop wloop(cmn, 6, "(6i3)");
    FEM_DO_SAFE(i, 1, 12) {
      wloop, nums(i);
    }
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
