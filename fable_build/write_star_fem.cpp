#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  fem::str<1> c = "x";
  write(6, star), c;
  write(6, star), "i is zero.";
  bool l = fem::bool0;
  write(6, star), l;
  int i = fem::int0;
  write(6, star), i;
  fem::integer_star_8 j = fem::zero<fem::integer_star_8>();
  write(6, star), j;
  float r = fem::float0;
  write(6, star), r;
  double d = fem::double0;
  write(6, star), d;
  write(6, star), 1.e111;
  write(6, star), -1.e111;
  write(6, star);
  write(6, star), c, c, c, c, c, c, c, c, c, c, c, c;
  write(6, star), "i is ", "zero", ".";
  write(6, star), l, l, l, l, l, l, l, l, l, l, l, l;
  write(6, star), i, i, i, i, i, i, i, i, i, i, i, i;
  write(6, star), j, j, j, j, j, j, j, j, j, j, j, j;
  write(6, star), r, r, r, r, r, r, r, r, r, r, r, r;
  write(6, star), d, d, d, d, d, d, d, d, d, d, d, d;
  fem::str<1> s1 = "x";
  fem::str<2> s2 = "yz";
  write(6, star), s1, s1;
  write(6, star), s1, s2;
  write(6, star), s2, s1;
  write(6, star), s2, s2;
  write(6, star), s1, 12;
  write(6, star), s2, 34;
  write(6, star), 56, s1;
  write(6, star), 78, s2;
  write(6, star), "aBcD ", 12, " eFgHi ", 345;
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
