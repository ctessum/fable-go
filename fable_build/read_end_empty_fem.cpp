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
  int num = fem::int0;
  num = 0;
  statement_10:
  try {
    read(5, "()");
  }
  catch (fem::read_end const&) {
    goto statement_20;
  }
  num++;
  goto statement_10;
  statement_20:
  write(6, star), num;
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
