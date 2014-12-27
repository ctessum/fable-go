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

void
show(
  common& cmn,
  str_cref hol,
  int const& l)
{
  common_write write(cmn);
  write(6, "(3a)"), ">", hol(1, l), "<";
}

struct program_prog_save
{
  arr<fem::str<3> > hols;

  program_prog_save() :
    hols(dimension(4), fem::fill0)
  {}
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  // SAVE
  str_arr_ref<1> hols(sve.hols, dimension(4));
  //
  if (is_called_first_time) {
    static const char* values[] = {
      "X", "Yz", "PqR", "STuv"
    };
    fem::data_of_type_str(FEM_VALUES_AND_SIZE),
      hols;
  }
  write(6, "('a','cD','eFg','HijK','LMnOPqRstUvWxyZ@#','   ','$')");
  write(6, "(4('[',a,']'))"), hols;
  show(cmn, "x", 1);
  show(cmn, "Us", 2);
  show(cmn, "PdW", 3);
  show(cmn, "rTiTGBrDYtATTSwDkSw", 19);
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
