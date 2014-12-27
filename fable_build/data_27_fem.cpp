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
  arr<fem::str<2> > s2s;

  program_prog_save() :
    s2s(dimension(2), fem::fill0)
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
  str_arr_ref<1> s2s(sve.s2s, dimension(2));
  //
  if (is_called_first_time) {
    s2s(1)(1, 1) = "A";
    s2s(2)(2, 2) = "b";
    s2s(1)(2, 2) = "C";
    s2s(2)(1, 1) = "d";
  }
  write(6, "(5a)"), "[", s2s(1), "][", s2s(2), "]";
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
