package sensors

//#include "qgyroscopefilter.h"
import "C"
import (
	"unsafe"
)

type QGyroscopeFilter struct {
	QSensorFilter
}

type QGyroscopeFilter_ITF interface {
	QSensorFilter_ITF
	QGyroscopeFilter_PTR() *QGyroscopeFilter
}

func PointerFromQGyroscopeFilter(ptr QGyroscopeFilter_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QGyroscopeFilter_PTR().Pointer()
	}
	return nil
}

func NewQGyroscopeFilterFromPointer(ptr unsafe.Pointer) *QGyroscopeFilter {
	var n = new(QGyroscopeFilter)
	n.SetPointer(ptr)
	return n
}

func (ptr *QGyroscopeFilter) QGyroscopeFilter_PTR() *QGyroscopeFilter {
	return ptr
}

func (ptr *QGyroscopeFilter) Filter(reading QGyroscopeReading_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QGyroscopeFilter_Filter(ptr.Pointer(), PointerFromQGyroscopeReading(reading)) != 0
	}
	return false
}
