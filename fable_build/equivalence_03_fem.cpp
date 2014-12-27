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
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> nums1(dimension(6));
    mbr<int> nums2(dimension(2, 3));
    loc_equivalences.allocate(),
      equivalence(nums1, nums2)
        .align<1>(arr_index(1))
         .with<2>(arr_index(1, 1))
    ;
  }
  arr_ref<int> nums1(loc_equivalences.bind<int>(), dimension(6));
  arr_ref<int, 2> nums2(loc_equivalences.bind<int>(), dimension(2, 3));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 6) {
    nums1(i) = 10 + i;
  }
  write(6, star), nums2;
  int j = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    FEM_DO_SAFE(j, 1, 3) {
      nums2(i, j) = i * 100 + j;
    }
  }
  write(6, star), nums1;
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
