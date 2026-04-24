//========================================================================================
// Minimal solar module include smoke test
//========================================================================================

#include <iostream>

#include "parameter_input.hpp"
#include "athena.hpp"
#include "mesh/mesh.hpp"
#include "pgen/pgen.hpp"
#include "solar/common/solar_module_test.hpp"

void ProblemGenerator::UserProblem(ParameterInput *pin, const bool restart) {
  if (restart) return;

  const int value = SolarModuleTestValue();

  std::cout << "[solar_module_test] SolarModuleTestValue() = "
            << value << std::endl;
}
