package gui

//#include "qtextdocumentwriter.h"
import "C"
import (
	"github.com/therecipe/qt/core"
	"unsafe"
)

type QTextDocumentWriter struct {
	ptr unsafe.Pointer
}

type QTextDocumentWriter_ITF interface {
	QTextDocumentWriter_PTR() *QTextDocumentWriter
}

func (p *QTextDocumentWriter) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QTextDocumentWriter) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQTextDocumentWriter(ptr QTextDocumentWriter_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QTextDocumentWriter_PTR().Pointer()
	}
	return nil
}

func NewQTextDocumentWriterFromPointer(ptr unsafe.Pointer) *QTextDocumentWriter {
	var n = new(QTextDocumentWriter)
	n.SetPointer(ptr)
	return n
}

func (ptr *QTextDocumentWriter) QTextDocumentWriter_PTR() *QTextDocumentWriter {
	return ptr
}

func NewQTextDocumentWriter() *QTextDocumentWriter {
	return NewQTextDocumentWriterFromPointer(C.QTextDocumentWriter_NewQTextDocumentWriter())
}

func NewQTextDocumentWriter2(device core.QIODevice_ITF, format core.QByteArray_ITF) *QTextDocumentWriter {
	return NewQTextDocumentWriterFromPointer(C.QTextDocumentWriter_NewQTextDocumentWriter2(core.PointerFromQIODevice(device), core.PointerFromQByteArray(format)))
}

func NewQTextDocumentWriter3(fileName string, format core.QByteArray_ITF) *QTextDocumentWriter {
	return NewQTextDocumentWriterFromPointer(C.QTextDocumentWriter_NewQTextDocumentWriter3(C.CString(fileName), core.PointerFromQByteArray(format)))
}

func (ptr *QTextDocumentWriter) Codec() *core.QTextCodec {
	if ptr.Pointer() != nil {
		return core.NewQTextCodecFromPointer(C.QTextDocumentWriter_Codec(ptr.Pointer()))
	}
	return nil
}

func (ptr *QTextDocumentWriter) Device() *core.QIODevice {
	if ptr.Pointer() != nil {
		return core.NewQIODeviceFromPointer(C.QTextDocumentWriter_Device(ptr.Pointer()))
	}
	return nil
}

func (ptr *QTextDocumentWriter) FileName() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QTextDocumentWriter_FileName(ptr.Pointer()))
	}
	return ""
}

func (ptr *QTextDocumentWriter) Format() *core.QByteArray {
	if ptr.Pointer() != nil {
		return core.NewQByteArrayFromPointer(C.QTextDocumentWriter_Format(ptr.Pointer()))
	}
	return nil
}

func (ptr *QTextDocumentWriter) SetCodec(codec core.QTextCodec_ITF) {
	if ptr.Pointer() != nil {
		C.QTextDocumentWriter_SetCodec(ptr.Pointer(), core.PointerFromQTextCodec(codec))
	}
}

func (ptr *QTextDocumentWriter) SetDevice(device core.QIODevice_ITF) {
	if ptr.Pointer() != nil {
		C.QTextDocumentWriter_SetDevice(ptr.Pointer(), core.PointerFromQIODevice(device))
	}
}

func (ptr *QTextDocumentWriter) SetFileName(fileName string) {
	if ptr.Pointer() != nil {
		C.QTextDocumentWriter_SetFileName(ptr.Pointer(), C.CString(fileName))
	}
}

func (ptr *QTextDocumentWriter) SetFormat(format core.QByteArray_ITF) {
	if ptr.Pointer() != nil {
		C.QTextDocumentWriter_SetFormat(ptr.Pointer(), core.PointerFromQByteArray(format))
	}
}

func (ptr *QTextDocumentWriter) Write(document QTextDocument_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QTextDocumentWriter_Write(ptr.Pointer(), PointerFromQTextDocument(document)) != 0
	}
	return false
}

func (ptr *QTextDocumentWriter) Write2(fragment QTextDocumentFragment_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QTextDocumentWriter_Write2(ptr.Pointer(), PointerFromQTextDocumentFragment(fragment)) != 0
	}
	return false
}

func (ptr *QTextDocumentWriter) DestroyQTextDocumentWriter() {
	if ptr.Pointer() != nil {
		C.QTextDocumentWriter_DestroyQTextDocumentWriter(ptr.Pointer())
	}
}
