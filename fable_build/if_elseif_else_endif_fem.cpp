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
  FEM_DO_SAFE(i, 0, 2) {
    if (i == 0) {
      write(6, star), "i is zero.";
    }
    else if (i == 1) {
      write(6, star), "i is one.";
    }
    else {
      write(6, star), "i is not zero or one.";
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
