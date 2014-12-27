#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  str_arr_cref<> strings)
{
  strings(dimension(star));
  common_write write(cmn);
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 2) {
    write(6, "(a)"), strings(i);
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  arr_1d<2, fem::str<3> > strings(fem::fill0);
  strings(1) = "Abc";
  strings(2) = "dEF";
  sub(cmn, strings);
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
