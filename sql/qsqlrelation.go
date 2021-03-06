package sql

//#include "qsqlrelation.h"
import "C"
import (
	"unsafe"
)

type QSqlRelation struct {
	ptr unsafe.Pointer
}

type QSqlRelation_ITF interface {
	QSqlRelation_PTR() *QSqlRelation
}

func (p *QSqlRelation) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QSqlRelation) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQSqlRelation(ptr QSqlRelation_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QSqlRelation_PTR().Pointer()
	}
	return nil
}

func NewQSqlRelationFromPointer(ptr unsafe.Pointer) *QSqlRelation {
	var n = new(QSqlRelation)
	n.SetPointer(ptr)
	return n
}

func (ptr *QSqlRelation) QSqlRelation_PTR() *QSqlRelation {
	return ptr
}

func NewQSqlRelation() *QSqlRelation {
	return NewQSqlRelationFromPointer(C.QSqlRelation_NewQSqlRelation())
}

func NewQSqlRelation2(tableName string, indexColumn string, displayColumn string) *QSqlRelation {
	return NewQSqlRelationFromPointer(C.QSqlRelation_NewQSqlRelation2(C.CString(tableName), C.CString(indexColumn), C.CString(displayColumn)))
}

func (ptr *QSqlRelation) DisplayColumn() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSqlRelation_DisplayColumn(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSqlRelation) IndexColumn() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSqlRelation_IndexColumn(ptr.Pointer()))
	}
	return ""
}

func (ptr *QSqlRelation) IsValid() bool {
	if ptr.Pointer() != nil {
		return C.QSqlRelation_IsValid(ptr.Pointer()) != 0
	}
	return false
}

func (ptr *QSqlRelation) TableName() string {
	if ptr.Pointer() != nil {
		return C.GoString(C.QSqlRelation_TableName(ptr.Pointer()))
	}
	return ""
}
