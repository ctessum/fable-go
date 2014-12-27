#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_com;
  fem::cmn_sve program_prog_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv)
  {}
};

struct program_prog_save
{
  fem::variant_bindings com_bindings;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  common_variant com(cmn.common_com, sve.com_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<fem::str<3> > s3(dimension(2));
      mbr<fem::str<6> > s6;
      mbr<fem::str<2> > s2(dimension(3));
      mbr<fem::str<1> > s1(dimension(5));
      mbr<fem::str<8> > s8;
      mbr<fem::str<4> > s4(dimension(2));
      mbr<fem::str<8> > s8e;
      com.allocate(),
        equivalence(s3, s6, s2, s1)
          .align<1>()
           .with<2>()
          .align<1>()
           .with<3>()
          .align<4>()
           .with<1>(arr_index(2)),
        equivalence(s8, s4, s8e)
          .align<1>()
           .with<2>()
          .align<1>()
           .with<3>()
      ;
    }
  }
  str_arr_ref<> s3(com.bind_str(), dimension(2));
  str_ref s6 = com.bind_str();
  str_arr_ref<> s2(com.bind_str(), dimension(3));
  str_arr_ref<> s1(com.bind_str(), dimension(5));
  /* str_ref s8 */ com.bind_str();
  str_arr_ref<> s4(com.bind_str(), dimension(2));
  str_ref s8e = com.bind_str();
  s3(1) = "AbC";
  s3(2) = "dEf";
  write(6, "(a)"), s6;
  s6 = "PqrStu";
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 3) {
    write(6, "(a)"), s2(i);
  }
  s2(1) = "gH";
  s2(2) = "Ij";
  s2(3) = "kL";
  FEM_DO_SAFE(i, 1, 2) {
    write(6, "(a)"), s3(i);
  }
  s8e = "AbcdefgH";
  FEM_DO_SAFE(i, 1, 2) {
    write(6, "(a)"), s4(i);
  }
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
