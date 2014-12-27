#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

int
ifun()
{
  int return_value = fem::int0;
  return_value = 34;
  return return_value;
}

int
jfun(
  common& cmn)
{
  int return_value = fem::int0;
  common_write write(cmn);
  return_value = 56;
  write(6, star), return_value + 12;
  return return_value;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  write(6, star), ifun();
  write(6, star), jfun(cmn);
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
