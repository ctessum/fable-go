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
  int num;
  fem::str<2> s2;

  program_prog_save() :
    num(fem::int0),
    s2(fem::char0)
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
  int& num = sve.num;
  fem::str<2>& s2 = sve.s2;
  //
  if (is_called_first_time) {
    num = 12;
    s2 = "Xy";
  }
  write(6, "(i2,1x,a)"), num, s2;
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
