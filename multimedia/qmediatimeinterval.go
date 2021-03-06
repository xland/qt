package multimedia

//#include "qmediatimeinterval.h"
import "C"
import (
	"unsafe"
)

type QMediaTimeInterval struct {
	ptr unsafe.Pointer
}

type QMediaTimeInterval_ITF interface {
	QMediaTimeInterval_PTR() *QMediaTimeInterval
}

func (p *QMediaTimeInterval) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QMediaTimeInterval) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQMediaTimeInterval(ptr QMediaTimeInterval_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QMediaTimeInterval_PTR().Pointer()
	}
	return nil
}

func NewQMediaTimeIntervalFromPointer(ptr unsafe.Pointer) *QMediaTimeInterval {
	var n = new(QMediaTimeInterval)
	n.SetPointer(ptr)
	return n
}

func (ptr *QMediaTimeInterval) QMediaTimeInterval_PTR() *QMediaTimeInterval {
	return ptr
}

func NewQMediaTimeInterval() *QMediaTimeInterval {
	return NewQMediaTimeIntervalFromPointer(C.QMediaTimeInterval_NewQMediaTimeInterval())
}

func NewQMediaTimeInterval3(other QMediaTimeInterval_ITF) *QMediaTimeInterval {
	return NewQMediaTimeIntervalFromPointer(C.QMediaTimeInterval_NewQMediaTimeInterval3(PointerFromQMediaTimeInterval(other)))
}

func (ptr *QMediaTimeInterval) IsNormal() bool {
	if ptr.Pointer() != nil {
		return C.QMediaTimeInterval_IsNormal(ptr.Pointer()) != 0
	}
	return false
}
