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
      mbr<int> numse(dimension(4));
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
  arr_ref<int> numse(scr.bind<int>(), dimension(4));
  int const& numx = scr.bind<int>();
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 4) {
    numse(i) = 10 + i;
  }
  write(6, star), nums(2), nums(1), nums(4), numx;
  write(6, star), numse;
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
