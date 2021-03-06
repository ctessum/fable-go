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
  arr<int> num;
  int num2;

  program_prog_save() :
    num(dimension(2), fem::fill0),
    num2(fem::int0)
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
  arr_ref<int> num(sve.num, dimension(2));
  int& num2 = sve.num2;
  //
  if (is_called_first_time) {
    {
      static const int values[] = {
        3, 4
      };
      fem::data_of_type<int>(FEM_VALUES_AND_SIZE),
        num;
    }
    num2 = 5;
  }
  write(6, star), num(1), num(2), num2;
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
