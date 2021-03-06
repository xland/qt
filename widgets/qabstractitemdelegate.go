package widgets

//#include "qabstractitemdelegate.h"
import "C"
import (
	"github.com/therecipe/qt"
	"github.com/therecipe/qt/core"
	"github.com/therecipe/qt/gui"
	"unsafe"
)

type QAbstractItemDelegate struct {
	core.QObject
}

type QAbstractItemDelegate_ITF interface {
	core.QObject_ITF
	QAbstractItemDelegate_PTR() *QAbstractItemDelegate
}

func PointerFromQAbstractItemDelegate(ptr QAbstractItemDelegate_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QAbstractItemDelegate_PTR().Pointer()
	}
	return nil
}

func NewQAbstractItemDelegateFromPointer(ptr unsafe.Pointer) *QAbstractItemDelegate {
	var n = new(QAbstractItemDelegate)
	n.SetPointer(ptr)
	if len(n.ObjectName()) == 0 {
		n.SetObjectName("QAbstractItemDelegate_" + qt.RandomIdentifier())
	}
	return n
}

func (ptr *QAbstractItemDelegate) QAbstractItemDelegate_PTR() *QAbstractItemDelegate {
	return ptr
}

//QAbstractItemDelegate::EndEditHint
type QAbstractItemDelegate__EndEditHint int64

const (
	QAbstractItemDelegate__NoHint           = QAbstractItemDelegate__EndEditHint(0)
	QAbstractItemDelegate__EditNextItem     = QAbstractItemDelegate__EndEditHint(1)
	QAbstractItemDelegate__EditPreviousItem = QAbstractItemDelegate__EndEditHint(2)
	QAbstractItemDelegate__SubmitModelCache = QAbstractItemDelegate__EndEditHint(3)
	QAbstractItemDelegate__RevertModelCache = QAbstractItemDelegate__EndEditHint(4)
)

func (ptr *QAbstractItemDelegate) ConnectCloseEditor(f func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_ConnectCloseEditor(ptr.Pointer())
		qt.ConnectSignal(ptr.ObjectName(), "closeEditor", f)
	}
}

func (ptr *QAbstractItemDelegate) DisconnectCloseEditor() {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_DisconnectCloseEditor(ptr.Pointer())
		qt.DisconnectSignal(ptr.ObjectName(), "closeEditor")
	}
}

//export callbackQAbstractItemDelegateCloseEditor
func callbackQAbstractItemDelegateCloseEditor(ptrName *C.char, editor unsafe.Pointer, hint C.int) {
	qt.GetSignal(C.GoString(ptrName), "closeEditor").(func(*QWidget, QAbstractItemDelegate__EndEditHint))(NewQWidgetFromPointer(editor), QAbstractItemDelegate__EndEditHint(hint))
}

func (ptr *QAbstractItemDelegate) ConnectCommitData(f func(editor *QWidget)) {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_ConnectCommitData(ptr.Pointer())
		qt.ConnectSignal(ptr.ObjectName(), "commitData", f)
	}
}

func (ptr *QAbstractItemDelegate) DisconnectCommitData() {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_DisconnectCommitData(ptr.Pointer())
		qt.DisconnectSignal(ptr.ObjectName(), "commitData")
	}
}

//export callbackQAbstractItemDelegateCommitData
func callbackQAbstractItemDelegateCommitData(ptrName *C.char, editor unsafe.Pointer) {
	qt.GetSignal(C.GoString(ptrName), "commitData").(func(*QWidget))(NewQWidgetFromPointer(editor))
}

func (ptr *QAbstractItemDelegate) CreateEditor(parent QWidget_ITF, option QStyleOptionViewItem_ITF, index core.QModelIndex_ITF) *QWidget {
	if ptr.Pointer() != nil {
		return NewQWidgetFromPointer(C.QAbstractItemDelegate_CreateEditor(ptr.Pointer(), PointerFromQWidget(parent), PointerFromQStyleOptionViewItem(option), core.PointerFromQModelIndex(index)))
	}
	return nil
}

func (ptr *QAbstractItemDelegate) DestroyEditor(editor QWidget_ITF, index core.QModelIndex_ITF) {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_DestroyEditor(ptr.Pointer(), PointerFromQWidget(editor), core.PointerFromQModelIndex(index))
	}
}

func (ptr *QAbstractItemDelegate) EditorEvent(event core.QEvent_ITF, model core.QAbstractItemModel_ITF, option QStyleOptionViewItem_ITF, index core.QModelIndex_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QAbstractItemDelegate_EditorEvent(ptr.Pointer(), core.PointerFromQEvent(event), core.PointerFromQAbstractItemModel(model), PointerFromQStyleOptionViewItem(option), core.PointerFromQModelIndex(index)) != 0
	}
	return false
}

func (ptr *QAbstractItemDelegate) HelpEvent(event gui.QHelpEvent_ITF, view QAbstractItemView_ITF, option QStyleOptionViewItem_ITF, index core.QModelIndex_ITF) bool {
	if ptr.Pointer() != nil {
		return C.QAbstractItemDelegate_HelpEvent(ptr.Pointer(), gui.PointerFromQHelpEvent(event), PointerFromQAbstractItemView(view), PointerFromQStyleOptionViewItem(option), core.PointerFromQModelIndex(index)) != 0
	}
	return false
}

func (ptr *QAbstractItemDelegate) Paint(painter gui.QPainter_ITF, option QStyleOptionViewItem_ITF, index core.QModelIndex_ITF) {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_Paint(ptr.Pointer(), gui.PointerFromQPainter(painter), PointerFromQStyleOptionViewItem(option), core.PointerFromQModelIndex(index))
	}
}

func (ptr *QAbstractItemDelegate) SetEditorData(editor QWidget_ITF, index core.QModelIndex_ITF) {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_SetEditorData(ptr.Pointer(), PointerFromQWidget(editor), core.PointerFromQModelIndex(index))
	}
}

func (ptr *QAbstractItemDelegate) SetModelData(editor QWidget_ITF, model core.QAbstractItemModel_ITF, index core.QModelIndex_ITF) {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_SetModelData(ptr.Pointer(), PointerFromQWidget(editor), core.PointerFromQAbstractItemModel(model), core.PointerFromQModelIndex(index))
	}
}

func (ptr *QAbstractItemDelegate) ConnectSizeHintChanged(f func(index *core.QModelIndex)) {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_ConnectSizeHintChanged(ptr.Pointer())
		qt.ConnectSignal(ptr.ObjectName(), "sizeHintChanged", f)
	}
}

func (ptr *QAbstractItemDelegate) DisconnectSizeHintChanged() {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_DisconnectSizeHintChanged(ptr.Pointer())
		qt.DisconnectSignal(ptr.ObjectName(), "sizeHintChanged")
	}
}

//export callbackQAbstractItemDelegateSizeHintChanged
func callbackQAbstractItemDelegateSizeHintChanged(ptrName *C.char, index unsafe.Pointer) {
	qt.GetSignal(C.GoString(ptrName), "sizeHintChanged").(func(*core.QModelIndex))(core.NewQModelIndexFromPointer(index))
}

func (ptr *QAbstractItemDelegate) UpdateEditorGeometry(editor QWidget_ITF, option QStyleOptionViewItem_ITF, index core.QModelIndex_ITF) {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_UpdateEditorGeometry(ptr.Pointer(), PointerFromQWidget(editor), PointerFromQStyleOptionViewItem(option), core.PointerFromQModelIndex(index))
	}
}

func (ptr *QAbstractItemDelegate) DestroyQAbstractItemDelegate() {
	if ptr.Pointer() != nil {
		C.QAbstractItemDelegate_DestroyQAbstractItemDelegate(ptr.Pointer())
		ptr.SetPointer(nil)
	}
}
