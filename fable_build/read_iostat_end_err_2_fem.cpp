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
  common_read read(cmn);
  common_write write(cmn);
  fem::str<2> buf = fem::char0;
  int ios = fem::int0;
  fem::str<3> buf33 = fem::char0;
  arr_1d<2, fem::str<2> > buf4(fem::fill0);
  int i = fem::int0;
  fem::integer_star_4 k = fem::zero<fem::integer_star_4>();
  fem::integer_star_4 l = fem::zero<fem::integer_star_4>();
  arr_1d<2, fem::integer_star_4> m(fem::fill0);
  //C
  write(buf, "(a2)"), "12";
  //C
  try {
    read(buf, "(a3)").iostat(ios), buf33;
  }
  catch (fem::read_end const&) {
    goto statement_10;
  }
  catch (fem::io_err const&) {
    goto statement_20;
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf33, "\"";
  //C
  try {
    read_loop rloop(buf, "(a3)");
    rloop.iostat(ios);
    FEM_DO_SAFE(i, 1, 2) {
      rloop, buf4(i);
    }
  }
  catch (fem::read_end const&) {
    goto statement_101;
  }
  catch (fem::io_err const&) {
    goto statement_20;
  }
  write(6, star), "ERROR: 1";
  FEM_STOP(0);
  statement_101:
  write(6, star), ios < 0, ios == 0, ios > 0;
  //C
  try {
    read(buf, "(i3)").iostat(ios), k, l;
  }
  catch (fem::read_end const&) {
    goto statement_102;
  }
  catch (fem::io_err const&) {
    goto statement_20;
  }
  write(6, star), "ERROR: 2";
  FEM_STOP(0);
  statement_102:
  write(6, star), ios < 0, ios == 0, ios > 0;
  //C
  try {
    read_loop rloop(buf, "(i3)");
    rloop.iostat(ios);
    FEM_DO_SAFE(i, 1, 2) {
      rloop, m(i);
    }
  }
  catch (fem::read_end const&) {
    goto statement_103;
  }
  catch (fem::io_err const&) {
    goto statement_20;
  }
  write(6, star), "ERROR: 3";
  FEM_STOP(0);
  statement_103:
  write(6, star), ios < 0, ios == 0, ios > 0;
  //C
  write(buf, "(a2)"), "0x";
  //C
  try {
    read(buf, "(i2)").iostat(ios), k;
  }
  catch (fem::read_end const&) {
    goto statement_10;
  }
  catch (fem::io_err const&) {
    goto statement_204;
  }
  write(6, star), "ERROR: 4";
  FEM_STOP(0);
  statement_204:
  write(6, star), ios < 0, ios == 0, ios > 0;
  //C
  write(6, star), "OK";
  goto statement_30;
  //C
  statement_10:
  write(6, star), "ERROR: in end=";
  goto statement_30;
  //C
  statement_20:
  write(6, star), "ERROR: in err=";
  goto statement_30;
  //C
  statement_30:;
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
