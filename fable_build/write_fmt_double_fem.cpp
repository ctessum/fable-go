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
  write(6, "(a)"), "1.0";
  int e = fem::int0;
  FEM_DO_SAFE(e, -3, 1) {
    write(6, "(d10.3)"), 1.0e0 * fem::pow(10, e);
  }
  write(6, "(a)"), "0.999";
  FEM_DO_SAFE(e, -3, 1) {
    write(6, "(d10.3)"), 0.999e0 * fem::pow(10, e);
  }
  write(6, "(a)"), "0.9999";
  FEM_DO_SAFE(e, -3, 1) {
    write(6, "(d10.3)"), 0.9999e0 * fem::pow(10, e);
  }
  write(6, "(a)"), "1.23";
  FEM_DO_SAFE(e, -3, 1) {
    write(6, "(d10.3)"), 1.23e0 * fem::pow(10, e);
  }
  write(6, "(a)"), "1.23**100";
  FEM_DO_SAFE(e, -3, 1) {
    write(6, "(d15.3)"), 1.23e0 * 1.e100 * fem::pow(10.e0, e);
  }
  int i = fem::int0;
  double val = fem::double0;
  FEM_DO_SAFE(i, 1, 2) {
    if (i == 1) {
      val = 1.234e0;
      write(6, "(a)"), "1.234 with -3p through 5p";
    }
    else {
      val = 0.e0;
      write(6, "(a)"), "0 with -3p through 5p";
    }
    write(6, "(i2,1x,-3p,d10.3)"), -3, val;
    write(6, "(i2,1x,-2p,d10.3)"), -2, val;
    write(6, "(i2,1x,-1p,d10.3)"), -1, val;
    write(6, "(i2,1x,0p,d10.3)"), 0, val;
    write(6, "(i2,1x,1p,d10.3)"), 1, val;
    write(6, "(i2,1x,2p,d10.3)"), 2, val;
    write(6, "(i2,1x,3p,d10.3)"), 3, val;
    write(6, "(i2,1x,4p,d10.3)"), 4, val;
    write(6, "(i2,1x,5p,d10.3)"), 5, val;
  }
  write(6, "('a',1x,d1.0)"), 0.e0;
  write(6, "('b',1x,d10.0)"), 0.e0;
  write(6, "('c',1x,d6.1)"), 0.e0;
  write(6, "('d',1x,d6.1)"), 1.e0;
  write(6, "('e',1x,d6.1)"), -1.e0;
  write(6, "('f',1x,d7.1)"), 0.e0;
  write(6, "('g',1x,d7.1)"), 1.e0;
  write(6, "('h',1x,d7.1)"), -1.e0;
  write(6, "('i',1x,1p,d7.1)"), -1.e0;
  write(6, "('j',1x,d8.1)"), 0.e0;
  write(6, "('k',1x,d8.1)"), 1.e0;
  write(6, "('l',1x,d8.1)"), -1.e0;
  write(6, "('m',1x,d8.2)"), -1.e0;
  write(6, "('n',1x,d8.3)"), -1.e0;
  write(6, "('o',1x,1p,d8.1)"), -1.e0;
  write(6, "('p',1x,1p,d8.2)"), -1.e0;
  write(6, "('q',1x,2p,d8.1)"), -1.e0;
  write(6, "('r',1x,3p,d8.1)"), -1.e0;
  //C
  val = -1.e0 / 2097152.e0;
  write(6, "(0p,d30.24)"), val;
  write(6, "(0p,d30.23)"), val;
  write(6, "(1p,d30.23)"), val;
  write(6, "(10p,d30.23)"), val;
  write(6, "(20p,d30.23)"), val;
  write(6, "(24p,d30.23)"), val;
  write(6, "(25p,d30.23)"), val;
  //C
  write(6, "(0p,e9.2)"), 1.234f;
  write(6, "(1p,e9.2)"), 1.234f;
  write(6, "(2p,e9.2)"), 1.234f;
  write(6, "(3p,e9.2)"), 1.234f;
  write(6, "(4p,e9.2)"), 1.234f;
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
