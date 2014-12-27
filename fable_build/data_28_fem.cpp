#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
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
  arr<int> nums1;
  arr<int> nums2;

  program_prog_save() :
    nums1(dimension(2), fem::fill0),
    nums2(dimension(2), fem::fill0)
  {}
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  // SAVE
  arr_ref<int> nums1(sve.nums1, dimension(2));
  arr_ref<int> nums2(sve.nums2, dimension(2));
  //
  int i = fem::int0;
  if (is_called_first_time) {
    static const int values[] = {
      1, 2, 3, 4
    };
    fem::data_of_type<int> data(FEM_VALUES_AND_SIZE);
    FEM_DO_SAFE(i, 1, 2) {
      data, nums1(i);
    }
    FEM_DO_SAFE(i, 1, 2) {
      data, nums2(i);
    }
  }
  {
    write_loop wloop(cmn, 6, star);
    FEM_DO_SAFE(i, 1, 2) {
      wloop, nums1(i);
    }
    FEM_DO_SAFE(i, 1, 2) {
      wloop, nums2(i);
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
