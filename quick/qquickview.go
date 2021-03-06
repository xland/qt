package quick

//#include "qquickview.h"
import "C"
import (
	"github.com/therecipe/qt"
	"github.com/therecipe/qt/core"
	"github.com/therecipe/qt/gui"
	"github.com/therecipe/qt/qml"
	"unsafe"
)

type QQuickView struct {
	QQuickWindow
}

type QQuickView_ITF interface {
	QQuickWindow_ITF
	QQuickView_PTR() *QQuickView
}

func PointerFromQQuickView(ptr QQuickView_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QQuickView_PTR().Pointer()
	}
	return nil
}

func NewQQuickViewFromPointer(ptr unsafe.Pointer) *QQuickView {
	var n = new(QQuickView)
	n.SetPointer(ptr)
	if len(n.ObjectName()) == 0 {
		n.SetObjectName("QQuickView_" + qt.RandomIdentifier())
	}
	return n
}

func (ptr *QQuickView) QQuickView_PTR() *QQuickView {
	return ptr
}

//QQuickView::ResizeMode
type QQuickView__ResizeMode int64

const (
	QQuickView__SizeViewToRootObject = QQuickView__ResizeMode(0)
	QQuickView__SizeRootObjectToView = QQuickView__ResizeMode(1)
)

//QQuickView::Status
type QQuickView__Status int64

const (
	QQuickView__Null    = QQuickView__Status(0)
	QQuickView__Ready   = QQuickView__Status(1)
	QQuickView__Loading = QQuickView__Status(2)
	QQuickView__Error   = QQuickView__Status(3)
)

func (ptr *QQuickView) ResizeMode() QQuickView__ResizeMode {
	if ptr.Pointer() != nil {
		return QQuickView__ResizeMode(C.QQuickView_ResizeMode(ptr.Pointer()))
	}
	return 0
}

func (ptr *QQuickView) SetResizeMode(v QQuickView__ResizeMode) {
	if ptr.Pointer() != nil {
		C.QQuickView_SetResizeMode(ptr.Pointer(), C.int(v))
	}
}

func (ptr *QQuickView) Status() QQuickView__Status {
	if ptr.Pointer() != nil {
		return QQuickView__Status(C.QQuickView_Status(ptr.Pointer()))
	}
	return 0
}

func NewQQuickView2(engine qml.QQmlEngine_ITF, parent gui.QWindow_ITF) *QQuickView {
	return NewQQuickViewFromPointer(C.QQuickView_NewQQuickView2(qml.PointerFromQQmlEngine(engine), gui.PointerFromQWindow(parent)))
}

func NewQQuickView(parent gui.QWindow_ITF) *QQuickView {
	return NewQQuickViewFromPointer(C.QQuickView_NewQQuickView(gui.PointerFromQWindow(parent)))
}

func NewQQuickView3(source core.QUrl_ITF, parent gui.QWindow_ITF) *QQuickView {
	return NewQQuickViewFromPointer(C.QQuickView_NewQQuickView3(core.PointerFromQUrl(source), gui.PointerFromQWindow(parent)))
}

func (ptr *QQuickView) Engine() *qml.QQmlEngine {
	if ptr.Pointer() != nil {
		return qml.NewQQmlEngineFromPointer(C.QQuickView_Engine(ptr.Pointer()))
	}
	return nil
}

func (ptr *QQuickView) RootContext() *qml.QQmlContext {
	if ptr.Pointer() != nil {
		return qml.NewQQmlContextFromPointer(C.QQuickView_RootContext(ptr.Pointer()))
	}
	return nil
}

func (ptr *QQuickView) RootObject() *QQuickItem {
	if ptr.Pointer() != nil {
		return NewQQuickItemFromPointer(C.QQuickView_RootObject(ptr.Pointer()))
	}
	return nil
}

func (ptr *QQuickView) SetSource(url core.QUrl_ITF) {
	if ptr.Pointer() != nil {
		C.QQuickView_SetSource(ptr.Pointer(), core.PointerFromQUrl(url))
	}
}

func (ptr *QQuickView) ConnectStatusChanged(f func(status QQuickView__Status)) {
	if ptr.Pointer() != nil {
		C.QQuickView_ConnectStatusChanged(ptr.Pointer())
		qt.ConnectSignal(ptr.ObjectName(), "statusChanged", f)
	}
}

func (ptr *QQuickView) DisconnectStatusChanged() {
	if ptr.Pointer() != nil {
		C.QQuickView_DisconnectStatusChanged(ptr.Pointer())
		qt.DisconnectSignal(ptr.ObjectName(), "statusChanged")
	}
}

//export callbackQQuickViewStatusChanged
func callbackQQuickViewStatusChanged(ptrName *C.char, status C.int) {
	qt.GetSignal(C.GoString(ptrName), "statusChanged").(func(QQuickView__Status))(QQuickView__Status(status))
}

func (ptr *QQuickView) DestroyQQuickView() {
	if ptr.Pointer() != nil {
		C.QQuickView_DestroyQQuickView(ptr.Pointer())
		ptr.SetPointer(nil)
	}
}
