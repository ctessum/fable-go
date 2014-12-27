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
  arr_1d<2, int> nums1(fem::fill0);
  nums1(1) = 11;
  nums1(2) = 17;
  arr_1d<2, int> nums2(fem::fill0);
  nums2(1) = 19;
  nums2(2) = 23;
  int i = fem::int0;
  {
    write_loop wloop(cmn, 6, "(2i3)");
    FEM_DO_SAFE(i, 1, 2) {
      wloop, nums1(i) + nums2(i);
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
