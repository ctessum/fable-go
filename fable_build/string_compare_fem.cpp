#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
lt_le_gt_ge(
  common& cmn)
{
  common_write write(cmn);
  fem::str<2> ab = "ab";
  fem::str<3> abc = "abc";
  fem::str<3> ab_ = "ab ";
  fem::str<2> ac = "ac";
  write(6, "(a)"), "ab ab";
  write(6, star), ab < ab;
  write(6, star), ab <= ab;
  write(6, star), ab > ab;
  write(6, star), ab >= ab;
  write(6, "(a)"), "ab abc";
  write(6, star), ab < abc;
  write(6, star), ab <= abc;
  write(6, star), ab > abc;
  write(6, star), ab >= abc;
  write(6, "(a)"), "abc ab";
  write(6, star), abc < ab;
  write(6, star), abc <= ab;
  write(6, star), abc > ab;
  write(6, star), abc >= ab;
  write(6, "(a)"), "ab ab_";
  write(6, star), ab < ab_;
  write(6, star), ab <= ab_;
  write(6, star), ab > ab_;
  write(6, star), ab >= ab_;
  write(6, "(a)"), "ab_ ab";
  write(6, star), ab_ < ab;
  write(6, star), ab_ <= ab;
  write(6, star), ab_ > ab;
  write(6, star), ab_ >= ab;
  write(6, "(a)"), "ab ac";
  write(6, star), ab < ac;
  write(6, star), ab <= ac;
  write(6, star), ab > ac;
  write(6, star), ab >= ac;
  write(6, "(a)"), "ac ab";
  write(6, star), ac < ab;
  write(6, star), ac <= ab;
  write(6, star), ac > ab;
  write(6, star), ac >= ab;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  fem::str<1> str1 = " ";
  fem::str<2> str2 = " ";
  write(6, "(a,2l1)"), "a", str1 == str2, str1 != str2;
  str1 = "x";
  write(6, "(a,2l1)"), "b", str1 == str2, str1 != str2;
  str2 = "x";
  write(6, "(a,2l1)"), "c", str1 == str2, str1 != str2;
  str2 = "xy";
  write(6, "(a,2l1)"), "d", str1 == str2, str1 != str2;
  str2 = " y";
  write(6, "(a,2l1)"), "e", str1 == str2, str1 != str2;
  str1 = " ";
  write(6, "(a,2l1)"), "f", str1 == str2, str1 != str2;
  //C
  str1 = " ";
  write(6, "(a,2l1)"), "g", str1 == " ", str1 != " ";
  str1 = "x";
  write(6, "(a,2l1)"), "h", str1 == "x", str1 != "x";
  write(6, "(a,2l1)"), "i", str1 == "x ", str1 != "x ";
  write(6, "(a,2l1)"), "j", str1 == "xy", str1 != "xy";
  //C
  str2 = " ";
  write(6, "(a,2l1)"), "k", str2 == " ", str2 != " ";
  str2 = "x";
  write(6, "(a,2l1)"), "l", str2 == "x", str2 != "x";
  write(6, "(a,2l1)"), "m", str2 == "x ", str2 != "x ";
  write(6, "(a,2l1)"), "n", str2 == "xy", str2 != "xy";
  str2 = "xy";
  write(6, "(a,2l1)"), "o", str2 == "xy", str2 != "xy";
  str2 = " y";
  write(6, "(a,2l1)"), "p", str2 == " y", str2 != " y";
  write(6, "(a,2l1)"), "q", str2 == " y ", str2 != " y ";
  write(6, "(a,2l1)"), "r", str2 == " yz", str2 != " yz";
  write(6, "(a,2l1)"), "s", " y" == str2, " y" != str2;
  //C
  lt_le_gt_ge(cmn);
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
