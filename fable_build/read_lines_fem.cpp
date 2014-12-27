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
  fem::str<4> inp = fem::char0;
  while (true) {
    try {
      read(5, "(a)"), inp;
    }
    catch (fem::read_end const&) {
      goto statement_10;
    }
    write(6, "(a)"), inp;
  }
  statement_10:;
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
