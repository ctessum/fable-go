#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_com
{
  arr<int> n;

  common_com() :
    n(dimension(2), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_com
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
sub(
  common& cmn,
  int const& num)
{
  // COMMON com
  arr_ref<int> n(cmn.n, dimension(2));
  //
  n(1) = num + 1;
  n(2) = num + 3;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON com
  arr_cref<int> n(cmn.n, dimension(2));
  //
  write(6, star), n(1), n(2);
  sub(cmn, 5);
  write(6, star), n(2), n(1);
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
