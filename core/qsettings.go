package core

//#include "qsettings.h"
import "C"
import (
	"github.com/therecipe/qt"
	"strings"
	"unsafe"
)

type QSettings struct {
	QObject
}

type QSettings_ITF interface {
	QObject_ITF
	QSettings_PTR() *QSettings
}

func PointerFromQSettings(ptr QSettings_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QSettings_PTR().Pointer()
	}
	return nil
}

func NewQSettingsFromPointer(ptr unsafe.Pointer) *QSettings {
	var n = new(QSettings)
	n.SetPointer(ptr)
	if len(n.ObjectName()) == 0 {
		n.SetObjectName("QSettings_" + qt.RandomIdentifier())
	}
	return n
}

func (ptr *QSettings) QSettings_PTR() *QSettings {
	return ptr
}

//QSettings::Format
type QSettings__Format int64

const (
	QSettings__NativeFormat   = QSettings__Format(0)
	QSettings__IniFormat      = QSettings__Format(1)
	QSettings__InvalidFormat  = QSettings__Format(16)
	QSettings__CustomFormat1  = QSettings__Format(17)
	QSettings__CustomFormat2  = QSettings__Format(18)
	QSettings__CustomFormat3  = QSettings__Format(19)
	QSettings__CustomFormat4  = QSettings__Format(20)
	QSettings__CustomFormat5  = QSettings__Format(21)
	QSettings__CustomFormat6  = QSettings__Format(22)
	QSettings__CustomFormat7  = QSettings__Format(23)
	QSettings__CustomFormat8  = QSettings__Format(24)
	QSettings__CustomFormat9  = QSettings__Format(25)
	QSettings__CustomFormat10 = QSettings__Format(26)
	QSettings__CustomFormat11 = QSettings__Format(27)
	QSettings__CustomFormat12 = QSettings__Format(28)
	QSettings__CustomFormat13 = QSettings__Format(29)
	QSettings__CustomFormat14 = QSettings__Format(30)
	QSettings__CustomFormat15 = QSettings__Format(31)
	QSettings__CustomFormat16 = QSettings__Format(32)
)

//QSettings::Scope
type QSettings__Scope int64

const (
	QSettings__UserScope   = QSettings__Scope(0)
	QSettings__SystemScope = QSettings__Scope(1)
)

//QSettings::Status
type QSettings__Status int64

const (
	QSettings__NoError     = QSettings__Status(0)
	QSettings__AccessError = QSettings__Status(1)
	QSettings__FormatError = QSettings__Status(2)
)

func NewQSettings3(format QSettings__Format, scope QSettings__Scope, organization string, application string, parent QObject_ITF) *QSettings {
	return NewQSettingsFromPointer(C.QSettings_NewQSettings3(C.int(format), C.int(scope), C.CString(organization), C.CString(application), PointerFromQObject(parent)))
}

func NewQSettings5(parent QObject_ITF) *QSettings {
	return NewQSettingsFromPointer(C.QSettings_NewQSettings5(PointerFromQObject(parent)))
}

func NewQSettings2(scope QSettings__Scope, organization string, application string, parent QObject_ITF) *QSettings {
	return NewQSettingsFromPointer(C.QSettings_NewQSettings2(C.int(scope), C.CString(organization), C.CString(application), PointerFromQObject(parent)))
}

func NewQSettings4(fileName string, format QSettings__Format, parent QObject_ITF) *QSettings {
	return NewQSettingsFromPointer(C.QSettings_NewQSettings4(C.CString(fileName), C.int(format), PointerFromQObject(parent)))
}

func NewQSettings(organization string, application string, parent QObject_ITF) *QSettings {
	return NewQSettingsFromPointer(C.QSettings_NewQSettings(C.CString(organization), C.CString(application), PointerFromQObject(parent)))
}

func (ptr *QSettings) AllKeys() []string {
	if ptr.Pointer() != nil {
		return strings.Split(C.GoString(C.QSettings_AllKeys(ptr.Pointer())), "|")
	}
	return make([]string, 0)
}

func (ptr *QSettings) ApplicationName() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSettings_ApplicationName(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSettings) BeginGroup(prefix string) {
	if ptr.Pointer() != nil {
		C.QSettings_BeginGroup(ptr.Pointer(), C.CString(prefix))
	}
}

func (ptr *QSettings) BeginReadArray(prefix string) int {
	if ptr.Pointer() != nil {
		return int(C.QSettings_BeginReadArray(ptr.Pointer(), C.CString(prefix)))
	}
	return 0
}

func (ptr *QSettings) BeginWriteArray(prefix string, size int) {
	if ptr.Pointer() != nil {
		C.QSettings_BeginWriteArray(ptr.Pointer(), C.CString(prefix), C.int(size))
	}
}

func (ptr *QSettings) ChildGroups() []string {
	if ptr.Pointer() != nil {
		return strings.Split(C.GoString(C.QSettings_ChildGroups(ptr.Pointer())), "|")
	}
	return make([]string, 0)
}

func (ptr *QSettings) ChildKeys() []string {
	if ptr.Pointer() != nil {
		return strings.Split(C.GoString(C.QSettings_ChildKeys(ptr.Pointer())), "|")
	}
	return make([]string, 0)
}

func (ptr *QSettings) Clear() {
	if ptr.Pointer() != nil {
		C.QSettings_Clear(ptr.Pointer())
	}
}

func (ptr *QSettings) Contains(key string) bool {
	if ptr.Pointer() != nil {
		return C.QSettings_Contains(ptr.Pointer(), C.CString(key)) != 0
	}
	return false
}

func QSettings_DefaultFormat() QSettings__Format {
	return QSettings__Format(C.QSettings_QSettings_DefaultFormat())
}

func (ptr *QSettings) EndArray() {
	if ptr.Pointer() != nil {
		C.QSettings_EndArray(ptr.Pointer())
	}
}

func (ptr *QSettings) EndGroup() {
	if ptr.Pointer() != nil {
		C.QSettings_EndGroup(ptr.Pointer())
	}
}

func (ptr *QSettings) FallbacksEnabled() bool {
	if ptr.Pointer() != nil {
		return C.QSettings_FallbacksEnabled(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QSettings) FileName() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSettings_FileName(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSettings) Format() QSettings__Format {
	if ptr.Pointer() != nil {
		return QSettings__Format(C.QSettings_Format(ptr.Pointer()))
	}
	return 0
}

func (ptr *QSettings) Group() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSettings_Group(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSettings) IniCodec() *QTextCodec {
	if ptr.Pointer() != nil {
		return NewQTextCodecFromPointer(C.QSettings_IniCodec(ptr.Pointer()))
	}
	return nil
}

func (ptr *QSettings) IsWritable() bool {
	if ptr.Pointer() != nil {
		return C.QSettings_IsWritable(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QSettings) OrganizationName() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSettings_OrganizationName(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSettings) Scope() QSettings__Scope {
	if ptr.Pointer() != nil {
		return QSettings__Scope(C.QSettings_Scope(ptr.Pointer()))
	}
	return 0
}

func (ptr *QSettings) SetArrayIndex(i int) {
	if ptr.Pointer() != nil {
		C.QSettings_SetArrayIndex(ptr.Pointer(), C.int(i))
	}
}

func QSettings_SetDefaultFormat(format QSettings__Format) {
	C.QSettings_QSettings_SetDefaultFormat(C.int(format))
}

func (ptr *QSettings) SetFallbacksEnabled(b bool) {
	if ptr.Pointer() != nil {
		C.QSettings_SetFallbacksEnabled(ptr.Pointer(), C.int(qt.GoBoolToInt(b)))
	}
}

func (ptr *QSettings) SetIniCodec(codec QTextCodec_ITF) {
	if ptr.Pointer() != nil {
		C.QSettings_SetIniCodec(ptr.Pointer(), PointerFromQTextCodec(codec))
	}
}

func (ptr *QSettings) SetIniCodec2(codecName string) {
	if ptr.Pointer() != nil {
		C.QSettings_SetIniCodec2(ptr.Pointer(), C.CString(codecName))
	}
}

func QSettings_SetPath(format QSettings__Format, scope QSettings__Scope, path string) {
	C.QSettings_QSettings_SetPath(C.int(format), C.int(scope), C.CString(path))
}

func (ptr *QSettings) SetValue(key string, value QVariant_ITF) {
	if ptr.Pointer() != nil {
		C.QSettings_SetValue(ptr.Pointer(), C.CString(key), PointerFromQVariant(value))
	}
}

func (ptr *QSettings) Status() QSettings__Status {
	if ptr.Pointer() != nil {
		return QSettings__Status(C.QSettings_Status(ptr.Pointer()))
	}
	return 0
}

func (ptr *QSettings) Sync() {
	if ptr.Pointer() != nil {
		C.QSettings_Sync(ptr.Pointer())
	}
}

func (ptr *QSettings) Value(key string, defaultValue QVariant_ITF) *QVariant {
	if ptr.Pointer() != nil {
		return NewQVariantFromPointer(C.QSettings_Value(ptr.Pointer(), C.CString(key), PointerFromQVariant(defaultValue)))
	}
	return nil
}

func (ptr *QSettings) DestroyQSettings() {
	if ptr.Pointer() != nil {
		C.QSettings_DestroyQSettings(ptr.Pointer())
		ptr.SetPointer(nil)
	}
}
