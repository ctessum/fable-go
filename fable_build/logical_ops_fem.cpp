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
  bool l1 = fem::bool0;
  int j = fem::int0;
  bool l2 = fem::bool0;
  int k = fem::int0;
  bool l3 = fem::bool0;
  FEM_DO_SAFE(i, 0, 1) {
    l1 = i != 0;
    FEM_DO_SAFE(j, 0, 1) {
      l2 = j != 0;
      FEM_DO_SAFE(k, 0, 1) {
        l3 = k != 0;
        write(6, star), !l1, l1 && l2, l1 || l2, l1 == l2, l1 != l2,
          !l1 && l2, !l1 || l2, (l1 && l2) || l3, l1 || (l2 && l3);
      }
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
