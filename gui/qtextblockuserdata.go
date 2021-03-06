package gui

//#include "qtextblockuserdata.h"
import "C"
import (
	"unsafe"
)

type QTextBlockUserData struct {
	ptr unsafe.Pointer
}

type QTextBlockUserData_ITF interface {
	QTextBlockUserData_PTR() *QTextBlockUserData
}

func (p *QTextBlockUserData) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QTextBlockUserData) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQTextBlockUserData(ptr QTextBlockUserData_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QTextBlockUserData_PTR().Pointer()
	}
	return nil
}

func NewQTextBlockUserDataFromPointer(ptr unsafe.Pointer) *QTextBlockUserData {
	var n = new(QTextBlockUserData)
	n.SetPointer(ptr)
	return n
}

func (ptr *QTextBlockUserData) QTextBlockUserData_PTR() *QTextBlockUserData {
	return ptr
}

func (ptr *QTextBlockUserData) DestroyQTextBlockUserData() {
	if ptr.Pointer() != nil {
		C.QTextBlockUserData_DestroyQTextBlockUserData(ptr.Pointer())
	}
}
