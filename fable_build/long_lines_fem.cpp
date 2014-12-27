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
  int i = fem::int0;
  arr_1d<20, int> numbers(fem::fill0);
  FEM_DO_SAFE(i, 1, 20) {
    numbers(i) = 253 + i;
  }
  write(6, star), numbers(1), numbers(2), numbers(3), numbers(4),
    numbers(5), numbers(6), numbers(7), numbers(8);
  write(6, star), numbers(1), numbers(2), numbers(3), numbers(4),
    numbers(5), numbers(6), numbers(7), numbers(8), numbers(9),
    numbers(10);
  write(6, star), numbers(1), numbers(2), numbers(3), numbers(4),
    numbers(5), numbers(6), numbers(7), numbers(8), numbers(9),
    numbers(10), numbers(11), numbers(12);
  write(6, star), numbers(1), numbers(2), numbers(3), numbers(4),
    numbers(5), numbers(6), numbers(7), numbers(8), numbers(9),
    numbers(10), numbers(11), numbers(12), numbers(13), numbers(14);
  write(6, star), numbers(1), numbers(2), numbers(3), numbers(4),
    numbers(5), numbers(6), numbers(7), numbers(8), numbers(9),
    numbers(10), numbers(11), numbers(12), numbers(13), numbers(14),
    numbers(15), numbers(16);
  write(6, star), numbers(1), numbers(2), numbers(3), numbers(4),
    numbers(5), numbers(6), numbers(7), numbers(8), numbers(9),
    numbers(10), numbers(11), numbers(12), numbers(13), numbers(14),
    numbers(15), numbers(16), numbers(17), numbers(18);
  write(6, star), numbers(1), numbers(2), numbers(3), numbers(4),
    numbers(5), numbers(6), numbers(7), numbers(8), numbers(9),
    numbers(10), numbers(11), numbers(12), numbers(13), numbers(14),
    numbers(15), numbers(16), numbers(17), numbers(18), numbers(19),
    numbers(20);
  write(6, "(a)"),
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz)!@#$%^&*(`"
    "~-_+=[{]}\\|;:'\",<.>/?";
  write(6, "(a)"),
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz)!@#$%^&*\\"
    "`~-_+=[{]}(|;:'\",<.>/?";
  write(6, "(a)"),
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz)!@#$%^&*("
    "\\~-_+=[{]}`|;:'\",<.>/?";
  fem::str<127> s =
    "qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnmqwertyuioasdfghjkzxcv"
    "bnmqwerjkdfghjkertyjkxcghidfbndtyuiklmbvftyuiknbvdtyuh";
  write(6, "(a)"), s;
  write(6,
    "(/,' Sorry, your unit cell, range of hkl, size of map,',"
    "' and resolution will require ',/,' redimensioning of the program.',/,/,"
    "' This is quite easy:  You need to edit the source file ',"
    "' for the program',/,' and increase the value of \"base_size\" from ',i2,"
    "' to ',' a larger value',/,/,"
    "'  Then recompile the program and try again.',/,/,"
    "' If you do not have the source code, then you can obtain',/,"
    "' a version with a larger dimension from ',/,' our web site.',/)"),
    12;
  write(6,
    "(' first = ',f8.4,/,/,' second:              ',f5.2,/,"
    "' third:               ',f5.2,/,' fourth:              ',f5.2,/,"
    "' fifth:               ',f5.2,/,' sixth:               ',f5.1)"),
    1.2f, 3.4f, 5.6f, 7.8f, 9.1f, 2.3f;
  int nnnnn1 = fem::int0;
  int nnnnn2 = fem::int0;
  int nnnnn3 = fem::int0;
  int nnnnn4 = fem::int0;
  int nnnnn5 = fem::int0;
  int nnnnn6 = fem::int0;
  if (nnnnn1 < 0 || nnnnn2 < 0 || nnnnn3 < 0 || nnnnn4 < 0 ||
      nnnnn5 < 0 || nnnnn6 <= 0) {
    write(6, "(a)"), "or ok";
  }
  if (nnnnn1 == 0 && nnnnn2 == 0 && nnnnn3 == 0 && nnnnn4 == 0 &&
      nnnnn5 == 0 && nnnnn6 <= 0) {
    write(6, "(a)"), "and ok";
  }
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
