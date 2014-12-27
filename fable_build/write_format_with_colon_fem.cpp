#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_t1(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  fem::integer_star_4 i = fem::zero<fem::integer_star_4>();
  {
    write_loop wloop(cmn, 6, "(4('one',i2,:))");
    FEM_DO_SAFE(i, 1, 1) {
      wloop, i;
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
    placeholder_please_replace::program_t1);
}
