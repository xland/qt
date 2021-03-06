package widgets

//#include "qgridlayout.h"
import "C"
import (
	"github.com/therecipe/qt"
	"github.com/therecipe/qt/core"
	"unsafe"
)

type QGridLayout struct {
	QLayout
}

type QGridLayout_ITF interface {
	QLayout_ITF
	QGridLayout_PTR() *QGridLayout
}

func PointerFromQGridLayout(ptr QGridLayout_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QGridLayout_PTR().Pointer()
	}
	return nil
}

func NewQGridLayoutFromPointer(ptr unsafe.Pointer) *QGridLayout {
	var n = new(QGridLayout)
	n.SetPointer(ptr)
	if len(n.ObjectName()) == 0 {
		n.SetObjectName("QGridLayout_" + qt.RandomIdentifier())
	}
	return n
}

func (ptr *QGridLayout) QGridLayout_PTR() *QGridLayout {
	return ptr
}

func (ptr *QGridLayout) HorizontalSpacing() int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_HorizontalSpacing(ptr.Pointer()))
	}
	return 0
}

func (ptr *QGridLayout) SetHorizontalSpacing(spacing int) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetHorizontalSpacing(ptr.Pointer(), C.int(spacing))
	}
}

func (ptr *QGridLayout) SetVerticalSpacing(spacing int) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetVerticalSpacing(ptr.Pointer(), C.int(spacing))
	}
}

func (ptr *QGridLayout) VerticalSpacing() int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_VerticalSpacing(ptr.Pointer()))
	}
	return 0
}

func NewQGridLayout2() *QGridLayout {
	return NewQGridLayoutFromPointer(C.QGridLayout_NewQGridLayout2())
}

func NewQGridLayout(parent QWidget_ITF) *QGridLayout {
	return NewQGridLayoutFromPointer(C.QGridLayout_NewQGridLayout(PointerFromQWidget(parent)))
}

func (ptr *QGridLayout) AddItem(item QLayoutItem_ITF, row int, column int, rowSpan int, columnSpan int, alignment core.Qt__AlignmentFlag) {
	if ptr.Pointer() != nil {
		C.QGridLayout_AddItem(ptr.Pointer(), PointerFromQLayoutItem(item), C.int(row), C.int(column), C.int(rowSpan), C.int(columnSpan), C.int(alignment))
	}
}

func (ptr *QGridLayout) AddLayout(layout QLayout_ITF, row int, column int, alignment core.Qt__AlignmentFlag) {
	if ptr.Pointer() != nil {
		C.QGridLayout_AddLayout(ptr.Pointer(), PointerFromQLayout(layout), C.int(row), C.int(column), C.int(alignment))
	}
}

func (ptr *QGridLayout) AddLayout2(layout QLayout_ITF, row int, column int, rowSpan int, columnSpan int, alignment core.Qt__AlignmentFlag) {
	if ptr.Pointer() != nil {
		C.QGridLayout_AddLayout2(ptr.Pointer(), PointerFromQLayout(layout), C.int(row), C.int(column), C.int(rowSpan), C.int(columnSpan), C.int(alignment))
	}
}

func (ptr *QGridLayout) AddWidget2(widget QWidget_ITF, fromRow int, fromColumn int, rowSpan int, columnSpan int, alignment core.Qt__AlignmentFlag) {
	if ptr.Pointer() != nil {
		C.QGridLayout_AddWidget2(ptr.Pointer(), PointerFromQWidget(widget), C.int(fromRow), C.int(fromColumn), C.int(rowSpan), C.int(columnSpan), C.int(alignment))
	}
}

func (ptr *QGridLayout) AddWidget(widget QWidget_ITF, row int, column int, alignment core.Qt__AlignmentFlag) {
	if ptr.Pointer() != nil {
		C.QGridLayout_AddWidget(ptr.Pointer(), PointerFromQWidget(widget), C.int(row), C.int(column), C.int(alignment))
	}
}

func (ptr *QGridLayout) ColumnCount() int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_ColumnCount(ptr.Pointer()))
	}
	return 0
}

func (ptr *QGridLayout) ColumnMinimumWidth(column int) int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_ColumnMinimumWidth(ptr.Pointer(), C.int(column)))
	}
	return 0
}

func (ptr *QGridLayout) ColumnStretch(column int) int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_ColumnStretch(ptr.Pointer(), C.int(column)))
	}
	return 0
}

func (ptr *QGridLayout) Count() int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_Count(ptr.Pointer()))
	}
	return 0
}

func (ptr *QGridLayout) ExpandingDirections() core.Qt__Orientation {
	if ptr.Pointer() != nil {
		return core.Qt__Orientation(C.QGridLayout_ExpandingDirections(ptr.Pointer()))
	}
	return 0
}

func (ptr *QGridLayout) GetItemPosition(index int, row int, column int, rowSpan int, columnSpan int) {
	if ptr.Pointer() != nil {
		C.QGridLayout_GetItemPosition(ptr.Pointer(), C.int(index), C.int(row), C.int(column), C.int(rowSpan), C.int(columnSpan))
	}
}

func (ptr *QGridLayout) HasHeightForWidth() bool {
	if ptr.Pointer() != nil {
		return C.QGridLayout_HasHeightForWidth(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QGridLayout) HeightForWidth(w int) int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_HeightForWidth(ptr.Pointer(), C.int(w)))
	}
	return 0
}

func (ptr *QGridLayout) Invalidate() {
	if ptr.Pointer() != nil {
		C.QGridLayout_Invalidate(ptr.Pointer())
	}
}

func (ptr *QGridLayout) ItemAt(index int) *QLayoutItem {
	if ptr.Pointer() != nil {
		return NewQLayoutItemFromPointer(C.QGridLayout_ItemAt(ptr.Pointer(), C.int(index)))
	}
	return nil
}

func (ptr *QGridLayout) ItemAtPosition(row int, column int) *QLayoutItem {
	if ptr.Pointer() != nil {
		return NewQLayoutItemFromPointer(C.QGridLayout_ItemAtPosition(ptr.Pointer(), C.int(row), C.int(column)))
	}
	return nil
}

func (ptr *QGridLayout) MinimumHeightForWidth(w int) int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_MinimumHeightForWidth(ptr.Pointer(), C.int(w)))
	}
	return 0
}

func (ptr *QGridLayout) OriginCorner() core.Qt__Corner {
	if ptr.Pointer() != nil {
		return core.Qt__Corner(C.QGridLayout_OriginCorner(ptr.Pointer()))
	}
	return 0
}

func (ptr *QGridLayout) RowCount() int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_RowCount(ptr.Pointer()))
	}
	return 0
}

func (ptr *QGridLayout) RowMinimumHeight(row int) int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_RowMinimumHeight(ptr.Pointer(), C.int(row)))
	}
	return 0
}

func (ptr *QGridLayout) RowStretch(row int) int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_RowStretch(ptr.Pointer(), C.int(row)))
	}
	return 0
}

func (ptr *QGridLayout) SetColumnMinimumWidth(column int, minSize int) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetColumnMinimumWidth(ptr.Pointer(), C.int(column), C.int(minSize))
	}
}

func (ptr *QGridLayout) SetColumnStretch(column int, stretch int) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetColumnStretch(ptr.Pointer(), C.int(column), C.int(stretch))
	}
}

func (ptr *QGridLayout) SetGeometry(rect core.QRect_ITF) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetGeometry(ptr.Pointer(), core.PointerFromQRect(rect))
	}
}

func (ptr *QGridLayout) SetOriginCorner(corner core.Qt__Corner) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetOriginCorner(ptr.Pointer(), C.int(corner))
	}
}

func (ptr *QGridLayout) SetRowMinimumHeight(row int, minSize int) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetRowMinimumHeight(ptr.Pointer(), C.int(row), C.int(minSize))
	}
}

func (ptr *QGridLayout) SetRowStretch(row int, stretch int) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetRowStretch(ptr.Pointer(), C.int(row), C.int(stretch))
	}
}

func (ptr *QGridLayout) SetSpacing(spacing int) {
	if ptr.Pointer() != nil {
		C.QGridLayout_SetSpacing(ptr.Pointer(), C.int(spacing))
	}
}

func (ptr *QGridLayout) Spacing() int {
	if ptr.Pointer() != nil {
		return int(C.QGridLayout_Spacing(ptr.Pointer()))
	}
	return 0
}

func (ptr *QGridLayout) TakeAt(index int) *QLayoutItem {
	if ptr.Pointer() != nil {
		return NewQLayoutItemFromPointer(C.QGridLayout_TakeAt(ptr.Pointer(), C.int(index)))
	}
	return nil
}

func (ptr *QGridLayout) DestroyQGridLayout() {
	if ptr.Pointer() != nil {
		C.QGridLayout_DestroyQGridLayout(ptr.Pointer())
		ptr.SetPointer(nil)
	}
}
