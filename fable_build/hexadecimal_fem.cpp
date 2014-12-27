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
    nums(dimension(2), fem::fill0)
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
  arr_ref<int> nums(sve.nums, dimension(2));
  //
  if (is_called_first_time) {
    static const int values[] = {
      0xfe, 0xdcba
    };
    fem::data_of_type<int>(FEM_VALUES_AND_SIZE),
      nums;
  }
  write(6, star), 0xA;
  write(6, star), 0xAB;
  write(6, star), 0xABC;
  write(6, star), 0xABCD;
  write(6, star), 0x7FFFFFFF;
  write(6, star), nums;
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
