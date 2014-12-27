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
      mbr<fem::str<1> > ld(dimension(3, 2));
      mbr<fem::str<3> > ls(dimension(2));
      sve_equivalences.allocate(),
        equivalence(ld, ls)
          .align<1>()
           .with<2>()
      ;
    }
  }
  str_arr_ref<2> ld(sve_equivalences.bind_str(), dimension(3, 2));
  str_arr_ref<> ls(sve_equivalences.bind_str(), dimension(2));
  if (is_called_first_time) {
    static const char* values[] = {
      "Yui", "dFg"
    };
    fem::data_of_type_str(FEM_VALUES_AND_SIZE),
      ls;
  }
  write(6, star), ld;
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
