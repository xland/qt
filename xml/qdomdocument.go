package xml

//#include "qdomdocument.h"
import "C"
import (
	"github.com/therecipe/qt"
	"github.com/therecipe/qt/core"
	"unsafe"
)

type QDomDocument struct {
	QDomNode
}

type QDomDocument_ITF interface {
	QDomNode_ITF
	QDomDocument_PTR() *QDomDocument
}

func PointerFromQDomDocument(ptr QDomDocument_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QDomDocument_PTR().Pointer()
	}
	return nil
}

func NewQDomDocumentFromPointer(ptr unsafe.Pointer) *QDomDocument {
	var n = new(QDomDocument)
	n.SetPointer(ptr)
	return n
}

func (ptr *QDomDocument) QDomDocument_PTR() *QDomDocument {
	return ptr
}

func NewQDomDocument() *QDomDocument {
	return NewQDomDocumentFromPointer(C.QDomDocument_NewQDomDocument())
}

func NewQDomDocument4(x QDomDocument_ITF) *QDomDocument {
	return NewQDomDocumentFromPointer(C.QDomDocument_NewQDomDocument4(PointerFromQDomDocument(x)))
}

func NewQDomDocument3(doctype QDomDocumentType_ITF) *QDomDocument {
	return NewQDomDocumentFromPointer(C.QDomDocument_NewQDomDocument3(PointerFromQDomDocumentType(doctype)))
}

func NewQDomDocument2(name string) *QDomDocument {
	return NewQDomDocumentFromPointer(C.QDomDocument_NewQDomDocument2(C.CString(name)))
}

func (ptr *QDomDocument) NodeType() QDomNode__NodeType {
	if ptr.Pointer() != nil {
		return QDomNode__NodeType(C.QDomDocument_NodeType(ptr.Pointer()))
	}
	return 0
}

func (ptr *QDomDocument) SetContent7(dev core.QIODevice_ITF, errorMsg string, errorLine int, errorColumn int) bool {
	if ptr.Pointer() != nil {
		return C.QDomDocument_SetContent7(ptr.Pointer(), core.PointerFromQIODevice(dev), C.CString(errorMsg), C.int(errorLine), C.int(errorColumn)) != 0
	}
	return false
}

func (ptr *QDomDocument) SetContent3(dev core.QIODevice_ITF, namespaceProcessing bool, errorMsg string, errorLine int, errorColumn int) bool {
	if ptr.Pointer() != nil {
		return C.QDomDocument_SetContent3(ptr.Pointer(), core.PointerFromQIODevice(dev), C.int(qt.GoBoolToInt(namespaceProcessing)), C.CString(errorMsg), C.int(errorLine), C.int(errorColumn)) != 0
	}
	return false
}

func (ptr *QDomDocument) SetContent8(source QXmlInputSource_ITF, reader QXmlReader_ITF, errorMsg string, errorLine int, errorColumn int) bool {
	if ptr.Pointer() != nil {
		return C.QDomDocument_SetContent8(ptr.Pointer(), PointerFromQXmlInputSource(source), PointerFromQXmlReader(reader), C.CString(errorMsg), C.int(errorLine), C.int(errorColumn)) != 0
	}
	return false
}

func (ptr *QDomDocument) SetContent4(source QXmlInputSource_ITF, namespaceProcessing bool, errorMsg string, errorLine int, errorColumn int) bool {
	if ptr.Pointer() != nil {
		return C.QDomDocument_SetContent4(ptr.Pointer(), PointerFromQXmlInputSource(source), C.int(qt.GoBoolToInt(namespaceProcessing)), C.CString(errorMsg), C.int(errorLine), C.int(errorColumn)) != 0
	}
	return false
}

func (ptr *QDomDocument) SetContent6(buffer core.QByteArray_ITF, errorMsg string, errorLine int, errorColumn int) bool {
	if ptr.Pointer() != nil {
		return C.QDomDocument_SetContent6(ptr.Pointer(), core.PointerFromQByteArray(buffer), C.CString(errorMsg), C.int(errorLine), C.int(errorColumn)) != 0
	}
	return false
}

func (ptr *QDomDocument) SetContent(data core.QByteArray_ITF, namespaceProcessing bool, errorMsg string, errorLine int, errorColumn int) bool {
	if ptr.Pointer() != nil {
		return C.QDomDocument_SetContent(ptr.Pointer(), core.PointerFromQByteArray(data), C.int(qt.GoBoolToInt(namespaceProcessing)), C.CString(errorMsg), C.int(errorLine), C.int(errorColumn)) != 0
	}
	return false
}

func (ptr *QDomDocument) SetContent5(text string, errorMsg string, errorLine int, errorColumn int) bool {
	if ptr.Pointer() != nil {
		return C.QDomDocument_SetContent5(ptr.Pointer(), C.CString(text), C.CString(errorMsg), C.int(errorLine), C.int(errorColumn)) != 0
	}
	return false
}

func (ptr *QDomDocument) SetContent2(text string, namespaceProcessing bool, errorMsg string, errorLine int, errorColumn int) bool {
	if ptr.Pointer() != nil {
		return C.QDomDocument_SetContent2(ptr.Pointer(), C.CString(text), C.int(qt.GoBoolToInt(namespaceProcessing)), C.CString(errorMsg), C.int(errorLine), C.int(errorColumn)) != 0
	}
	return false
}

func (ptr *QDomDocument) ToByteArray(indent int) *core.QByteArray {
	if ptr.Pointer() != nil {
		return core.NewQByteArrayFromPointer(C.QDomDocument_ToByteArray(ptr.Pointer(), C.int(indent)))
	}
	return nil
}

func (ptr *QDomDocument) ToString(indent int) string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QDomDocument_ToString(ptr.Pointer(), C.int(indent)))
	}
	return ""
}

func (ptr *QDomDocument) DestroyQDomDocument() {
	if ptr.Pointer() != nil {
		C.QDomDocument_DestroyQDomDocument(ptr.Pointer())
	}
}
