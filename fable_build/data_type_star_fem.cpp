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
  fem::logical_star_1 l1 = false;
  fem::integer_star_2 i2 = 4;
  fem::integer_star_4 i4 = 8;
  fem::integer_star_8 i8 = fem::zero<fem::integer_star_8>();
  if (i2 * 2 == i4) {
    i8 = 16;
    if (i4 * 2 == i8) {
      write(6, "(a)"), "OK integers";
      l1 = true;
    }
  }
  if (!l1) {
    write(6, "(a)"), "FAILURE integers";
  }
  fem::real_star_4 r4 = 3.14f;
  fem::real_star_8 r8 = 6.28f;
  if (fem::abs(r4 * 2 - r8) < 1.e-5f) {
    write(6, "(a)"), "OK reals";
  }
  else {
    write(6, "(a)"), "FAILURE reals";
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
