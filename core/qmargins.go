package core

//#include "qmargins.h"
import "C"
import (
	"unsafe"
)

type QMargins struct {
	ptr unsafe.Pointer
}

type QMargins_ITF interface {
	QMargins_PTR() *QMargins
}

func (p *QMargins) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QMargins) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQMargins(ptr QMargins_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QMargins_PTR().Pointer()
	}
	return nil
}

func NewQMarginsFromPointer(ptr unsafe.Pointer) *QMargins {
	var n = new(QMargins)
	n.SetPointer(ptr)
	return n
}

func (ptr *QMargins) QMargins_PTR() *QMargins {
	return ptr
}

func NewQMargins() *QMargins {
	return NewQMarginsFromPointer(C.QMargins_NewQMargins())
}

func NewQMargins2(left int, top int, right int, bottom int) *QMargins {
	return NewQMarginsFromPointer(C.QMargins_NewQMargins2(C.int(left), C.int(top), C.int(right), C.int(bottom)))
}

func (ptr *QMargins) Bottom() int {
	if ptr.Pointer() != nil {
		return int(C.QMargins_Bottom(ptr.Pointer()))
	}
	return 0
}

func (ptr *QMargins) IsNull() bool {
	if ptr.Pointer() != nil {
		return C.QMargins_IsNull(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QMargins) Left() int {
	if ptr.Pointer() != nil {
		return int(C.QMargins_Left(ptr.Pointer()))
	}
	return 0
}

func (ptr *QMargins) Right() int {
	if ptr.Pointer() != nil {
		return int(C.QMargins_Right(ptr.Pointer()))
	}
	return 0
}

func (ptr *QMargins) SetBottom(bottom int) {
	if ptr.Pointer() != nil {
		C.QMargins_SetBottom(ptr.Pointer(), C.int(bottom))
	}
}

func (ptr *QMargins) SetLeft(left int) {
	if ptr.Pointer() != nil {
		C.QMargins_SetLeft(ptr.Pointer(), C.int(left))
	}
}

func (ptr *QMargins) SetRight(right int) {
	if ptr.Pointer() != nil {
		C.QMargins_SetRight(ptr.Pointer(), C.int(right))
	}
}

func (ptr *QMargins) SetTop(Top int) {
	if ptr.Pointer() != nil {
		C.QMargins_SetTop(ptr.Pointer(), C.int(Top))
	}
}

func (ptr *QMargins) Top() int {
	if ptr.Pointer() != nil {
		return int(C.QMargins_Top(ptr.Pointer()))
	}
	return 0
}
