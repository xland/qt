package network

//#include "qsslcipher.h"
import "C"
import (
	"unsafe"
)

type QSslCipher struct {
	ptr unsafe.Pointer
}

type QSslCipher_ITF interface {
	QSslCipher_PTR() *QSslCipher
}

func (p *QSslCipher) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QSslCipher) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQSslCipher(ptr QSslCipher_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QSslCipher_PTR().Pointer()
	}
	return nil
}

func NewQSslCipherFromPointer(ptr unsafe.Pointer) *QSslCipher {
	var n = new(QSslCipher)
	n.SetPointer(ptr)
	return n
}

func (ptr *QSslCipher) QSslCipher_PTR() *QSslCipher {
	return ptr
}

func NewQSslCipher() *QSslCipher {
	return NewQSslCipherFromPointer(C.QSslCipher_NewQSslCipher())
}

func NewQSslCipher4(other QSslCipher_ITF) *QSslCipher {
	return NewQSslCipherFromPointer(C.QSslCipher_NewQSslCipher4(PointerFromQSslCipher(other)))
}

func NewQSslCipher2(name string) *QSslCipher {
	return NewQSslCipherFromPointer(C.QSslCipher_NewQSslCipher2(C.CString(name)))
}

func (ptr *QSslCipher) AuthenticationMethod() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSslCipher_AuthenticationMethod(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSslCipher) EncryptionMethod() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSslCipher_EncryptionMethod(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSslCipher) IsNull() bool {
	if ptr.Pointer() != nil {
		return C.QSslCipher_IsNull(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QSslCipher) KeyExchangeMethod() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSslCipher_KeyExchangeMethod(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSslCipher) Name() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSslCipher_Name(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSslCipher) ProtocolString() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSslCipher_ProtocolString(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSslCipher) SupportedBits() int {
	if ptr.Pointer() != nil {
		return int(C.QSslCipher_SupportedBits(ptr.Pointer()))
	}
	return 0
}

func (ptr *QSslCipher) Swap(other QSslCipher_ITF) {
	if ptr.Pointer() != nil {
		C.QSslCipher_Swap(ptr.Pointer(), PointerFromQSslCipher(other))
	}
}

func (ptr *QSslCipher) UsedBits() int {
	if ptr.Pointer() != nil {
		return int(C.QSslCipher_UsedBits(ptr.Pointer()))
	}
	return 0
}

func (ptr *QSslCipher) DestroyQSslCipher() {
	if ptr.Pointer() != nil {
		C.QSslCipher_DestroyQSslCipher(ptr.Pointer())
	}
}
