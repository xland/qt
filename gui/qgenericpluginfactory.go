package gui

//#include "qgenericpluginfactory.h"
import "C"
import (
	"github.com/therecipe/qt/core"
	"strings"
	"unsafe"
)

type QGenericPluginFactory struct {
	ptr unsafe.Pointer
}

type QGenericPluginFactory_ITF interface {
	QGenericPluginFactory_PTR() *QGenericPluginFactory
}

func (p *QGenericPluginFactory) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QGenericPluginFactory) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQGenericPluginFactory(ptr QGenericPluginFactory_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QGenericPluginFactory_PTR().Pointer()
	}
	return nil
}

func NewQGenericPluginFactoryFromPointer(ptr unsafe.Pointer) *QGenericPluginFactory {
	var n = new(QGenericPluginFactory)
	n.SetPointer(ptr)
	return n
}

func (ptr *QGenericPluginFactory) QGenericPluginFactory_PTR() *QGenericPluginFactory {
	return ptr
}

func QGenericPluginFactory_Create(key string, specification string) *core.QObject {
	return core.NewQObjectFromPointer(C.QGenericPluginFactory_QGenericPluginFactory_Create(C.CString(key), C.CString(specification)))
}

func QGenericPluginFactory_Keys() []string {
	return strings.Split(C.GoString(C.QGenericPluginFactory_QGenericPluginFactory_Keys()), "|")
}
