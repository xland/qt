package sensors

//#include "qlightfilter.h"
import "C"
import (
	"unsafe"
)

type QLightFilter struct {
	QSensorFilter
}

type QLightFilter_ITF interface {
	QSensorFilter_ITF
	QLightFilter_PTR() *QLightFilter
}

func PointerFromQLightFilter(ptr QLightFilter_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QLightFilter_PTR().Pointer()
	}
	return nil
}

func NewQLightFilterFromPointer(ptr unsafe.Pointer) *QLightFilter {
	var n = new(QLightFilter)
	n.SetPointer(ptr)
	return n
}

func (ptr *QLightFilter) QLightFilter_PTR() *QLightFilter {
	return ptr
}

func (ptr *QLightFilter) Filter(reading QLightReading_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QLightFilter_Filter(ptr.Pointer(), PointerFromQLightReading(reading)) != 0
	}
	return false
}
