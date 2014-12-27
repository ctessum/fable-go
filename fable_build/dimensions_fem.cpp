#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
check(
  arr_cref<int> nums,
  int const& sz)
{
  nums(dimension(star));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, sz) {
    if (nums(i) != i) {
      FEM_STOP("ERROR");
    }
  }
}

void
sub1(
  arr_ref<int> nums,
  int const& sz,
  arr_cref<int> nums_1,
  arr_cref<int> nums_0,
  arr_cref<int> nums_r)
{
  nums(dimension(sz));
  nums_1(dimension(star));
  nums_0(dim1(0, star));
  nums_r(dim1(-1, sz - 2));
  int ix = 1;
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, sz) {
    nums(i) = ix;
    ix++;
  }
  if (nums_1(13) != 13) {
    FEM_STOP("ERROR");
  }
  if (nums_0(13) != 14) {
    FEM_STOP("ERROR");
  }
  if (nums_r(13) != 15) {
    FEM_STOP("ERROR");
  }
}

void
sub2(
  arr_ref<int, 2> nums,
  int const& sz1,
  int const& sz2,
  arr_cref<int, 2> nums_1,
  arr_cref<int, 2> nums_0,
  arr_cref<int, 2> nums_r)
{
  nums(dimension(sz1, sz2));
  nums_1(dimension(sz1, star));
  nums_0(dim1(0, sz1 - 1).dim2(0, star));
  nums_r(dim1(-1, sz1 - 2).dim2(0, sz2 - 1));
  int ix = 1;
  int j = fem::int0;
  int i = fem::int0;
  FEM_DO_SAFE(j, 1, sz2) {
    FEM_DO_SAFE(i, 1, sz1) {
      nums(i, j) = ix;
      ix++;
    }
  }
  if (sz1 < 5) {
    FEM_STOP("ERROR");
  }
  if (sz2 < 6) {
    FEM_STOP("ERROR");
  }
  if (nums_1(3, 5) != 23) {
    FEM_STOP("ERROR");
  }
  if (nums_0(3, 5) != 29) {
    FEM_STOP("ERROR");
  }
  if (nums_r(3, 5) != 30) {
    FEM_STOP("ERROR");
  }
}

void
sub3(
  arr_ref<int, 3> nums,
  int const& sz1,
  int const& sz2,
  int const& sz3,
  arr_cref<int, 3> nums_1,
  arr_cref<int, 3> nums_0,
  arr_cref<int, 3> nums_r)
{
  nums(dimension(sz1, sz2, sz3));
  nums_1(dimension(sz1, sz2, star));
  nums_0(dim1(0, sz1 - 1).dim2(0, sz2 - 1).dim3(0, star));
  nums_r(dim1(-1, sz1 - 2).dim2(0, sz2 - 1).dim3(-1, sz3 - 2));
  int ix = 1;
  int k = fem::int0;
  int j = fem::int0;
  int i = fem::int0;
  FEM_DO_SAFE(k, 1, sz3) {
    FEM_DO_SAFE(j, 1, sz2) {
      FEM_DO_SAFE(i, 1, sz1) {
        nums(i, j, k) = ix;
        ix++;
      }
    }
  }
  if (sz1 < 4) {
    FEM_STOP("ERROR");
  }
  if (sz2 < 6) {
    FEM_STOP("ERROR");
  }
  if (sz3 < 5) {
    FEM_STOP("ERROR");
  }
  if (nums_1(2, 5, 3) != 142) {
    FEM_STOP("ERROR");
  }
  if (nums_0(2, 5, 3) != 206) {
    FEM_STOP("ERROR");
  }
  if (nums_r(2, 5, 3) != 263) {
    FEM_STOP("ERROR");
  }
}

void
sub4(
  arr_ref<int, 4> nums,
  int const& sz1,
  int const& sz2,
  int const& sz3,
  int const& sz4,
  arr_cref<int, 4> nums_1,
  arr_cref<int, 4> nums_0,
  arr_cref<int, 4> nums_r)
{
  nums(dimension(sz1, sz2, sz3, sz4));
  nums_1(dimension(sz1, sz2, sz3, star));
  nums_0(dim1(0, sz1 - 1).dim2(0, sz2 - 1).dim3(0, sz3 - 1).dim4(0, star));
  nums_r(dim1(-1, sz1 - 2).dim2(0, sz2 - 1).dim3(0, sz3 - 1).dim4(-1, sz4 - 2));
  int ix = 1;
  int l = fem::int0;
  int k = fem::int0;
  int j = fem::int0;
  int i = fem::int0;
  FEM_DO_SAFE(l, 1, sz4) {
    FEM_DO_SAFE(k, 1, sz3) {
      FEM_DO_SAFE(j, 1, sz2) {
        FEM_DO_SAFE(i, 1, sz1) {
          nums(i, j, k, l) = ix;
          ix++;
        }
      }
    }
  }
  if (sz1 < 6) {
    FEM_STOP("ERROR");
  }
  if (sz2 < 3) {
    FEM_STOP("ERROR");
  }
  if (sz3 < 4) {
    FEM_STOP("ERROR");
  }
  if (sz4 < 3) {
    FEM_STOP("ERROR");
  }
  if (nums_1(4, 2, 3, 1) != 53) {
    FEM_STOP("ERROR");
  }
  if (nums_0(4, 2, 3, 1) != 187) {
    FEM_STOP("ERROR");
  }
  if (nums_r(4, 2, 3, 1) != 293) {
    FEM_STOP("ERROR");
  }
}

void
sub5(
  arr_ref<int, 5> nums,
  int const& sz1,
  int const& sz2,
  int const& sz3,
  int const& sz4,
  int const& sz5,
  arr_cref<int, 5> nums_1,
  arr_cref<int, 5> nums_0,
  arr_cref<int, 5> nums_r)
{
  nums(dimension(sz1, sz2, sz3, sz4, sz5));
  nums_1(dimension(sz1, sz2, sz3, sz4, star));
  nums_0(dim1(0, sz1 - 1).dim2(0, sz2 - 1).dim3(0, sz3 - 1).dim4(0,
    sz4 - 1).dim5(0, star));
  nums_r(dim1(-1, sz1 - 2).dim2(0, sz2 - 1).dim3(0, sz3 - 1).dim4(-1,
    sz4 - 2).dim5(0, sz5 - 1));
  int ix = 1;
  int m = fem::int0;
  int l = fem::int0;
  int k = fem::int0;
  int j = fem::int0;
  int i = fem::int0;
  FEM_DO_SAFE(m, 1, sz5) {
    FEM_DO_SAFE(l, 1, sz4) {
      FEM_DO_SAFE(k, 1, sz3) {
        FEM_DO_SAFE(j, 1, sz2) {
          FEM_DO_SAFE(i, 1, sz1) {
            nums(i, j, k, l, m) = ix;
            ix++;
          }
        }
      }
    }
  }
  if (sz1 < 5) {
    FEM_STOP("ERROR");
  }
  if (sz2 < 3) {
    FEM_STOP("ERROR");
  }
  if (sz3 < 6) {
    FEM_STOP("ERROR");
  }
  if (sz4 < 3) {
    FEM_STOP("ERROR");
  }
  if (sz5 < 7) {
    FEM_STOP("ERROR");
  }
  if (nums_1(3, 2, 5, 1, 6) != 2188) {
    FEM_STOP("ERROR");
  }
  if (nums_0(3, 2, 5, 1, 6) != 2774) {
    FEM_STOP("ERROR");
  }
  if (nums_r(3, 2, 5, 1, 6) != 2915) {
    FEM_STOP("ERROR");
  }
}

void
sub6(
  arr_ref<int, 6> nums,
  int const& sz1,
  int const& sz2,
  int const& sz3,
  int const& sz4,
  int const& sz5,
  int const& sz6,
  arr_cref<int, 6> nums_1,
  arr_cref<int, 6> nums_0,
  arr_cref<int, 6> nums_r)
{
  nums(dimension(sz1, sz2, sz3, sz4, sz5, sz6));
  nums_1(dimension(sz1, sz2, sz3, sz4, sz5, star));
  nums_0(dim1(0, sz1 - 1).dim2(0, sz2 - 1).dim3(0, sz3 - 1).dim4(0,
    sz4 - 1).dim5(0, sz5 - 1).dim6(0, star));
  nums_r(dim1(-1, sz1 - 2).dim2(0, sz2 - 1).dim3(-1, sz3 - 2).dim4(0,
    sz4 - 1).dim5(-1, sz5 - 2).dim6(0, sz6 - 1));
  int ix = 1;
  int n = fem::int0;
  int m = fem::int0;
  int l = fem::int0;
  int k = fem::int0;
  int j = fem::int0;
  int i = fem::int0;
  FEM_DO_SAFE(n, 1, sz6) {
    FEM_DO_SAFE(m, 1, sz5) {
      FEM_DO_SAFE(l, 1, sz4) {
        FEM_DO_SAFE(k, 1, sz3) {
          FEM_DO_SAFE(j, 1, sz2) {
            FEM_DO_SAFE(i, 1, sz1) {
              nums(i, j, k, l, m, n) = ix;
              ix++;
            }
          }
        }
      }
    }
  }
  if (sz1 < 7) {
    FEM_STOP("ERROR");
  }
  if (sz2 < 5) {
    FEM_STOP("ERROR");
  }
  if (sz3 < 3) {
    FEM_STOP("ERROR");
  }
  if (sz4 < 7) {
    FEM_STOP("ERROR");
  }
  if (sz5 < 4) {
    FEM_STOP("ERROR");
  }
  if (sz6 < 4) {
    FEM_STOP("ERROR");
  }
  if (nums_1(5, 4, 1, 6, 2, 3) != 11837) {
    FEM_STOP("ERROR");
  }
  if (nums_0(5, 4, 1, 6, 2, 3) != 18086) {
    FEM_STOP("ERROR");
  }
  if (nums_r(5, 4, 1, 6, 2, 3) != 19143) {
    FEM_STOP("ERROR");
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  arr_1d<100, int> nums1(fem::fill0);
  sub1(nums1, 100, nums1, nums1, nums1);
  check(nums1, 100);
  arr_2d<5, 7, int> nums2(fem::fill0);
  sub2(nums2, 5, 7, nums2, nums2, nums2);
  check(nums2, 5 * 7);
  arr<int, 3> nums3(dimension(7, 8, 5), fem::fill0);
  sub3(nums3, 7, 8, 5, nums3, nums3, nums3);
  check(nums3, 7 * 8 * 5);
  arr<int, 4> nums4(dimension(7, 3, 5, 4), fem::fill0);
  sub4(nums4, 7, 3, 5, 4, nums4, nums4, nums4);
  check(nums4, 7 * 3 * 5 * 4);
  arr<int, 5> nums5(dimension(5, 4, 7, 3, 8), fem::fill0);
  sub5(nums5, 5, 4, 7, 3, 8, nums5, nums5, nums5);
  check(nums5, 5 * 4 * 7 * 3 * 8);
  arr<int, 6> nums6(dimension(8, 6, 3, 7, 5, 4), fem::fill0);
  sub6(nums6, 8, 6, 3, 7, 5, 4, nums6, nums6, nums6);
  check(nums6, 8 * 6 * 3 * 7 * 5 * 4);
  write(6, "(a)"), "OK";
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
