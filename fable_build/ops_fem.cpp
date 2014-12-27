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
  bool la = fem::bool0;
  bool lb = !la;
  write(6, star), la && lb;
  write(6, star), la || lb;
  float b = 1;
  float a = fem::float0;
  write(6, star), a + b;
  write(6, star), a - b;
  write(6, star), a * b;
  write(6, star), a / b;
  fem::str<2> sa = "x";
  fem::str<3> sb = "abc";
  write(6, star), sa + sb;
  write(6, star), a == b;
  write(6, star), a != b;
  write(6, star), a < b;
  write(6, star), a <= b;
  write(6, star), a > b;
  write(6, star), a >= b;
  write(6, star), a == b;
  write(6, star), a != b;
  write(6, star), a < b;
  write(6, star), a <= b;
  write(6, star), a > b;
  write(6, star), a >= b;
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
