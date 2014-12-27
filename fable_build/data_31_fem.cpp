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
    nums1(dimension(32), fem::fill0),
    nums2(dimension(33), fem::fill0)
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
  arr_ref<int> nums1(sve.nums1, dimension(32));
  arr_ref<int> nums2(sve.nums2, dimension(33));
  //
  int i = fem::int0;
  if (is_called_first_time) {
    {
      static const int values[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
          18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32
      };
      fem::data_of_type<int>(FEM_VALUES_AND_SIZE),
        nums1;
    }
    {
      static const int values[] = {
        2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
          19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
          34
      };
      fem::data_of_type<int> data(FEM_VALUES_AND_SIZE);
      FEM_DO_SAFE(i, 1, 33) {
        data, nums2(i);
      }
    }
  }
  FEM_DO_SAFE(i, 1, 32) {
    if (nums1(i) != i) {
      FEM_STOP("FAILURE 1");
    }
  }
  FEM_DO_SAFE(i, 1, 33) {
    if (nums2(i) != i + 1) {
      FEM_STOP("FAILURE 2");
    }
  }
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
