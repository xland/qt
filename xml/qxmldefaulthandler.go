package xml

//#include "qxmldefaulthandler.h"
import "C"
import (
	"unsafe"
)

type QXmlDefaultHandler struct {
	QXmlDTDHandler
	QXmlErrorHandler
	QXmlLexicalHandler
	QXmlEntityResolver
	QXmlContentHandler
	QXmlDeclHandler
}

type QXmlDefaultHandler_ITF interface {
	QXmlDTDHandler_ITF
	QXmlErrorHandler_ITF
	QXmlLexicalHandler_ITF
	QXmlEntityResolver_ITF
	QXmlContentHandler_ITF
	QXmlDeclHandler_ITF
	QXmlDefaultHandler_PTR() *QXmlDefaultHandler
}

func (p *QXmlDefaultHandler) Pointer() unsafe.Pointer {
	return p.QXmlDTDHandler_PTR().Pointer()
}

func (p *QXmlDefaultHandler) SetPointer(ptr unsafe.Pointer) {
	p.QXmlDTDHandler_PTR().SetPointer(ptr)
	p.QXmlErrorHandler_PTR().SetPointer(ptr)
	p.QXmlLexicalHandler_PTR().SetPointer(ptr)
	p.QXmlEntityResolver_PTR().SetPointer(ptr)
	p.QXmlContentHandler_PTR().SetPointer(ptr)
	p.QXmlDeclHandler_PTR().SetPointer(ptr)
}

func PointerFromQXmlDefaultHandler(ptr QXmlDefaultHandler_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QXmlDefaultHandler_PTR().Pointer()
	}
	return nil
}

func NewQXmlDefaultHandlerFromPointer(ptr unsafe.Pointer) *QXmlDefaultHandler {
	var n = new(QXmlDefaultHandler)
	n.SetPointer(ptr)
	return n
}

func (ptr *QXmlDefaultHandler) QXmlDefaultHandler_PTR() *QXmlDefaultHandler {
	return ptr
}

func NewQXmlDefaultHandler() *QXmlDefaultHandler {
	return NewQXmlDefaultHandlerFromPointer(C.QXmlDefaultHandler_NewQXmlDefaultHandler())
}

func (ptr *QXmlDefaultHandler) DestroyQXmlDefaultHandler() {
	if ptr.Pointer() != nil {
		C.QXmlDefaultHandler_DestroyQXmlDefaultHandler(ptr.Pointer())
	}
}

func (ptr *QXmlDefaultHandler) AttributeDecl(eName string, aName string, ty string, valueDefault string, value string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_AttributeDecl(ptr.Pointer(), C.CString(eName), C.CString(aName), C.CString(ty), C.CString(valueDefault), C.CString(value)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) Characters(ch string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_Characters(ptr.Pointer(), C.CString(ch)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) Comment(ch string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_Comment(ptr.Pointer(), C.CString(ch)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) EndCDATA() bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_EndCDATA(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) EndDTD() bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_EndDTD(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) EndDocument() bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_EndDocument(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) EndElement(namespaceURI string, localName string, qName string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_EndElement(ptr.Pointer(), C.CString(namespaceURI), C.CString(localName), C.CString(qName)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) EndEntity(name string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_EndEntity(ptr.Pointer(), C.CString(name)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) EndPrefixMapping(prefix string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_EndPrefixMapping(ptr.Pointer(), C.CString(prefix)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) Error(exception QXmlParseException_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_Error(ptr.Pointer(), PointerFromQXmlParseException(exception)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) ErrorString() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QXmlDefaultHandler_ErrorString(ptr.Pointer()))
	}
	return ""
}

func (ptr *QXmlDefaultHandler) ExternalEntityDecl(name string, publicId string, systemId string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_ExternalEntityDecl(ptr.Pointer(), C.CString(name), C.CString(publicId), C.CString(systemId)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) FatalError(exception QXmlParseException_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_FatalError(ptr.Pointer(), PointerFromQXmlParseException(exception)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) IgnorableWhitespace(ch string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_IgnorableWhitespace(ptr.Pointer(), C.CString(ch)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) InternalEntityDecl(name string, value string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_InternalEntityDecl(ptr.Pointer(), C.CString(name), C.CString(value)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) NotationDecl(name string, publicId string, systemId string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_NotationDecl(ptr.Pointer(), C.CString(name), C.CString(publicId), C.CString(systemId)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) ProcessingInstruction(target string, data string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_ProcessingInstruction(ptr.Pointer(), C.CString(target), C.CString(data)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) SetDocumentLocator(locator QXmlLocator_ITF) {
	if ptr.Pointer() != nil {
		C.QXmlDefaultHandler_SetDocumentLocator(ptr.Pointer(), PointerFromQXmlLocator(locator))
	}
}

func (ptr *QXmlDefaultHandler) SkippedEntity(name string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_SkippedEntity(ptr.Pointer(), C.CString(name)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) StartCDATA() bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_StartCDATA(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) StartDTD(name string, publicId string, systemId string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_StartDTD(ptr.Pointer(), C.CString(name), C.CString(publicId), C.CString(systemId)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) StartDocument() bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_StartDocument(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) StartElement(namespaceURI string, localName string, qName string, atts QXmlAttributes_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_StartElement(ptr.Pointer(), C.CString(namespaceURI), C.CString(localName), C.CString(qName), PointerFromQXmlAttributes(atts)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) StartEntity(name string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_StartEntity(ptr.Pointer(), C.CString(name)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) StartPrefixMapping(prefix string, uri string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_StartPrefixMapping(ptr.Pointer(), C.CString(prefix), C.CString(uri)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) UnparsedEntityDecl(name string, publicId string, systemId string, notationName string) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_UnparsedEntityDecl(ptr.Pointer(), C.CString(name), C.CString(publicId), C.CString(systemId), C.CString(notationName)) != 0
	}
	return false
}

func (ptr *QXmlDefaultHandler) Warning(exception QXmlParseException_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QXmlDefaultHandler_Warning(ptr.Pointer(), PointerFromQXmlParseException(exception)) != 0
	}
	return false
}
