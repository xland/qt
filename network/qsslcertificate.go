package network

//#include "qsslcertificate.h"
import "C"
import (
	"github.com/therecipe/qt/core"
	"strings"
	"unsafe"
)

type QSslCertificate struct {
	ptr unsafe.Pointer
}

type QSslCertificate_ITF interface {
	QSslCertificate_PTR() *QSslCertificate
}

func (p *QSslCertificate) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QSslCertificate) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQSslCertificate(ptr QSslCertificate_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QSslCertificate_PTR().Pointer()
	}
	return nil
}

func NewQSslCertificateFromPointer(ptr unsafe.Pointer) *QSslCertificate {
	var n = new(QSslCertificate)
	n.SetPointer(ptr)
	return n
}

func (ptr *QSslCertificate) QSslCertificate_PTR() *QSslCertificate {
	return ptr
}

//QSslCertificate::SubjectInfo
type QSslCertificate__SubjectInfo int64

const (
	QSslCertificate__Organization               = QSslCertificate__SubjectInfo(0)
	QSslCertificate__CommonName                 = QSslCertificate__SubjectInfo(1)
	QSslCertificate__LocalityName               = QSslCertificate__SubjectInfo(2)
	QSslCertificate__OrganizationalUnitName     = QSslCertificate__SubjectInfo(3)
	QSslCertificate__CountryName                = QSslCertificate__SubjectInfo(4)
	QSslCertificate__StateOrProvinceName        = QSslCertificate__SubjectInfo(5)
	QSslCertificate__DistinguishedNameQualifier = QSslCertificate__SubjectInfo(6)
	QSslCertificate__SerialNumber               = QSslCertificate__SubjectInfo(7)
	QSslCertificate__EmailAddress               = QSslCertificate__SubjectInfo(8)
)

func NewQSslCertificate3(other QSslCertificate_ITF) *QSslCertificate {
	return NewQSslCertificateFromPointer(C.QSslCertificate_NewQSslCertificate3(PointerFromQSslCertificate(other)))
}

func (ptr *QSslCertificate) Clear() {
	if ptr.Pointer() != nil {
		C.QSslCertificate_Clear(ptr.Pointer())
	}
}

func (ptr *QSslCertificate) Digest(algorithm core.QCryptographicHash__Algorithm) *core.QByteArray {
	if ptr.Pointer() != nil {
		return core.NewQByteArrayFromPointer(C.QSslCertificate_Digest(ptr.Pointer(), C.int(algorithm)))
	}
	return nil
}

func (ptr *QSslCertificate) IsBlacklisted() bool {
	if ptr.Pointer() != nil {
		return C.QSslCertificate_IsBlacklisted(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QSslCertificate) Swap(other QSslCertificate_ITF) {
	if ptr.Pointer() != nil {
		C.QSslCertificate_Swap(ptr.Pointer(), PointerFromQSslCertificate(other))
	}
}

func (ptr *QSslCertificate) DestroyQSslCertificate() {
	if ptr.Pointer() != nil {
		C.QSslCertificate_DestroyQSslCertificate(ptr.Pointer())
	}
}

func (ptr *QSslCertificate) EffectiveDate() *core.QDateTime {
	if ptr.Pointer() != nil {
		return core.NewQDateTimeFromPointer(C.QSslCertificate_EffectiveDate(ptr.Pointer()))
	}
	return nil
}

func (ptr *QSslCertificate) ExpiryDate() *core.QDateTime {
	if ptr.Pointer() != nil {
		return core.NewQDateTimeFromPointer(C.QSslCertificate_ExpiryDate(ptr.Pointer()))
	}
	return nil
}

func (ptr *QSslCertificate) IsNull() bool {
	if ptr.Pointer() != nil {
		return C.QSslCertificate_IsNull(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QSslCertificate) IsSelfSigned() bool {
	if ptr.Pointer() != nil {
		return C.QSslCertificate_IsSelfSigned(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QSslCertificate) IssuerInfo(subject QSslCertificate__SubjectInfo) []string {
	if ptr.Pointer() != nil {
		return strings.Split(C.GoString(C.QSslCertificate_IssuerInfo(ptr.Pointer(), C.int(subject))), "|")
	}
	return make([]string, 0)
}

func (ptr *QSslCertificate) IssuerInfo2(attribute core.QByteArray_ITF) []string {
	if ptr.Pointer() != nil {
		return strings.Split(C.GoString(C.QSslCertificate_IssuerInfo2(ptr.Pointer(), core.PointerFromQByteArray(attribute))), "|")
	}
	return make([]string, 0)
}

func (ptr *QSslCertificate) SerialNumber() *core.QByteArray {
	if ptr.Pointer() != nil {
		return core.NewQByteArrayFromPointer(C.QSslCertificate_SerialNumber(ptr.Pointer()))
	}
	return nil
}

func (ptr *QSslCertificate) SubjectInfo(subject QSslCertificate__SubjectInfo) []string {
	if ptr.Pointer() != nil {
		return strings.Split(C.GoString(C.QSslCertificate_SubjectInfo(ptr.Pointer(), C.int(subject))), "|")
	}
	return make([]string, 0)
}

func (ptr *QSslCertificate) SubjectInfo2(attribute core.QByteArray_ITF) []string {
	if ptr.Pointer() != nil {
		return strings.Split(C.GoString(C.QSslCertificate_SubjectInfo2(ptr.Pointer(), core.PointerFromQByteArray(attribute))), "|")
	}
	return make([]string, 0)
}

func (ptr *QSslCertificate) ToDer() *core.QByteArray {
	if ptr.Pointer() != nil {
		return core.NewQByteArrayFromPointer(C.QSslCertificate_ToDer(ptr.Pointer()))
	}
	return nil
}

func (ptr *QSslCertificate) ToPem() *core.QByteArray {
	if ptr.Pointer() != nil {
		return core.NewQByteArrayFromPointer(C.QSslCertificate_ToPem(ptr.Pointer()))
	}
	return nil
}

func (ptr *QSslCertificate) ToText() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSslCertificate_ToText(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSslCertificate) Version() *core.QByteArray {
	if ptr.Pointer() != nil {
		return core.NewQByteArrayFromPointer(C.QSslCertificate_Version(ptr.Pointer()))
	}
	return nil
}
