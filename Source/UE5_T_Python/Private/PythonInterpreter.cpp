#include "PythonInterpreter.h"

#pragma push_macro("check")
#undef check
#pragma warning (push)
#pragma warning (disable : 4191)
#pragma warning (disable : 4591)
#pragma warning (disable : 4686)
#include <pybind11/embed.h>
#pragma warning (pop)
#pragma pop_macro("check")

namespace py = pybind11;

UPythonInterpreter::UPythonInterpreter()
{
}

UPythonInterpreter::~UPythonInterpreter()
{
}

void UPythonInterpreter::CalculateCosineNode(const float& input, float& output)
{
	output = calculate_cosine(input);
}

float UPythonInterpreter::calculate_cosine(const float& input)
{
	py::scoped_interpreter guard{};
	auto math_module = py::module_::import("math");
	py::object result = math_module.attr("cos")(input);
	return py::cast<float>(result);
}


