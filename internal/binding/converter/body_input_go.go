package converter

import (
	"fmt"
	"strings"

	"github.com/therecipe/qt/internal/binding/parser"
)

func GoInputParametersForC(function *parser.Function) string {

	var input = make([]string, 0)

	if !(function.Static || function.Meta == parser.CONSTRUCTOR) {
		input = append(input, "ptr.Pointer()")
	}

	if function.SignalMode == "" {
		for _, parameter := range function.Parameters {
			var alloc = goInput(parameter.Name, parameter.Value, function)
			if strings.Contains(alloc, "C.CString") {
				input = append(input, cleanName(parameter.Name, parameter.Value)+"C")
			} else {
				input = append(input, alloc)
			}
		}
	}

	return strings.Join(input, ", ")
}

func GoInputParametersForCAlloc(function *parser.Function) []string {

	var input = make([]string, 0)

	if function.SignalMode == "" {
		for _, parameter := range function.Parameters {
			var (
				alloc = goInput(parameter.Name, parameter.Value, function)
				name  = cleanName(parameter.Name, parameter.Value) + "C"
			)
			if strings.Contains(alloc, "C.CString") {
				input = append(input, fmt.Sprintf("var %v = %v\ndefer C.free(unsafe.Pointer(%v))\n", name, alloc, name))
			}
		}
	}

	return input
}

func GoInputParametersForCallback(function *parser.Function) string {

	var input = make([]string, len(function.Parameters))

	for i, parameter := range function.Parameters {
		input[i] = cgoOutput(parameter.Name, parameter.Value, function)
	}

	return strings.Join(input, ", ")
}
