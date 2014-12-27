#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct common :
  fem::common
{
  fem::variant_core common_info;
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
  fem::variant_bindings info_bindings;
};

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  FEM_CMN_SVE(program_prog);
  common_write write(cmn);
  common_variant info(cmn.common_info, sve.info_bindings);
  if (is_called_first_time) {
    using fem::mbr; // member of variant common or equivalence
    {
      mbr<int> nums(dimension(2));
      mbr<int> n1;
      mbr<int> n2;
      info.allocate(),
        equivalence(nums, n1, n2)
          .align<1>(arr_index(1))
           .with<2>()
          .align<3>()
           .with<1>(arr_index(2))
      ;
    }
  }
  arr_ref<int> nums(info.bind<int>(), dimension(2));
  int& n1 = info.bind<int>();
  int& n2 = info.bind<int>();
  n1 = 12;
  n2 = 34;
  write(6, star), nums;
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
