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
  arr<int> nums;

  program_prog_save() :
    nums(dimension(4), fem::fill0)
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
  arr_ref<int> nums(sve.nums, dimension(4));
  //
  int i = fem::int0;
  if (is_called_first_time) {
    {
      static const int values[] = {
        12, 34
      };
      fem::data_of_type<int> data(FEM_VALUES_AND_SIZE);
      FEM_DOSTEP(i, 1, 4, 2) {
        data, nums(i);
      }
    }
    {
      static const int values[] = {
        56, 78
      };
      fem::data_of_type<int> data(FEM_VALUES_AND_SIZE);
      FEM_DOSTEP(i, 2, 4, 2) {
        data, nums(i);
      }
    }
  }
  write(6, "(4i3)"), nums;
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
