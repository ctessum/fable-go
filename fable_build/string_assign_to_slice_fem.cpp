#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
copy_overlapping(
  common& cmn)
{
  common_write write(cmn);
  fem::str<26> cval = "abcdefghjiklmnopqrstuvwxyz";
  cval = cval(14, 26);
  write(6, star), cval;
  cval = "abcdefghijklmnopqrtsuvwxyz";
  cval(5, 11) = cval;
  write(6, star), cval;
}

void
assign_directly(
  common& cmn)
{
  common_write write(cmn);
  fem::str<2> small = "aB";
  fem::str<3> big = small;
  write(6, "(3a)"), "[", big, "]";
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  fem::str<1> first = "x";
  fem::str<1> second = "y";
  first(1, 1) = second(1, 1);
  write(6, star), first;
  fem::str<2> third = "pq";
  fem::str<2> fourth = "rs";
  third(1, 2) = fourth(1, 2);
  write(6, star), third;
  third(2, 2) = first(1, 1);
  write(6, star), third;
  third(1, 1) = first;
  write(6, star), third;
  third(2, 2) = "z";
  write(6, star), third;
  copy_overlapping(cmn);
  assign_directly(cmn);
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
