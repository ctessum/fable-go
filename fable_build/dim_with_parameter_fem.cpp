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
  const int num = 2;
  arr_1d<num, int> nums1(fem::fill0);
  nums1(1) = 12;
  nums1(2) = 34;
  arr_1d<num, int> nums2(fem::fill0);
  nums2(1) = 56;
  nums2(2) = 78;
  write(6, "(4i3)"), nums1(1), nums1(2), nums2(1), nums2(2);
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
