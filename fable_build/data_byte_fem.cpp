#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
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
  fem::variant_core_and_bindings save_equivalences;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  save_equivalences sve_equivalences(sve.save_equivalences);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<char> bx;
      mbr<fem::str<1> > cx;
      sve_equivalences.allocate(),
        equivalence(bx, cx)
          .align<1>()
           .with<2>()
      ;
    }
  }
  char& bx = sve_equivalences.bind<char>();
  str_ref cx = sve_equivalences.bind_str();
  if (is_called_first_time) {
    bx = 88;
  }
  write(6, "(a)"), cx;
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
