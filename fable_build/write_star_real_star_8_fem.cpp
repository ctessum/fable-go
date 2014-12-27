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
  int ie = fem::int0;
  double val = fem::double0;
  FEM_DO_SAFE(ie, -30, 30) {
    if ((ie >=  - 4 && ie <= 17) || fem::mod(ie, 10) == 0) {
      val = 1.2345678901234567e0 * fem::pow(10.e0, ie);
      write(6, star), val;
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
