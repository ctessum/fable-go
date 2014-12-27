#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

/* Dependency cycles: 1
     sub1 sub2
 */

using fem::common;

// forward declaration (dependency cycle)
void sub1(common&, int const&);

void
sub2(
  common& cmn,
  int const& num)
{
  common_write write(cmn);
  write(6, star), "sub2";
  sub1(cmn, num + 1);
}

void
sub1(
  common& cmn,
  int const& num)
{
  common_write write(cmn);
  write(6, star), "sub1";
  if (num == 1) {
    sub2(cmn, num);
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  write(6, star), "start";
  sub1(cmn, 1);
  write(6, star), "done";
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
