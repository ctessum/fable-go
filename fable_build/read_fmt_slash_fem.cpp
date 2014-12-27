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
  common_read read(cmn);
  common_write write(cmn);
  int n1 = fem::int0;
  int n2 = fem::int0;
  int n3 = fem::int0;
  int n4 = fem::int0;
  read(5, "(i2,i3,/,i4,i5)"), n1, n2, n3, n4;
  write(6, star), n1, n2, n3, n4;
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
