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
  const int itwo = 2;
  const int ione = 1;
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<int> nums1(dimension(2));
    mbr<int> nums2(dimension(itwo));
    loc_equivalences.allocate(),
      equivalence(nums1, nums2)
        .align<1>(arr_index(1))
         .with<2>(arr_index(ione))
        .align<1>(arr_index(ione))
         .with<2>(arr_index(1))
    ;
  }
  arr_ref<int> nums1(loc_equivalences.bind<int>(), dimension(2));
  arr_ref<int> nums2(loc_equivalences.bind<int>(), dimension(itwo));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, itwo) {
    nums2(i) = 20 + i;
  }
  write(6, star), nums1;
  FEM_DO_SAFE(i, 1, itwo) {
    nums1(i) = 30 + i;
  }
  write(6, star), nums2;
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
