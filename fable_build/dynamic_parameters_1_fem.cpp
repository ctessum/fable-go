#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct dynamic_parameters
{
  int root_size;

  dynamic_parameters(
    fem::command_line_arguments const& command_line_args)
  :
    root_size(3)
  {
    fem::dynamic_parameters_from(command_line_args, 1)
      .reset_if_given(root_size)
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
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv),
    dynamic_parameters_capsule(command_line_args)
  {}
};

void
sub(
  common& cmn,
  arr_ref<int> nums)
{
  const int root_size = cmn.dynamic_params.root_size;
  const int nums_size = 2 * root_size;
  nums(dimension(nums_size));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, nums_size) {
    nums(i) = 13 + i;
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  const int root_size = cmn.dynamic_params.root_size;
  const int nums_size = 2 * root_size;
  arr<int> nums(dimension(nums_size), fem::fill0);
  sub(cmn, nums);
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
