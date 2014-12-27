#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_unnamed(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 5) {
    if (i == 2) {
      continue;
    }
    write(6, "(i1)"), i;
  }
  FEM_DO_SAFE(i, 1, 5) {
    if (i == 4) {
      break;
    }
    write(6, "(i1)"), i;
  }
  FEM_DO_SAFE(i, 1, 5) {
    if (i == 2) {
      continue;
    }
    if (i == 4) {
      break;
    }
    write(6, "(i1)"), i;
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
    placeholder_please_replace::program_unnamed);
}
