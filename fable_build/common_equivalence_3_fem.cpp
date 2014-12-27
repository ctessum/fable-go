#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_scr;
  fem::cmn_sve program_prog_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct program_prog_save
{
  fem::variant_bindings scr_bindings;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> nums3(dimension(4));
      mbr<int> nums1(dimension(5));
      mbr<int> nums2(dimension(3));
      scr.allocate(),
        equivalence(nums3, nums1, nums2)
          .align<2>(arr_index(2))
           .with<3>(arr_index(3))
           .with<1>(arr_index(4))
      ;
    }
  }
  arr_ref<int> nums3(scr.bind<int>(), dimension(4));
  arr_ref<int> nums1(scr.bind<int>(), dimension(5));
  arr_ref<int> nums2(scr.bind<int>(), dimension(3));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 5) {
    nums1(i) = 20 + i;
  }
  FEM_DO_SAFE(i, 1, 3) {
    nums2(i) = 30 + i;
  }
  FEM_DO_SAFE(i, 1, 4) {
    nums3(i) = 40 + i;
  }
  write(6, star), nums1;
  write(6, star), nums2;
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
