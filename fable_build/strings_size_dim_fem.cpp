#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  const int size = 3;
  const int dim = 2;
  arr_1d<dim, fem::str<size> > strings(fem::fill0);
  strings(1) = "AbC";
  strings(2) = "dEf";
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
