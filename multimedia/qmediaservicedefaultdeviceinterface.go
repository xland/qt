package multimedia

//#include "qmediaservicedefaultdeviceinterface.h"
import "C"
import (
	"github.com/therecipe/qt/core"
	"unsafe"
)

type QMediaServiceDefaultDeviceInterface struct {
	ptr unsafe.Pointer
}

type QMediaServiceDefaultDeviceInterface_ITF interface {
	QMediaServiceDefaultDeviceInterface_PTR() *QMediaServiceDefaultDeviceInterface
}

func (p *QMediaServiceDefaultDeviceInterface) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QMediaServiceDefaultDeviceInterface) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQMediaServiceDefaultDeviceInterface(ptr QMediaServiceDefaultDeviceInterface_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QMediaServiceDefaultDeviceInterface_PTR().Pointer()
	}
	return nil
}

func NewQMediaServiceDefaultDeviceInterfaceFromPointer(ptr unsafe.Pointer) *QMediaServiceDefaultDeviceInterface {
	var n = new(QMediaServiceDefaultDeviceInterface)
	n.SetPointer(ptr)
	return n
}

func (ptr *QMediaServiceDefaultDeviceInterface) QMediaServiceDefaultDeviceInterface_PTR() *QMediaServiceDefaultDeviceInterface {
	return ptr
}

func (ptr *QMediaServiceDefaultDeviceInterface) DefaultDevice(service core.QByteArray_ITF) *core.QByteArray {
	if ptr.Pointer() != nil {
		return core.NewQByteArrayFromPointer(C.QMediaServiceDefaultDeviceInterface_DefaultDevice(ptr.Pointer(), core.PointerFromQByteArray(service)))
	}
	return nil
}

func (ptr *QMediaServiceDefaultDeviceInterface) DestroyQMediaServiceDefaultDeviceInterface() {
	if ptr.Pointer() != nil {
		C.QMediaServiceDefaultDeviceInterface_DestroyQMediaServiceDefaultDeviceInterface(ptr.Pointer())
	}
}
