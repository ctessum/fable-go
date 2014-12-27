#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

typedef void (*exch_imp_function_pointer)(common&, int const&);

void
exch_imp(
  common& cmn,
  int const& num)
{
  common_write write(cmn);
  write(6, star), "exch", num;
}

void
sub2(
  common& cmn,
  int const& num,
  exch_imp_function_pointer exch)
{
  exch(cmn, num);
}

void
sub(
  common& cmn,
  int const& num,
  exch_imp_function_pointer exch)
{
  sub2(cmn, num, exch);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub(cmn, 3, exch_imp);
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
