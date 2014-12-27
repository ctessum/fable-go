#include <fem.hpp> // Fortran EMulation library of fable module

namespace placeholder_please_replace {

using namespace fem::major_types;

using fem::common;

void
program_prog(
  int argc,
  char const* argv[])
{
  if (argc != 1) {
    throw std::runtime_error("Unexpected command-line arguments.");
  }
  bool a = fem::bool0;
  bool b = fem::bool0;
  bool c = a || b;
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
