package gui

//#include "qopenglfunctions_4_1_core.h"
import "C"
import (
	"unsafe"
)

type QOpenGLFunctions_4_1_Core struct {
	QAbstractOpenGLFunctions
}

type QOpenGLFunctions_4_1_Core_ITF interface {
	QAbstractOpenGLFunctions_ITF
	QOpenGLFunctions_4_1_Core_PTR() *QOpenGLFunctions_4_1_Core
}

func PointerFromQOpenGLFunctions_4_1_Core(ptr QOpenGLFunctions_4_1_Core_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QOpenGLFunctions_4_1_Core_PTR().Pointer()
	}
	return nil
}

func NewQOpenGLFunctions_4_1_CoreFromPointer(ptr unsafe.Pointer) *QOpenGLFunctions_4_1_Core {
	var n = new(QOpenGLFunctions_4_1_Core)
	n.SetPointer(ptr)
	return n
}

func (ptr *QOpenGLFunctions_4_1_Core) QOpenGLFunctions_4_1_Core_PTR() *QOpenGLFunctions_4_1_Core {
	return ptr
}
