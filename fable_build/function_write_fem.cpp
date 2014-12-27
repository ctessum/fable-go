#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

int
fun(
  common& cmn,
  int const& num)
{
  int return_value = fem::int0;
  common_write write(cmn);
  write(6, star), num;
  return_value = num + 7;
  return return_value;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  int i = fem::int0;
  int num = fem::int0;
  FEM_DO_SAFE(i, 1, 3) {
    num = fun(cmn, num);
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
