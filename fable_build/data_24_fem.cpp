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
  arr<fem::str<2>, 2> s2s;

  program_prog_save() :
    nums(dimension(2, 2), fem::fill0),
    s2s(dimension(2, 2), fem::fill0)
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
  arr_ref<int, 2> nums(sve.nums, dimension(2, 2));
  str_arr_ref<2> s2s(sve.s2s, dimension(2, 2));
  //
  int i = fem::int0;
  int j = fem::int0;
  if (is_called_first_time) {
    fem::data_values data((values, 12, "Xy", 34, "Za", 56, "cD", 78, "eF"));
    FEM_DO_SAFE(j, 1, 2) {
      FEM_DOSTEP(i, 1, 2, 2) {
        data, nums(i, j), s2s(i, j);
      }
    }
    FEM_DO_SAFE(j, 1, 2) {
      FEM_DOSTEP(i, 2, 2, 2) {
        data, nums(i, j), s2s(i, j);
      }
    }
  }
  FEM_DO_SAFE(i, 1, 2) {
    FEM_DO_SAFE(j, 1, 2) {
      write(6, "(i2,1x,a)"), nums(i, j), s2s(i, j);
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
