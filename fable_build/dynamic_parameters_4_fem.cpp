#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct dynamic_parameters
{
  int base_size;

  dynamic_parameters(
    fem::command_line_arguments const& command_line_args)
  :
    base_size(3)
  {
    fem::dynamic_parameters_from(command_line_args, 1)
      .reset_if_given(base_size)
    ;
  }
};

typedef
  fem::dynamic_parameters_capsule<dynamic_parameters>
    dynamic_parameters_capsule;

struct common :
  fem::common,
  dynamic_parameters_capsule
{
  fem::cmn_sve sub_sve;

  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv),
    dynamic_parameters_capsule(command_line_args)
  {}
};

struct sub_save
{
  const int base_size;
  arr<int> nums;

  sub_save(
    dynamic_parameters const& dynamic_params)
  :
    base_size(dynamic_params.base_size),
    nums(dimension(base_size * 2), fem::fill0)
  {}
};

void
sub(
  common& cmn,
  int const& num)
{
  FEM_CMN_SVE_DYNAMIC_PARAMETERS(sub);
  common_write write(cmn);
  // SAVE
  const int base_size = cmn.dynamic_params.base_size;
  arr_ref<int> nums(sve.nums, dimension(base_size * 2));
  //
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, base_size * 2) {
    if (num == 1) {
      nums(i) = 73 + i;
    }
    else {
      nums(i) += 13;
    }
  }
  write(6, star), nums;
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, 3) {
    sub(cmn, i);
  }
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
