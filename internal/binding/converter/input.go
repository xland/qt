package converter

import (
	"fmt"
	"strings"

	"github.com/therecipe/qt/internal/binding/parser"
)

func goInput(name string, value string, f *parser.Function) string {
	var vOld = value

	name = cleanName(name)
	value = cleanValue(value)

	switch value {
	case "QStringList":
		{
			return fmt.Sprintf("C.CString(strings.Join(%v, \"|\"))", name)
		}

	case "uchar", "char", "QString":
		{
			if strings.Contains(vOld, "**") {
				return fmt.Sprintf("C.CString(strings.Join(%v, \"|\"))", name)
			}
			return fmt.Sprintf("C.CString(%v)", name)
		}

	case "bool":
		{
			return fmt.Sprintf("C.int(qt.GoBoolToInt(%v))", name)
		}

	case "int":
		{
			return fmt.Sprintf("C.int(%v)", name)
		}

	case "qreal":
		{
			return fmt.Sprintf("C.double(%v)", name)
		}

	case "jclass":
		{
			return name
		}
	}

	switch {
	case isEnum(f.Class(), value):
		{
			return fmt.Sprintf("C.int(%v)", name)
		}

	case isClass(value):
		{
			if m := module(parser.ClassMap[value].Module); m != module(f) {
				return fmt.Sprintf("%v.PointerFrom%v(%v)", m, strings.Title(value), name)
			}
			return fmt.Sprintf("PointerFrom%v(%v)", strings.Title(value), name)
		}
	}

	f.Access = "unsupported_goInput"
	return f.Access
}

func cppInput(name string, value string, f *parser.Function) string {
	var vOld = value

	name = cleanName(name)
	value = cleanValue(value)

	switch value {
	case "QStringList":
		{
			return fmt.Sprintf("%v.split(\"|\", QString::SkipEmptyParts)", cppInput(name, "QString", f))
		}

	case "QString":
		{
			if strings.Contains(vOld, "&") {
				if strings.Contains(vOld, "const") {
					return fmt.Sprintf("%v(%v)", value, name)
				}
				f.Access = "unsupported_CppInput"
				return f.Access
			}

			if strings.Contains(vOld, "*") {
				return fmt.Sprintf("new %v(%v)", value, name)
			}

			return fmt.Sprintf("%v(%v)", value, name)
		}

	case "bool":
		{
			if strings.Contains(vOld, "*") {
				return "NULL"
			}
			return fmt.Sprintf("%v != 0", name)
		}

	case "int":
		{
			if strings.Contains(vOld, "*") {
				return fmt.Sprintf("&%v", name)
			}

			if strings.Contains(vOld, "&") && name == "argc" {
				return "argcs"
			}

			return name
		}

	case "char":
		{
			if strings.Contains(vOld, "const") {
				if strings.Contains(vOld, "*") {
					return fmt.Sprintf("const_cast<const %v*>(%v)", value, name)
				}
			}

			if strings.Contains(vOld, "**") {
				return "argvs"
				//return "const_cast<char **>(argvs.data())"
			}

			if strings.Contains(vOld, "*") {
				return name
			}

			return fmt.Sprintf("*%v", name)
		}

	case "qreal":
		{
			if strings.Contains(vOld, "*") {
				f.Access = "unsupported_CppInput"
				return f.Access
				//return fmt.Sprintf("&static_cast<qreal>(%v)", name)
			}

			return fmt.Sprintf("static_cast<qreal>(%v)", name)
		}

	case "jclass":
		{
			return fmt.Sprintf("static_cast<%v>(%v)", value, name)
		}
	}

	switch {
	case isEnum(f.Class(), value):
		{
			if !strings.Contains(vOld, "*") {
				return fmt.Sprintf("static_cast<%v>(%v)", cppEnum(f, value, false), name)
			}
		}

	case isClass(value):
		{
			if strings.Contains(vOld, "*") {
				if strings.Contains(vOld, "&") {
					break
				}
				return fmt.Sprintf("static_cast<%v*>(%v)", value, name)
			}

			return fmt.Sprintf("*static_cast<%v*>(%v)", value, name)
		}
	}

	f.Access = "unsupported_CppInput"
	return f.Access
}
