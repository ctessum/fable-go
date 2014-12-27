#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

struct dynamic_parameters
{
  int nums_size;

  dynamic_parameters(
    fem::command_line_arguments const& command_line_args)
  :
    nums_size(2)
  {
    fem::dynamic_parameters_from(command_line_args, 1)
      .reset_if_given(nums_size)
    ;
  }
};

typedef
  fem::dynamic_parameters_capsule<dynamic_parameters>
    dynamic_parameters_capsule;

struct common_com
{
  const int nums_size;
  arr<int> nums;

  common_com(
    dynamic_parameters const& dynamic_params)
  :
    nums_size(dynamic_params.nums_size),
    nums(dimension(nums_size), fem::fill0)
  {}
};

struct common :
  fem::common,
  dynamic_parameters_capsule,
  common_com
{
  common(
    int argc,
    char const* argv[])
  :
    fem::common(argc, argv),
    dynamic_parameters_capsule(command_line_args),
    common_com(dynamic_params)
  {}
};

void
sub(
  common& cmn)
{
  // COMMON com
  const int nums_size = cmn.dynamic_params.nums_size;
  arr_ref<int> nums(cmn.nums, dimension(nums_size));
  //
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, nums_size) {
    nums(i) = 13 + i * 5;
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  // COMMON com
  const int nums_size = cmn.dynamic_params.nums_size;
  arr_cref<int> nums(cmn.nums, dimension(nums_size));
  //
  sub(cmn);
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
