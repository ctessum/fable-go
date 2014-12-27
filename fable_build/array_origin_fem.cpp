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
  arr_1d<2, int> nums1(dim1(0, 1), fem::fill0);
  int k = fem::int0;
  arr_2d<2, 4, int> nums2(dim1(0, 1).dim2(-1, 2), fem::fill0);
  int j = fem::int0;
  arr_3d<2, 3, 4, int> nums3(dim1(0, 1).dim2(3).dim3(-1, 2), fem::fill0);
  FEM_DO_SAFE(i, 0, 1) {
    nums1(i) = 10 + i;
    FEM_DO_SAFE(k, -1, 2) {
      nums2(i, k) = 100 * i + k;
      FEM_DO_SAFE(j, 1, 3) {
        nums3(i, j, k) = 200 * i + 30 * j + k;
      }
    }
  }
  {
    write_loop wloop(cmn, 6, "(2i3)");
    FEM_DO_SAFE(i, 0, 1) {
      wloop, nums1(i);
    }
  }
  {
    write_loop wloop(cmn, 6, "(8i4)");
    FEM_DO_SAFE(k, -1, 2) {
      FEM_DO_SAFE(i, 0, 1) {
        wloop, nums2(i, k);
      }
    }
  }
  {
    write_loop wloop(cmn, 6, "(8i5)");
    FEM_DO_SAFE(k, -1, 2) {
      FEM_DO_SAFE(j, 1, 3) {
        FEM_DO_SAFE(i, 0, 1) {
          wloop, nums3(i, j, k);
        }
      }
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
