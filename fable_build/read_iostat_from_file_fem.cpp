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
  cmn.io.open(10, "fable_tmp_quuqu3ee")
    .status("unknown");
  write(10, "(a2)"), "12";
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  int ios = fem::int0;
  fem::str<1> buf1 = fem::char0;
  try {
    read(10, "(a1)").iostat(ios), buf1;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf1, "\"";
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  fem::str<1> buf2 = fem::char0;
  try {
    read(10, "(a2)").iostat(ios), buf2;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf2, "\"";
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  fem::str<2> buf3 = fem::char0;
  try {
    read(10, "(a3)").iostat(ios), buf3;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf3, "\"";
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  fem::str<3> buf33 = fem::char0;
  try {
    read(10, "(a3)").iostat(ios), buf33;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, "\"", buf33, "\"";
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  arr_1d<2, fem::str<2> > buf4(fem::fill0);
  int i = fem::int0;
  try {
    read_loop rloop(cmn, 10, "(a3)");
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
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  fem::integer_star_4 k = fem::zero<fem::integer_star_4>();
  try {
    read(10, "(i3)").iostat(ios), k;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, k;
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  fem::integer_star_4 l = fem::zero<fem::integer_star_4>();
  try {
    read(10, "(i3,i3)").iostat(ios), k, l;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, k, l;
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  try {
    read(10, "(i3)").iostat(ios), k, l;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0;
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  arr_1d<2, fem::integer_star_4> m(fem::fill0);
  try {
    read_loop rloop(cmn, 10, "(i3)");
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
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  double x = fem::double0;
  try {
    read(10, "(d6.3)").iostat(ios), x;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0, x;
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee")
    .status("unknown");
  write(10, "(a2)"), "0x";
  cmn.io.close(10);
  //C
  cmn.io.open(10, "fable_tmp_quuqu3ee");
  try {
    read(10, "(i3)").iostat(ios), k;
  }
  catch (fem::read_end const&) {
  }
  catch (fem::io_err const&) {
  }
  write(6, star), ios < 0, ios == 0, ios > 0;
  cmn.io.close(10);
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
