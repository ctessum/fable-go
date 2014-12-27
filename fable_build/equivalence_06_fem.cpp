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
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<fem::str<2> > s1(dimension(2));
    mbr<fem::str<3> > s2(dimension(4));
    mbr<fem::str<6> > s3(dimension(2));
    mbr<fem::str<12> > s4;
    loc_equivalences.allocate(),
      equivalence(s1, s2, s3, s4)
        .align<1>(arr_index(1)(1, 1))
         .with<2>(arr_index(2)(3, 3))
        .align<3>()
         .with<1>()
        .align<4>()
         .with<1>()
    ;
  }
  str_arr_ref<> s1(loc_equivalences.bind_str(), dimension(2));
  str_arr_ref<> s2(loc_equivalences.bind_str(), dimension(4));
  /* str_arr_ref<> s3( */ loc_equivalences.bind_str() /* , dimension(2)) */ ;
  /* str_ref s4 */ loc_equivalences.bind_str();
  s2(1) = "abc";
  s2(2) = "def";
  s2(3) = "ghi";
  s2(4) = "jkl";
  write(6, "(a)"), s1;
  write(6, "(a)"), s2;
  s1(1) = "PQ";
  s1(2) = "RS";
  write(6, "(a)"), s1;
  write(6, "(a)"), s2;
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
