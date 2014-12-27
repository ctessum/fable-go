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
  arr<fem::str<3> > strings;

  program_prog_save() :
    strings(dimension(2), fem::fill0)
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
  str_arr_ref<1> strings(sve.strings, dimension(2));
  //
  int ix = fem::int0;
  if (is_called_first_time) {
    fem::data_values data((values, 2*datum("xyz")));
    FEM_DO_SAFE(ix, 1, 2) {
      data, strings(ix);
    }
  }
  write(6, star), strings(1);
  write(6, star), strings(2);
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
