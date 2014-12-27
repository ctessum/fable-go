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
  local_equivalences loc_equivalences;
  {
    using fem::mbr; // member
    mbr<fem::str<8> > ls;
    mbr<fem::str<1> > ld(dimension(8));
    loc_equivalences.allocate(),
      equivalence(ls, ld)
        .align<1>()
         .with<2>()
    ;
  }
  str_ref ls = loc_equivalences.bind_str();
  str_arr_ref<> ld(loc_equivalences.bind_str(), dimension(8));
  cmn.io.open(10, "fable_tmp_8f819c56")
    .form("unformatted")
    .status("unknown");
  ls = "AbcDefGh";
  write(10, fem::unformatted), ld;
  cmn.io.close(10);
  ls = " ";
  cmn.io.open(11, "fable_tmp_8f819c56")
    .form("unformatted")
    .status("old");
  read(11, fem::unformatted), ld;
  cmn.io.close(11);
  if (ls != "AbcDefGh") {
    write(6, star), "ld: [", ld, "]";
    write(6, star), "ls: [", ls, "]";
    FEM_STOP("ERROR");
  }
  write(6, "(a)"), "OK";
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
