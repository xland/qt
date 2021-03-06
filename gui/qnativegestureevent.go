package gui

//#include "qnativegestureevent.h"
import "C"
import (
	"github.com/therecipe/qt/core"
	"unsafe"
)

type QNativeGestureEvent struct {
	QInputEvent
}

type QNativeGestureEvent_ITF interface {
	QInputEvent_ITF
	QNativeGestureEvent_PTR() *QNativeGestureEvent
}

func PointerFromQNativeGestureEvent(ptr QNativeGestureEvent_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QNativeGestureEvent_PTR().Pointer()
	}
	return nil
}

func NewQNativeGestureEventFromPointer(ptr unsafe.Pointer) *QNativeGestureEvent {
	var n = new(QNativeGestureEvent)
	n.SetPointer(ptr)
	return n
}

func (ptr *QNativeGestureEvent) QNativeGestureEvent_PTR() *QNativeGestureEvent {
	return ptr
}

func (ptr *QNativeGestureEvent) GestureType() core.Qt__NativeGestureType {
	if ptr.Pointer() != nil {
		return core.Qt__NativeGestureType(C.QNativeGestureEvent_GestureType(ptr.Pointer()))
	}
	return 0
}

func (ptr *QNativeGestureEvent) Value() float64 {
	if ptr.Pointer() != nil {
		return float64(C.QNativeGestureEvent_Value(ptr.Pointer()))
	}
	return 0
}
