#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_scr;
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
  fem::variant_bindings scr_bindings;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  common_variant scr(cmn.common_scr, sve.scr_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> nums(dimension(2));
      mbr<int> numse(dimension(3));
      mbr<int> numx;
      scr.allocate(),
        equivalence(nums, numse)
          .align<1>()
           .with<2>(),
        numx
      ;
    }
  }
  arr_ref<int> nums(scr.bind<int>(), dimension(2));
  arr_ref<int> numse(scr.bind<int>(), dimension(3));
  int const& numx = scr.bind<int>();
  if (is_called_first_time) {
    {
      static const int values[] = {
        12, 34, 56
      };
      fem::data_of_type<int>(FEM_VALUES_AND_SIZE),
        numse;
    }
  }
  write(6, star), numse;
  write(6, star), numx, nums;
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
