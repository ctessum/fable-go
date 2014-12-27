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
  const int base_size = cmn.dynamic_params.base_size;
  nums(dimension(base_size * 2));
  int i = fem::int0;
  FEM_DO_SAFE(i, 1, base_size * 2) {
    nums(i) = 61 + i * 7;
  }
}

void
program_prog(
  int argc,
  char const* argv[])
{
  common cmn(argc, argv);
  common_write write(cmn);
  const int base_size = cmn.dynamic_params.base_size;
  arr<int> nums(dimension(base_size * 2), fem::fill0);
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
