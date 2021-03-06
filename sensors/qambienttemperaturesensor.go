package sensors

//#include "qambienttemperaturesensor.h"
import "C"
import (
	"github.com/therecipe/qt"
	"github.com/therecipe/qt/core"
	"unsafe"
)

type QAmbientTemperatureSensor struct {
	QSensor
}

type QAmbientTemperatureSensor_ITF interface {
	QSensor_ITF
	QAmbientTemperatureSensor_PTR() *QAmbientTemperatureSensor
}

func PointerFromQAmbientTemperatureSensor(ptr QAmbientTemperatureSensor_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QAmbientTemperatureSensor_PTR().Pointer()
	}
	return nil
}

func NewQAmbientTemperatureSensorFromPointer(ptr unsafe.Pointer) *QAmbientTemperatureSensor {
	var n = new(QAmbientTemperatureSensor)
	n.SetPointer(ptr)
	if len(n.ObjectName()) == 0 {
		n.SetObjectName("QAmbientTemperatureSensor_" + qt.RandomIdentifier())
	}
	return n
}

func (ptr *QAmbientTemperatureSensor) QAmbientTemperatureSensor_PTR() *QAmbientTemperatureSensor {
	return ptr
}

func (ptr *QAmbientTemperatureSensor) Reading() *QAmbientTemperatureReading {
	if ptr.Pointer() != nil {
		return NewQAmbientTemperatureReadingFromPointer(C.QAmbientTemperatureSensor_Reading(ptr.Pointer()))
	}
	return nil
}

func NewQAmbientTemperatureSensor(parent core.QObject_ITF) *QAmbientTemperatureSensor {
	return NewQAmbientTemperatureSensorFromPointer(C.QAmbientTemperatureSensor_NewQAmbientTemperatureSensor(core.PointerFromQObject(parent)))
}

func (ptr *QAmbientTemperatureSensor) DestroyQAmbientTemperatureSensor() {
	if ptr.Pointer() != nil {
		C.QAmbientTemperatureSensor_DestroyQAmbientTemperatureSensor(ptr.Pointer())
		ptr.SetPointer(nil)
	}
}
