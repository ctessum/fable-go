#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

typedef void (*ext_impl_function_pointer)(common&, int const&);

void
ext_impl(
  common& cmn,
  int const& num)
{
  common_write write(cmn);
  write(6, star), num;
}

void
sub2(
  common& cmn,
  ext_impl_function_pointer ext)
{
  ext(cmn, 4);
}

void
sub(
  common& cmn,
  ext_impl_function_pointer ext)
{
  sub2(cmn, ext);
  ext(cmn, 3);
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  sub(cmn, ext_impl);
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
