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
  arr_1d<4, float> vals(fem::fill0);
  vals(1) = 1.2f;
  vals(2) = fem::pow2(vals(1));
  vals(3) = fem::pow(2, vals(2));
  vals(4) = fem::pow(vals(2), vals(3));
  int i = fem::int0;
  {
    write_loop wloop(cmn, 6, "(4f5.2)");
    FEM_DO_SAFE(i, 1, 4) {
      wloop, vals(i);
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
