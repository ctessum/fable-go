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
  static const int base = 4;
  static const int size = base - 1;
  static const int dim = base - 2;

  arr<fem::str<size> > strings;

  program_prog_save() :
    strings(dimension(dim), fem::fill0)
  {}
};

const int program_prog_save::base;
const int program_prog_save::size;
const int program_prog_save::dim;

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  // SAVE
  const int base = 4;
  const int size = base - 1;
  const int dim = base - 2;
  str_arr_ref<1> strings(sve.strings, dimension(dim));
  //
  if (is_called_first_time) {
    static const char* values[] = {
      "aBc", "DeF"
    };
    fem::data_of_type_str(FEM_VALUES_AND_SIZE),
      strings;
  }
  write(6, "(i1,1x,i1,1x,a,1x,a)"), size, dim, strings;
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
