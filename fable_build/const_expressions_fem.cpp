#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  int const& n1,
  int const& n2,
  arr_ref<int, 2> nums)
{
  nums(dimension(n1, star));
  int i = fem::int0;
  int j = fem::int0;
  FEM_DO_SAFE(i, 1, n1) {
    FEM_DO_SAFE(j, 1, n2) {
      nums(i, j) = i * 10 + j;
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
  const int n1 = 2;
  write(6, star), n1;
  const int n2 = n1 * 4;
  write(6, star), n2;
  const int n3 = (n2 + n1) * 5;
  write(6, star), n3;
  const int n4 = fem::pow3((n3 - n2));
  write(6, star), n4;
  const int n5 = n2 * (n4 + 1) / 2;
  write(6, star), n5;
  arr_2d<n2 - 5, n3 - 48, int> nums1(fem::fill0);
  sub(3, 2, nums1);
  write(6, star), nums1;
  arr_2d<1, 3, int> nums2(dim1(n1, 2).dim2(-1, 1), fem::fill0);
  sub(1, 3, nums2);
  write(6, star), nums2;
  const int n6 = fem::pow2(n1);
  arr<int> nums3(dimension(n6), fem::fill0);
  sub(n6, 1, nums3);
  write(6, star), nums3;
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
