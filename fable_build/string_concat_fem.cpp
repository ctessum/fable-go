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
  fem::str<2> s1 = "x" + str_cref("Y");
  write(6, "(a)"), s1;
  s1 = ("P") + str_cref("q");
  write(6, "(a)"), s1;
  s1 = "N" + (str_cref("o"));
  write(6, "(a)"), s1;
  fem::str<4> s3 = "a" + str_cref("s") + str_cref("d");
  write(6, "(a)"), s3;
  s3 = ("f" + str_cref("g")) + str_cref("h");
  write(6, "(a)"), s3;
  s3 = "j" + (str_cref("k") + str_cref("l"));
  write(6, "(a)"), s3;
  fem::str<3> s2 = "z" + s1;
  write(6, "(a)"), s2;
  s2 = s1 + str_cref("T");
  write(6, "(a)"), s2;
  s1 = "U";
  s2 = s1 + str_cref("v");
  write(6, "(a)"), s2;
  s2 = "i";
  s3 = s1 + s2;
  write(6, "(a)"), s3;
  s3 = s2 + s1;
  write(6, "(a)"), s3;
  s1 = "Wd";
  s3 = s1 + s2;
  write(6, "(a)"), s3;
  s3 = s2 + s1;
  write(6, "(a)"), s3;
  write(6, "(a)"), "Qwer" + str_cref("ty");
  write(6, "(a)"), ("Ui") + str_cref("op");
  write(6, "(a)"), "M" + (str_cref("nb"));
  write(6, "(a)"), ("v" + (str_cref("cX"))) + str_cref("yz");
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
