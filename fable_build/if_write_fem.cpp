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
  int i = fem::int0;
  FEM_DO_SAFE(i, 3, 4) {
    if (i < 4) {
      write(6, star), "i is less than four.";
    }
    if (i >= 4) {
      write(6, star), "i is greater than or equal to four.";
    }
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
    placeholder_please_replace::program_prog);
}
