#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

typedef void (*sub2_function_pointer)(common&, int const&);

void
sub2(
  common& cmn,
  int const& num)
{
  common_write write(cmn);
  write(6, star), num;
}

void
sub1(
  common& cmn,
  sub2_function_pointer sub)
{
  sub(cmn, 1);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub1(cmn, sub2);
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
