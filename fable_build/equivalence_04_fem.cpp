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
    mbr<fem::str<2> > s1;
    mbr<fem::str<3> > s2;
    loc_equivalences.allocate(),
      equivalence(s1, s2)
        .align<1>()
         .with<2>()
    ;
  }
  str_ref s1 = loc_equivalences.bind_str();
  str_ref s2 = loc_equivalences.bind_str();
  s2 = "pQr";
  write(6, "(a)"), s1;
  s1 = "Ab";
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
