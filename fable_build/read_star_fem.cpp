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
  common_read read(cmn);
  common_write write(cmn);
  int num = fem::int0;
  read(5, star), num;
  write(6, star), num + 1;
  float val = fem::float0;
  read(5, star), val;
  write(6, star), val + 1;
  arr_1d<2, int> nums(fem::fill0);
  read(5, star), nums;
  write(6, star), nums;
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
