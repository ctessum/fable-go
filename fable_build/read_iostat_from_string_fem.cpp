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
  //C
  fem::str<2> buf = fem::char0;
  write(buf, "(a2)"), "12";
  //C
  int ios = fem::int0;
  fem::str<1> buf1 = fem::char0;
  try {
    read(buf, "(a1)").iostat(ios), buf1;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf1, "\"";
  //C
  fem::str<1> buf2 = fem::char0;
  try {
    read(buf, "(a2)").iostat(ios), buf2;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf2, "\"";
  //C
  fem::str<2> buf3 = fem::char0;
  try {
    read(buf, "(a3)").iostat(ios), buf3;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf3, "\"";
  //C
  fem::str<3> buf33 = fem::char0;
  try {
    read(buf, "(a3)").iostat(ios), buf33;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf33, "\"";
  //C
  arr_1d<2, fem::str<2> > buf4(fem::fill0);
  int i = fem::int0;
  try {
    read_loop rloop(buf, "(a3)");
    rloop.iostat(ios);
    FEM_DO_SAFE(i, 1, 2) {
      rloop, buf4(i);
    }
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0;
  //C
  fem::integer_star_4 k = fem::zero<fem::integer_star_4>();
  try {
    read(buf, "(i3)").iostat(ios), k;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, k;
  //C
  fem::integer_star_4 l = fem::zero<fem::integer_star_4>();
  try {
    read(buf, "(i3,i3)").iostat(ios), k, l;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, k, l;
  //C
  try {
    read(buf, "(i3)").iostat(ios), k, l;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0;
  //C
  arr_1d<2, fem::integer_star_4> m(fem::fill0);
  try {
    read_loop rloop(buf, "(i3)");
    rloop.iostat(ios);
    FEM_DO_SAFE(i, 1, 2) {
      rloop, m(i);
    }
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0;
  //C
  double x = fem::double0;
  try {
    read(buf, "(d6.3)").iostat(ios), x;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, x;
  //C
  write(buf, "(a2)"), "0x";
  //C
  try {
    read(buf, "(i2)").iostat(ios), k;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0;
  //C
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
