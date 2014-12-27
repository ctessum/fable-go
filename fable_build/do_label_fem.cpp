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
  int num = fem::int0;
  FEM_DO_SAFE(num, 1, 2) {
    write(6, star), num;
  }
  int num2 = fem::int0;
  FEM_DO_SAFE(num, 1, 2) {
    FEM_DO_SAFE(num2, 3, 4) {
      write(6, star), num, num2;
    }
  }
  FEM_DO_SAFE(num, 1, 2) {
    FEM_DO_SAFE(num2, 3, 4) {
      write(6, star), num, num2;
      write(6, star), num * 10, num2 * 10;
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
