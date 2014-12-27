#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
sub(
  common& cmn,
  int const& n1,
  int const& n2)
{
  common_write write(cmn);
  write(6, star), n1, n2;
}

int
ifun(
  common& cmn,
  int const& iarg)
{
  int return_value = fem::int0;
  return_value = 12;
  sub(cmn, return_value, iarg);
  return return_value;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  write(6, star), ifun(cmn, 34);
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
