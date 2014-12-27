#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

typedef void (*show1_function_pointer)(common&, int const&);

void
show1(
  common& cmn,
  int const& i)
{
  common_write write(cmn);
  write(6, star), 10 + i;
}

typedef void (*show2_function_pointer)(common&, int const&);

void
show2(
  common& cmn,
  int const& i)
{
  common_write write(cmn);
  write(6, star), 20 + i;
}

void
show(
  common& cmn,
  show1_function_pointer which,
  int const& i)
{
  which(cmn, i);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  show(cmn, show1, 3);
  show(cmn, show2, 4);
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
