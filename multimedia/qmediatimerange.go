package multimedia

//#include "qmediatimerange.h"
import "C"
import (
	"unsafe"
)

type QMediaTimeRange struct {
	ptr unsafe.Pointer
}

type QMediaTimeRange_ITF interface {
	QMediaTimeRange_PTR() *QMediaTimeRange
}

func (p *QMediaTimeRange) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QMediaTimeRange) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQMediaTimeRange(ptr QMediaTimeRange_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QMediaTimeRange_PTR().Pointer()
	}
	return nil
}

func NewQMediaTimeRangeFromPointer(ptr unsafe.Pointer) *QMediaTimeRange {
	var n = new(QMediaTimeRange)
	n.SetPointer(ptr)
	return n
}

func (ptr *QMediaTimeRange) QMediaTimeRange_PTR() *QMediaTimeRange {
	return ptr
}

func NewQMediaTimeRange() *QMediaTimeRange {
	return NewQMediaTimeRangeFromPointer(C.QMediaTimeRange_NewQMediaTimeRange())
}

func NewQMediaTimeRange3(interval QMediaTimeInterval_ITF) *QMediaTimeRange {
	return NewQMediaTimeRangeFromPointer(C.QMediaTimeRange_NewQMediaTimeRange3(PointerFromQMediaTimeInterval(interval)))
}

func NewQMediaTimeRange4(ran QMediaTimeRange_ITF) *QMediaTimeRange {
	return NewQMediaTimeRangeFromPointer(C.QMediaTimeRange_NewQMediaTimeRange4(PointerFromQMediaTimeRange(ran)))
}

func (ptr *QMediaTimeRange) AddInterval(interval QMediaTimeInterval_ITF) {
	if ptr.Pointer() != nil {
		C.QMediaTimeRange_AddInterval(ptr.Pointer(), PointerFromQMediaTimeInterval(interval))
	}
}

func (ptr *QMediaTimeRange) AddTimeRange(ran QMediaTimeRange_ITF) {
	if ptr.Pointer() != nil {
		C.QMediaTimeRange_AddTimeRange(ptr.Pointer(), PointerFromQMediaTimeRange(ran))
	}
}

func (ptr *QMediaTimeRange) Clear() {
	if ptr.Pointer() != nil {
		C.QMediaTimeRange_Clear(ptr.Pointer())
	}
}

func (ptr *QMediaTimeRange) IsContinuous() bool {
	if ptr.Pointer() != nil {
		return C.QMediaTimeRange_IsContinuous(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QMediaTimeRange) IsEmpty() bool {
	if ptr.Pointer() != nil {
		return C.QMediaTimeRange_IsEmpty(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QMediaTimeRange) RemoveInterval(interval QMediaTimeInterval_ITF) {
	if ptr.Pointer() != nil {
		C.QMediaTimeRange_RemoveInterval(ptr.Pointer(), PointerFromQMediaTimeInterval(interval))
	}
}

func (ptr *QMediaTimeRange) RemoveTimeRange(ran QMediaTimeRange_ITF) {
	if ptr.Pointer() != nil {
		C.QMediaTimeRange_RemoveTimeRange(ptr.Pointer(), PointerFromQMediaTimeRange(ran))
	}
}

func (ptr *QMediaTimeRange) DestroyQMediaTimeRange() {
	if ptr.Pointer() != nil {
		C.QMediaTimeRange_DestroyQMediaTimeRange(ptr.Pointer())
	}
}
