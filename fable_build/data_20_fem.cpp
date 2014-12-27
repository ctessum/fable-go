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
  arr<int, 2> nums;

  program_prog_save() :
    nums(dimension(2, 3), fem::fill0)
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
  arr_ref<int, 2> nums(sve.nums, dimension(2, 3));
  //
  int i = fem::int0;
  int j = fem::int0;
  if (is_called_first_time) {
    static const int values[] = {
      1, 2, 3, 4, 5, 6
    };
    fem::data_of_type<int> data(FEM_VALUES_AND_SIZE);
    FEM_DO_SAFE(i, 1, 2) {
      FEM_DO_SAFE(j, 1, 3) {
        data, nums(i, j);
      }
    }
  }
  write(6, "(i1)"), nums;
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
