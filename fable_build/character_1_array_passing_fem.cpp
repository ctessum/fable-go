#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  str_arr_cref<> strs1)
{
  strs1(dimension(2));
  common_write write(cmn);
  write(6, star), strs1;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  arr_1d<2, fem::str<1> > strs1(fem::fill0);
  strs1(1) = "X";
  strs1(2) = "y";
  sub(cmn, strs1);
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
