#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

//C1
//C c2
void
sub1(
  str_cref letter,
  int& num)
{
  //C3
  if (letter(1, 1) == "x") {
    num += 10;
  }
  //C4
}
//C c5

//C
//C6
void
sub2(
  str_cref letter,
  int& num)
{
  //C7
  sub1(letter, num);
  if (letter(1, 1) == "x") {
    num++;
  }
  else {
    num += 2;
  }
  //C8
}

//C
//C9
void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  //C10
  int num = fem::int0;
  sub2("x", num);
  write(6, "(i2)"), num;
  sub2("y", num);
  write(6, "(i2)"), num;
  //C11
}
//C12

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
