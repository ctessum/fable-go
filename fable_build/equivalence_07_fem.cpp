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
    mbr<fem::str<4> > a;
    mbr<fem::str<3> > c(dimension(2));
    mbr<fem::str<4> > b;
    loc_equivalences.allocate(),
      equivalence(a, c, b)
        .align<1>()
         .with<2>(arr_index(1))
        .align<3>()
         .with<2>(arr_index(2))
    ;
  }
  str_ref a = loc_equivalences.bind_str();
  str_arr_ref<> c(loc_equivalences.bind_str(), dimension(2));
  str_ref b = loc_equivalences.bind_str();
  //C from section 8.2.3 of F77 standard
  a = "abcd";
  b = "efgh";
  write(6, "(a)"), a;
  write(6, "(a)"), b;
  write(6, "(a)"), c(1);
  write(6, "(a)"), c(2);
  a = "ijkl";
  write(6, "(a)"), a;
  write(6, "(a)"), b;
  write(6, "(a)"), c(1);
  write(6, "(a)"), c(2);
  b = "mnop";
  write(6, "(a)"), a;
  write(6, "(a)"), b;
  write(6, "(a)"), c(1);
  write(6, "(a)"), c(2);
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
