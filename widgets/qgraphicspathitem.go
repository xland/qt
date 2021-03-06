package widgets

//#include "qgraphicspathitem.h"
import "C"
import (
	"github.com/therecipe/qt/core"
	"github.com/therecipe/qt/gui"
	"unsafe"
)

type QGraphicsPathItem struct {
	QAbstractGraphicsShapeItem
}

type QGraphicsPathItem_ITF interface {
	QAbstractGraphicsShapeItem_ITF
	QGraphicsPathItem_PTR() *QGraphicsPathItem
}

func PointerFromQGraphicsPathItem(ptr QGraphicsPathItem_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QGraphicsPathItem_PTR().Pointer()
	}
	return nil
}

func NewQGraphicsPathItemFromPointer(ptr unsafe.Pointer) *QGraphicsPathItem {
	var n = new(QGraphicsPathItem)
	n.SetPointer(ptr)
	return n
}

func (ptr *QGraphicsPathItem) QGraphicsPathItem_PTR() *QGraphicsPathItem {
	return ptr
}

func (ptr *QGraphicsPathItem) Contains(point core.QPointF_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QGraphicsPathItem_Contains(ptr.Pointer(), core.PointerFromQPointF(point)) != 0
	}
	return false
}

func (ptr *QGraphicsPathItem) IsObscuredBy(item QGraphicsItem_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QGraphicsPathItem_IsObscuredBy(ptr.Pointer(), PointerFromQGraphicsItem(item)) != 0
	}
	return false
}

func (ptr *QGraphicsPathItem) Paint(painter gui.QPainter_ITF, option QStyleOptionGraphicsItem_ITF, widget QWidget_ITF) {
	if ptr.Pointer() != nil {
		C.QGraphicsPathItem_Paint(ptr.Pointer(), gui.PointerFromQPainter(painter), PointerFromQStyleOptionGraphicsItem(option), PointerFromQWidget(widget))
	}
}

func (ptr *QGraphicsPathItem) SetPath(path gui.QPainterPath_ITF) {
	if ptr.Pointer() != nil {
		C.QGraphicsPathItem_SetPath(ptr.Pointer(), gui.PointerFromQPainterPath(path))
	}
}

func (ptr *QGraphicsPathItem) Type() int {
	if ptr.Pointer() != nil {
		return int(C.QGraphicsPathItem_Type(ptr.Pointer()))
	}
	return 0
}

func (ptr *QGraphicsPathItem) DestroyQGraphicsPathItem() {
	if ptr.Pointer() != nil {
		C.QGraphicsPathItem_DestroyQGraphicsPathItem(ptr.Pointer())
	}
}
