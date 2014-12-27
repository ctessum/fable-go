#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_dp_example(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  const int array_size = 10;
  write(6, star), "I can store up to", array_size, "numbers";
  int i = fem::int0;
  arr_1d<array_size, float> array(fem::fill0);
  FEM_DO_SAFE(i, 1, array_size) {
    array(i) = i;
  }
}

} // namespace placeholder_please_replace

int
main(
  int argc,
  char const* argv[])
{
  return fem::main_with_catch(
    argc, argv,
    placeholder_please_replace::program_dp_example);
}
