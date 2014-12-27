#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_c
{
  int i;

  common_c() :
    i(fem::int0)
  {}
};

struct common :
  fem::common,
  common_c
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

int
jfun(
  common& cmn)
{
  int return_value = fem::int0;
  return_value = 130 + cmn.i;
  return return_value;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON c
  int& i = cmn.i;
  //
  i = 1;
  write(6, star), jfun(cmn);
  i = 2;
  int j = jfun(cmn);
  write(6, star), "j =", j;
  i = 7;
  if (jfun(cmn) == 137) {
    write(6, star), "jfun() == 137";
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
