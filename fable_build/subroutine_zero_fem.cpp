#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
zero(
  arr_ref<float> vals)
{
  vals(dimension(2));
  vals(1) = 12;
  vals(2) = 34;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  arr_1d<2, float> vals(fem::fill0);
  zero(vals);
  write(6, "(2f5.1)"), vals(1), vals(2);
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
