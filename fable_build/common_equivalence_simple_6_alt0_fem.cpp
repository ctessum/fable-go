#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common_com
{
  fem::str<3> s3_memory[2];
  fem::str<8> s8;

  str_arr_ref<1> s3;

  common_com() :
    s8(fem::char0),
    s3(*s3_memory, dimension(2), fem::fill0)
  {}
};

struct common :
  fem::common,
  common_com
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON com
  str_arr_ref<1> s3(cmn.s3, dimension(2));
  //
  s3(1) = "AbC";
  s3(2) = "dEf";
  str_ref s6(s3, 6); // SIMPLE EQUIVALENCE
  write(6, "(a)"), s6;
  s6 = "PqrStu";
  int i = fem::int0;
  str_arr_ref<1> s2(s3, 2, dimension(3)); // SIMPLE EQUIVALENCE
  FEM_DO_SAFE(i, 1, 3) {
    write(6, "(a)"), s2(i);
  }
  s2(1) = "gH";
  s2(2) = "Ij";
  s2(3) = "kL";
  FEM_DO_SAFE(i, 1, 2) {
    write(6, "(a)"), s3(i);
  }
  str_ref s8e(cmn.s8, 8); // SIMPLE EQUIVALENCE
  s8e = "AbcdefgH";
  str_arr_ref<1> s4(cmn.s8, 4, dimension(2)); // SIMPLE EQUIVALENCE
  FEM_DO_SAFE(i, 1, 2) {
    write(6, "(a)"), s4(i);
  }
  str_arr_ref<1> s1(s3(2), 1, dimension(5)); // SIMPLE EQUIVALENCE
  FEM_DO_SAFE(i, 1, 5) {
    write(6, "(a)"), s1(i);
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
