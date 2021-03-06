package core

//#include "qxmlstreamnotationdeclaration.h"
import "C"
import (
	"unsafe"
)

type QXmlStreamNotationDeclaration struct {
	ptr unsafe.Pointer
}

type QXmlStreamNotationDeclaration_ITF interface {
	QXmlStreamNotationDeclaration_PTR() *QXmlStreamNotationDeclaration
}

func (p *QXmlStreamNotationDeclaration) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QXmlStreamNotationDeclaration) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQXmlStreamNotationDeclaration(ptr QXmlStreamNotationDeclaration_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QXmlStreamNotationDeclaration_PTR().Pointer()
	}
	return nil
}

func NewQXmlStreamNotationDeclarationFromPointer(ptr unsafe.Pointer) *QXmlStreamNotationDeclaration {
	var n = new(QXmlStreamNotationDeclaration)
	n.SetPointer(ptr)
	return n
}

func (ptr *QXmlStreamNotationDeclaration) QXmlStreamNotationDeclaration_PTR() *QXmlStreamNotationDeclaration {
	return ptr
}

func NewQXmlStreamNotationDeclaration() *QXmlStreamNotationDeclaration {
	return NewQXmlStreamNotationDeclarationFromPointer(C.QXmlStreamNotationDeclaration_NewQXmlStreamNotationDeclaration())
}

func NewQXmlStreamNotationDeclaration2(other QXmlStreamNotationDeclaration_ITF) *QXmlStreamNotationDeclaration {
	return NewQXmlStreamNotationDeclarationFromPointer(C.QXmlStreamNotationDeclaration_NewQXmlStreamNotationDeclaration2(PointerFromQXmlStreamNotationDeclaration(other)))
}

func (ptr *QXmlStreamNotationDeclaration) Name() *QStringRef {
	if ptr.Pointer() != nil {
		return NewQStringRefFromPointer(C.QXmlStreamNotationDeclaration_Name(ptr.Pointer()))
	}
	return nil
}

func (ptr *QXmlStreamNotationDeclaration) PublicId() *QStringRef {
	if ptr.Pointer() != nil {
		return NewQStringRefFromPointer(C.QXmlStreamNotationDeclaration_PublicId(ptr.Pointer()))
	}
	return nil
}

func (ptr *QXmlStreamNotationDeclaration) SystemId() *QStringRef {
	if ptr.Pointer() != nil {
		return NewQStringRefFromPointer(C.QXmlStreamNotationDeclaration_SystemId(ptr.Pointer()))
	}
	return nil
}

func (ptr *QXmlStreamNotationDeclaration) DestroyQXmlStreamNotationDeclaration() {
	if ptr.Pointer() != nil {
		C.QXmlStreamNotationDeclaration_DestroyQXmlStreamNotationDeclaration(ptr.Pointer())
	}
}
