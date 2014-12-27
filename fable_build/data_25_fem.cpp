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
  fem::str<4> s4;

  program_prog_save() :
    s4(fem::char0)
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
  fem::str<4>& s4 = sve.s4;
  //
  const fem::str<2> s12 = "xy";
  const fem::str<2> s34 = "ab";
  if (is_called_first_time) {
    s4(1, 2) = s12;
    s4(3, 4) = s34;
  }
  write(6, "(a)"), s4;
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
