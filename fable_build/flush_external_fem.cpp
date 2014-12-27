#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
flush(
  common& cmn,
  int const& i)
{
  common_write write(cmn);
  write(6, star), i;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  flush(cmn, 2 * 5 - 4);
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
