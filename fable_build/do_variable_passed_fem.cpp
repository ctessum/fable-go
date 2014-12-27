#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  int& iarg)
{
  common_write write(cmn);
  FEM_DO_SAFE(iarg, 1, 2) {
    write(6, star), iarg + 13;
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  int num = fem::int0;
  sub(cmn, num);
  write(6, star), num + 17;
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
