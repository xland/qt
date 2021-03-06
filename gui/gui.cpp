#include "qopengltimemonitor.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include "_cgo_export.h"

#include "qopenglfunctions_3_1.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qinputmethodevent.h"
#include <QUrl>
#include <QModelIndex>
#include <QInputMethod>
#include <QString>
#include <QVariant>
#include <QInputMethodEvent>
#include "_cgo_export.h"

class MyQInputMethodEvent: public QInputMethodEvent {
public:
};

void* QInputMethodEvent_NewQInputMethodEvent(){
	return new QInputMethodEvent();
}

void* QInputMethodEvent_NewQInputMethodEvent3(void* other){
	return new QInputMethodEvent(*static_cast<QInputMethodEvent*>(other));
}

char* QInputMethodEvent_CommitString(void* ptr){
	return static_cast<QInputMethodEvent*>(ptr)->commitString().toUtf8().data();
}

char* QInputMethodEvent_PreeditString(void* ptr){
	return static_cast<QInputMethodEvent*>(ptr)->preeditString().toUtf8().data();
}

int QInputMethodEvent_ReplacementLength(void* ptr){
	return static_cast<QInputMethodEvent*>(ptr)->replacementLength();
}

int QInputMethodEvent_ReplacementStart(void* ptr){
	return static_cast<QInputMethodEvent*>(ptr)->replacementStart();
}

void QInputMethodEvent_SetCommitString(void* ptr, char* commitString, int replaceFrom, int replaceLength){
	static_cast<QInputMethodEvent*>(ptr)->setCommitString(QString(commitString), replaceFrom, replaceLength);
}

#include "qopenglvertexarrayobject.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qaccessibleevent.h"
#include <QObject>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessibleInterface>
#include <QAccessible>
#include <QAccessibleEvent>
#include "_cgo_export.h"

class MyQAccessibleEvent: public QAccessibleEvent {
public:
};

void* QAccessibleEvent_NewQAccessibleEvent2(void* interfa, int ty){
	return new QAccessibleEvent(static_cast<QAccessibleInterface*>(interfa), static_cast<QAccessible::Event>(ty));
}

void* QAccessibleEvent_NewQAccessibleEvent(void* object, int ty){
	return new QAccessibleEvent(static_cast<QObject*>(object), static_cast<QAccessible::Event>(ty));
}

void* QAccessibleEvent_AccessibleInterface(void* ptr){
	return static_cast<QAccessibleEvent*>(ptr)->accessibleInterface();
}

int QAccessibleEvent_Child(void* ptr){
	return static_cast<QAccessibleEvent*>(ptr)->child();
}

void* QAccessibleEvent_Object(void* ptr){
	return static_cast<QAccessibleEvent*>(ptr)->object();
}

void QAccessibleEvent_SetChild(void* ptr, int child){
	static_cast<QAccessibleEvent*>(ptr)->setChild(child);
}

int QAccessibleEvent_Type(void* ptr){
	return static_cast<QAccessibleEvent*>(ptr)->type();
}

void QAccessibleEvent_DestroyQAccessibleEvent(void* ptr){
	static_cast<QAccessibleEvent*>(ptr)->~QAccessibleEvent();
}

#include "qpagelayout.h"
#include <QMarginsF>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPageSize>
#include <QMargins>
#include <QPageLayout>
#include "_cgo_export.h"

class MyQPageLayout: public QPageLayout {
public:
};

void* QPageLayout_NewQPageLayout(){
	return new QPageLayout();
}

void* QPageLayout_NewQPageLayout3(void* other){
	return new QPageLayout(*static_cast<QPageLayout*>(other));
}

void* QPageLayout_NewQPageLayout2(void* pageSize, int orientation, void* margins, int units, void* minMargins){
	return new QPageLayout(*static_cast<QPageSize*>(pageSize), static_cast<QPageLayout::Orientation>(orientation), *static_cast<QMarginsF*>(margins), static_cast<QPageLayout::Unit>(units), *static_cast<QMarginsF*>(minMargins));
}

int QPageLayout_IsEquivalentTo(void* ptr, void* other){
	return static_cast<QPageLayout*>(ptr)->isEquivalentTo(*static_cast<QPageLayout*>(other));
}

int QPageLayout_IsValid(void* ptr){
	return static_cast<QPageLayout*>(ptr)->isValid();
}

int QPageLayout_Mode(void* ptr){
	return static_cast<QPageLayout*>(ptr)->mode();
}

int QPageLayout_Orientation(void* ptr){
	return static_cast<QPageLayout*>(ptr)->orientation();
}

int QPageLayout_SetBottomMargin(void* ptr, double bottomMargin){
	return static_cast<QPageLayout*>(ptr)->setBottomMargin(static_cast<qreal>(bottomMargin));
}

int QPageLayout_SetLeftMargin(void* ptr, double leftMargin){
	return static_cast<QPageLayout*>(ptr)->setLeftMargin(static_cast<qreal>(leftMargin));
}

int QPageLayout_SetMargins(void* ptr, void* margins){
	return static_cast<QPageLayout*>(ptr)->setMargins(*static_cast<QMarginsF*>(margins));
}

void QPageLayout_SetMinimumMargins(void* ptr, void* minMargins){
	static_cast<QPageLayout*>(ptr)->setMinimumMargins(*static_cast<QMarginsF*>(minMargins));
}

void QPageLayout_SetMode(void* ptr, int mode){
	static_cast<QPageLayout*>(ptr)->setMode(static_cast<QPageLayout::Mode>(mode));
}

void QPageLayout_SetOrientation(void* ptr, int orientation){
	static_cast<QPageLayout*>(ptr)->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

void QPageLayout_SetPageSize(void* ptr, void* pageSize, void* minMargins){
	static_cast<QPageLayout*>(ptr)->setPageSize(*static_cast<QPageSize*>(pageSize), *static_cast<QMarginsF*>(minMargins));
}

int QPageLayout_SetRightMargin(void* ptr, double rightMargin){
	return static_cast<QPageLayout*>(ptr)->setRightMargin(static_cast<qreal>(rightMargin));
}

int QPageLayout_SetTopMargin(void* ptr, double topMargin){
	return static_cast<QPageLayout*>(ptr)->setTopMargin(static_cast<qreal>(topMargin));
}

void QPageLayout_SetUnits(void* ptr, int units){
	static_cast<QPageLayout*>(ptr)->setUnits(static_cast<QPageLayout::Unit>(units));
}

void QPageLayout_Swap(void* ptr, void* other){
	static_cast<QPageLayout*>(ptr)->swap(*static_cast<QPageLayout*>(other));
}

int QPageLayout_Units(void* ptr){
	return static_cast<QPageLayout*>(ptr)->units();
}

void QPageLayout_DestroyQPageLayout(void* ptr){
	static_cast<QPageLayout*>(ptr)->~QPageLayout();
}

#include "qtextitem.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextItem>
#include "_cgo_export.h"

class MyQTextItem: public QTextItem {
public:
};

double QTextItem_Ascent(void* ptr){
	return static_cast<double>(static_cast<QTextItem*>(ptr)->ascent());
}

double QTextItem_Descent(void* ptr){
	return static_cast<double>(static_cast<QTextItem*>(ptr)->descent());
}

int QTextItem_RenderFlags(void* ptr){
	return static_cast<QTextItem*>(ptr)->renderFlags();
}

char* QTextItem_Text(void* ptr){
	return static_cast<QTextItem*>(ptr)->text().toUtf8().data();
}

double QTextItem_Width(void* ptr){
	return static_cast<double>(static_cast<QTextItem*>(ptr)->width());
}

#include "qtextdocument.h"
#include <QFont>
#include <QTextOption>
#include <QUrl>
#include <QPainter>
#include <QMetaObject>
#include <QTextFormat>
#include <QRectF>
#include <QPagedPaintDevice>
#include <QRect>
#include <QAbstractTextDocumentLayout>
#include <QModelIndex>
#include <QSizeF>
#include <QTextCursor>
#include <QByteArray>
#include <QObject>
#include <QVariant>
#include <QString>
#include <QSize>
#include <QTextDocument>
#include "_cgo_export.h"

class MyQTextDocument: public QTextDocument {
public:
void Signal_BlockCountChanged(int newBlockCount){callbackQTextDocumentBlockCountChanged(this->objectName().toUtf8().data(), newBlockCount);};
void Signal_ContentsChange(int position, int charsRemoved, int charsAdded){callbackQTextDocumentContentsChange(this->objectName().toUtf8().data(), position, charsRemoved, charsAdded);};
void Signal_ContentsChanged(){callbackQTextDocumentContentsChanged(this->objectName().toUtf8().data());};
void Signal_DocumentLayoutChanged(){callbackQTextDocumentDocumentLayoutChanged(this->objectName().toUtf8().data());};
void Signal_ModificationChanged(bool changed){callbackQTextDocumentModificationChanged(this->objectName().toUtf8().data(), changed);};
void Signal_RedoAvailable(bool available){callbackQTextDocumentRedoAvailable(this->objectName().toUtf8().data(), available);};
void Signal_UndoAvailable(bool available){callbackQTextDocumentUndoAvailable(this->objectName().toUtf8().data(), available);};
void Signal_UndoCommandAdded(){callbackQTextDocumentUndoCommandAdded(this->objectName().toUtf8().data());};
};

int QTextDocument_BlockCount(void* ptr){
	return static_cast<QTextDocument*>(ptr)->blockCount();
}

char* QTextDocument_DefaultStyleSheet(void* ptr){
	return static_cast<QTextDocument*>(ptr)->defaultStyleSheet().toUtf8().data();
}

double QTextDocument_DocumentMargin(void* ptr){
	return static_cast<double>(static_cast<QTextDocument*>(ptr)->documentMargin());
}

double QTextDocument_IndentWidth(void* ptr){
	return static_cast<double>(static_cast<QTextDocument*>(ptr)->indentWidth());
}

int QTextDocument_IsModified(void* ptr){
	return static_cast<QTextDocument*>(ptr)->isModified();
}

int QTextDocument_IsUndoRedoEnabled(void* ptr){
	return static_cast<QTextDocument*>(ptr)->isUndoRedoEnabled();
}

void QTextDocument_MarkContentsDirty(void* ptr, int position, int length){
	static_cast<QTextDocument*>(ptr)->markContentsDirty(position, length);
}

int QTextDocument_MaximumBlockCount(void* ptr){
	return static_cast<QTextDocument*>(ptr)->maximumBlockCount();
}

void QTextDocument_SetBaseUrl(void* ptr, void* url){
	static_cast<QTextDocument*>(ptr)->setBaseUrl(*static_cast<QUrl*>(url));
}

void QTextDocument_SetDefaultStyleSheet(void* ptr, char* sheet){
	static_cast<QTextDocument*>(ptr)->setDefaultStyleSheet(QString(sheet));
}

void QTextDocument_SetDocumentMargin(void* ptr, double margin){
	static_cast<QTextDocument*>(ptr)->setDocumentMargin(static_cast<qreal>(margin));
}

void QTextDocument_SetMaximumBlockCount(void* ptr, int maximum){
	static_cast<QTextDocument*>(ptr)->setMaximumBlockCount(maximum);
}

void QTextDocument_SetModified(void* ptr, int m){
	QMetaObject::invokeMethod(static_cast<QTextDocument*>(ptr), "setModified", Q_ARG(bool, m != 0));
}

void QTextDocument_SetPageSize(void* ptr, void* size){
	static_cast<QTextDocument*>(ptr)->setPageSize(*static_cast<QSizeF*>(size));
}

void QTextDocument_SetTextWidth(void* ptr, double width){
	static_cast<QTextDocument*>(ptr)->setTextWidth(static_cast<qreal>(width));
}

void QTextDocument_SetUndoRedoEnabled(void* ptr, int enable){
	static_cast<QTextDocument*>(ptr)->setUndoRedoEnabled(enable != 0);
}

void QTextDocument_SetUseDesignMetrics(void* ptr, int b){
	static_cast<QTextDocument*>(ptr)->setUseDesignMetrics(b != 0);
}

double QTextDocument_TextWidth(void* ptr){
	return static_cast<double>(static_cast<QTextDocument*>(ptr)->textWidth());
}

int QTextDocument_UseDesignMetrics(void* ptr){
	return static_cast<QTextDocument*>(ptr)->useDesignMetrics();
}

void* QTextDocument_NewQTextDocument(void* parent){
	return new QTextDocument(static_cast<QObject*>(parent));
}

void* QTextDocument_NewQTextDocument2(char* text, void* parent){
	return new QTextDocument(QString(text), static_cast<QObject*>(parent));
}

void QTextDocument_AddResource(void* ptr, int ty, void* name, void* resource){
	static_cast<QTextDocument*>(ptr)->addResource(ty, *static_cast<QUrl*>(name), *static_cast<QVariant*>(resource));
}

void QTextDocument_AdjustSize(void* ptr){
	static_cast<QTextDocument*>(ptr)->adjustSize();
}

int QTextDocument_AvailableRedoSteps(void* ptr){
	return static_cast<QTextDocument*>(ptr)->availableRedoSteps();
}

int QTextDocument_AvailableUndoSteps(void* ptr){
	return static_cast<QTextDocument*>(ptr)->availableUndoSteps();
}

void QTextDocument_ConnectBlockCountChanged(void* ptr){
	QObject::connect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(int)>(&QTextDocument::blockCountChanged), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(int)>(&MyQTextDocument::Signal_BlockCountChanged));;
}

void QTextDocument_DisconnectBlockCountChanged(void* ptr){
	QObject::disconnect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(int)>(&QTextDocument::blockCountChanged), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(int)>(&MyQTextDocument::Signal_BlockCountChanged));;
}

int QTextDocument_CharacterCount(void* ptr){
	return static_cast<QTextDocument*>(ptr)->characterCount();
}

void QTextDocument_Clear(void* ptr){
	static_cast<QTextDocument*>(ptr)->clear();
}

void QTextDocument_ClearUndoRedoStacks(void* ptr, int stacksToClear){
	static_cast<QTextDocument*>(ptr)->clearUndoRedoStacks(static_cast<QTextDocument::Stacks>(stacksToClear));
}

void* QTextDocument_Clone(void* ptr, void* parent){
	return static_cast<QTextDocument*>(ptr)->clone(static_cast<QObject*>(parent));
}

void QTextDocument_ConnectContentsChange(void* ptr){
	QObject::connect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(int, int, int)>(&QTextDocument::contentsChange), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(int, int, int)>(&MyQTextDocument::Signal_ContentsChange));;
}

void QTextDocument_DisconnectContentsChange(void* ptr){
	QObject::disconnect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(int, int, int)>(&QTextDocument::contentsChange), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(int, int, int)>(&MyQTextDocument::Signal_ContentsChange));;
}

void QTextDocument_ConnectContentsChanged(void* ptr){
	QObject::connect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)()>(&QTextDocument::contentsChanged), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)()>(&MyQTextDocument::Signal_ContentsChanged));;
}

void QTextDocument_DisconnectContentsChanged(void* ptr){
	QObject::disconnect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)()>(&QTextDocument::contentsChanged), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)()>(&MyQTextDocument::Signal_ContentsChanged));;
}

int QTextDocument_DefaultCursorMoveStyle(void* ptr){
	return static_cast<QTextDocument*>(ptr)->defaultCursorMoveStyle();
}

void* QTextDocument_DocumentLayout(void* ptr){
	return static_cast<QTextDocument*>(ptr)->documentLayout();
}

void QTextDocument_ConnectDocumentLayoutChanged(void* ptr){
	QObject::connect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)()>(&QTextDocument::documentLayoutChanged), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)()>(&MyQTextDocument::Signal_DocumentLayoutChanged));;
}

void QTextDocument_DisconnectDocumentLayoutChanged(void* ptr){
	QObject::disconnect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)()>(&QTextDocument::documentLayoutChanged), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)()>(&MyQTextDocument::Signal_DocumentLayoutChanged));;
}

void QTextDocument_DrawContents(void* ptr, void* p, void* rect){
	static_cast<QTextDocument*>(ptr)->drawContents(static_cast<QPainter*>(p), *static_cast<QRectF*>(rect));
}

double QTextDocument_IdealWidth(void* ptr){
	return static_cast<double>(static_cast<QTextDocument*>(ptr)->idealWidth());
}

int QTextDocument_IsEmpty(void* ptr){
	return static_cast<QTextDocument*>(ptr)->isEmpty();
}

int QTextDocument_IsRedoAvailable(void* ptr){
	return static_cast<QTextDocument*>(ptr)->isRedoAvailable();
}

int QTextDocument_IsUndoAvailable(void* ptr){
	return static_cast<QTextDocument*>(ptr)->isUndoAvailable();
}

int QTextDocument_LineCount(void* ptr){
	return static_cast<QTextDocument*>(ptr)->lineCount();
}

char* QTextDocument_MetaInformation(void* ptr, int info){
	return static_cast<QTextDocument*>(ptr)->metaInformation(static_cast<QTextDocument::MetaInformation>(info)).toUtf8().data();
}

void QTextDocument_ConnectModificationChanged(void* ptr){
	QObject::connect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::modificationChanged), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(bool)>(&MyQTextDocument::Signal_ModificationChanged));;
}

void QTextDocument_DisconnectModificationChanged(void* ptr){
	QObject::disconnect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::modificationChanged), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(bool)>(&MyQTextDocument::Signal_ModificationChanged));;
}

void* QTextDocument_Object(void* ptr, int objectIndex){
	return static_cast<QTextDocument*>(ptr)->object(objectIndex);
}

void* QTextDocument_ObjectForFormat(void* ptr, void* f){
	return static_cast<QTextDocument*>(ptr)->objectForFormat(*static_cast<QTextFormat*>(f));
}

int QTextDocument_PageCount(void* ptr){
	return static_cast<QTextDocument*>(ptr)->pageCount();
}

void QTextDocument_Print(void* ptr, void* printer){
	static_cast<QTextDocument*>(ptr)->print(static_cast<QPagedPaintDevice*>(printer));
}

void QTextDocument_Redo2(void* ptr){
	QMetaObject::invokeMethod(static_cast<QTextDocument*>(ptr), "redo");
}

void QTextDocument_Redo(void* ptr, void* cursor){
	static_cast<QTextDocument*>(ptr)->redo(static_cast<QTextCursor*>(cursor));
}

void QTextDocument_ConnectRedoAvailable(void* ptr){
	QObject::connect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::redoAvailable), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(bool)>(&MyQTextDocument::Signal_RedoAvailable));;
}

void QTextDocument_DisconnectRedoAvailable(void* ptr){
	QObject::disconnect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::redoAvailable), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(bool)>(&MyQTextDocument::Signal_RedoAvailable));;
}

void* QTextDocument_Resource(void* ptr, int ty, void* name){
	return new QVariant(static_cast<QTextDocument*>(ptr)->resource(ty, *static_cast<QUrl*>(name)));
}

int QTextDocument_Revision(void* ptr){
	return static_cast<QTextDocument*>(ptr)->revision();
}

void* QTextDocument_RootFrame(void* ptr){
	return static_cast<QTextDocument*>(ptr)->rootFrame();
}

void QTextDocument_SetDefaultCursorMoveStyle(void* ptr, int style){
	static_cast<QTextDocument*>(ptr)->setDefaultCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

void QTextDocument_SetDefaultFont(void* ptr, void* font){
	static_cast<QTextDocument*>(ptr)->setDefaultFont(*static_cast<QFont*>(font));
}

void QTextDocument_SetDefaultTextOption(void* ptr, void* option){
	static_cast<QTextDocument*>(ptr)->setDefaultTextOption(*static_cast<QTextOption*>(option));
}

void QTextDocument_SetDocumentLayout(void* ptr, void* layout){
	static_cast<QTextDocument*>(ptr)->setDocumentLayout(static_cast<QAbstractTextDocumentLayout*>(layout));
}

void QTextDocument_SetHtml(void* ptr, char* html){
	static_cast<QTextDocument*>(ptr)->setHtml(QString(html));
}

void QTextDocument_SetIndentWidth(void* ptr, double width){
	static_cast<QTextDocument*>(ptr)->setIndentWidth(static_cast<qreal>(width));
}

void QTextDocument_SetMetaInformation(void* ptr, int info, char* stri){
	static_cast<QTextDocument*>(ptr)->setMetaInformation(static_cast<QTextDocument::MetaInformation>(info), QString(stri));
}

void QTextDocument_SetPlainText(void* ptr, char* text){
	static_cast<QTextDocument*>(ptr)->setPlainText(QString(text));
}

char* QTextDocument_ToHtml(void* ptr, void* encoding){
	return static_cast<QTextDocument*>(ptr)->toHtml(*static_cast<QByteArray*>(encoding)).toUtf8().data();
}

char* QTextDocument_ToPlainText(void* ptr){
	return static_cast<QTextDocument*>(ptr)->toPlainText().toUtf8().data();
}

void QTextDocument_Undo2(void* ptr){
	QMetaObject::invokeMethod(static_cast<QTextDocument*>(ptr), "undo");
}

void QTextDocument_Undo(void* ptr, void* cursor){
	static_cast<QTextDocument*>(ptr)->undo(static_cast<QTextCursor*>(cursor));
}

void QTextDocument_ConnectUndoAvailable(void* ptr){
	QObject::connect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::undoAvailable), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(bool)>(&MyQTextDocument::Signal_UndoAvailable));;
}

void QTextDocument_DisconnectUndoAvailable(void* ptr){
	QObject::disconnect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::undoAvailable), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)(bool)>(&MyQTextDocument::Signal_UndoAvailable));;
}

void QTextDocument_ConnectUndoCommandAdded(void* ptr){
	QObject::connect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)()>(&QTextDocument::undoCommandAdded), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)()>(&MyQTextDocument::Signal_UndoCommandAdded));;
}

void QTextDocument_DisconnectUndoCommandAdded(void* ptr){
	QObject::disconnect(static_cast<QTextDocument*>(ptr), static_cast<void (QTextDocument::*)()>(&QTextDocument::undoCommandAdded), static_cast<MyQTextDocument*>(ptr), static_cast<void (MyQTextDocument::*)()>(&MyQTextDocument::Signal_UndoCommandAdded));;
}

void QTextDocument_DestroyQTextDocument(void* ptr){
	static_cast<QTextDocument*>(ptr)->~QTextDocument();
}

#include "qimage.h"
#include <QByteArray>
#include <QString>
#include <QIODevice>
#include <QModelIndex>
#include <QPoint>
#include <QColor>
#include <QPixelFormat>
#include <QVariant>
#include <QUrl>
#include <QImage>
#include "_cgo_export.h"

class MyQImage: public QImage {
public:
};

int QImage_ColorCount(void* ptr){
	return static_cast<QImage*>(ptr)->colorCount();
}

void QImage_Fill2(void* ptr, int color){
	static_cast<QImage*>(ptr)->fill(static_cast<Qt::GlobalColor>(color));
}

void QImage_Fill3(void* ptr, void* color){
	static_cast<QImage*>(ptr)->fill(*static_cast<QColor*>(color));
}

int QImage_Height(void* ptr){
	return static_cast<QImage*>(ptr)->height();
}

int QImage_IsNull(void* ptr){
	return static_cast<QImage*>(ptr)->isNull();
}

void QImage_SetOffset(void* ptr, void* offset){
	static_cast<QImage*>(ptr)->setOffset(*static_cast<QPoint*>(offset));
}

void QImage_SetText(void* ptr, char* key, char* text){
	static_cast<QImage*>(ptr)->setText(QString(key), QString(text));
}

int QImage_Width(void* ptr){
	return static_cast<QImage*>(ptr)->width();
}

int QImage_AllGray(void* ptr){
	return static_cast<QImage*>(ptr)->allGray();
}

int QImage_BitPlaneCount(void* ptr){
	return static_cast<QImage*>(ptr)->bitPlaneCount();
}

int QImage_ByteCount(void* ptr){
	return static_cast<QImage*>(ptr)->byteCount();
}

int QImage_BytesPerLine(void* ptr){
	return static_cast<QImage*>(ptr)->bytesPerLine();
}

int QImage_Depth(void* ptr){
	return static_cast<QImage*>(ptr)->depth();
}

double QImage_DevicePixelRatio(void* ptr){
	return static_cast<double>(static_cast<QImage*>(ptr)->devicePixelRatio());
}

int QImage_DotsPerMeterX(void* ptr){
	return static_cast<QImage*>(ptr)->dotsPerMeterX();
}

int QImage_DotsPerMeterY(void* ptr){
	return static_cast<QImage*>(ptr)->dotsPerMeterY();
}

int QImage_Format(void* ptr){
	return static_cast<QImage*>(ptr)->format();
}

int QImage_HasAlphaChannel(void* ptr){
	return static_cast<QImage*>(ptr)->hasAlphaChannel();
}

void QImage_InvertPixels(void* ptr, int mode){
	static_cast<QImage*>(ptr)->invertPixels(static_cast<QImage::InvertMode>(mode));
}

int QImage_IsGrayscale(void* ptr){
	return static_cast<QImage*>(ptr)->isGrayscale();
}

int QImage_Load2(void* ptr, void* device, char* format){
	return static_cast<QImage*>(ptr)->load(static_cast<QIODevice*>(device), const_cast<const char*>(format));
}

int QImage_Load(void* ptr, char* fileName, char* format){
	return static_cast<QImage*>(ptr)->load(QString(fileName), const_cast<const char*>(format));
}

int QImage_LoadFromData2(void* ptr, void* data, char* format){
	return static_cast<QImage*>(ptr)->loadFromData(*static_cast<QByteArray*>(data), const_cast<const char*>(format));
}

int QImage_PixelIndex(void* ptr, void* position){
	return static_cast<QImage*>(ptr)->pixelIndex(*static_cast<QPoint*>(position));
}

int QImage_PixelIndex2(void* ptr, int x, int y){
	return static_cast<QImage*>(ptr)->pixelIndex(x, y);
}

int QImage_Save2(void* ptr, void* device, char* format, int quality){
	return static_cast<QImage*>(ptr)->save(static_cast<QIODevice*>(device), const_cast<const char*>(format), quality);
}

int QImage_Save(void* ptr, char* fileName, char* format, int quality){
	return static_cast<QImage*>(ptr)->save(QString(fileName), const_cast<const char*>(format), quality);
}

void QImage_SetColorCount(void* ptr, int colorCount){
	static_cast<QImage*>(ptr)->setColorCount(colorCount);
}

void QImage_SetDevicePixelRatio(void* ptr, double scaleFactor){
	static_cast<QImage*>(ptr)->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

void QImage_SetDotsPerMeterX(void* ptr, int x){
	static_cast<QImage*>(ptr)->setDotsPerMeterX(x);
}

void QImage_SetDotsPerMeterY(void* ptr, int y){
	static_cast<QImage*>(ptr)->setDotsPerMeterY(y);
}

void QImage_Swap(void* ptr, void* other){
	static_cast<QImage*>(ptr)->swap(*static_cast<QImage*>(other));
}

char* QImage_Text(void* ptr, char* key){
	return static_cast<QImage*>(ptr)->text(QString(key)).toUtf8().data();
}

char* QImage_TextKeys(void* ptr){
	return static_cast<QImage*>(ptr)->textKeys().join("|").toUtf8().data();
}

int QImage_QImage_ToImageFormat(void* format){
	return QImage::toImageFormat(*static_cast<QPixelFormat*>(format));
}

int QImage_Valid(void* ptr, void* pos){
	return static_cast<QImage*>(ptr)->valid(*static_cast<QPoint*>(pos));
}

int QImage_Valid2(void* ptr, int x, int y){
	return static_cast<QImage*>(ptr)->valid(x, y);
}

void QImage_DestroyQImage(void* ptr){
	static_cast<QImage*>(ptr)->~QImage();
}

#include "qopenglwindow.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qtextlistformat.h"
#include <QList>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextList>
#include <QList>
#include <QTextListFormat>
#include "_cgo_export.h"

class MyQTextListFormat: public QTextListFormat {
public:
};

void* QTextListFormat_NewQTextListFormat(){
	return new QTextListFormat();
}

int QTextListFormat_Indent(void* ptr){
	return static_cast<QTextListFormat*>(ptr)->indent();
}

int QTextListFormat_IsValid(void* ptr){
	return static_cast<QTextListFormat*>(ptr)->isValid();
}

char* QTextListFormat_NumberPrefix(void* ptr){
	return static_cast<QTextListFormat*>(ptr)->numberPrefix().toUtf8().data();
}

char* QTextListFormat_NumberSuffix(void* ptr){
	return static_cast<QTextListFormat*>(ptr)->numberSuffix().toUtf8().data();
}

void QTextListFormat_SetIndent(void* ptr, int indentation){
	static_cast<QTextListFormat*>(ptr)->setIndent(indentation);
}

void QTextListFormat_SetNumberPrefix(void* ptr, char* numberPrefix){
	static_cast<QTextListFormat*>(ptr)->setNumberPrefix(QString(numberPrefix));
}

void QTextListFormat_SetNumberSuffix(void* ptr, char* numberSuffix){
	static_cast<QTextListFormat*>(ptr)->setNumberSuffix(QString(numberSuffix));
}

void QTextListFormat_SetStyle(void* ptr, int style){
	static_cast<QTextListFormat*>(ptr)->setStyle(static_cast<QTextListFormat::Style>(style));
}

int QTextListFormat_Style(void* ptr){
	return static_cast<QTextListFormat*>(ptr)->style();
}

#include "qtextline.h"
#include <QUrl>
#include <QModelIndex>
#include <QPointF>
#include <QPoint>
#include <QString>
#include <QVariant>
#include <QTextLine>
#include "_cgo_export.h"

class MyQTextLine: public QTextLine {
public:
};

int QTextLine_XToCursor(void* ptr, double x, int cpos){
	return static_cast<QTextLine*>(ptr)->xToCursor(static_cast<qreal>(x), static_cast<QTextLine::CursorPosition>(cpos));
}

void* QTextLine_NewQTextLine(){
	return new QTextLine();
}

double QTextLine_Ascent(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->ascent());
}

double QTextLine_CursorToX(void* ptr, int cursorPos, int edge){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->cursorToX(&cursorPos, static_cast<QTextLine::Edge>(edge)));
}

double QTextLine_CursorToX2(void* ptr, int cursorPos, int edge){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->cursorToX(cursorPos, static_cast<QTextLine::Edge>(edge)));
}

double QTextLine_Descent(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->descent());
}

double QTextLine_Height(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->height());
}

double QTextLine_HorizontalAdvance(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->horizontalAdvance());
}

int QTextLine_IsValid(void* ptr){
	return static_cast<QTextLine*>(ptr)->isValid();
}

double QTextLine_Leading(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->leading());
}

int QTextLine_LeadingIncluded(void* ptr){
	return static_cast<QTextLine*>(ptr)->leadingIncluded();
}

int QTextLine_LineNumber(void* ptr){
	return static_cast<QTextLine*>(ptr)->lineNumber();
}

double QTextLine_NaturalTextWidth(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->naturalTextWidth());
}

void QTextLine_SetLeadingIncluded(void* ptr, int included){
	static_cast<QTextLine*>(ptr)->setLeadingIncluded(included != 0);
}

void QTextLine_SetLineWidth(void* ptr, double width){
	static_cast<QTextLine*>(ptr)->setLineWidth(static_cast<qreal>(width));
}

void QTextLine_SetNumColumns(void* ptr, int numColumns){
	static_cast<QTextLine*>(ptr)->setNumColumns(numColumns);
}

void QTextLine_SetNumColumns2(void* ptr, int numColumns, double alignmentWidth){
	static_cast<QTextLine*>(ptr)->setNumColumns(numColumns, static_cast<qreal>(alignmentWidth));
}

void QTextLine_SetPosition(void* ptr, void* pos){
	static_cast<QTextLine*>(ptr)->setPosition(*static_cast<QPointF*>(pos));
}

int QTextLine_TextLength(void* ptr){
	return static_cast<QTextLine*>(ptr)->textLength();
}

int QTextLine_TextStart(void* ptr){
	return static_cast<QTextLine*>(ptr)->textStart();
}

double QTextLine_Width(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->width());
}

double QTextLine_X(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->x());
}

double QTextLine_Y(void* ptr){
	return static_cast<double>(static_cast<QTextLine*>(ptr)->y());
}

#include "qcontextmenuevent.h"
#include <QPoint>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QContextMenuEvent>
#include "_cgo_export.h"

class MyQContextMenuEvent: public QContextMenuEvent {
public:
};

void* QContextMenuEvent_NewQContextMenuEvent3(int reason, void* pos){
	return new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *static_cast<QPoint*>(pos));
}

void* QContextMenuEvent_NewQContextMenuEvent2(int reason, void* pos, void* globalPos){
	return new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *static_cast<QPoint*>(pos), *static_cast<QPoint*>(globalPos));
}

void* QContextMenuEvent_NewQContextMenuEvent(int reason, void* pos, void* globalPos, int modifiers){
	return new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *static_cast<QPoint*>(pos), *static_cast<QPoint*>(globalPos), static_cast<Qt::KeyboardModifier>(modifiers));
}

int QContextMenuEvent_GlobalX(void* ptr){
	return static_cast<QContextMenuEvent*>(ptr)->globalX();
}

int QContextMenuEvent_GlobalY(void* ptr){
	return static_cast<QContextMenuEvent*>(ptr)->globalY();
}

int QContextMenuEvent_Reason(void* ptr){
	return static_cast<QContextMenuEvent*>(ptr)->reason();
}

int QContextMenuEvent_X(void* ptr){
	return static_cast<QContextMenuEvent*>(ptr)->x();
}

int QContextMenuEvent_Y(void* ptr){
	return static_cast<QContextMenuEvent*>(ptr)->y();
}

#include "qtextcursor.h"
#include <QModelIndex>
#include <QTextList>
#include <QImage>
#include <QTextDocument>
#include <QTextListFormat>
#include <QString>
#include <QUrl>
#include <QTextTableFormat>
#include <QTextTable>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextDocumentFragment>
#include <QTextBlockFormat>
#include <QTextImageFormat>
#include <QTextFrameFormat>
#include <QVariant>
#include <QTextFrame>
#include <QTextCursor>
#include "_cgo_export.h"

class MyQTextCursor: public QTextCursor {
public:
};

void QTextCursor_InsertBlock3(void* ptr, void* format, void* charFormat){
	static_cast<QTextCursor*>(ptr)->insertBlock(*static_cast<QTextBlockFormat*>(format), *static_cast<QTextCharFormat*>(charFormat));
}

void* QTextCursor_InsertTable2(void* ptr, int rows, int columns){
	return static_cast<QTextCursor*>(ptr)->insertTable(rows, columns);
}

void* QTextCursor_InsertTable(void* ptr, int rows, int columns, void* format){
	return static_cast<QTextCursor*>(ptr)->insertTable(rows, columns, *static_cast<QTextTableFormat*>(format));
}

void QTextCursor_InsertText2(void* ptr, char* text, void* format){
	static_cast<QTextCursor*>(ptr)->insertText(QString(text), *static_cast<QTextCharFormat*>(format));
}

int QTextCursor_MovePosition(void* ptr, int operation, int mode, int n){
	return static_cast<QTextCursor*>(ptr)->movePosition(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode), n);
}

void* QTextCursor_NewQTextCursor(){
	return new QTextCursor();
}

void* QTextCursor_NewQTextCursor2(void* document){
	return new QTextCursor(static_cast<QTextDocument*>(document));
}

void* QTextCursor_NewQTextCursor4(void* frame){
	return new QTextCursor(static_cast<QTextFrame*>(frame));
}

void* QTextCursor_NewQTextCursor5(void* block){
	return new QTextCursor(*static_cast<QTextBlock*>(block));
}

void* QTextCursor_NewQTextCursor7(void* cursor){
	return new QTextCursor(*static_cast<QTextCursor*>(cursor));
}

int QTextCursor_Anchor(void* ptr){
	return static_cast<QTextCursor*>(ptr)->anchor();
}

int QTextCursor_AtBlockEnd(void* ptr){
	return static_cast<QTextCursor*>(ptr)->atBlockEnd();
}

int QTextCursor_AtBlockStart(void* ptr){
	return static_cast<QTextCursor*>(ptr)->atBlockStart();
}

int QTextCursor_AtEnd(void* ptr){
	return static_cast<QTextCursor*>(ptr)->atEnd();
}

int QTextCursor_AtStart(void* ptr){
	return static_cast<QTextCursor*>(ptr)->atStart();
}

void QTextCursor_BeginEditBlock(void* ptr){
	static_cast<QTextCursor*>(ptr)->beginEditBlock();
}

int QTextCursor_BlockNumber(void* ptr){
	return static_cast<QTextCursor*>(ptr)->blockNumber();
}

void QTextCursor_ClearSelection(void* ptr){
	static_cast<QTextCursor*>(ptr)->clearSelection();
}

int QTextCursor_ColumnNumber(void* ptr){
	return static_cast<QTextCursor*>(ptr)->columnNumber();
}

void* QTextCursor_CreateList2(void* ptr, int style){
	return static_cast<QTextCursor*>(ptr)->createList(static_cast<QTextListFormat::Style>(style));
}

void* QTextCursor_CreateList(void* ptr, void* format){
	return static_cast<QTextCursor*>(ptr)->createList(*static_cast<QTextListFormat*>(format));
}

void* QTextCursor_CurrentFrame(void* ptr){
	return static_cast<QTextCursor*>(ptr)->currentFrame();
}

void* QTextCursor_CurrentList(void* ptr){
	return static_cast<QTextCursor*>(ptr)->currentList();
}

void* QTextCursor_CurrentTable(void* ptr){
	return static_cast<QTextCursor*>(ptr)->currentTable();
}

void QTextCursor_DeleteChar(void* ptr){
	static_cast<QTextCursor*>(ptr)->deleteChar();
}

void QTextCursor_DeletePreviousChar(void* ptr){
	static_cast<QTextCursor*>(ptr)->deletePreviousChar();
}

void* QTextCursor_Document(void* ptr){
	return static_cast<QTextCursor*>(ptr)->document();
}

void QTextCursor_EndEditBlock(void* ptr){
	static_cast<QTextCursor*>(ptr)->endEditBlock();
}

int QTextCursor_HasComplexSelection(void* ptr){
	return static_cast<QTextCursor*>(ptr)->hasComplexSelection();
}

int QTextCursor_HasSelection(void* ptr){
	return static_cast<QTextCursor*>(ptr)->hasSelection();
}

void QTextCursor_InsertBlock(void* ptr){
	static_cast<QTextCursor*>(ptr)->insertBlock();
}

void QTextCursor_InsertBlock2(void* ptr, void* format){
	static_cast<QTextCursor*>(ptr)->insertBlock(*static_cast<QTextBlockFormat*>(format));
}

void QTextCursor_InsertFragment(void* ptr, void* fragment){
	static_cast<QTextCursor*>(ptr)->insertFragment(*static_cast<QTextDocumentFragment*>(fragment));
}

void* QTextCursor_InsertFrame(void* ptr, void* format){
	return static_cast<QTextCursor*>(ptr)->insertFrame(*static_cast<QTextFrameFormat*>(format));
}

void QTextCursor_InsertHtml(void* ptr, char* html){
	static_cast<QTextCursor*>(ptr)->insertHtml(QString(html));
}

void QTextCursor_InsertImage4(void* ptr, void* image, char* name){
	static_cast<QTextCursor*>(ptr)->insertImage(*static_cast<QImage*>(image), QString(name));
}

void QTextCursor_InsertImage3(void* ptr, char* name){
	static_cast<QTextCursor*>(ptr)->insertImage(QString(name));
}

void QTextCursor_InsertImage(void* ptr, void* format){
	static_cast<QTextCursor*>(ptr)->insertImage(*static_cast<QTextImageFormat*>(format));
}

void QTextCursor_InsertImage2(void* ptr, void* format, int alignment){
	static_cast<QTextCursor*>(ptr)->insertImage(*static_cast<QTextImageFormat*>(format), static_cast<QTextFrameFormat::Position>(alignment));
}

void* QTextCursor_InsertList2(void* ptr, int style){
	return static_cast<QTextCursor*>(ptr)->insertList(static_cast<QTextListFormat::Style>(style));
}

void* QTextCursor_InsertList(void* ptr, void* format){
	return static_cast<QTextCursor*>(ptr)->insertList(*static_cast<QTextListFormat*>(format));
}

void QTextCursor_InsertText(void* ptr, char* text){
	static_cast<QTextCursor*>(ptr)->insertText(QString(text));
}

int QTextCursor_IsCopyOf(void* ptr, void* other){
	return static_cast<QTextCursor*>(ptr)->isCopyOf(*static_cast<QTextCursor*>(other));
}

int QTextCursor_IsNull(void* ptr){
	return static_cast<QTextCursor*>(ptr)->isNull();
}

void QTextCursor_JoinPreviousEditBlock(void* ptr){
	static_cast<QTextCursor*>(ptr)->joinPreviousEditBlock();
}

int QTextCursor_KeepPositionOnInsert(void* ptr){
	return static_cast<QTextCursor*>(ptr)->keepPositionOnInsert();
}

void QTextCursor_MergeBlockCharFormat(void* ptr, void* modifier){
	static_cast<QTextCursor*>(ptr)->mergeBlockCharFormat(*static_cast<QTextCharFormat*>(modifier));
}

void QTextCursor_MergeBlockFormat(void* ptr, void* modifier){
	static_cast<QTextCursor*>(ptr)->mergeBlockFormat(*static_cast<QTextBlockFormat*>(modifier));
}

void QTextCursor_MergeCharFormat(void* ptr, void* modifier){
	static_cast<QTextCursor*>(ptr)->mergeCharFormat(*static_cast<QTextCharFormat*>(modifier));
}

int QTextCursor_Position(void* ptr){
	return static_cast<QTextCursor*>(ptr)->position();
}

int QTextCursor_PositionInBlock(void* ptr){
	return static_cast<QTextCursor*>(ptr)->positionInBlock();
}

void QTextCursor_RemoveSelectedText(void* ptr){
	static_cast<QTextCursor*>(ptr)->removeSelectedText();
}

void QTextCursor_Select(void* ptr, int selection){
	static_cast<QTextCursor*>(ptr)->select(static_cast<QTextCursor::SelectionType>(selection));
}

void QTextCursor_SelectedTableCells(void* ptr, int firstRow, int numRows, int firstColumn, int numColumns){
	static_cast<QTextCursor*>(ptr)->selectedTableCells(&firstRow, &numRows, &firstColumn, &numColumns);
}

char* QTextCursor_SelectedText(void* ptr){
	return static_cast<QTextCursor*>(ptr)->selectedText().toUtf8().data();
}

int QTextCursor_SelectionEnd(void* ptr){
	return static_cast<QTextCursor*>(ptr)->selectionEnd();
}

int QTextCursor_SelectionStart(void* ptr){
	return static_cast<QTextCursor*>(ptr)->selectionStart();
}

void QTextCursor_SetBlockCharFormat(void* ptr, void* format){
	static_cast<QTextCursor*>(ptr)->setBlockCharFormat(*static_cast<QTextCharFormat*>(format));
}

void QTextCursor_SetBlockFormat(void* ptr, void* format){
	static_cast<QTextCursor*>(ptr)->setBlockFormat(*static_cast<QTextBlockFormat*>(format));
}

void QTextCursor_SetCharFormat(void* ptr, void* format){
	static_cast<QTextCursor*>(ptr)->setCharFormat(*static_cast<QTextCharFormat*>(format));
}

void QTextCursor_SetKeepPositionOnInsert(void* ptr, int b){
	static_cast<QTextCursor*>(ptr)->setKeepPositionOnInsert(b != 0);
}

void QTextCursor_SetPosition(void* ptr, int pos, int m){
	static_cast<QTextCursor*>(ptr)->setPosition(pos, static_cast<QTextCursor::MoveMode>(m));
}

void QTextCursor_SetVerticalMovementX(void* ptr, int x){
	static_cast<QTextCursor*>(ptr)->setVerticalMovementX(x);
}

void QTextCursor_SetVisualNavigation(void* ptr, int b){
	static_cast<QTextCursor*>(ptr)->setVisualNavigation(b != 0);
}

void QTextCursor_Swap(void* ptr, void* other){
	static_cast<QTextCursor*>(ptr)->swap(*static_cast<QTextCursor*>(other));
}

int QTextCursor_VerticalMovementX(void* ptr){
	return static_cast<QTextCursor*>(ptr)->verticalMovementX();
}

int QTextCursor_VisualNavigation(void* ptr){
	return static_cast<QTextCursor*>(ptr)->visualNavigation();
}

void QTextCursor_DestroyQTextCursor(void* ptr){
	static_cast<QTextCursor*>(ptr)->~QTextCursor();
}

#include "qimageiohandler.h"
#include <QUrl>
#include <QModelIndex>
#include <QImage>
#include <QString>
#include <QVariant>
#include <QImageIOHandler>
#include "_cgo_export.h"

#include "qscrollevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPoint>
#include <QPointF>
#include <QString>
#include <QScrollEvent>
#include "_cgo_export.h"

class MyQScrollEvent: public QScrollEvent {
public:
};

void* QScrollEvent_NewQScrollEvent(void* contentPos, void* overshootDistance, int scrollState){
	return new QScrollEvent(*static_cast<QPointF*>(contentPos), *static_cast<QPointF*>(overshootDistance), static_cast<QScrollEvent::ScrollState>(scrollState));
}

int QScrollEvent_ScrollState(void* ptr){
	return static_cast<QScrollEvent*>(ptr)->scrollState();
}

void QScrollEvent_DestroyQScrollEvent(void* ptr){
	static_cast<QScrollEvent*>(ptr)->~QScrollEvent();
}

#include "qtextformat.h"
#include <QColor>
#include <QBrush>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextFormat>
#include "_cgo_export.h"

class MyQTextFormat: public QTextFormat {
public:
};

void* QTextFormat_NewQTextFormat3(void* other){
	return new QTextFormat(*static_cast<QTextFormat*>(other));
}

void QTextFormat_SetObjectIndex(void* ptr, int index){
	static_cast<QTextFormat*>(ptr)->setObjectIndex(index);
}

void* QTextFormat_NewQTextFormat(){
	return new QTextFormat();
}

void* QTextFormat_NewQTextFormat2(int ty){
	return new QTextFormat(ty);
}

void* QTextFormat_Background(void* ptr){
	return new QBrush(static_cast<QTextFormat*>(ptr)->background());
}

int QTextFormat_BoolProperty(void* ptr, int propertyId){
	return static_cast<QTextFormat*>(ptr)->boolProperty(propertyId);
}

void* QTextFormat_BrushProperty(void* ptr, int propertyId){
	return new QBrush(static_cast<QTextFormat*>(ptr)->brushProperty(propertyId));
}

void QTextFormat_ClearBackground(void* ptr){
	static_cast<QTextFormat*>(ptr)->clearBackground();
}

void QTextFormat_ClearForeground(void* ptr){
	static_cast<QTextFormat*>(ptr)->clearForeground();
}

void QTextFormat_ClearProperty(void* ptr, int propertyId){
	static_cast<QTextFormat*>(ptr)->clearProperty(propertyId);
}

void* QTextFormat_ColorProperty(void* ptr, int propertyId){
	return new QColor(static_cast<QTextFormat*>(ptr)->colorProperty(propertyId));
}

double QTextFormat_DoubleProperty(void* ptr, int propertyId){
	return static_cast<double>(static_cast<QTextFormat*>(ptr)->doubleProperty(propertyId));
}

void* QTextFormat_Foreground(void* ptr){
	return new QBrush(static_cast<QTextFormat*>(ptr)->foreground());
}

int QTextFormat_HasProperty(void* ptr, int propertyId){
	return static_cast<QTextFormat*>(ptr)->hasProperty(propertyId);
}

int QTextFormat_IntProperty(void* ptr, int propertyId){
	return static_cast<QTextFormat*>(ptr)->intProperty(propertyId);
}

int QTextFormat_IsBlockFormat(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isBlockFormat();
}

int QTextFormat_IsCharFormat(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isCharFormat();
}

int QTextFormat_IsEmpty(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isEmpty();
}

int QTextFormat_IsFrameFormat(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isFrameFormat();
}

int QTextFormat_IsImageFormat(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isImageFormat();
}

int QTextFormat_IsListFormat(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isListFormat();
}

int QTextFormat_IsTableCellFormat(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isTableCellFormat();
}

int QTextFormat_IsTableFormat(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isTableFormat();
}

int QTextFormat_IsValid(void* ptr){
	return static_cast<QTextFormat*>(ptr)->isValid();
}

int QTextFormat_LayoutDirection(void* ptr){
	return static_cast<QTextFormat*>(ptr)->layoutDirection();
}

void QTextFormat_Merge(void* ptr, void* other){
	static_cast<QTextFormat*>(ptr)->merge(*static_cast<QTextFormat*>(other));
}

int QTextFormat_ObjectIndex(void* ptr){
	return static_cast<QTextFormat*>(ptr)->objectIndex();
}

int QTextFormat_ObjectType(void* ptr){
	return static_cast<QTextFormat*>(ptr)->objectType();
}

void* QTextFormat_Property(void* ptr, int propertyId){
	return new QVariant(static_cast<QTextFormat*>(ptr)->property(propertyId));
}

int QTextFormat_PropertyCount(void* ptr){
	return static_cast<QTextFormat*>(ptr)->propertyCount();
}

void QTextFormat_SetBackground(void* ptr, void* brush){
	static_cast<QTextFormat*>(ptr)->setBackground(*static_cast<QBrush*>(brush));
}

void QTextFormat_SetForeground(void* ptr, void* brush){
	static_cast<QTextFormat*>(ptr)->setForeground(*static_cast<QBrush*>(brush));
}

void QTextFormat_SetLayoutDirection(void* ptr, int direction){
	static_cast<QTextFormat*>(ptr)->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QTextFormat_SetObjectType(void* ptr, int ty){
	static_cast<QTextFormat*>(ptr)->setObjectType(ty);
}

void QTextFormat_SetProperty(void* ptr, int propertyId, void* value){
	static_cast<QTextFormat*>(ptr)->setProperty(propertyId, *static_cast<QVariant*>(value));
}

char* QTextFormat_StringProperty(void* ptr, int propertyId){
	return static_cast<QTextFormat*>(ptr)->stringProperty(propertyId).toUtf8().data();
}

void QTextFormat_Swap(void* ptr, void* other){
	static_cast<QTextFormat*>(ptr)->swap(*static_cast<QTextFormat*>(other));
}

int QTextFormat_Type(void* ptr){
	return static_cast<QTextFormat*>(ptr)->type();
}

void QTextFormat_DestroyQTextFormat(void* ptr){
	static_cast<QTextFormat*>(ptr)->~QTextFormat();
}

#include "qfontdatabase.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QFontInfo>
#include <QFont>
#include <QByteArray>
#include <QFontDatabase>
#include "_cgo_export.h"

class MyQFontDatabase: public QFontDatabase {
public:
};

int QFontDatabase_Ogham_Type(){
	return QFontDatabase::Ogham;
}

int QFontDatabase_Runic_Type(){
	return QFontDatabase::Runic;
}

int QFontDatabase_Nko_Type(){
	return QFontDatabase::Nko;
}

int QFontDatabase_WritingSystemsCount_Type(){
	return QFontDatabase::WritingSystemsCount;
}

int QFontDatabase_QFontDatabase_RemoveAllApplicationFonts(){
	return QFontDatabase::removeAllApplicationFonts();
}

int QFontDatabase_QFontDatabase_RemoveApplicationFont(int id){
	return QFontDatabase::removeApplicationFont(id);
}

void* QFontDatabase_NewQFontDatabase(){
	return new QFontDatabase();
}

int QFontDatabase_QFontDatabase_AddApplicationFont(char* fileName){
	return QFontDatabase::addApplicationFont(QString(fileName));
}

int QFontDatabase_QFontDatabase_AddApplicationFontFromData(void* fontData){
	return QFontDatabase::addApplicationFontFromData(*static_cast<QByteArray*>(fontData));
}

char* QFontDatabase_QFontDatabase_ApplicationFontFamilies(int id){
	return QFontDatabase::applicationFontFamilies(id).join("|").toUtf8().data();
}

int QFontDatabase_Bold(void* ptr, char* family, char* style){
	return static_cast<QFontDatabase*>(ptr)->bold(QString(family), QString(style));
}

char* QFontDatabase_Families(void* ptr, int writingSystem){
	return static_cast<QFontDatabase*>(ptr)->families(static_cast<QFontDatabase::WritingSystem>(writingSystem)).join("|").toUtf8().data();
}

int QFontDatabase_IsBitmapScalable(void* ptr, char* family, char* style){
	return static_cast<QFontDatabase*>(ptr)->isBitmapScalable(QString(family), QString(style));
}

int QFontDatabase_IsFixedPitch(void* ptr, char* family, char* style){
	return static_cast<QFontDatabase*>(ptr)->isFixedPitch(QString(family), QString(style));
}

int QFontDatabase_IsPrivateFamily(void* ptr, char* family){
	return static_cast<QFontDatabase*>(ptr)->isPrivateFamily(QString(family));
}

int QFontDatabase_IsScalable(void* ptr, char* family, char* style){
	return static_cast<QFontDatabase*>(ptr)->isScalable(QString(family), QString(style));
}

int QFontDatabase_IsSmoothlyScalable(void* ptr, char* family, char* style){
	return static_cast<QFontDatabase*>(ptr)->isSmoothlyScalable(QString(family), QString(style));
}

int QFontDatabase_Italic(void* ptr, char* family, char* style){
	return static_cast<QFontDatabase*>(ptr)->italic(QString(family), QString(style));
}

char* QFontDatabase_StyleString(void* ptr, void* font){
	return static_cast<QFontDatabase*>(ptr)->styleString(*static_cast<QFont*>(font)).toUtf8().data();
}

char* QFontDatabase_StyleString2(void* ptr, void* fontInfo){
	return static_cast<QFontDatabase*>(ptr)->styleString(*static_cast<QFontInfo*>(fontInfo)).toUtf8().data();
}

char* QFontDatabase_Styles(void* ptr, char* family){
	return static_cast<QFontDatabase*>(ptr)->styles(QString(family)).join("|").toUtf8().data();
}

int QFontDatabase_Weight(void* ptr, char* family, char* style){
	return static_cast<QFontDatabase*>(ptr)->weight(QString(family), QString(style));
}

char* QFontDatabase_QFontDatabase_WritingSystemName(int writingSystem){
	return QFontDatabase::writingSystemName(static_cast<QFontDatabase::WritingSystem>(writingSystem)).toUtf8().data();
}

char* QFontDatabase_QFontDatabase_WritingSystemSample(int writingSystem){
	return QFontDatabase::writingSystemSample(static_cast<QFontDatabase::WritingSystem>(writingSystem)).toUtf8().data();
}

#include "qopenglfunctions_4_2_compatibility.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qglyphrun.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QRawFont>
#include <QRectF>
#include <QRect>
#include <QGlyphRun>
#include "_cgo_export.h"

class MyQGlyphRun: public QGlyphRun {
public:
};

void* QGlyphRun_NewQGlyphRun(){
	return new QGlyphRun();
}

void* QGlyphRun_NewQGlyphRun2(void* other){
	return new QGlyphRun(*static_cast<QGlyphRun*>(other));
}

void QGlyphRun_Clear(void* ptr){
	static_cast<QGlyphRun*>(ptr)->clear();
}

int QGlyphRun_Flags(void* ptr){
	return static_cast<QGlyphRun*>(ptr)->flags();
}

int QGlyphRun_IsEmpty(void* ptr){
	return static_cast<QGlyphRun*>(ptr)->isEmpty();
}

int QGlyphRun_IsRightToLeft(void* ptr){
	return static_cast<QGlyphRun*>(ptr)->isRightToLeft();
}

int QGlyphRun_Overline(void* ptr){
	return static_cast<QGlyphRun*>(ptr)->overline();
}

void QGlyphRun_SetBoundingRect(void* ptr, void* boundingRect){
	static_cast<QGlyphRun*>(ptr)->setBoundingRect(*static_cast<QRectF*>(boundingRect));
}

void QGlyphRun_SetFlag(void* ptr, int flag, int enabled){
	static_cast<QGlyphRun*>(ptr)->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag), enabled != 0);
}

void QGlyphRun_SetFlags(void* ptr, int flags){
	static_cast<QGlyphRun*>(ptr)->setFlags(static_cast<QGlyphRun::GlyphRunFlag>(flags));
}

void QGlyphRun_SetOverline(void* ptr, int overline){
	static_cast<QGlyphRun*>(ptr)->setOverline(overline != 0);
}

void QGlyphRun_SetRawFont(void* ptr, void* rawFont){
	static_cast<QGlyphRun*>(ptr)->setRawFont(*static_cast<QRawFont*>(rawFont));
}

void QGlyphRun_SetRightToLeft(void* ptr, int rightToLeft){
	static_cast<QGlyphRun*>(ptr)->setRightToLeft(rightToLeft != 0);
}

void QGlyphRun_SetStrikeOut(void* ptr, int strikeOut){
	static_cast<QGlyphRun*>(ptr)->setStrikeOut(strikeOut != 0);
}

void QGlyphRun_SetUnderline(void* ptr, int underline){
	static_cast<QGlyphRun*>(ptr)->setUnderline(underline != 0);
}

int QGlyphRun_StrikeOut(void* ptr){
	return static_cast<QGlyphRun*>(ptr)->strikeOut();
}

void QGlyphRun_Swap(void* ptr, void* other){
	static_cast<QGlyphRun*>(ptr)->swap(*static_cast<QGlyphRun*>(other));
}

int QGlyphRun_Underline(void* ptr){
	return static_cast<QGlyphRun*>(ptr)->underline();
}

void QGlyphRun_DestroyQGlyphRun(void* ptr){
	static_cast<QGlyphRun*>(ptr)->~QGlyphRun();
}

#include "qrawfont.h"
#include <QModelIndex>
#include <QFont>
#include <QByteArray>
#include <QChar>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QRawFont>
#include "_cgo_export.h"

class MyQRawFont: public QRawFont {
public:
};

void* QRawFont_NewQRawFont(){
	return new QRawFont();
}

void* QRawFont_NewQRawFont3(void* fontData, double pixelSize, int hintingPreference){
	return new QRawFont(*static_cast<QByteArray*>(fontData), static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void* QRawFont_NewQRawFont4(void* other){
	return new QRawFont(*static_cast<QRawFont*>(other));
}

void* QRawFont_NewQRawFont2(char* fileName, double pixelSize, int hintingPreference){
	return new QRawFont(QString(fileName), static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

double QRawFont_Ascent(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->ascent());
}

double QRawFont_AverageCharWidth(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->averageCharWidth());
}

double QRawFont_Descent(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->descent());
}

char* QRawFont_FamilyName(void* ptr){
	return static_cast<QRawFont*>(ptr)->familyName().toUtf8().data();
}

void* QRawFont_FontTable(void* ptr, char* tagName){
	return new QByteArray(static_cast<QRawFont*>(ptr)->fontTable(const_cast<const char*>(tagName)));
}

int QRawFont_HintingPreference(void* ptr){
	return static_cast<QRawFont*>(ptr)->hintingPreference();
}

int QRawFont_IsValid(void* ptr){
	return static_cast<QRawFont*>(ptr)->isValid();
}

double QRawFont_Leading(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->leading());
}

double QRawFont_LineThickness(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->lineThickness());
}

void QRawFont_LoadFromData(void* ptr, void* fontData, double pixelSize, int hintingPreference){
	static_cast<QRawFont*>(ptr)->loadFromData(*static_cast<QByteArray*>(fontData), static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_LoadFromFile(void* ptr, char* fileName, double pixelSize, int hintingPreference){
	static_cast<QRawFont*>(ptr)->loadFromFile(QString(fileName), static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

double QRawFont_MaxCharWidth(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->maxCharWidth());
}

double QRawFont_PixelSize(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->pixelSize());
}

void QRawFont_SetPixelSize(void* ptr, double pixelSize){
	static_cast<QRawFont*>(ptr)->setPixelSize(static_cast<qreal>(pixelSize));
}

int QRawFont_Style(void* ptr){
	return static_cast<QRawFont*>(ptr)->style();
}

char* QRawFont_StyleName(void* ptr){
	return static_cast<QRawFont*>(ptr)->styleName().toUtf8().data();
}

int QRawFont_SupportsCharacter(void* ptr, void* character){
	return static_cast<QRawFont*>(ptr)->supportsCharacter(*static_cast<QChar*>(character));
}

void QRawFont_Swap(void* ptr, void* other){
	static_cast<QRawFont*>(ptr)->swap(*static_cast<QRawFont*>(other));
}

double QRawFont_UnderlinePosition(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->underlinePosition());
}

double QRawFont_UnitsPerEm(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->unitsPerEm());
}

int QRawFont_Weight(void* ptr){
	return static_cast<QRawFont*>(ptr)->weight();
}

double QRawFont_XHeight(void* ptr){
	return static_cast<double>(static_cast<QRawFont*>(ptr)->xHeight());
}

void QRawFont_DestroyQRawFont(void* ptr){
	static_cast<QRawFont*>(ptr)->~QRawFont();
}

#include "qtabletevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTabletEvent>
#include "_cgo_export.h"

class MyQTabletEvent: public QTabletEvent {
public:
};

int QTabletEvent_Button(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->button();
}

int QTabletEvent_Buttons(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->buttons();
}

int QTabletEvent_Device(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->device();
}

int QTabletEvent_GlobalX(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->globalX();
}

int QTabletEvent_GlobalY(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->globalY();
}

double QTabletEvent_HiResGlobalX(void* ptr){
	return static_cast<double>(static_cast<QTabletEvent*>(ptr)->hiResGlobalX());
}

double QTabletEvent_HiResGlobalY(void* ptr){
	return static_cast<double>(static_cast<QTabletEvent*>(ptr)->hiResGlobalY());
}

int QTabletEvent_PointerType(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->pointerType();
}

double QTabletEvent_Pressure(void* ptr){
	return static_cast<double>(static_cast<QTabletEvent*>(ptr)->pressure());
}

double QTabletEvent_Rotation(void* ptr){
	return static_cast<double>(static_cast<QTabletEvent*>(ptr)->rotation());
}

double QTabletEvent_TangentialPressure(void* ptr){
	return static_cast<double>(static_cast<QTabletEvent*>(ptr)->tangentialPressure());
}

int QTabletEvent_X(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->x();
}

int QTabletEvent_XTilt(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->xTilt();
}

int QTabletEvent_Y(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->y();
}

int QTabletEvent_YTilt(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->yTilt();
}

int QTabletEvent_Z(void* ptr){
	return static_cast<QTabletEvent*>(ptr)->z();
}

#include "qsessionmanager.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QSessionManager>
#include "_cgo_export.h"

class MyQSessionManager: public QSessionManager {
public:
};

int QSessionManager_RestartHint(void* ptr){
	return static_cast<QSessionManager*>(ptr)->restartHint();
}

char* QSessionManager_SessionKey(void* ptr){
	return static_cast<QSessionManager*>(ptr)->sessionKey().toUtf8().data();
}

int QSessionManager_AllowsErrorInteraction(void* ptr){
	return static_cast<QSessionManager*>(ptr)->allowsErrorInteraction();
}

int QSessionManager_AllowsInteraction(void* ptr){
	return static_cast<QSessionManager*>(ptr)->allowsInteraction();
}

void QSessionManager_Cancel(void* ptr){
	static_cast<QSessionManager*>(ptr)->cancel();
}

char* QSessionManager_DiscardCommand(void* ptr){
	return static_cast<QSessionManager*>(ptr)->discardCommand().join("|").toUtf8().data();
}

int QSessionManager_IsPhase2(void* ptr){
	return static_cast<QSessionManager*>(ptr)->isPhase2();
}

void QSessionManager_Release(void* ptr){
	static_cast<QSessionManager*>(ptr)->release();
}

void QSessionManager_RequestPhase2(void* ptr){
	static_cast<QSessionManager*>(ptr)->requestPhase2();
}

char* QSessionManager_RestartCommand(void* ptr){
	return static_cast<QSessionManager*>(ptr)->restartCommand().join("|").toUtf8().data();
}

char* QSessionManager_SessionId(void* ptr){
	return static_cast<QSessionManager*>(ptr)->sessionId().toUtf8().data();
}

void QSessionManager_SetDiscardCommand(void* ptr, char* command){
	static_cast<QSessionManager*>(ptr)->setDiscardCommand(QString(command).split("|", QString::SkipEmptyParts));
}

void QSessionManager_SetManagerProperty2(void* ptr, char* name, char* value){
	static_cast<QSessionManager*>(ptr)->setManagerProperty(QString(name), QString(value));
}

void QSessionManager_SetManagerProperty(void* ptr, char* name, char* value){
	static_cast<QSessionManager*>(ptr)->setManagerProperty(QString(name), QString(value).split("|", QString::SkipEmptyParts));
}

void QSessionManager_SetRestartCommand(void* ptr, char* command){
	static_cast<QSessionManager*>(ptr)->setRestartCommand(QString(command).split("|", QString::SkipEmptyParts));
}

void QSessionManager_SetRestartHint(void* ptr, int hint){
	static_cast<QSessionManager*>(ptr)->setRestartHint(static_cast<QSessionManager::RestartHint>(hint));
}

#include "qcolor.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QColor>
#include "_cgo_export.h"

class MyQColor: public QColor {
public:
};

void* QColor_ConvertTo(void* ptr, int colorSpec){
	return new QColor(static_cast<QColor*>(ptr)->convertTo(static_cast<QColor::Spec>(colorSpec)));
}

void QColor_SetRgbF(void* ptr, double r, double g, double b, double a){
	static_cast<QColor*>(ptr)->setRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b), static_cast<qreal>(a));
}

void* QColor_NewQColor(){
	return new QColor();
}

void* QColor_NewQColor8(int color){
	return new QColor(static_cast<Qt::GlobalColor>(color));
}

void* QColor_NewQColor6(void* color){
	return new QColor(*static_cast<QColor*>(color));
}

void* QColor_NewQColor4(char* name){
	return new QColor(QString(name));
}

void* QColor_NewQColor5(char* name){
	return new QColor(const_cast<const char*>(name));
}

void* QColor_NewQColor2(int r, int g, int b, int a){
	return new QColor(r, g, b, a);
}

int QColor_Alpha(void* ptr){
	return static_cast<QColor*>(ptr)->alpha();
}

double QColor_AlphaF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->alphaF());
}

int QColor_Black(void* ptr){
	return static_cast<QColor*>(ptr)->black();
}

double QColor_BlackF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->blackF());
}

int QColor_Blue(void* ptr){
	return static_cast<QColor*>(ptr)->blue();
}

double QColor_BlueF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->blueF());
}

char* QColor_QColor_ColorNames(){
	return QColor::colorNames().join("|").toUtf8().data();
}

int QColor_Cyan(void* ptr){
	return static_cast<QColor*>(ptr)->cyan();
}

double QColor_CyanF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->cyanF());
}

void* QColor_Darker(void* ptr, int factor){
	return new QColor(static_cast<QColor*>(ptr)->darker(factor));
}

void* QColor_QColor_FromCmyk(int c, int m, int y, int k, int a){
	return new QColor(QColor::fromCmyk(c, m, y, k, a));
}

void* QColor_QColor_FromCmykF(double c, double m, double y, double k, double a){
	return new QColor(QColor::fromCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k), static_cast<qreal>(a)));
}

void* QColor_QColor_FromHsl(int h, int s, int l, int a){
	return new QColor(QColor::fromHsl(h, s, l, a));
}

void* QColor_QColor_FromHslF(double h, double s, double l, double a){
	return new QColor(QColor::fromHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l), static_cast<qreal>(a)));
}

void* QColor_QColor_FromHsv(int h, int s, int v, int a){
	return new QColor(QColor::fromHsv(h, s, v, a));
}

void* QColor_QColor_FromHsvF(double h, double s, double v, double a){
	return new QColor(QColor::fromHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v), static_cast<qreal>(a)));
}

void* QColor_QColor_FromRgb2(int r, int g, int b, int a){
	return new QColor(QColor::fromRgb(r, g, b, a));
}

void* QColor_QColor_FromRgbF(double r, double g, double b, double a){
	return new QColor(QColor::fromRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b), static_cast<qreal>(a)));
}

void QColor_GetCmyk(void* ptr, int c, int m, int y, int k, int a){
	static_cast<QColor*>(ptr)->getCmyk(&c, &m, &y, &k, &a);
}

void QColor_GetHsl(void* ptr, int h, int s, int l, int a){
	static_cast<QColor*>(ptr)->getHsl(&h, &s, &l, &a);
}

void QColor_GetHsv(void* ptr, int h, int s, int v, int a){
	static_cast<QColor*>(ptr)->getHsv(&h, &s, &v, &a);
}

void QColor_GetRgb(void* ptr, int r, int g, int b, int a){
	static_cast<QColor*>(ptr)->getRgb(&r, &g, &b, &a);
}

int QColor_Green(void* ptr){
	return static_cast<QColor*>(ptr)->green();
}

double QColor_GreenF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->greenF());
}

int QColor_HslHue(void* ptr){
	return static_cast<QColor*>(ptr)->hslHue();
}

double QColor_HslHueF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->hslHueF());
}

int QColor_HslSaturation(void* ptr){
	return static_cast<QColor*>(ptr)->hslSaturation();
}

double QColor_HslSaturationF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->hslSaturationF());
}

int QColor_HsvHue(void* ptr){
	return static_cast<QColor*>(ptr)->hsvHue();
}

double QColor_HsvHueF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->hsvHueF());
}

int QColor_HsvSaturation(void* ptr){
	return static_cast<QColor*>(ptr)->hsvSaturation();
}

double QColor_HsvSaturationF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->hsvSaturationF());
}

int QColor_Hue(void* ptr){
	return static_cast<QColor*>(ptr)->hue();
}

double QColor_HueF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->hueF());
}

int QColor_IsValid(void* ptr){
	return static_cast<QColor*>(ptr)->isValid();
}

int QColor_QColor_IsValidColor(char* name){
	return QColor::isValidColor(QString(name));
}

void* QColor_Lighter(void* ptr, int factor){
	return new QColor(static_cast<QColor*>(ptr)->lighter(factor));
}

int QColor_Lightness(void* ptr){
	return static_cast<QColor*>(ptr)->lightness();
}

double QColor_LightnessF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->lightnessF());
}

int QColor_Magenta(void* ptr){
	return static_cast<QColor*>(ptr)->magenta();
}

double QColor_MagentaF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->magentaF());
}

char* QColor_Name(void* ptr){
	return static_cast<QColor*>(ptr)->name().toUtf8().data();
}

char* QColor_Name2(void* ptr, int format){
	return static_cast<QColor*>(ptr)->name(static_cast<QColor::NameFormat>(format)).toUtf8().data();
}

int QColor_Red(void* ptr){
	return static_cast<QColor*>(ptr)->red();
}

double QColor_RedF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->redF());
}

int QColor_Saturation(void* ptr){
	return static_cast<QColor*>(ptr)->saturation();
}

double QColor_SaturationF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->saturationF());
}

void QColor_SetAlpha(void* ptr, int alpha){
	static_cast<QColor*>(ptr)->setAlpha(alpha);
}

void QColor_SetAlphaF(void* ptr, double alpha){
	static_cast<QColor*>(ptr)->setAlphaF(static_cast<qreal>(alpha));
}

void QColor_SetBlue(void* ptr, int blue){
	static_cast<QColor*>(ptr)->setBlue(blue);
}

void QColor_SetBlueF(void* ptr, double blue){
	static_cast<QColor*>(ptr)->setBlueF(static_cast<qreal>(blue));
}

void QColor_SetCmyk(void* ptr, int c, int m, int y, int k, int a){
	static_cast<QColor*>(ptr)->setCmyk(c, m, y, k, a);
}

void QColor_SetCmykF(void* ptr, double c, double m, double y, double k, double a){
	static_cast<QColor*>(ptr)->setCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k), static_cast<qreal>(a));
}

void QColor_SetGreen(void* ptr, int green){
	static_cast<QColor*>(ptr)->setGreen(green);
}

void QColor_SetGreenF(void* ptr, double green){
	static_cast<QColor*>(ptr)->setGreenF(static_cast<qreal>(green));
}

void QColor_SetHsl(void* ptr, int h, int s, int l, int a){
	static_cast<QColor*>(ptr)->setHsl(h, s, l, a);
}

void QColor_SetHslF(void* ptr, double h, double s, double l, double a){
	static_cast<QColor*>(ptr)->setHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l), static_cast<qreal>(a));
}

void QColor_SetHsv(void* ptr, int h, int s, int v, int a){
	static_cast<QColor*>(ptr)->setHsv(h, s, v, a);
}

void QColor_SetHsvF(void* ptr, double h, double s, double v, double a){
	static_cast<QColor*>(ptr)->setHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v), static_cast<qreal>(a));
}

void QColor_SetNamedColor(void* ptr, char* name){
	static_cast<QColor*>(ptr)->setNamedColor(QString(name));
}

void QColor_SetRed(void* ptr, int red){
	static_cast<QColor*>(ptr)->setRed(red);
}

void QColor_SetRedF(void* ptr, double red){
	static_cast<QColor*>(ptr)->setRedF(static_cast<qreal>(red));
}

void QColor_SetRgb(void* ptr, int r, int g, int b, int a){
	static_cast<QColor*>(ptr)->setRgb(r, g, b, a);
}

int QColor_Spec(void* ptr){
	return static_cast<QColor*>(ptr)->spec();
}

void* QColor_ToCmyk(void* ptr){
	return new QColor(static_cast<QColor*>(ptr)->toCmyk());
}

void* QColor_ToHsl(void* ptr){
	return new QColor(static_cast<QColor*>(ptr)->toHsl());
}

void* QColor_ToHsv(void* ptr){
	return new QColor(static_cast<QColor*>(ptr)->toHsv());
}

void* QColor_ToRgb(void* ptr){
	return new QColor(static_cast<QColor*>(ptr)->toRgb());
}

int QColor_Value(void* ptr){
	return static_cast<QColor*>(ptr)->value();
}

double QColor_ValueF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->valueF());
}

int QColor_Yellow(void* ptr){
	return static_cast<QColor*>(ptr)->yellow();
}

double QColor_YellowF(void* ptr){
	return static_cast<double>(static_cast<QColor*>(ptr)->yellowF());
}

#include "qopenglfunctions_4_4_core.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopenglframebufferobjectformat.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qaccessibleactioninterface.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QAccessibleActionInterface>
#include "_cgo_export.h"

class MyQAccessibleActionInterface: public QAccessibleActionInterface {
public:
};

char* QAccessibleActionInterface_LocalizedActionDescription(void* ptr, char* actionName){
	return static_cast<QAccessibleActionInterface*>(ptr)->localizedActionDescription(QString(actionName)).toUtf8().data();
}

char* QAccessibleActionInterface_LocalizedActionName(void* ptr, char* actionName){
	return static_cast<QAccessibleActionInterface*>(ptr)->localizedActionName(QString(actionName)).toUtf8().data();
}

char* QAccessibleActionInterface_ActionNames(void* ptr){
	return static_cast<QAccessibleActionInterface*>(ptr)->actionNames().join("|").toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_DecreaseAction(){
	return QAccessibleActionInterface::decreaseAction().toUtf8().data();
}

void QAccessibleActionInterface_DoAction(void* ptr, char* actionName){
	static_cast<QAccessibleActionInterface*>(ptr)->doAction(QString(actionName));
}

char* QAccessibleActionInterface_QAccessibleActionInterface_IncreaseAction(){
	return QAccessibleActionInterface::increaseAction().toUtf8().data();
}

char* QAccessibleActionInterface_KeyBindingsForAction(void* ptr, char* actionName){
	return static_cast<QAccessibleActionInterface*>(ptr)->keyBindingsForAction(QString(actionName)).join("|").toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_NextPageAction(){
	return QAccessibleActionInterface::nextPageAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_PressAction(){
	return QAccessibleActionInterface::pressAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_PreviousPageAction(){
	return QAccessibleActionInterface::previousPageAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_ScrollDownAction(){
	return QAccessibleActionInterface::scrollDownAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_ScrollLeftAction(){
	return QAccessibleActionInterface::scrollLeftAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_ScrollRightAction(){
	return QAccessibleActionInterface::scrollRightAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_ScrollUpAction(){
	return QAccessibleActionInterface::scrollUpAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_SetFocusAction(){
	return QAccessibleActionInterface::setFocusAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_ShowMenuAction(){
	return QAccessibleActionInterface::showMenuAction().toUtf8().data();
}

char* QAccessibleActionInterface_QAccessibleActionInterface_ToggleAction(){
	return QAccessibleActionInterface::toggleAction().toUtf8().data();
}

void QAccessibleActionInterface_DestroyQAccessibleActionInterface(void* ptr){
	static_cast<QAccessibleActionInterface*>(ptr)->~QAccessibleActionInterface();
}

#include "qfontmetricsf.h"
#include <QModelIndex>
#include <QFont>
#include <QChar>
#include <QFontMetrics>
#include <QPaintDevice>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QFontMetricsF>
#include "_cgo_export.h"

class MyQFontMetricsF: public QFontMetricsF {
public:
};

void* QFontMetricsF_NewQFontMetricsF(void* font){
	return new QFontMetricsF(*static_cast<QFont*>(font));
}

void* QFontMetricsF_NewQFontMetricsF2(void* font, void* paintdevice){
	return new QFontMetricsF(*static_cast<QFont*>(font), static_cast<QPaintDevice*>(paintdevice));
}

void* QFontMetricsF_NewQFontMetricsF3(void* fontMetrics){
	return new QFontMetricsF(*static_cast<QFontMetrics*>(fontMetrics));
}

void* QFontMetricsF_NewQFontMetricsF4(void* fm){
	return new QFontMetricsF(*static_cast<QFontMetricsF*>(fm));
}

double QFontMetricsF_Ascent(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->ascent());
}

double QFontMetricsF_AverageCharWidth(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->averageCharWidth());
}

double QFontMetricsF_Descent(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->descent());
}

char* QFontMetricsF_ElidedText(void* ptr, char* text, int mode, double width, int flags){
	return static_cast<QFontMetricsF*>(ptr)->elidedText(QString(text), static_cast<Qt::TextElideMode>(mode), static_cast<qreal>(width), flags).toUtf8().data();
}

double QFontMetricsF_Height(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->height());
}

int QFontMetricsF_InFont(void* ptr, void* ch){
	return static_cast<QFontMetricsF*>(ptr)->inFont(*static_cast<QChar*>(ch));
}

double QFontMetricsF_Leading(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->leading());
}

double QFontMetricsF_LeftBearing(void* ptr, void* ch){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->leftBearing(*static_cast<QChar*>(ch)));
}

double QFontMetricsF_LineSpacing(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->lineSpacing());
}

double QFontMetricsF_LineWidth(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->lineWidth());
}

double QFontMetricsF_MaxWidth(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->maxWidth());
}

double QFontMetricsF_MinLeftBearing(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->minLeftBearing());
}

double QFontMetricsF_MinRightBearing(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->minRightBearing());
}

double QFontMetricsF_OverlinePos(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->overlinePos());
}

double QFontMetricsF_RightBearing(void* ptr, void* ch){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->rightBearing(*static_cast<QChar*>(ch)));
}

double QFontMetricsF_StrikeOutPos(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->strikeOutPos());
}

void QFontMetricsF_Swap(void* ptr, void* other){
	static_cast<QFontMetricsF*>(ptr)->swap(*static_cast<QFontMetricsF*>(other));
}

double QFontMetricsF_UnderlinePos(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->underlinePos());
}

double QFontMetricsF_Width2(void* ptr, void* ch){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->width(*static_cast<QChar*>(ch)));
}

double QFontMetricsF_Width(void* ptr, char* text){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->width(QString(text)));
}

double QFontMetricsF_XHeight(void* ptr){
	return static_cast<double>(static_cast<QFontMetricsF*>(ptr)->xHeight());
}

void QFontMetricsF_DestroyQFontMetricsF(void* ptr){
	static_cast<QFontMetricsF*>(ptr)->~QFontMetricsF();
}

#include "qaccessibletextselectionevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessibleInterface>
#include <QAccessible>
#include <QObject>
#include <QAccessibleTextSelectionEvent>
#include "_cgo_export.h"

class MyQAccessibleTextSelectionEvent: public QAccessibleTextSelectionEvent {
public:
};

void* QAccessibleTextSelectionEvent_NewQAccessibleTextSelectionEvent2(void* iface, int start, int end){
	return new QAccessibleTextSelectionEvent(static_cast<QAccessibleInterface*>(iface), start, end);
}

void* QAccessibleTextSelectionEvent_NewQAccessibleTextSelectionEvent(void* object, int start, int end){
	return new QAccessibleTextSelectionEvent(static_cast<QObject*>(object), start, end);
}

int QAccessibleTextSelectionEvent_SelectionEnd(void* ptr){
	return static_cast<QAccessibleTextSelectionEvent*>(ptr)->selectionEnd();
}

int QAccessibleTextSelectionEvent_SelectionStart(void* ptr){
	return static_cast<QAccessibleTextSelectionEvent*>(ptr)->selectionStart();
}

void QAccessibleTextSelectionEvent_SetSelection(void* ptr, int start, int end){
	static_cast<QAccessibleTextSelectionEvent*>(ptr)->setSelection(start, end);
}

#include "qinputmethodqueryevent.h"
#include <QInputMethod>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QInputMethodQueryEvent>
#include "_cgo_export.h"

class MyQInputMethodQueryEvent: public QInputMethodQueryEvent {
public:
};

void* QInputMethodQueryEvent_NewQInputMethodQueryEvent(int queries){
	return new QInputMethodQueryEvent(static_cast<Qt::InputMethodQuery>(queries));
}

int QInputMethodQueryEvent_Queries(void* ptr){
	return static_cast<QInputMethodQueryEvent*>(ptr)->queries();
}

void QInputMethodQueryEvent_SetValue(void* ptr, int query, void* value){
	static_cast<QInputMethodQueryEvent*>(ptr)->setValue(static_cast<Qt::InputMethodQuery>(query), *static_cast<QVariant*>(value));
}

void* QInputMethodQueryEvent_Value(void* ptr, int query){
	return new QVariant(static_cast<QInputMethodQueryEvent*>(ptr)->value(static_cast<Qt::InputMethodQuery>(query)));
}

#include "qplatformsystemtrayicon.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qsurfaceformat.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QSurface>
#include <QSurfaceFormat>
#include "_cgo_export.h"

class MyQSurfaceFormat: public QSurfaceFormat {
public:
};

void* QSurfaceFormat_NewQSurfaceFormat(){
	return new QSurfaceFormat();
}

void* QSurfaceFormat_NewQSurfaceFormat2(int options){
	return new QSurfaceFormat(static_cast<QSurfaceFormat::FormatOption>(options));
}

void* QSurfaceFormat_NewQSurfaceFormat3(void* other){
	return new QSurfaceFormat(*static_cast<QSurfaceFormat*>(other));
}

int QSurfaceFormat_AlphaBufferSize(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->alphaBufferSize();
}

int QSurfaceFormat_BlueBufferSize(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->blueBufferSize();
}

int QSurfaceFormat_DepthBufferSize(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->depthBufferSize();
}

int QSurfaceFormat_GreenBufferSize(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->greenBufferSize();
}

int QSurfaceFormat_HasAlpha(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->hasAlpha();
}

int QSurfaceFormat_MajorVersion(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->majorVersion();
}

int QSurfaceFormat_MinorVersion(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->minorVersion();
}

int QSurfaceFormat_Options(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->options();
}

int QSurfaceFormat_Profile(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->profile();
}

int QSurfaceFormat_RedBufferSize(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->redBufferSize();
}

int QSurfaceFormat_RenderableType(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->renderableType();
}

int QSurfaceFormat_Samples(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->samples();
}

void QSurfaceFormat_SetAlphaBufferSize(void* ptr, int size){
	static_cast<QSurfaceFormat*>(ptr)->setAlphaBufferSize(size);
}

void QSurfaceFormat_SetBlueBufferSize(void* ptr, int size){
	static_cast<QSurfaceFormat*>(ptr)->setBlueBufferSize(size);
}

void QSurfaceFormat_QSurfaceFormat_SetDefaultFormat(void* format){
	QSurfaceFormat::setDefaultFormat(*static_cast<QSurfaceFormat*>(format));
}

void QSurfaceFormat_SetDepthBufferSize(void* ptr, int size){
	static_cast<QSurfaceFormat*>(ptr)->setDepthBufferSize(size);
}

void QSurfaceFormat_SetGreenBufferSize(void* ptr, int size){
	static_cast<QSurfaceFormat*>(ptr)->setGreenBufferSize(size);
}

void QSurfaceFormat_SetMajorVersion(void* ptr, int major){
	static_cast<QSurfaceFormat*>(ptr)->setMajorVersion(major);
}

void QSurfaceFormat_SetMinorVersion(void* ptr, int minor){
	static_cast<QSurfaceFormat*>(ptr)->setMinorVersion(minor);
}

void QSurfaceFormat_SetOption(void* ptr, int option, int on){
	static_cast<QSurfaceFormat*>(ptr)->setOption(static_cast<QSurfaceFormat::FormatOption>(option), on != 0);
}

void QSurfaceFormat_SetOptions(void* ptr, int options){
	static_cast<QSurfaceFormat*>(ptr)->setOptions(static_cast<QSurfaceFormat::FormatOption>(options));
}

void QSurfaceFormat_SetProfile(void* ptr, int profile){
	static_cast<QSurfaceFormat*>(ptr)->setProfile(static_cast<QSurfaceFormat::OpenGLContextProfile>(profile));
}

void QSurfaceFormat_SetRedBufferSize(void* ptr, int size){
	static_cast<QSurfaceFormat*>(ptr)->setRedBufferSize(size);
}

void QSurfaceFormat_SetRenderableType(void* ptr, int ty){
	static_cast<QSurfaceFormat*>(ptr)->setRenderableType(static_cast<QSurfaceFormat::RenderableType>(ty));
}

void QSurfaceFormat_SetSamples(void* ptr, int numSamples){
	static_cast<QSurfaceFormat*>(ptr)->setSamples(numSamples);
}

void QSurfaceFormat_SetStencilBufferSize(void* ptr, int size){
	static_cast<QSurfaceFormat*>(ptr)->setStencilBufferSize(size);
}

void QSurfaceFormat_SetStereo(void* ptr, int enable){
	static_cast<QSurfaceFormat*>(ptr)->setStereo(enable != 0);
}

void QSurfaceFormat_SetSwapBehavior(void* ptr, int behavior){
	static_cast<QSurfaceFormat*>(ptr)->setSwapBehavior(static_cast<QSurfaceFormat::SwapBehavior>(behavior));
}

void QSurfaceFormat_SetSwapInterval(void* ptr, int interval){
	static_cast<QSurfaceFormat*>(ptr)->setSwapInterval(interval);
}

void QSurfaceFormat_SetVersion(void* ptr, int major, int minor){
	static_cast<QSurfaceFormat*>(ptr)->setVersion(major, minor);
}

int QSurfaceFormat_StencilBufferSize(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->stencilBufferSize();
}

int QSurfaceFormat_Stereo(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->stereo();
}

int QSurfaceFormat_SwapBehavior(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->swapBehavior();
}

int QSurfaceFormat_SwapInterval(void* ptr){
	return static_cast<QSurfaceFormat*>(ptr)->swapInterval();
}

int QSurfaceFormat_TestOption(void* ptr, int option){
	return static_cast<QSurfaceFormat*>(ptr)->testOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

void QSurfaceFormat_DestroyQSurfaceFormat(void* ptr){
	static_cast<QSurfaceFormat*>(ptr)->~QSurfaceFormat();
}

#include "qopenglfunctions_4_4_compatibility.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qaccessiblevaluechangeevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QAccessibleInterface>
#include <QAccessible>
#include <QAccessibleValueChangeEvent>
#include "_cgo_export.h"

class MyQAccessibleValueChangeEvent: public QAccessibleValueChangeEvent {
public:
};

void* QAccessibleValueChangeEvent_NewQAccessibleValueChangeEvent2(void* iface, void* val){
	return new QAccessibleValueChangeEvent(static_cast<QAccessibleInterface*>(iface), *static_cast<QVariant*>(val));
}

void* QAccessibleValueChangeEvent_NewQAccessibleValueChangeEvent(void* object, void* value){
	return new QAccessibleValueChangeEvent(static_cast<QObject*>(object), *static_cast<QVariant*>(value));
}

void QAccessibleValueChangeEvent_SetValue(void* ptr, void* value){
	static_cast<QAccessibleValueChangeEvent*>(ptr)->setValue(*static_cast<QVariant*>(value));
}

void* QAccessibleValueChangeEvent_Value(void* ptr){
	return new QVariant(static_cast<QAccessibleValueChangeEvent*>(ptr)->value());
}

#include "qpixmapcache.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPixmap>
#include <QString>
#include <QPixmapCache>
#include "_cgo_export.h"

class MyQPixmapCache: public QPixmapCache {
public:
};

int QPixmapCache_QPixmapCache_CacheLimit(){
	return QPixmapCache::cacheLimit();
}

void QPixmapCache_QPixmapCache_Clear(){
	QPixmapCache::clear();
}

void QPixmapCache_QPixmapCache_SetCacheLimit(int n){
	QPixmapCache::setCacheLimit(n);
}

#include "qwhatsthisclickedevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QWhatsThisClickedEvent>
#include "_cgo_export.h"

class MyQWhatsThisClickedEvent: public QWhatsThisClickedEvent {
public:
};

void* QWhatsThisClickedEvent_NewQWhatsThisClickedEvent(char* href){
	return new QWhatsThisClickedEvent(QString(href));
}

char* QWhatsThisClickedEvent_Href(void* ptr){
	return static_cast<QWhatsThisClickedEvent*>(ptr)->href().toUtf8().data();
}

#include "qvector3d.h"
#include <QPoint>
#include <QVector4D>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QVector>
#include <QPointF>
#include <QVector2D>
#include <QVector3D>
#include "_cgo_export.h"

class MyQVector3D: public QVector3D {
public:
};

void* QVector3D_NewQVector3D(){
	return new QVector3D();
}

void* QVector3D_NewQVector3D4(void* point){
	return new QVector3D(*static_cast<QPoint*>(point));
}

void* QVector3D_NewQVector3D5(void* point){
	return new QVector3D(*static_cast<QPointF*>(point));
}

void* QVector3D_NewQVector3D6(void* vector){
	return new QVector3D(*static_cast<QVector2D*>(vector));
}

void* QVector3D_NewQVector3D8(void* vector){
	return new QVector3D(*static_cast<QVector4D*>(vector));
}

int QVector3D_IsNull(void* ptr){
	return static_cast<QVector3D*>(ptr)->isNull();
}

void QVector3D_Normalize(void* ptr){
	static_cast<QVector3D*>(ptr)->normalize();
}

#include "qregion.h"
#include <QBitmap>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QRect>
#include <QPolygon>
#include <QPoint>
#include <QRegion>
#include "_cgo_export.h"

class MyQRegion: public QRegion {
public:
};

void* QRegion_NewQRegion(){
	return new QRegion();
}

void* QRegion_NewQRegion5(void* bm){
	return new QRegion(*static_cast<QBitmap*>(bm));
}

void* QRegion_NewQRegion3(void* a, int fillRule){
	return new QRegion(*static_cast<QPolygon*>(a), static_cast<Qt::FillRule>(fillRule));
}

void* QRegion_NewQRegion6(void* r, int t){
	return new QRegion(*static_cast<QRect*>(r), static_cast<QRegion::RegionType>(t));
}

void* QRegion_NewQRegion4(void* r){
	return new QRegion(*static_cast<QRegion*>(r));
}

int QRegion_Contains(void* ptr, void* p){
	return static_cast<QRegion*>(ptr)->contains(*static_cast<QPoint*>(p));
}

int QRegion_Contains2(void* ptr, void* r){
	return static_cast<QRegion*>(ptr)->contains(*static_cast<QRect*>(r));
}

void* QRegion_Intersected2(void* ptr, void* rect){
	return new QRegion(static_cast<QRegion*>(ptr)->intersected(*static_cast<QRect*>(rect)));
}

void* QRegion_Intersected(void* ptr, void* r){
	return new QRegion(static_cast<QRegion*>(ptr)->intersected(*static_cast<QRegion*>(r)));
}

int QRegion_Intersects2(void* ptr, void* rect){
	return static_cast<QRegion*>(ptr)->intersects(*static_cast<QRect*>(rect));
}

int QRegion_IsEmpty(void* ptr){
	return static_cast<QRegion*>(ptr)->isEmpty();
}

int QRegion_IsNull(void* ptr){
	return static_cast<QRegion*>(ptr)->isNull();
}

int QRegion_RectCount(void* ptr){
	return static_cast<QRegion*>(ptr)->rectCount();
}

void QRegion_SetRects(void* ptr, void* rects, int number){
	static_cast<QRegion*>(ptr)->setRects(static_cast<QRect*>(rects), number);
}

void* QRegion_Subtracted(void* ptr, void* r){
	return new QRegion(static_cast<QRegion*>(ptr)->subtracted(*static_cast<QRegion*>(r)));
}

void QRegion_Translate(void* ptr, int dx, int dy){
	static_cast<QRegion*>(ptr)->translate(dx, dy);
}

void* QRegion_United2(void* ptr, void* rect){
	return new QRegion(static_cast<QRegion*>(ptr)->united(*static_cast<QRect*>(rect)));
}

void* QRegion_United(void* ptr, void* r){
	return new QRegion(static_cast<QRegion*>(ptr)->united(*static_cast<QRegion*>(r)));
}

void* QRegion_Xored(void* ptr, void* r){
	return new QRegion(static_cast<QRegion*>(ptr)->xored(*static_cast<QRegion*>(r)));
}

void* QRegion_NewQRegion2(int x, int y, int w, int h, int t){
	return new QRegion(x, y, w, h, static_cast<QRegion::RegionType>(t));
}

int QRegion_Intersects(void* ptr, void* region){
	return static_cast<QRegion*>(ptr)->intersects(*static_cast<QRegion*>(region));
}

void QRegion_Swap(void* ptr, void* other){
	static_cast<QRegion*>(ptr)->swap(*static_cast<QRegion*>(other));
}

void QRegion_Translate2(void* ptr, void* point){
	static_cast<QRegion*>(ptr)->translate(*static_cast<QPoint*>(point));
}

void* QRegion_Translated2(void* ptr, void* p){
	return new QRegion(static_cast<QRegion*>(ptr)->translated(*static_cast<QPoint*>(p)));
}

void* QRegion_Translated(void* ptr, int dx, int dy){
	return new QRegion(static_cast<QRegion*>(ptr)->translated(dx, dy));
}

#include "qtouchevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTouchEvent>
#include "_cgo_export.h"

class MyQTouchEvent: public QTouchEvent {
public:
};

void* QTouchEvent_Device(void* ptr){
	return static_cast<QTouchEvent*>(ptr)->device();
}

void* QTouchEvent_Target(void* ptr){
	return static_cast<QTouchEvent*>(ptr)->target();
}

int QTouchEvent_TouchPointStates(void* ptr){
	return static_cast<QTouchEvent*>(ptr)->touchPointStates();
}

void* QTouchEvent_Window(void* ptr){
	return static_cast<QTouchEvent*>(ptr)->window();
}

void QTouchEvent_DestroyQTouchEvent(void* ptr){
	static_cast<QTouchEvent*>(ptr)->~QTouchEvent();
}

#include "qtexttableformat.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextTable>
#include <QTextTableFormat>
#include "_cgo_export.h"

class MyQTextTableFormat: public QTextTableFormat {
public:
};

void* QTextTableFormat_NewQTextTableFormat(){
	return new QTextTableFormat();
}

int QTextTableFormat_Alignment(void* ptr){
	return static_cast<QTextTableFormat*>(ptr)->alignment();
}

double QTextTableFormat_CellPadding(void* ptr){
	return static_cast<double>(static_cast<QTextTableFormat*>(ptr)->cellPadding());
}

double QTextTableFormat_CellSpacing(void* ptr){
	return static_cast<double>(static_cast<QTextTableFormat*>(ptr)->cellSpacing());
}

void QTextTableFormat_ClearColumnWidthConstraints(void* ptr){
	static_cast<QTextTableFormat*>(ptr)->clearColumnWidthConstraints();
}

int QTextTableFormat_Columns(void* ptr){
	return static_cast<QTextTableFormat*>(ptr)->columns();
}

int QTextTableFormat_HeaderRowCount(void* ptr){
	return static_cast<QTextTableFormat*>(ptr)->headerRowCount();
}

int QTextTableFormat_IsValid(void* ptr){
	return static_cast<QTextTableFormat*>(ptr)->isValid();
}

void QTextTableFormat_SetAlignment(void* ptr, int alignment){
	static_cast<QTextTableFormat*>(ptr)->setAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QTextTableFormat_SetCellPadding(void* ptr, double padding){
	static_cast<QTextTableFormat*>(ptr)->setCellPadding(static_cast<qreal>(padding));
}

void QTextTableFormat_SetCellSpacing(void* ptr, double spacing){
	static_cast<QTextTableFormat*>(ptr)->setCellSpacing(static_cast<qreal>(spacing));
}

void QTextTableFormat_SetHeaderRowCount(void* ptr, int count){
	static_cast<QTextTableFormat*>(ptr)->setHeaderRowCount(count);
}

#include "qopenglfunctions_es2.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include "_cgo_export.h"

#include "qpolygonf.h"
#include <QRectF>
#include <QPointF>
#include <QPolygon>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QRect>
#include <QPoint>
#include <QPolygonF>
#include "_cgo_export.h"

class MyQPolygonF: public QPolygonF {
public:
};

void* QPolygonF_NewQPolygonF6(void* polygon){
	return new QPolygonF(*static_cast<QPolygon*>(polygon));
}

void* QPolygonF_NewQPolygonF5(void* rectangle){
	return new QPolygonF(*static_cast<QRectF*>(rectangle));
}

int QPolygonF_ContainsPoint(void* ptr, void* point, int fillRule){
	return static_cast<QPolygonF*>(ptr)->containsPoint(*static_cast<QPointF*>(point), static_cast<Qt::FillRule>(fillRule));
}

void* QPolygonF_NewQPolygonF(){
	return new QPolygonF();
}

void* QPolygonF_NewQPolygonF3(void* polygon){
	return new QPolygonF(*static_cast<QPolygonF*>(polygon));
}

void* QPolygonF_NewQPolygonF2(int size){
	return new QPolygonF(size);
}

int QPolygonF_IsClosed(void* ptr){
	return static_cast<QPolygonF*>(ptr)->isClosed();
}

void QPolygonF_Swap(void* ptr, void* other){
	static_cast<QPolygonF*>(ptr)->swap(*static_cast<QPolygonF*>(other));
}

void QPolygonF_Translate(void* ptr, void* offset){
	static_cast<QPolygonF*>(ptr)->translate(*static_cast<QPointF*>(offset));
}

void QPolygonF_Translate2(void* ptr, double dx, double dy){
	static_cast<QPolygonF*>(ptr)->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QPolygonF_DestroyQPolygonF(void* ptr){
	static_cast<QPolygonF*>(ptr)->~QPolygonF();
}

#include "qmouseevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QEvent>
#include <QPointF>
#include <QPoint>
#include <QMouseEvent>
#include "_cgo_export.h"

class MyQMouseEvent: public QMouseEvent {
public:
};

void* QMouseEvent_NewQMouseEvent(int ty, void* localPos, int button, int buttons, int modifiers){
	return new QMouseEvent(static_cast<QEvent::Type>(ty), *static_cast<QPointF*>(localPos), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers));
}

void* QMouseEvent_NewQMouseEvent2(int ty, void* localPos, void* screenPos, int button, int buttons, int modifiers){
	return new QMouseEvent(static_cast<QEvent::Type>(ty), *static_cast<QPointF*>(localPos), *static_cast<QPointF*>(screenPos), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers));
}

void* QMouseEvent_NewQMouseEvent3(int ty, void* localPos, void* windowPos, void* screenPos, int button, int buttons, int modifiers){
	return new QMouseEvent(static_cast<QEvent::Type>(ty), *static_cast<QPointF*>(localPos), *static_cast<QPointF*>(windowPos), *static_cast<QPointF*>(screenPos), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers));
}

int QMouseEvent_Button(void* ptr){
	return static_cast<QMouseEvent*>(ptr)->button();
}

int QMouseEvent_Buttons(void* ptr){
	return static_cast<QMouseEvent*>(ptr)->buttons();
}

int QMouseEvent_Flags(void* ptr){
	return static_cast<QMouseEvent*>(ptr)->flags();
}

int QMouseEvent_GlobalX(void* ptr){
	return static_cast<QMouseEvent*>(ptr)->globalX();
}

int QMouseEvent_GlobalY(void* ptr){
	return static_cast<QMouseEvent*>(ptr)->globalY();
}

int QMouseEvent_Source(void* ptr){
	return static_cast<QMouseEvent*>(ptr)->source();
}

int QMouseEvent_X(void* ptr){
	return static_cast<QMouseEvent*>(ptr)->x();
}

int QMouseEvent_Y(void* ptr){
	return static_cast<QMouseEvent*>(ptr)->y();
}

#include "qopenglshader.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qgenericmatrix.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QGenericMatrix>
#include "_cgo_export.h"

#include "qmatrix4x4.h"
#include <QVector>
#include <QVector3D>
#include <QRectF>
#include <QVariant>
#include <QUrl>
#include <QRect>
#include <QVector4D>
#include <QTransform>
#include <QString>
#include <QModelIndex>
#include <QQuaternion>
#include <QMatrix4x4>
#include "_cgo_export.h"

class MyQMatrix4x4: public QMatrix4x4 {
public:
};

void* QMatrix4x4_NewQMatrix4x4(){
	return new QMatrix4x4();
}

void* QMatrix4x4_NewQMatrix4x47(void* transform){
	return new QMatrix4x4(*static_cast<QTransform*>(transform));
}

int QMatrix4x4_IsAffine(void* ptr){
	return static_cast<QMatrix4x4*>(ptr)->isAffine();
}

int QMatrix4x4_IsIdentity(void* ptr){
	return static_cast<QMatrix4x4*>(ptr)->isIdentity();
}

void QMatrix4x4_LookAt(void* ptr, void* eye, void* center, void* up){
	static_cast<QMatrix4x4*>(ptr)->lookAt(*static_cast<QVector3D*>(eye), *static_cast<QVector3D*>(center), *static_cast<QVector3D*>(up));
}

void QMatrix4x4_Optimize(void* ptr){
	static_cast<QMatrix4x4*>(ptr)->optimize();
}

void QMatrix4x4_Ortho2(void* ptr, void* rect){
	static_cast<QMatrix4x4*>(ptr)->ortho(*static_cast<QRect*>(rect));
}

void QMatrix4x4_Ortho3(void* ptr, void* rect){
	static_cast<QMatrix4x4*>(ptr)->ortho(*static_cast<QRectF*>(rect));
}

void QMatrix4x4_Rotate2(void* ptr, void* quaternion){
	static_cast<QMatrix4x4*>(ptr)->rotate(*static_cast<QQuaternion*>(quaternion));
}

void QMatrix4x4_Scale(void* ptr, void* vector){
	static_cast<QMatrix4x4*>(ptr)->scale(*static_cast<QVector3D*>(vector));
}

void QMatrix4x4_SetColumn(void* ptr, int index, void* value){
	static_cast<QMatrix4x4*>(ptr)->setColumn(index, *static_cast<QVector4D*>(value));
}

void QMatrix4x4_SetRow(void* ptr, int index, void* value){
	static_cast<QMatrix4x4*>(ptr)->setRow(index, *static_cast<QVector4D*>(value));
}

void QMatrix4x4_SetToIdentity(void* ptr){
	static_cast<QMatrix4x4*>(ptr)->setToIdentity();
}

void QMatrix4x4_Translate(void* ptr, void* vector){
	static_cast<QMatrix4x4*>(ptr)->translate(*static_cast<QVector3D*>(vector));
}

void QMatrix4x4_Viewport2(void* ptr, void* rect){
	static_cast<QMatrix4x4*>(ptr)->viewport(*static_cast<QRectF*>(rect));
}

#include "qdragmoveevent.h"
#include <QString>
#include <QVariant>
#include <QModelIndex>
#include <QRect>
#include <QUrl>
#include <QPoint>
#include <QEvent>
#include <QMimeData>
#include <QDrag>
#include <QDragMoveEvent>
#include "_cgo_export.h"

class MyQDragMoveEvent: public QDragMoveEvent {
public:
};

void* QDragMoveEvent_NewQDragMoveEvent(void* pos, int actions, void* data, int buttons, int modifiers, int ty){
	return new QDragMoveEvent(*static_cast<QPoint*>(pos), static_cast<Qt::DropAction>(actions), static_cast<QMimeData*>(data), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers), static_cast<QEvent::Type>(ty));
}

void QDragMoveEvent_Accept2(void* ptr){
	static_cast<QDragMoveEvent*>(ptr)->accept();
}

void QDragMoveEvent_Accept(void* ptr, void* rectangle){
	static_cast<QDragMoveEvent*>(ptr)->accept(*static_cast<QRect*>(rectangle));
}

void QDragMoveEvent_Ignore2(void* ptr){
	static_cast<QDragMoveEvent*>(ptr)->ignore();
}

void QDragMoveEvent_Ignore(void* ptr, void* rectangle){
	static_cast<QDragMoveEvent*>(ptr)->ignore(*static_cast<QRect*>(rectangle));
}

void QDragMoveEvent_DestroyQDragMoveEvent(void* ptr){
	static_cast<QDragMoveEvent*>(ptr)->~QDragMoveEvent();
}

#include "qbitmap.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QBitmap>
#include "_cgo_export.h"

class MyQBitmap: public QBitmap {
public:
};

void QBitmap_Clear(void* ptr){
	static_cast<QBitmap*>(ptr)->clear();
}

void QBitmap_Swap(void* ptr, void* other){
	static_cast<QBitmap*>(ptr)->swap(*static_cast<QBitmap*>(other));
}

void QBitmap_DestroyQBitmap(void* ptr){
	static_cast<QBitmap*>(ptr)->~QBitmap();
}

#include "qimageioplugin.h"
#include <QImage>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QImageIOPlugin>
#include "_cgo_export.h"

#include "qvector2d.h"
#include <QString>
#include <QUrl>
#include <QModelIndex>
#include <QVector3D>
#include <QPointF>
#include <QVector4D>
#include <QPoint>
#include <QVariant>
#include <QVector>
#include <QVector2D>
#include "_cgo_export.h"

class MyQVector2D: public QVector2D {
public:
};

void* QVector2D_NewQVector2D(){
	return new QVector2D();
}

void* QVector2D_NewQVector2D4(void* point){
	return new QVector2D(*static_cast<QPoint*>(point));
}

void* QVector2D_NewQVector2D5(void* point){
	return new QVector2D(*static_cast<QPointF*>(point));
}

void* QVector2D_NewQVector2D6(void* vector){
	return new QVector2D(*static_cast<QVector3D*>(vector));
}

void* QVector2D_NewQVector2D7(void* vector){
	return new QVector2D(*static_cast<QVector4D*>(vector));
}

int QVector2D_IsNull(void* ptr){
	return static_cast<QVector2D*>(ptr)->isNull();
}

void QVector2D_Normalize(void* ptr){
	static_cast<QVector2D*>(ptr)->normalize();
}

#include "qaccessibletextcursorevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessibleInterface>
#include <QAccessible>
#include <QObject>
#include <QAccessibleTextCursorEvent>
#include "_cgo_export.h"

class MyQAccessibleTextCursorEvent: public QAccessibleTextCursorEvent {
public:
};

void* QAccessibleTextCursorEvent_NewQAccessibleTextCursorEvent2(void* iface, int cursorPos){
	return new QAccessibleTextCursorEvent(static_cast<QAccessibleInterface*>(iface), cursorPos);
}

void* QAccessibleTextCursorEvent_NewQAccessibleTextCursorEvent(void* object, int cursorPos){
	return new QAccessibleTextCursorEvent(static_cast<QObject*>(object), cursorPos);
}

int QAccessibleTextCursorEvent_CursorPosition(void* ptr){
	return static_cast<QAccessibleTextCursorEvent*>(ptr)->cursorPosition();
}

void QAccessibleTextCursorEvent_SetCursorPosition(void* ptr, int position){
	static_cast<QAccessibleTextCursorEvent*>(ptr)->setCursorPosition(position);
}

#include "qaccessiblevalueinterface.h"
#include <QModelIndex>
#include <QAccessible>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QAccessibleValueInterface>
#include "_cgo_export.h"

class MyQAccessibleValueInterface: public QAccessibleValueInterface {
public:
};

void* QAccessibleValueInterface_CurrentValue(void* ptr){
	return new QVariant(static_cast<QAccessibleValueInterface*>(ptr)->currentValue());
}

void* QAccessibleValueInterface_MaximumValue(void* ptr){
	return new QVariant(static_cast<QAccessibleValueInterface*>(ptr)->maximumValue());
}

void* QAccessibleValueInterface_MinimumStepSize(void* ptr){
	return new QVariant(static_cast<QAccessibleValueInterface*>(ptr)->minimumStepSize());
}

void* QAccessibleValueInterface_MinimumValue(void* ptr){
	return new QVariant(static_cast<QAccessibleValueInterface*>(ptr)->minimumValue());
}

void QAccessibleValueInterface_SetCurrentValue(void* ptr, void* value){
	static_cast<QAccessibleValueInterface*>(ptr)->setCurrentValue(*static_cast<QVariant*>(value));
}

void QAccessibleValueInterface_DestroyQAccessibleValueInterface(void* ptr){
	static_cast<QAccessibleValueInterface*>(ptr)->~QAccessibleValueInterface();
}

#include "qwindow.h"
#include <QPoint>
#include <QObject>
#include <QSurfaceFormat>
#include <QRegion>
#include <QCursor>
#include <QMetaObject>
#include <QRect>
#include <QScreen>
#include <QSize>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QSurface>
#include <QIcon>
#include <QWindow>
#include "_cgo_export.h"

class MyQWindow: public QWindow {
public:
void Signal_ActiveChanged(){callbackQWindowActiveChanged(this->objectName().toUtf8().data());};
void Signal_ContentOrientationChanged(Qt::ScreenOrientation orientation){callbackQWindowContentOrientationChanged(this->objectName().toUtf8().data(), orientation);};
void Signal_FocusObjectChanged(QObject * object){callbackQWindowFocusObjectChanged(this->objectName().toUtf8().data(), object);};
void Signal_HeightChanged(int arg){callbackQWindowHeightChanged(this->objectName().toUtf8().data(), arg);};
void Signal_MaximumHeightChanged(int arg){callbackQWindowMaximumHeightChanged(this->objectName().toUtf8().data(), arg);};
void Signal_MaximumWidthChanged(int arg){callbackQWindowMaximumWidthChanged(this->objectName().toUtf8().data(), arg);};
void Signal_MinimumHeightChanged(int arg){callbackQWindowMinimumHeightChanged(this->objectName().toUtf8().data(), arg);};
void Signal_MinimumWidthChanged(int arg){callbackQWindowMinimumWidthChanged(this->objectName().toUtf8().data(), arg);};
void Signal_ModalityChanged(Qt::WindowModality modality){callbackQWindowModalityChanged(this->objectName().toUtf8().data(), modality);};
void Signal_ScreenChanged(QScreen * screen){callbackQWindowScreenChanged(this->objectName().toUtf8().data(), screen);};
void Signal_VisibilityChanged(QWindow::Visibility visibility){callbackQWindowVisibilityChanged(this->objectName().toUtf8().data(), visibility);};
void Signal_VisibleChanged(bool arg){callbackQWindowVisibleChanged(this->objectName().toUtf8().data(), arg);};
void Signal_WidthChanged(int arg){callbackQWindowWidthChanged(this->objectName().toUtf8().data(), arg);};
void Signal_WindowStateChanged(Qt::WindowState windowState){callbackQWindowWindowStateChanged(this->objectName().toUtf8().data(), windowState);};
void Signal_WindowTitleChanged(const QString & title){callbackQWindowWindowTitleChanged(this->objectName().toUtf8().data(), title.toUtf8().data());};
void Signal_XChanged(int arg){callbackQWindowXChanged(this->objectName().toUtf8().data(), arg);};
void Signal_YChanged(int arg){callbackQWindowYChanged(this->objectName().toUtf8().data(), arg);};
};

int QWindow_ContentOrientation(void* ptr){
	return static_cast<QWindow*>(ptr)->contentOrientation();
}

int QWindow_Flags(void* ptr){
	return static_cast<QWindow*>(ptr)->flags();
}

int QWindow_IsVisible(void* ptr){
	return static_cast<QWindow*>(ptr)->isVisible();
}

int QWindow_Modality(void* ptr){
	return static_cast<QWindow*>(ptr)->modality();
}

double QWindow_Opacity(void* ptr){
	return static_cast<double>(static_cast<QWindow*>(ptr)->opacity());
}

void QWindow_ReportContentOrientationChange(void* ptr, int orientation){
	static_cast<QWindow*>(ptr)->reportContentOrientationChange(static_cast<Qt::ScreenOrientation>(orientation));
}

void QWindow_SetFlags(void* ptr, int flags){
	static_cast<QWindow*>(ptr)->setFlags(static_cast<Qt::WindowType>(flags));
}

void QWindow_SetHeight(void* ptr, int arg){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setHeight", Q_ARG(int, arg));
}

void QWindow_SetMaximumHeight(void* ptr, int h){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setMaximumHeight", Q_ARG(int, h));
}

void QWindow_SetMaximumWidth(void* ptr, int w){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setMaximumWidth", Q_ARG(int, w));
}

void QWindow_SetMinimumHeight(void* ptr, int h){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setMinimumHeight", Q_ARG(int, h));
}

void QWindow_SetMinimumWidth(void* ptr, int w){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setMinimumWidth", Q_ARG(int, w));
}

void QWindow_SetModality(void* ptr, int modality){
	static_cast<QWindow*>(ptr)->setModality(static_cast<Qt::WindowModality>(modality));
}

void QWindow_SetOpacity(void* ptr, double level){
	static_cast<QWindow*>(ptr)->setOpacity(static_cast<qreal>(level));
}

void QWindow_SetTitle(void* ptr, char* v){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setTitle", Q_ARG(QString, QString(v)));
}

void QWindow_SetVisibility(void* ptr, int v){
	static_cast<QWindow*>(ptr)->setVisibility(static_cast<QWindow::Visibility>(v));
}

void QWindow_SetVisible(void* ptr, int visible){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setVisible", Q_ARG(bool, visible != 0));
}

void QWindow_SetWidth(void* ptr, int arg){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setWidth", Q_ARG(int, arg));
}

void QWindow_SetX(void* ptr, int arg){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setX", Q_ARG(int, arg));
}

void QWindow_SetY(void* ptr, int arg){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "setY", Q_ARG(int, arg));
}

char* QWindow_Title(void* ptr){
	return static_cast<QWindow*>(ptr)->title().toUtf8().data();
}

int QWindow_Visibility(void* ptr){
	return static_cast<QWindow*>(ptr)->visibility();
}

void* QWindow_NewQWindow(void* targetScreen){
	return new QWindow(static_cast<QScreen*>(targetScreen));
}

void* QWindow_NewQWindow2(void* parent){
	return new QWindow(static_cast<QWindow*>(parent));
}

void QWindow_ConnectActiveChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)()>(&QWindow::activeChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)()>(&MyQWindow::Signal_ActiveChanged));;
}

void QWindow_DisconnectActiveChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)()>(&QWindow::activeChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)()>(&MyQWindow::Signal_ActiveChanged));;
}

void QWindow_Alert(void* ptr, int msec){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "alert", Q_ARG(int, msec));
}

int QWindow_Close(void* ptr){
	return QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "close");
}

void QWindow_ConnectContentOrientationChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(Qt::ScreenOrientation)>(&QWindow::contentOrientationChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(Qt::ScreenOrientation)>(&MyQWindow::Signal_ContentOrientationChanged));;
}

void QWindow_DisconnectContentOrientationChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(Qt::ScreenOrientation)>(&QWindow::contentOrientationChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(Qt::ScreenOrientation)>(&MyQWindow::Signal_ContentOrientationChanged));;
}

void QWindow_Create(void* ptr){
	static_cast<QWindow*>(ptr)->create();
}

void QWindow_Destroy(void* ptr){
	static_cast<QWindow*>(ptr)->destroy();
}

double QWindow_DevicePixelRatio(void* ptr){
	return static_cast<double>(static_cast<QWindow*>(ptr)->devicePixelRatio());
}

char* QWindow_FilePath(void* ptr){
	return static_cast<QWindow*>(ptr)->filePath().toUtf8().data();
}

void* QWindow_FocusObject(void* ptr){
	return static_cast<QWindow*>(ptr)->focusObject();
}

void QWindow_ConnectFocusObjectChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(QObject *)>(&QWindow::focusObjectChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(QObject *)>(&MyQWindow::Signal_FocusObjectChanged));;
}

void QWindow_DisconnectFocusObjectChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(QObject *)>(&QWindow::focusObjectChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(QObject *)>(&MyQWindow::Signal_FocusObjectChanged));;
}

int QWindow_Height(void* ptr){
	return static_cast<QWindow*>(ptr)->height();
}

void QWindow_ConnectHeightChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::heightChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_HeightChanged));;
}

void QWindow_DisconnectHeightChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::heightChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_HeightChanged));;
}

void QWindow_Hide(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "hide");
}

int QWindow_IsActive(void* ptr){
	return static_cast<QWindow*>(ptr)->isActive();
}

int QWindow_IsAncestorOf(void* ptr, void* child, int mode){
	return static_cast<QWindow*>(ptr)->isAncestorOf(static_cast<QWindow*>(child), static_cast<QWindow::AncestorMode>(mode));
}

int QWindow_IsExposed(void* ptr){
	return static_cast<QWindow*>(ptr)->isExposed();
}

int QWindow_IsModal(void* ptr){
	return static_cast<QWindow*>(ptr)->isModal();
}

int QWindow_IsTopLevel(void* ptr){
	return static_cast<QWindow*>(ptr)->isTopLevel();
}

void QWindow_Lower(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "lower");
}

void* QWindow_Mask(void* ptr){
	return new QRegion(static_cast<QWindow*>(ptr)->mask());
}

int QWindow_MaximumHeight(void* ptr){
	return static_cast<QWindow*>(ptr)->maximumHeight();
}

void QWindow_ConnectMaximumHeightChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::maximumHeightChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_MaximumHeightChanged));;
}

void QWindow_DisconnectMaximumHeightChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::maximumHeightChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_MaximumHeightChanged));;
}

int QWindow_MaximumWidth(void* ptr){
	return static_cast<QWindow*>(ptr)->maximumWidth();
}

void QWindow_ConnectMaximumWidthChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::maximumWidthChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_MaximumWidthChanged));;
}

void QWindow_DisconnectMaximumWidthChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::maximumWidthChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_MaximumWidthChanged));;
}

int QWindow_MinimumHeight(void* ptr){
	return static_cast<QWindow*>(ptr)->minimumHeight();
}

void QWindow_ConnectMinimumHeightChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::minimumHeightChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_MinimumHeightChanged));;
}

void QWindow_DisconnectMinimumHeightChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::minimumHeightChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_MinimumHeightChanged));;
}

int QWindow_MinimumWidth(void* ptr){
	return static_cast<QWindow*>(ptr)->minimumWidth();
}

void QWindow_ConnectMinimumWidthChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::minimumWidthChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_MinimumWidthChanged));;
}

void QWindow_DisconnectMinimumWidthChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::minimumWidthChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_MinimumWidthChanged));;
}

void QWindow_ConnectModalityChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(Qt::WindowModality)>(&QWindow::modalityChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(Qt::WindowModality)>(&MyQWindow::Signal_ModalityChanged));;
}

void QWindow_DisconnectModalityChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(Qt::WindowModality)>(&QWindow::modalityChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(Qt::WindowModality)>(&MyQWindow::Signal_ModalityChanged));;
}

void* QWindow_Parent(void* ptr){
	return static_cast<QWindow*>(ptr)->parent();
}

void QWindow_Raise(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "raise");
}

void QWindow_RequestActivate(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "requestActivate");
}

void QWindow_RequestUpdate(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "requestUpdate");
}

void QWindow_Resize(void* ptr, void* newSize){
	static_cast<QWindow*>(ptr)->resize(*static_cast<QSize*>(newSize));
}

void QWindow_Resize2(void* ptr, int w, int h){
	static_cast<QWindow*>(ptr)->resize(w, h);
}

void* QWindow_Screen(void* ptr){
	return static_cast<QWindow*>(ptr)->screen();
}

void QWindow_ConnectScreenChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(QScreen *)>(&QWindow::screenChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(QScreen *)>(&MyQWindow::Signal_ScreenChanged));;
}

void QWindow_DisconnectScreenChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(QScreen *)>(&QWindow::screenChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(QScreen *)>(&MyQWindow::Signal_ScreenChanged));;
}

void QWindow_SetBaseSize(void* ptr, void* size){
	static_cast<QWindow*>(ptr)->setBaseSize(*static_cast<QSize*>(size));
}

void QWindow_SetCursor(void* ptr, void* cursor){
	static_cast<QWindow*>(ptr)->setCursor(*static_cast<QCursor*>(cursor));
}

void QWindow_SetFilePath(void* ptr, char* filePath){
	static_cast<QWindow*>(ptr)->setFilePath(QString(filePath));
}

void QWindow_SetFormat(void* ptr, void* format){
	static_cast<QWindow*>(ptr)->setFormat(*static_cast<QSurfaceFormat*>(format));
}

void QWindow_SetFramePosition(void* ptr, void* point){
	static_cast<QWindow*>(ptr)->setFramePosition(*static_cast<QPoint*>(point));
}

void QWindow_SetGeometry2(void* ptr, void* rect){
	static_cast<QWindow*>(ptr)->setGeometry(*static_cast<QRect*>(rect));
}

void QWindow_SetGeometry(void* ptr, int posx, int posy, int w, int h){
	static_cast<QWindow*>(ptr)->setGeometry(posx, posy, w, h);
}

void QWindow_SetIcon(void* ptr, void* icon){
	static_cast<QWindow*>(ptr)->setIcon(*static_cast<QIcon*>(icon));
}

int QWindow_SetKeyboardGrabEnabled(void* ptr, int grab){
	return static_cast<QWindow*>(ptr)->setKeyboardGrabEnabled(grab != 0);
}

void QWindow_SetMask(void* ptr, void* region){
	static_cast<QWindow*>(ptr)->setMask(*static_cast<QRegion*>(region));
}

void QWindow_SetMaximumSize(void* ptr, void* size){
	static_cast<QWindow*>(ptr)->setMaximumSize(*static_cast<QSize*>(size));
}

void QWindow_SetMinimumSize(void* ptr, void* size){
	static_cast<QWindow*>(ptr)->setMinimumSize(*static_cast<QSize*>(size));
}

int QWindow_SetMouseGrabEnabled(void* ptr, int grab){
	return static_cast<QWindow*>(ptr)->setMouseGrabEnabled(grab != 0);
}

void QWindow_SetParent(void* ptr, void* parent){
	static_cast<QWindow*>(ptr)->setParent(static_cast<QWindow*>(parent));
}

void QWindow_SetPosition(void* ptr, void* pt){
	static_cast<QWindow*>(ptr)->setPosition(*static_cast<QPoint*>(pt));
}

void QWindow_SetPosition2(void* ptr, int posx, int posy){
	static_cast<QWindow*>(ptr)->setPosition(posx, posy);
}

void QWindow_SetScreen(void* ptr, void* newScreen){
	static_cast<QWindow*>(ptr)->setScreen(static_cast<QScreen*>(newScreen));
}

void QWindow_SetSizeIncrement(void* ptr, void* size){
	static_cast<QWindow*>(ptr)->setSizeIncrement(*static_cast<QSize*>(size));
}

void QWindow_SetSurfaceType(void* ptr, int surfaceType){
	static_cast<QWindow*>(ptr)->setSurfaceType(static_cast<QSurface::SurfaceType>(surfaceType));
}

void QWindow_SetTransientParent(void* ptr, void* parent){
	static_cast<QWindow*>(ptr)->setTransientParent(static_cast<QWindow*>(parent));
}

void QWindow_SetWindowState(void* ptr, int state){
	static_cast<QWindow*>(ptr)->setWindowState(static_cast<Qt::WindowState>(state));
}

void QWindow_Show(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "show");
}

void QWindow_ShowFullScreen(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "showFullScreen");
}

void QWindow_ShowMaximized(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "showMaximized");
}

void QWindow_ShowMinimized(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "showMinimized");
}

void QWindow_ShowNormal(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWindow*>(ptr), "showNormal");
}

int QWindow_SurfaceType(void* ptr){
	return static_cast<QWindow*>(ptr)->surfaceType();
}

void* QWindow_TransientParent(void* ptr){
	return static_cast<QWindow*>(ptr)->transientParent();
}

int QWindow_Type(void* ptr){
	return static_cast<QWindow*>(ptr)->type();
}

void QWindow_UnsetCursor(void* ptr){
	static_cast<QWindow*>(ptr)->unsetCursor();
}

void QWindow_ConnectVisibilityChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(QWindow::Visibility)>(&QWindow::visibilityChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(QWindow::Visibility)>(&MyQWindow::Signal_VisibilityChanged));;
}

void QWindow_DisconnectVisibilityChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(QWindow::Visibility)>(&QWindow::visibilityChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(QWindow::Visibility)>(&MyQWindow::Signal_VisibilityChanged));;
}

void QWindow_ConnectVisibleChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(bool)>(&QWindow::visibleChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(bool)>(&MyQWindow::Signal_VisibleChanged));;
}

void QWindow_DisconnectVisibleChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(bool)>(&QWindow::visibleChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(bool)>(&MyQWindow::Signal_VisibleChanged));;
}

int QWindow_Width(void* ptr){
	return static_cast<QWindow*>(ptr)->width();
}

void QWindow_ConnectWidthChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::widthChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_WidthChanged));;
}

void QWindow_DisconnectWidthChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::widthChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_WidthChanged));;
}

int QWindow_WindowState(void* ptr){
	return static_cast<QWindow*>(ptr)->windowState();
}

void QWindow_ConnectWindowStateChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(Qt::WindowState)>(&QWindow::windowStateChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(Qt::WindowState)>(&MyQWindow::Signal_WindowStateChanged));;
}

void QWindow_DisconnectWindowStateChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(Qt::WindowState)>(&QWindow::windowStateChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(Qt::WindowState)>(&MyQWindow::Signal_WindowStateChanged));;
}

void QWindow_ConnectWindowTitleChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(const QString &)>(&QWindow::windowTitleChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(const QString &)>(&MyQWindow::Signal_WindowTitleChanged));;
}

void QWindow_DisconnectWindowTitleChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(const QString &)>(&QWindow::windowTitleChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(const QString &)>(&MyQWindow::Signal_WindowTitleChanged));;
}

int QWindow_X(void* ptr){
	return static_cast<QWindow*>(ptr)->x();
}

void QWindow_ConnectXChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::xChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_XChanged));;
}

void QWindow_DisconnectXChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::xChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_XChanged));;
}

int QWindow_Y(void* ptr){
	return static_cast<QWindow*>(ptr)->y();
}

void QWindow_ConnectYChanged(void* ptr){
	QObject::connect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::yChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_YChanged));;
}

void QWindow_DisconnectYChanged(void* ptr){
	QObject::disconnect(static_cast<QWindow*>(ptr), static_cast<void (QWindow::*)(int)>(&QWindow::yChanged), static_cast<MyQWindow*>(ptr), static_cast<void (MyQWindow::*)(int)>(&MyQWindow::Signal_YChanged));;
}

void QWindow_DestroyQWindow(void* ptr){
	static_cast<QWindow*>(ptr)->~QWindow();
}

#include "qpaintdevice.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPaintDevice>
#include "_cgo_export.h"

class MyQPaintDevice: public QPaintDevice {
public:
};

void QPaintDevice_DestroyQPaintDevice(void* ptr){
	static_cast<QPaintDevice*>(ptr)->~QPaintDevice();
}

int QPaintDevice_ColorCount(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->colorCount();
}

int QPaintDevice_Depth(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->depth();
}

int QPaintDevice_DevicePixelRatio(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->devicePixelRatio();
}

int QPaintDevice_Height(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->height();
}

int QPaintDevice_HeightMM(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->heightMM();
}

int QPaintDevice_LogicalDpiX(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->logicalDpiX();
}

int QPaintDevice_LogicalDpiY(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->logicalDpiY();
}

void* QPaintDevice_PaintEngine(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->paintEngine();
}

int QPaintDevice_PaintingActive(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->paintingActive();
}

int QPaintDevice_PhysicalDpiX(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->physicalDpiX();
}

int QPaintDevice_PhysicalDpiY(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->physicalDpiY();
}

int QPaintDevice_Width(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->width();
}

int QPaintDevice_WidthMM(void* ptr){
	return static_cast<QPaintDevice*>(ptr)->widthMM();
}

#include "qguiapplication.h"
#include <QVariant>
#include <QUrl>
#include <QEvent>
#include <QWindow>
#include <QIcon>
#include <QScreen>
#include <QObject>
#include <QString>
#include <QFont>
#include <QModelIndex>
#include <QList>
#include <QCursor>
#include <QPalette>
#include <QByteArray>
#include <QPoint>
#include <QGuiApplication>
#include "_cgo_export.h"

class MyQGuiApplication: public QGuiApplication {
public:
void Signal_ApplicationStateChanged(Qt::ApplicationState state){callbackQGuiApplicationApplicationStateChanged(this->objectName().toUtf8().data(), state);};
void Signal_FocusObjectChanged(QObject * focusObject){callbackQGuiApplicationFocusObjectChanged(this->objectName().toUtf8().data(), focusObject);};
void Signal_FocusWindowChanged(QWindow * focusWindow){callbackQGuiApplicationFocusWindowChanged(this->objectName().toUtf8().data(), focusWindow);};
void Signal_FontDatabaseChanged(){callbackQGuiApplicationFontDatabaseChanged(this->objectName().toUtf8().data());};
void Signal_LastWindowClosed(){callbackQGuiApplicationLastWindowClosed(this->objectName().toUtf8().data());};
void Signal_LayoutDirectionChanged(Qt::LayoutDirection direction){callbackQGuiApplicationLayoutDirectionChanged(this->objectName().toUtf8().data(), direction);};
void Signal_ScreenAdded(QScreen * screen){callbackQGuiApplicationScreenAdded(this->objectName().toUtf8().data(), screen);};
void Signal_ScreenRemoved(QScreen * screen){callbackQGuiApplicationScreenRemoved(this->objectName().toUtf8().data(), screen);};
};

char* QGuiApplication_QGuiApplication_ApplicationDisplayName(){
	return QGuiApplication::applicationDisplayName().toUtf8().data();
}

int QGuiApplication_QGuiApplication_ApplicationState(){
	return QGuiApplication::applicationState();
}

int QGuiApplication_IsSavingSession(void* ptr){
	return static_cast<QGuiApplication*>(ptr)->isSavingSession();
}

int QGuiApplication_IsSessionRestored(void* ptr){
	return static_cast<QGuiApplication*>(ptr)->isSessionRestored();
}

int QGuiApplication_QGuiApplication_LayoutDirection(){
	return QGuiApplication::layoutDirection();
}

void* QGuiApplication_QGuiApplication_OverrideCursor(){
	return QGuiApplication::overrideCursor();
}

char* QGuiApplication_QGuiApplication_PlatformName(){
	return QGuiApplication::platformName().toUtf8().data();
}

int QGuiApplication_QGuiApplication_QueryKeyboardModifiers(){
	return QGuiApplication::queryKeyboardModifiers();
}

int QGuiApplication_QGuiApplication_QuitOnLastWindowClosed(){
	return QGuiApplication::quitOnLastWindowClosed();
}

void QGuiApplication_QGuiApplication_RestoreOverrideCursor(){
	QGuiApplication::restoreOverrideCursor();
}

char* QGuiApplication_SessionId(void* ptr){
	return static_cast<QGuiApplication*>(ptr)->sessionId().toUtf8().data();
}

char* QGuiApplication_SessionKey(void* ptr){
	return static_cast<QGuiApplication*>(ptr)->sessionKey().toUtf8().data();
}

void QGuiApplication_QGuiApplication_SetApplicationDisplayName(char* name){
	QGuiApplication::setApplicationDisplayName(QString(name));
}

void QGuiApplication_QGuiApplication_SetLayoutDirection(int direction){
	QGuiApplication::setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QGuiApplication_QGuiApplication_SetOverrideCursor(void* cursor){
	QGuiApplication::setOverrideCursor(*static_cast<QCursor*>(cursor));
}

void QGuiApplication_QGuiApplication_SetQuitOnLastWindowClosed(int quit){
	QGuiApplication::setQuitOnLastWindowClosed(quit != 0);
}

void QGuiApplication_QGuiApplication_SetWindowIcon(void* icon){
	QGuiApplication::setWindowIcon(*static_cast<QIcon*>(icon));
}

void* QGuiApplication_NewQGuiApplication(int argc, char* argv){
	QList<QByteArray> aList = QByteArray(argv).split('|');
	char *argvs[argc];
	static int argcs = argc;
	for (int i = 0; i < argc; i++)
		argvs[i] = aList[i].data();

	return new QGuiApplication(argcs, argvs);
}

void QGuiApplication_ConnectApplicationStateChanged(void* ptr){
	QObject::connect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(Qt::ApplicationState)>(&QGuiApplication::applicationStateChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(Qt::ApplicationState)>(&MyQGuiApplication::Signal_ApplicationStateChanged));;
}

void QGuiApplication_DisconnectApplicationStateChanged(void* ptr){
	QObject::disconnect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(Qt::ApplicationState)>(&QGuiApplication::applicationStateChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(Qt::ApplicationState)>(&MyQGuiApplication::Signal_ApplicationStateChanged));;
}

void QGuiApplication_QGuiApplication_ChangeOverrideCursor(void* cursor){
	QGuiApplication::changeOverrideCursor(*static_cast<QCursor*>(cursor));
}

void* QGuiApplication_QGuiApplication_Clipboard(){
	return QGuiApplication::clipboard();
}

int QGuiApplication_QGuiApplication_DesktopSettingsAware(){
	return QGuiApplication::desktopSettingsAware();
}

double QGuiApplication_DevicePixelRatio(void* ptr){
	return static_cast<double>(static_cast<QGuiApplication*>(ptr)->devicePixelRatio());
}

int QGuiApplication_QGuiApplication_Exec(){
	return QGuiApplication::exec();
}

void* QGuiApplication_QGuiApplication_FocusObject(){
	return QGuiApplication::focusObject();
}

void QGuiApplication_ConnectFocusObjectChanged(void* ptr){
	QObject::connect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(QObject *)>(&QGuiApplication::focusObjectChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(QObject *)>(&MyQGuiApplication::Signal_FocusObjectChanged));;
}

void QGuiApplication_DisconnectFocusObjectChanged(void* ptr){
	QObject::disconnect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(QObject *)>(&QGuiApplication::focusObjectChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(QObject *)>(&MyQGuiApplication::Signal_FocusObjectChanged));;
}

void* QGuiApplication_QGuiApplication_FocusWindow(){
	return QGuiApplication::focusWindow();
}

void QGuiApplication_ConnectFocusWindowChanged(void* ptr){
	QObject::connect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(QWindow *)>(&QGuiApplication::focusWindowChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(QWindow *)>(&MyQGuiApplication::Signal_FocusWindowChanged));;
}

void QGuiApplication_DisconnectFocusWindowChanged(void* ptr){
	QObject::disconnect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(QWindow *)>(&QGuiApplication::focusWindowChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(QWindow *)>(&MyQGuiApplication::Signal_FocusWindowChanged));;
}

void QGuiApplication_ConnectFontDatabaseChanged(void* ptr){
	QObject::connect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)()>(&QGuiApplication::fontDatabaseChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)()>(&MyQGuiApplication::Signal_FontDatabaseChanged));;
}

void QGuiApplication_DisconnectFontDatabaseChanged(void* ptr){
	QObject::disconnect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)()>(&QGuiApplication::fontDatabaseChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)()>(&MyQGuiApplication::Signal_FontDatabaseChanged));;
}

void* QGuiApplication_QGuiApplication_InputMethod(){
	return QGuiApplication::inputMethod();
}

int QGuiApplication_QGuiApplication_IsLeftToRight(){
	return QGuiApplication::isLeftToRight();
}

int QGuiApplication_QGuiApplication_IsRightToLeft(){
	return QGuiApplication::isRightToLeft();
}

int QGuiApplication_QGuiApplication_KeyboardModifiers(){
	return QGuiApplication::keyboardModifiers();
}

void QGuiApplication_ConnectLastWindowClosed(void* ptr){
	QObject::connect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)()>(&QGuiApplication::lastWindowClosed), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)()>(&MyQGuiApplication::Signal_LastWindowClosed));;
}

void QGuiApplication_DisconnectLastWindowClosed(void* ptr){
	QObject::disconnect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)()>(&QGuiApplication::lastWindowClosed), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)()>(&MyQGuiApplication::Signal_LastWindowClosed));;
}

void QGuiApplication_ConnectLayoutDirectionChanged(void* ptr){
	QObject::connect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(Qt::LayoutDirection)>(&QGuiApplication::layoutDirectionChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(Qt::LayoutDirection)>(&MyQGuiApplication::Signal_LayoutDirectionChanged));;
}

void QGuiApplication_DisconnectLayoutDirectionChanged(void* ptr){
	QObject::disconnect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(Qt::LayoutDirection)>(&QGuiApplication::layoutDirectionChanged), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(Qt::LayoutDirection)>(&MyQGuiApplication::Signal_LayoutDirectionChanged));;
}

void* QGuiApplication_QGuiApplication_ModalWindow(){
	return QGuiApplication::modalWindow();
}

int QGuiApplication_QGuiApplication_MouseButtons(){
	return QGuiApplication::mouseButtons();
}

int QGuiApplication_Notify(void* ptr, void* object, void* event){
	return static_cast<QGuiApplication*>(ptr)->notify(static_cast<QObject*>(object), static_cast<QEvent*>(event));
}

void* QGuiApplication_QGuiApplication_PrimaryScreen(){
	return QGuiApplication::primaryScreen();
}

void QGuiApplication_ConnectScreenAdded(void* ptr){
	QObject::connect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(QScreen *)>(&QGuiApplication::screenAdded), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(QScreen *)>(&MyQGuiApplication::Signal_ScreenAdded));;
}

void QGuiApplication_DisconnectScreenAdded(void* ptr){
	QObject::disconnect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(QScreen *)>(&QGuiApplication::screenAdded), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(QScreen *)>(&MyQGuiApplication::Signal_ScreenAdded));;
}

void QGuiApplication_ConnectScreenRemoved(void* ptr){
	QObject::connect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(QScreen *)>(&QGuiApplication::screenRemoved), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(QScreen *)>(&MyQGuiApplication::Signal_ScreenRemoved));;
}

void QGuiApplication_DisconnectScreenRemoved(void* ptr){
	QObject::disconnect(static_cast<QGuiApplication*>(ptr), static_cast<void (QGuiApplication::*)(QScreen *)>(&QGuiApplication::screenRemoved), static_cast<MyQGuiApplication*>(ptr), static_cast<void (MyQGuiApplication::*)(QScreen *)>(&MyQGuiApplication::Signal_ScreenRemoved));;
}

void QGuiApplication_QGuiApplication_SetDesktopSettingsAware(int on){
	QGuiApplication::setDesktopSettingsAware(on != 0);
}

void QGuiApplication_QGuiApplication_SetFont(void* font){
	QGuiApplication::setFont(*static_cast<QFont*>(font));
}

void QGuiApplication_QGuiApplication_SetPalette(void* pal){
	QGuiApplication::setPalette(*static_cast<QPalette*>(pal));
}

void* QGuiApplication_QGuiApplication_StyleHints(){
	return QGuiApplication::styleHints();
}

void QGuiApplication_QGuiApplication_Sync(){
	QGuiApplication::sync();
}

void* QGuiApplication_QGuiApplication_TopLevelAt(void* pos){
	return QGuiApplication::topLevelAt(*static_cast<QPoint*>(pos));
}

void QGuiApplication_DestroyQGuiApplication(void* ptr){
	static_cast<QGuiApplication*>(ptr)->~QGuiApplication();
}

#include "qopengldebuglogger.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qtextlayout.h"
#include <QModelIndex>
#include <QPoint>
#include <QPainter>
#include <QPaintDevice>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QTextOption>
#include <QPointF>
#include <QFont>
#include <QTextLayout>
#include "_cgo_export.h"

class MyQTextLayout: public QTextLayout {
public:
};

void QTextLayout_DrawCursor2(void* ptr, void* painter, void* position, int cursorPosition){
	static_cast<QTextLayout*>(ptr)->drawCursor(static_cast<QPainter*>(painter), *static_cast<QPointF*>(position), cursorPosition);
}

void QTextLayout_DrawCursor(void* ptr, void* painter, void* position, int cursorPosition, int width){
	static_cast<QTextLayout*>(ptr)->drawCursor(static_cast<QPainter*>(painter), *static_cast<QPointF*>(position), cursorPosition, width);
}

void* QTextLayout_NewQTextLayout(){
	return new QTextLayout();
}

void* QTextLayout_NewQTextLayout2(char* text){
	return new QTextLayout(QString(text));
}

void* QTextLayout_NewQTextLayout3(char* text, void* font, void* paintdevice){
	return new QTextLayout(QString(text), *static_cast<QFont*>(font), static_cast<QPaintDevice*>(paintdevice));
}

void QTextLayout_BeginLayout(void* ptr){
	static_cast<QTextLayout*>(ptr)->beginLayout();
}

int QTextLayout_CacheEnabled(void* ptr){
	return static_cast<QTextLayout*>(ptr)->cacheEnabled();
}

void QTextLayout_ClearAdditionalFormats(void* ptr){
	static_cast<QTextLayout*>(ptr)->clearAdditionalFormats();
}

void QTextLayout_ClearLayout(void* ptr){
	static_cast<QTextLayout*>(ptr)->clearLayout();
}

int QTextLayout_CursorMoveStyle(void* ptr){
	return static_cast<QTextLayout*>(ptr)->cursorMoveStyle();
}

void QTextLayout_EndLayout(void* ptr){
	static_cast<QTextLayout*>(ptr)->endLayout();
}

int QTextLayout_IsValidCursorPosition(void* ptr, int pos){
	return static_cast<QTextLayout*>(ptr)->isValidCursorPosition(pos);
}

int QTextLayout_LeftCursorPosition(void* ptr, int oldPos){
	return static_cast<QTextLayout*>(ptr)->leftCursorPosition(oldPos);
}

int QTextLayout_LineCount(void* ptr){
	return static_cast<QTextLayout*>(ptr)->lineCount();
}

double QTextLayout_MaximumWidth(void* ptr){
	return static_cast<double>(static_cast<QTextLayout*>(ptr)->maximumWidth());
}

double QTextLayout_MinimumWidth(void* ptr){
	return static_cast<double>(static_cast<QTextLayout*>(ptr)->minimumWidth());
}

int QTextLayout_NextCursorPosition(void* ptr, int oldPos, int mode){
	return static_cast<QTextLayout*>(ptr)->nextCursorPosition(oldPos, static_cast<QTextLayout::CursorMode>(mode));
}

int QTextLayout_PreeditAreaPosition(void* ptr){
	return static_cast<QTextLayout*>(ptr)->preeditAreaPosition();
}

char* QTextLayout_PreeditAreaText(void* ptr){
	return static_cast<QTextLayout*>(ptr)->preeditAreaText().toUtf8().data();
}

int QTextLayout_PreviousCursorPosition(void* ptr, int oldPos, int mode){
	return static_cast<QTextLayout*>(ptr)->previousCursorPosition(oldPos, static_cast<QTextLayout::CursorMode>(mode));
}

int QTextLayout_RightCursorPosition(void* ptr, int oldPos){
	return static_cast<QTextLayout*>(ptr)->rightCursorPosition(oldPos);
}

void QTextLayout_SetCacheEnabled(void* ptr, int enable){
	static_cast<QTextLayout*>(ptr)->setCacheEnabled(enable != 0);
}

void QTextLayout_SetCursorMoveStyle(void* ptr, int style){
	static_cast<QTextLayout*>(ptr)->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

void QTextLayout_SetFont(void* ptr, void* font){
	static_cast<QTextLayout*>(ptr)->setFont(*static_cast<QFont*>(font));
}

void QTextLayout_SetPosition(void* ptr, void* p){
	static_cast<QTextLayout*>(ptr)->setPosition(*static_cast<QPointF*>(p));
}

void QTextLayout_SetPreeditArea(void* ptr, int position, char* text){
	static_cast<QTextLayout*>(ptr)->setPreeditArea(position, QString(text));
}

void QTextLayout_SetText(void* ptr, char* stri){
	static_cast<QTextLayout*>(ptr)->setText(QString(stri));
}

void QTextLayout_SetTextOption(void* ptr, void* option){
	static_cast<QTextLayout*>(ptr)->setTextOption(*static_cast<QTextOption*>(option));
}

char* QTextLayout_Text(void* ptr){
	return static_cast<QTextLayout*>(ptr)->text().toUtf8().data();
}

void QTextLayout_DestroyQTextLayout(void* ptr){
	static_cast<QTextLayout*>(ptr)->~QTextLayout();
}

#include "qgradient.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QColor>
#include <QGradient>
#include "_cgo_export.h"

class MyQGradient: public QGradient {
public:
};

void QGradient_SetColorAt(void* ptr, double position, void* color){
	static_cast<QGradient*>(ptr)->setColorAt(static_cast<qreal>(position), *static_cast<QColor*>(color));
}

int QGradient_CoordinateMode(void* ptr){
	return static_cast<QGradient*>(ptr)->coordinateMode();
}

void QGradient_SetCoordinateMode(void* ptr, int mode){
	static_cast<QGradient*>(ptr)->setCoordinateMode(static_cast<QGradient::CoordinateMode>(mode));
}

void QGradient_SetSpread(void* ptr, int method){
	static_cast<QGradient*>(ptr)->setSpread(static_cast<QGradient::Spread>(method));
}

int QGradient_Spread(void* ptr){
	return static_cast<QGradient*>(ptr)->spread();
}

int QGradient_Type(void* ptr){
	return static_cast<QGradient*>(ptr)->type();
}

#include "qradialgradient.h"
#include <QModelIndex>
#include <QPointF>
#include <QPoint>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QRadialGradient>
#include "_cgo_export.h"

class MyQRadialGradient: public QRadialGradient {
public:
};

void* QRadialGradient_NewQRadialGradient(){
	return new QRadialGradient();
}

void* QRadialGradient_NewQRadialGradient6(void* center, double centerRadius, void* focalPoint, double focalRadius){
	return new QRadialGradient(*static_cast<QPointF*>(center), static_cast<qreal>(centerRadius), *static_cast<QPointF*>(focalPoint), static_cast<qreal>(focalRadius));
}

void* QRadialGradient_NewQRadialGradient4(void* center, double radius){
	return new QRadialGradient(*static_cast<QPointF*>(center), static_cast<qreal>(radius));
}

void* QRadialGradient_NewQRadialGradient2(void* center, double radius, void* focalPoint){
	return new QRadialGradient(*static_cast<QPointF*>(center), static_cast<qreal>(radius), *static_cast<QPointF*>(focalPoint));
}

void* QRadialGradient_NewQRadialGradient7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius){
	return new QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(centerRadius), static_cast<qreal>(fx), static_cast<qreal>(fy), static_cast<qreal>(focalRadius));
}

void* QRadialGradient_NewQRadialGradient5(double cx, double cy, double radius){
	return new QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(radius));
}

void* QRadialGradient_NewQRadialGradient3(double cx, double cy, double radius, double fx, double fy){
	return new QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(radius), static_cast<qreal>(fx), static_cast<qreal>(fy));
}

double QRadialGradient_CenterRadius(void* ptr){
	return static_cast<double>(static_cast<QRadialGradient*>(ptr)->centerRadius());
}

double QRadialGradient_FocalRadius(void* ptr){
	return static_cast<double>(static_cast<QRadialGradient*>(ptr)->focalRadius());
}

double QRadialGradient_Radius(void* ptr){
	return static_cast<double>(static_cast<QRadialGradient*>(ptr)->radius());
}

void QRadialGradient_SetCenter(void* ptr, void* center){
	static_cast<QRadialGradient*>(ptr)->setCenter(*static_cast<QPointF*>(center));
}

void QRadialGradient_SetCenter2(void* ptr, double x, double y){
	static_cast<QRadialGradient*>(ptr)->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QRadialGradient_SetCenterRadius(void* ptr, double radius){
	static_cast<QRadialGradient*>(ptr)->setCenterRadius(static_cast<qreal>(radius));
}

void QRadialGradient_SetFocalPoint(void* ptr, void* focalPoint){
	static_cast<QRadialGradient*>(ptr)->setFocalPoint(*static_cast<QPointF*>(focalPoint));
}

void QRadialGradient_SetFocalPoint2(void* ptr, double x, double y){
	static_cast<QRadialGradient*>(ptr)->setFocalPoint(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QRadialGradient_SetFocalRadius(void* ptr, double radius){
	static_cast<QRadialGradient*>(ptr)->setFocalRadius(static_cast<qreal>(radius));
}

void QRadialGradient_SetRadius(void* ptr, double radius){
	static_cast<QRadialGradient*>(ptr)->setRadius(static_cast<qreal>(radius));
}

#include "qaccessibletablemodelchangeevent.h"
#include <QModelIndex>
#include <QAccessibleInterface>
#include <QAccessible>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QAccessibleTableModelChangeEvent>
#include "_cgo_export.h"

class MyQAccessibleTableModelChangeEvent: public QAccessibleTableModelChangeEvent {
public:
};

void* QAccessibleTableModelChangeEvent_NewQAccessibleTableModelChangeEvent2(void* iface, int changeType){
	return new QAccessibleTableModelChangeEvent(static_cast<QAccessibleInterface*>(iface), static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

void* QAccessibleTableModelChangeEvent_NewQAccessibleTableModelChangeEvent(void* object, int changeType){
	return new QAccessibleTableModelChangeEvent(static_cast<QObject*>(object), static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

int QAccessibleTableModelChangeEvent_FirstColumn(void* ptr){
	return static_cast<QAccessibleTableModelChangeEvent*>(ptr)->firstColumn();
}

int QAccessibleTableModelChangeEvent_FirstRow(void* ptr){
	return static_cast<QAccessibleTableModelChangeEvent*>(ptr)->firstRow();
}

int QAccessibleTableModelChangeEvent_LastColumn(void* ptr){
	return static_cast<QAccessibleTableModelChangeEvent*>(ptr)->lastColumn();
}

int QAccessibleTableModelChangeEvent_LastRow(void* ptr){
	return static_cast<QAccessibleTableModelChangeEvent*>(ptr)->lastRow();
}

int QAccessibleTableModelChangeEvent_ModelChangeType(void* ptr){
	return static_cast<QAccessibleTableModelChangeEvent*>(ptr)->modelChangeType();
}

void QAccessibleTableModelChangeEvent_SetFirstColumn(void* ptr, int column){
	static_cast<QAccessibleTableModelChangeEvent*>(ptr)->setFirstColumn(column);
}

void QAccessibleTableModelChangeEvent_SetFirstRow(void* ptr, int row){
	static_cast<QAccessibleTableModelChangeEvent*>(ptr)->setFirstRow(row);
}

void QAccessibleTableModelChangeEvent_SetLastColumn(void* ptr, int column){
	static_cast<QAccessibleTableModelChangeEvent*>(ptr)->setLastColumn(column);
}

void QAccessibleTableModelChangeEvent_SetLastRow(void* ptr, int row){
	static_cast<QAccessibleTableModelChangeEvent*>(ptr)->setLastRow(row);
}

void QAccessibleTableModelChangeEvent_SetModelChangeType(void* ptr, int changeType){
	static_cast<QAccessibleTableModelChangeEvent*>(ptr)->setModelChangeType(static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

#include "qdragenterevent.h"
#include <QMimeData>
#include <QDrag>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPoint>
#include <QDragEnterEvent>
#include "_cgo_export.h"

class MyQDragEnterEvent: public QDragEnterEvent {
public:
};

void* QDragEnterEvent_NewQDragEnterEvent(void* point, int actions, void* data, int buttons, int modifiers){
	return new QDragEnterEvent(*static_cast<QPoint*>(point), static_cast<Qt::DropAction>(actions), static_cast<QMimeData*>(data), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers));
}

#include "qvector4d.h"
#include <QUrl>
#include <QPointF>
#include <QPoint>
#include <QVariant>
#include <QModelIndex>
#include <QVector>
#include <QVector3D>
#include <QVector2D>
#include <QString>
#include <QVector4D>
#include "_cgo_export.h"

class MyQVector4D: public QVector4D {
public:
};

void* QVector4D_NewQVector4D(){
	return new QVector4D();
}

void* QVector4D_NewQVector4D4(void* point){
	return new QVector4D(*static_cast<QPoint*>(point));
}

void* QVector4D_NewQVector4D5(void* point){
	return new QVector4D(*static_cast<QPointF*>(point));
}

void* QVector4D_NewQVector4D6(void* vector){
	return new QVector4D(*static_cast<QVector2D*>(vector));
}

void* QVector4D_NewQVector4D8(void* vector){
	return new QVector4D(*static_cast<QVector3D*>(vector));
}

int QVector4D_IsNull(void* ptr){
	return static_cast<QVector4D*>(ptr)->isNull();
}

void QVector4D_Normalize(void* ptr){
	static_cast<QVector4D*>(ptr)->normalize();
}

#include "qrasterwindow.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QWindow>
#include <QRasterWindow>
#include "_cgo_export.h"

class MyQRasterWindow: public QRasterWindow {
public:
};

void* QRasterWindow_NewQRasterWindow(void* parent){
	return new QRasterWindow(static_cast<QWindow*>(parent));
}

#include "qopenglcontextgroup.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qopenglfunctions.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qtexttablecellformat.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextTable>
#include <QTextTableCell>
#include <QTextTableCellFormat>
#include "_cgo_export.h"

class MyQTextTableCellFormat: public QTextTableCellFormat {
public:
};

void* QTextTableCellFormat_NewQTextTableCellFormat(){
	return new QTextTableCellFormat();
}

double QTextTableCellFormat_BottomPadding(void* ptr){
	return static_cast<double>(static_cast<QTextTableCellFormat*>(ptr)->bottomPadding());
}

int QTextTableCellFormat_IsValid(void* ptr){
	return static_cast<QTextTableCellFormat*>(ptr)->isValid();
}

double QTextTableCellFormat_LeftPadding(void* ptr){
	return static_cast<double>(static_cast<QTextTableCellFormat*>(ptr)->leftPadding());
}

double QTextTableCellFormat_RightPadding(void* ptr){
	return static_cast<double>(static_cast<QTextTableCellFormat*>(ptr)->rightPadding());
}

void QTextTableCellFormat_SetBottomPadding(void* ptr, double padding){
	static_cast<QTextTableCellFormat*>(ptr)->setBottomPadding(static_cast<qreal>(padding));
}

void QTextTableCellFormat_SetLeftPadding(void* ptr, double padding){
	static_cast<QTextTableCellFormat*>(ptr)->setLeftPadding(static_cast<qreal>(padding));
}

void QTextTableCellFormat_SetPadding(void* ptr, double padding){
	static_cast<QTextTableCellFormat*>(ptr)->setPadding(static_cast<qreal>(padding));
}

void QTextTableCellFormat_SetRightPadding(void* ptr, double padding){
	static_cast<QTextTableCellFormat*>(ptr)->setRightPadding(static_cast<qreal>(padding));
}

void QTextTableCellFormat_SetTopPadding(void* ptr, double padding){
	static_cast<QTextTableCellFormat*>(ptr)->setTopPadding(static_cast<qreal>(padding));
}

double QTextTableCellFormat_TopPadding(void* ptr){
	return static_cast<double>(static_cast<QTextTableCellFormat*>(ptr)->topPadding());
}

#include "qaccessibleeditabletextinterface.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QAccessibleEditableTextInterface>
#include "_cgo_export.h"

class MyQAccessibleEditableTextInterface: public QAccessibleEditableTextInterface {
public:
};

void QAccessibleEditableTextInterface_DeleteText(void* ptr, int startOffset, int endOffset){
	static_cast<QAccessibleEditableTextInterface*>(ptr)->deleteText(startOffset, endOffset);
}

void QAccessibleEditableTextInterface_InsertText(void* ptr, int offset, char* text){
	static_cast<QAccessibleEditableTextInterface*>(ptr)->insertText(offset, QString(text));
}

void QAccessibleEditableTextInterface_ReplaceText(void* ptr, int startOffset, int endOffset, char* text){
	static_cast<QAccessibleEditableTextInterface*>(ptr)->replaceText(startOffset, endOffset, QString(text));
}

void QAccessibleEditableTextInterface_DestroyQAccessibleEditableTextInterface(void* ptr){
	static_cast<QAccessibleEditableTextInterface*>(ptr)->~QAccessibleEditableTextInterface();
}

#include "qwheelevent.h"
#include <QPoint>
#include <QPointF>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QWheelEvent>
#include "_cgo_export.h"

class MyQWheelEvent: public QWheelEvent {
public:
};

void* QWheelEvent_NewQWheelEvent(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers){
	return new QWheelEvent(*static_cast<QPointF*>(pos), *static_cast<QPointF*>(globalPos), *static_cast<QPoint*>(pixelDelta), *static_cast<QPoint*>(angleDelta), qt4Delta, static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers));
}

void* QWheelEvent_NewQWheelEvent4(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase){
	return new QWheelEvent(*static_cast<QPointF*>(pos), *static_cast<QPointF*>(globalPos), *static_cast<QPoint*>(pixelDelta), *static_cast<QPoint*>(angleDelta), qt4Delta, static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers), static_cast<Qt::ScrollPhase>(phase));
}

void* QWheelEvent_NewQWheelEvent5(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source){
	return new QWheelEvent(*static_cast<QPointF*>(pos), *static_cast<QPointF*>(globalPos), *static_cast<QPoint*>(pixelDelta), *static_cast<QPoint*>(angleDelta), qt4Delta, static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source));
}

int QWheelEvent_Buttons(void* ptr){
	return static_cast<QWheelEvent*>(ptr)->buttons();
}

int QWheelEvent_GlobalX(void* ptr){
	return static_cast<QWheelEvent*>(ptr)->globalX();
}

int QWheelEvent_GlobalY(void* ptr){
	return static_cast<QWheelEvent*>(ptr)->globalY();
}

int QWheelEvent_Phase(void* ptr){
	return static_cast<QWheelEvent*>(ptr)->phase();
}

int QWheelEvent_Source(void* ptr){
	return static_cast<QWheelEvent*>(ptr)->source();
}

int QWheelEvent_X(void* ptr){
	return static_cast<QWheelEvent*>(ptr)->x();
}

int QWheelEvent_Y(void* ptr){
	return static_cast<QWheelEvent*>(ptr)->y();
}

#include "qpagedpaintdevice.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QSize>
#include <QPageSize>
#include <QString>
#include <QMargins>
#include <QMarginsF>
#include <QSizeF>
#include <QPageLayout>
#include <QPagedPaintDevice>
#include "_cgo_export.h"

class MyQPagedPaintDevice: public QPagedPaintDevice {
public:
};

int QPagedPaintDevice_NewPage(void* ptr){
	return static_cast<QPagedPaintDevice*>(ptr)->newPage();
}

int QPagedPaintDevice_PageSize(void* ptr){
	return static_cast<QPagedPaintDevice*>(ptr)->pageSize();
}

int QPagedPaintDevice_SetPageLayout(void* ptr, void* newPageLayout){
	return static_cast<QPagedPaintDevice*>(ptr)->setPageLayout(*static_cast<QPageLayout*>(newPageLayout));
}

int QPagedPaintDevice_SetPageMargins(void* ptr, void* margins){
	return static_cast<QPagedPaintDevice*>(ptr)->setPageMargins(*static_cast<QMarginsF*>(margins));
}

int QPagedPaintDevice_SetPageMargins2(void* ptr, void* margins, int units){
	return static_cast<QPagedPaintDevice*>(ptr)->setPageMargins(*static_cast<QMarginsF*>(margins), static_cast<QPageLayout::Unit>(units));
}

int QPagedPaintDevice_SetPageOrientation(void* ptr, int orientation){
	return static_cast<QPagedPaintDevice*>(ptr)->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

int QPagedPaintDevice_SetPageSize(void* ptr, void* pageSize){
	return static_cast<QPagedPaintDevice*>(ptr)->setPageSize(*static_cast<QPageSize*>(pageSize));
}

void QPagedPaintDevice_SetPageSize2(void* ptr, int size){
	static_cast<QPagedPaintDevice*>(ptr)->setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));
}

void QPagedPaintDevice_SetPageSizeMM(void* ptr, void* size){
	static_cast<QPagedPaintDevice*>(ptr)->setPageSizeMM(*static_cast<QSizeF*>(size));
}

void QPagedPaintDevice_DestroyQPagedPaintDevice(void* ptr){
	static_cast<QPagedPaintDevice*>(ptr)->~QPagedPaintDevice();
}

#include "qabstractopenglfunctions.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopenglcontext.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include "_cgo_export.h"

#include "qtransform.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPolygon>
#include <QRegion>
#include <QPolygonF>
#include <QTransform>
#include "_cgo_export.h"

class MyQTransform: public QTransform {
public:
};

void* QTransform_NewQTransform3(double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33){
	return new QTransform(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m13), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(m23), static_cast<qreal>(m31), static_cast<qreal>(m32), static_cast<qreal>(m33));
}

void* QTransform_NewQTransform4(double m11, double m12, double m21, double m22, double dx, double dy){
	return new QTransform(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void* QTransform_Map8(void* ptr, void* region){
	return new QRegion(static_cast<QTransform*>(ptr)->map(*static_cast<QRegion*>(region)));
}

int QTransform_QTransform_QuadToSquare(void* quad, void* trans){
	return QTransform::quadToSquare(*static_cast<QPolygonF*>(quad), *static_cast<QTransform*>(trans));
}

void* QTransform_NewQTransform(){
	return new QTransform();
}

double QTransform_Determinant(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->determinant());
}

double QTransform_Dx(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->dx());
}

double QTransform_Dy(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->dy());
}

int QTransform_IsAffine(void* ptr){
	return static_cast<QTransform*>(ptr)->isAffine();
}

int QTransform_IsIdentity(void* ptr){
	return static_cast<QTransform*>(ptr)->isIdentity();
}

int QTransform_IsInvertible(void* ptr){
	return static_cast<QTransform*>(ptr)->isInvertible();
}

int QTransform_IsRotating(void* ptr){
	return static_cast<QTransform*>(ptr)->isRotating();
}

int QTransform_IsScaling(void* ptr){
	return static_cast<QTransform*>(ptr)->isScaling();
}

int QTransform_IsTranslating(void* ptr){
	return static_cast<QTransform*>(ptr)->isTranslating();
}

double QTransform_M11(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m11());
}

double QTransform_M12(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m12());
}

double QTransform_M13(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m13());
}

double QTransform_M21(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m21());
}

double QTransform_M22(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m22());
}

double QTransform_M23(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m23());
}

double QTransform_M31(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m31());
}

double QTransform_M32(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m32());
}

double QTransform_M33(void* ptr){
	return static_cast<double>(static_cast<QTransform*>(ptr)->m33());
}

void QTransform_Map10(void* ptr, int x, int y, int tx, int ty){
	static_cast<QTransform*>(ptr)->map(x, y, &tx, &ty);
}

int QTransform_QTransform_QuadToQuad(void* one, void* two, void* trans){
	return QTransform::quadToQuad(*static_cast<QPolygonF*>(one), *static_cast<QPolygonF*>(two), *static_cast<QTransform*>(trans));
}

void QTransform_Reset(void* ptr){
	static_cast<QTransform*>(ptr)->reset();
}

void QTransform_SetMatrix(void* ptr, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33){
	static_cast<QTransform*>(ptr)->setMatrix(static_cast<qreal>(m11), static_cast<qreal>(m12), static_cast<qreal>(m13), static_cast<qreal>(m21), static_cast<qreal>(m22), static_cast<qreal>(m23), static_cast<qreal>(m31), static_cast<qreal>(m32), static_cast<qreal>(m33));
}

int QTransform_QTransform_SquareToQuad(void* quad, void* trans){
	return QTransform::squareToQuad(*static_cast<QPolygonF*>(quad), *static_cast<QTransform*>(trans));
}

int QTransform_Type(void* ptr){
	return static_cast<QTransform*>(ptr)->type();
}

#include "qopenglfunctions_1_2.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qtextfragment.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QTextFragment>
#include "_cgo_export.h"

class MyQTextFragment: public QTextFragment {
public:
};

void* QTextFragment_NewQTextFragment(){
	return new QTextFragment();
}

void* QTextFragment_NewQTextFragment3(void* other){
	return new QTextFragment(*static_cast<QTextFragment*>(other));
}

int QTextFragment_CharFormatIndex(void* ptr){
	return static_cast<QTextFragment*>(ptr)->charFormatIndex();
}

int QTextFragment_Contains(void* ptr, int position){
	return static_cast<QTextFragment*>(ptr)->contains(position);
}

int QTextFragment_IsValid(void* ptr){
	return static_cast<QTextFragment*>(ptr)->isValid();
}

int QTextFragment_Length(void* ptr){
	return static_cast<QTextFragment*>(ptr)->length();
}

int QTextFragment_Position(void* ptr){
	return static_cast<QTextFragment*>(ptr)->position();
}

char* QTextFragment_Text(void* ptr){
	return static_cast<QTextFragment*>(ptr)->text().toUtf8().data();
}

#include "qmovie.h"
#include <QModelIndex>
#include <QSize>
#include <QObject>
#include <QColor>
#include <QMetaObject>
#include <QString>
#include <QUrl>
#include <QByteArray>
#include <QIODevice>
#include <QImage>
#include <QVariant>
#include <QImageReader>
#include <QMovie>
#include "_cgo_export.h"

class MyQMovie: public QMovie {
public:
void Signal_Error(QImageReader::ImageReaderError error){callbackQMovieError(this->objectName().toUtf8().data(), error);};
void Signal_Finished(){callbackQMovieFinished(this->objectName().toUtf8().data());};
void Signal_FrameChanged(int frameNumber){callbackQMovieFrameChanged(this->objectName().toUtf8().data(), frameNumber);};
void Signal_Started(){callbackQMovieStarted(this->objectName().toUtf8().data());};
void Signal_StateChanged(QMovie::MovieState state){callbackQMovieStateChanged(this->objectName().toUtf8().data(), state);};
};

int QMovie_CacheMode(void* ptr){
	return static_cast<QMovie*>(ptr)->cacheMode();
}

void QMovie_SetCacheMode(void* ptr, int mode){
	static_cast<QMovie*>(ptr)->setCacheMode(static_cast<QMovie::CacheMode>(mode));
}

void QMovie_SetSpeed(void* ptr, int percentSpeed){
	QMetaObject::invokeMethod(static_cast<QMovie*>(ptr), "setSpeed", Q_ARG(int, percentSpeed));
}

int QMovie_Speed(void* ptr){
	return static_cast<QMovie*>(ptr)->speed();
}

void* QMovie_NewQMovie2(void* device, void* format, void* parent){
	return new QMovie(static_cast<QIODevice*>(device), *static_cast<QByteArray*>(format), static_cast<QObject*>(parent));
}

void* QMovie_NewQMovie(void* parent){
	return new QMovie(static_cast<QObject*>(parent));
}

void* QMovie_NewQMovie3(char* fileName, void* format, void* parent){
	return new QMovie(QString(fileName), *static_cast<QByteArray*>(format), static_cast<QObject*>(parent));
}

void* QMovie_BackgroundColor(void* ptr){
	return new QColor(static_cast<QMovie*>(ptr)->backgroundColor());
}

int QMovie_CurrentFrameNumber(void* ptr){
	return static_cast<QMovie*>(ptr)->currentFrameNumber();
}

void* QMovie_Device(void* ptr){
	return static_cast<QMovie*>(ptr)->device();
}

void QMovie_ConnectError(void* ptr){
	QObject::connect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)(QImageReader::ImageReaderError)>(&QMovie::error), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)(QImageReader::ImageReaderError)>(&MyQMovie::Signal_Error));;
}

void QMovie_DisconnectError(void* ptr){
	QObject::disconnect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)(QImageReader::ImageReaderError)>(&QMovie::error), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)(QImageReader::ImageReaderError)>(&MyQMovie::Signal_Error));;
}

char* QMovie_FileName(void* ptr){
	return static_cast<QMovie*>(ptr)->fileName().toUtf8().data();
}

void QMovie_ConnectFinished(void* ptr){
	QObject::connect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)()>(&QMovie::finished), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)()>(&MyQMovie::Signal_Finished));;
}

void QMovie_DisconnectFinished(void* ptr){
	QObject::disconnect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)()>(&QMovie::finished), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)()>(&MyQMovie::Signal_Finished));;
}

void* QMovie_Format(void* ptr){
	return new QByteArray(static_cast<QMovie*>(ptr)->format());
}

void QMovie_ConnectFrameChanged(void* ptr){
	QObject::connect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)(int)>(&QMovie::frameChanged), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)(int)>(&MyQMovie::Signal_FrameChanged));;
}

void QMovie_DisconnectFrameChanged(void* ptr){
	QObject::disconnect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)(int)>(&QMovie::frameChanged), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)(int)>(&MyQMovie::Signal_FrameChanged));;
}

int QMovie_FrameCount(void* ptr){
	return static_cast<QMovie*>(ptr)->frameCount();
}

int QMovie_IsValid(void* ptr){
	return static_cast<QMovie*>(ptr)->isValid();
}

int QMovie_JumpToFrame(void* ptr, int frameNumber){
	return static_cast<QMovie*>(ptr)->jumpToFrame(frameNumber);
}

int QMovie_JumpToNextFrame(void* ptr){
	return QMetaObject::invokeMethod(static_cast<QMovie*>(ptr), "jumpToNextFrame");
}

int QMovie_LoopCount(void* ptr){
	return static_cast<QMovie*>(ptr)->loopCount();
}

int QMovie_NextFrameDelay(void* ptr){
	return static_cast<QMovie*>(ptr)->nextFrameDelay();
}

void QMovie_SetBackgroundColor(void* ptr, void* color){
	static_cast<QMovie*>(ptr)->setBackgroundColor(*static_cast<QColor*>(color));
}

void QMovie_SetDevice(void* ptr, void* device){
	static_cast<QMovie*>(ptr)->setDevice(static_cast<QIODevice*>(device));
}

void QMovie_SetFileName(void* ptr, char* fileName){
	static_cast<QMovie*>(ptr)->setFileName(QString(fileName));
}

void QMovie_SetFormat(void* ptr, void* format){
	static_cast<QMovie*>(ptr)->setFormat(*static_cast<QByteArray*>(format));
}

void QMovie_SetPaused(void* ptr, int paused){
	QMetaObject::invokeMethod(static_cast<QMovie*>(ptr), "setPaused", Q_ARG(bool, paused != 0));
}

void QMovie_SetScaledSize(void* ptr, void* size){
	static_cast<QMovie*>(ptr)->setScaledSize(*static_cast<QSize*>(size));
}

void QMovie_Start(void* ptr){
	QMetaObject::invokeMethod(static_cast<QMovie*>(ptr), "start");
}

void QMovie_ConnectStarted(void* ptr){
	QObject::connect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)()>(&QMovie::started), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)()>(&MyQMovie::Signal_Started));;
}

void QMovie_DisconnectStarted(void* ptr){
	QObject::disconnect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)()>(&QMovie::started), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)()>(&MyQMovie::Signal_Started));;
}

void QMovie_ConnectStateChanged(void* ptr){
	QObject::connect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)(QMovie::MovieState)>(&QMovie::stateChanged), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)(QMovie::MovieState)>(&MyQMovie::Signal_StateChanged));;
}

void QMovie_DisconnectStateChanged(void* ptr){
	QObject::disconnect(static_cast<QMovie*>(ptr), static_cast<void (QMovie::*)(QMovie::MovieState)>(&QMovie::stateChanged), static_cast<MyQMovie*>(ptr), static_cast<void (MyQMovie::*)(QMovie::MovieState)>(&MyQMovie::Signal_StateChanged));;
}

void QMovie_Stop(void* ptr){
	QMetaObject::invokeMethod(static_cast<QMovie*>(ptr), "stop");
}

void QMovie_DestroyQMovie(void* ptr){
	static_cast<QMovie*>(ptr)->~QMovie();
}

#include "qopenglfunctions_4_3_compatibility.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qplatformsurfaceevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QPlatformSurfaceEvent>
#include "_cgo_export.h"

class MyQPlatformSurfaceEvent: public QPlatformSurfaceEvent {
public:
};

void* QPlatformSurfaceEvent_NewQPlatformSurfaceEvent(int surfaceEventType){
	return new QPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
}

int QPlatformSurfaceEvent_SurfaceEventType(void* ptr){
	return static_cast<QPlatformSurfaceEvent*>(ptr)->surfaceEventType();
}

#include "qsurface.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QSurface>
#include "_cgo_export.h"

class MyQSurface: public QSurface {
public:
};

int QSurface_SupportsOpenGL(void* ptr){
	return static_cast<QSurface*>(ptr)->supportsOpenGL();
}

int QSurface_SurfaceClass(void* ptr){
	return static_cast<QSurface*>(ptr)->surfaceClass();
}

int QSurface_SurfaceType(void* ptr){
	return static_cast<QSurface*>(ptr)->surfaceType();
}

void QSurface_DestroyQSurface(void* ptr){
	static_cast<QSurface*>(ptr)->~QSurface();
}

#include "qregexpvalidator.h"
#include <QModelIndex>
#include <QRegExp>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QRegExpValidator>
#include "_cgo_export.h"

class MyQRegExpValidator: public QRegExpValidator {
public:
};

void QRegExpValidator_SetRegExp(void* ptr, void* rx){
	static_cast<QRegExpValidator*>(ptr)->setRegExp(*static_cast<QRegExp*>(rx));
}

void* QRegExpValidator_NewQRegExpValidator(void* parent){
	return new QRegExpValidator(static_cast<QObject*>(parent));
}

void* QRegExpValidator_NewQRegExpValidator2(void* rx, void* parent){
	return new QRegExpValidator(*static_cast<QRegExp*>(rx), static_cast<QObject*>(parent));
}

void* QRegExpValidator_RegExp(void* ptr){
	return new QRegExp(static_cast<QRegExpValidator*>(ptr)->regExp());
}

void QRegExpValidator_DestroyQRegExpValidator(void* ptr){
	static_cast<QRegExpValidator*>(ptr)->~QRegExpValidator();
}

#include "qfontinfo.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QFont>
#include <QFontInfo>
#include "_cgo_export.h"

class MyQFontInfo: public QFontInfo {
public:
};

void* QFontInfo_NewQFontInfo(void* font){
	return new QFontInfo(*static_cast<QFont*>(font));
}

void* QFontInfo_NewQFontInfo2(void* fi){
	return new QFontInfo(*static_cast<QFontInfo*>(fi));
}

int QFontInfo_Bold(void* ptr){
	return static_cast<QFontInfo*>(ptr)->bold();
}

int QFontInfo_ExactMatch(void* ptr){
	return static_cast<QFontInfo*>(ptr)->exactMatch();
}

char* QFontInfo_Family(void* ptr){
	return static_cast<QFontInfo*>(ptr)->family().toUtf8().data();
}

int QFontInfo_FixedPitch(void* ptr){
	return static_cast<QFontInfo*>(ptr)->fixedPitch();
}

int QFontInfo_Italic(void* ptr){
	return static_cast<QFontInfo*>(ptr)->italic();
}

int QFontInfo_PixelSize(void* ptr){
	return static_cast<QFontInfo*>(ptr)->pixelSize();
}

int QFontInfo_PointSize(void* ptr){
	return static_cast<QFontInfo*>(ptr)->pointSize();
}

double QFontInfo_PointSizeF(void* ptr){
	return static_cast<double>(static_cast<QFontInfo*>(ptr)->pointSizeF());
}

int QFontInfo_Style(void* ptr){
	return static_cast<QFontInfo*>(ptr)->style();
}

char* QFontInfo_StyleName(void* ptr){
	return static_cast<QFontInfo*>(ptr)->styleName().toUtf8().data();
}

void QFontInfo_Swap(void* ptr, void* other){
	static_cast<QFontInfo*>(ptr)->swap(*static_cast<QFontInfo*>(other));
}

int QFontInfo_StyleHint(void* ptr){
	return static_cast<QFontInfo*>(ptr)->styleHint();
}

int QFontInfo_Weight(void* ptr){
	return static_cast<QFontInfo*>(ptr)->weight();
}

void QFontInfo_DestroyQFontInfo(void* ptr){
	static_cast<QFontInfo*>(ptr)->~QFontInfo();
}

#include "qaccessibletextinterface.h"
#include <QPoint>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QAccessibleTextInterface>
#include "_cgo_export.h"

class MyQAccessibleTextInterface: public QAccessibleTextInterface {
public:
};

void QAccessibleTextInterface_AddSelection(void* ptr, int startOffset, int endOffset){
	static_cast<QAccessibleTextInterface*>(ptr)->addSelection(startOffset, endOffset);
}

char* QAccessibleTextInterface_Attributes(void* ptr, int offset, int startOffset, int endOffset){
	return static_cast<QAccessibleTextInterface*>(ptr)->attributes(offset, &startOffset, &endOffset).toUtf8().data();
}

int QAccessibleTextInterface_CharacterCount(void* ptr){
	return static_cast<QAccessibleTextInterface*>(ptr)->characterCount();
}

int QAccessibleTextInterface_CursorPosition(void* ptr){
	return static_cast<QAccessibleTextInterface*>(ptr)->cursorPosition();
}

int QAccessibleTextInterface_OffsetAtPoint(void* ptr, void* point){
	return static_cast<QAccessibleTextInterface*>(ptr)->offsetAtPoint(*static_cast<QPoint*>(point));
}

void QAccessibleTextInterface_RemoveSelection(void* ptr, int selectionIndex){
	static_cast<QAccessibleTextInterface*>(ptr)->removeSelection(selectionIndex);
}

void QAccessibleTextInterface_ScrollToSubstring(void* ptr, int startIndex, int endIndex){
	static_cast<QAccessibleTextInterface*>(ptr)->scrollToSubstring(startIndex, endIndex);
}

void QAccessibleTextInterface_Selection(void* ptr, int selectionIndex, int startOffset, int endOffset){
	static_cast<QAccessibleTextInterface*>(ptr)->selection(selectionIndex, &startOffset, &endOffset);
}

int QAccessibleTextInterface_SelectionCount(void* ptr){
	return static_cast<QAccessibleTextInterface*>(ptr)->selectionCount();
}

void QAccessibleTextInterface_SetCursorPosition(void* ptr, int position){
	static_cast<QAccessibleTextInterface*>(ptr)->setCursorPosition(position);
}

void QAccessibleTextInterface_SetSelection(void* ptr, int selectionIndex, int startOffset, int endOffset){
	static_cast<QAccessibleTextInterface*>(ptr)->setSelection(selectionIndex, startOffset, endOffset);
}

char* QAccessibleTextInterface_Text(void* ptr, int startOffset, int endOffset){
	return static_cast<QAccessibleTextInterface*>(ptr)->text(startOffset, endOffset).toUtf8().data();
}

char* QAccessibleTextInterface_TextAfterOffset(void* ptr, int offset, int boundaryType, int startOffset, int endOffset){
	return static_cast<QAccessibleTextInterface*>(ptr)->textAfterOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), &startOffset, &endOffset).toUtf8().data();
}

char* QAccessibleTextInterface_TextAtOffset(void* ptr, int offset, int boundaryType, int startOffset, int endOffset){
	return static_cast<QAccessibleTextInterface*>(ptr)->textAtOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), &startOffset, &endOffset).toUtf8().data();
}

char* QAccessibleTextInterface_TextBeforeOffset(void* ptr, int offset, int boundaryType, int startOffset, int endOffset){
	return static_cast<QAccessibleTextInterface*>(ptr)->textBeforeOffset(offset, static_cast<QAccessible::TextBoundaryType>(boundaryType), &startOffset, &endOffset).toUtf8().data();
}

void QAccessibleTextInterface_DestroyQAccessibleTextInterface(void* ptr){
	static_cast<QAccessibleTextInterface*>(ptr)->~QAccessibleTextInterface();
}

#include "qfont.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPaintDevice>
#include <QString>
#include <QFont>
#include "_cgo_export.h"

class MyQFont: public QFont {
public:
};

int QFont_Times_Type(){
	return QFont::Times;
}

int QFont_Courier_Type(){
	return QFont::Courier;
}

int QFont_OldEnglish_Type(){
	return QFont::OldEnglish;
}

int QFont_System_Type(){
	return QFont::System;
}

int QFont_AnyStyle_Type(){
	return QFont::AnyStyle;
}

int QFont_Cursive_Type(){
	return QFont::Cursive;
}

int QFont_Monospace_Type(){
	return QFont::Monospace;
}

int QFont_Fantasy_Type(){
	return QFont::Fantasy;
}

char* QFont_DefaultFamily(void* ptr){
	return static_cast<QFont*>(ptr)->defaultFamily().toUtf8().data();
}

char* QFont_LastResortFamily(void* ptr){
	return static_cast<QFont*>(ptr)->lastResortFamily().toUtf8().data();
}

char* QFont_LastResortFont(void* ptr){
	return static_cast<QFont*>(ptr)->lastResortFont().toUtf8().data();
}

void* QFont_NewQFont(){
	return new QFont();
}

void* QFont_NewQFont4(void* font){
	return new QFont(*static_cast<QFont*>(font));
}

void* QFont_NewQFont3(void* font, void* pd){
	return new QFont(*static_cast<QFont*>(font), static_cast<QPaintDevice*>(pd));
}

void* QFont_NewQFont2(char* family, int pointSize, int weight, int italic){
	return new QFont(QString(family), pointSize, weight, italic != 0);
}

int QFont_Bold(void* ptr){
	return static_cast<QFont*>(ptr)->bold();
}

int QFont_Capitalization(void* ptr){
	return static_cast<QFont*>(ptr)->capitalization();
}

int QFont_ExactMatch(void* ptr){
	return static_cast<QFont*>(ptr)->exactMatch();
}

char* QFont_Family(void* ptr){
	return static_cast<QFont*>(ptr)->family().toUtf8().data();
}

int QFont_FixedPitch(void* ptr){
	return static_cast<QFont*>(ptr)->fixedPitch();
}

int QFont_FromString(void* ptr, char* descrip){
	return static_cast<QFont*>(ptr)->fromString(QString(descrip));
}

int QFont_HintingPreference(void* ptr){
	return static_cast<QFont*>(ptr)->hintingPreference();
}

void QFont_QFont_InsertSubstitution(char* familyName, char* substituteName){
	QFont::insertSubstitution(QString(familyName), QString(substituteName));
}

void QFont_QFont_InsertSubstitutions(char* familyName, char* substituteNames){
	QFont::insertSubstitutions(QString(familyName), QString(substituteNames).split("|", QString::SkipEmptyParts));
}

int QFont_IsCopyOf(void* ptr, void* f){
	return static_cast<QFont*>(ptr)->isCopyOf(*static_cast<QFont*>(f));
}

int QFont_Italic(void* ptr){
	return static_cast<QFont*>(ptr)->italic();
}

int QFont_Kerning(void* ptr){
	return static_cast<QFont*>(ptr)->kerning();
}

char* QFont_Key(void* ptr){
	return static_cast<QFont*>(ptr)->key().toUtf8().data();
}

double QFont_LetterSpacing(void* ptr){
	return static_cast<double>(static_cast<QFont*>(ptr)->letterSpacing());
}

int QFont_LetterSpacingType(void* ptr){
	return static_cast<QFont*>(ptr)->letterSpacingType();
}

int QFont_Overline(void* ptr){
	return static_cast<QFont*>(ptr)->overline();
}

int QFont_PixelSize(void* ptr){
	return static_cast<QFont*>(ptr)->pixelSize();
}

int QFont_PointSize(void* ptr){
	return static_cast<QFont*>(ptr)->pointSize();
}

double QFont_PointSizeF(void* ptr){
	return static_cast<double>(static_cast<QFont*>(ptr)->pointSizeF());
}

void QFont_QFont_RemoveSubstitutions(char* familyName){
	QFont::removeSubstitutions(QString(familyName));
}

void QFont_SetBold(void* ptr, int enable){
	static_cast<QFont*>(ptr)->setBold(enable != 0);
}

void QFont_SetCapitalization(void* ptr, int caps){
	static_cast<QFont*>(ptr)->setCapitalization(static_cast<QFont::Capitalization>(caps));
}

void QFont_SetFamily(void* ptr, char* family){
	static_cast<QFont*>(ptr)->setFamily(QString(family));
}

void QFont_SetFixedPitch(void* ptr, int enable){
	static_cast<QFont*>(ptr)->setFixedPitch(enable != 0);
}

void QFont_SetHintingPreference(void* ptr, int hintingPreference){
	static_cast<QFont*>(ptr)->setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

void QFont_SetItalic(void* ptr, int enable){
	static_cast<QFont*>(ptr)->setItalic(enable != 0);
}

void QFont_SetKerning(void* ptr, int enable){
	static_cast<QFont*>(ptr)->setKerning(enable != 0);
}

void QFont_SetLetterSpacing(void* ptr, int ty, double spacing){
	static_cast<QFont*>(ptr)->setLetterSpacing(static_cast<QFont::SpacingType>(ty), static_cast<qreal>(spacing));
}

void QFont_SetOverline(void* ptr, int enable){
	static_cast<QFont*>(ptr)->setOverline(enable != 0);
}

void QFont_SetPixelSize(void* ptr, int pixelSize){
	static_cast<QFont*>(ptr)->setPixelSize(pixelSize);
}

void QFont_SetPointSize(void* ptr, int pointSize){
	static_cast<QFont*>(ptr)->setPointSize(pointSize);
}

void QFont_SetPointSizeF(void* ptr, double pointSize){
	static_cast<QFont*>(ptr)->setPointSizeF(static_cast<qreal>(pointSize));
}

void QFont_SetStretch(void* ptr, int factor){
	static_cast<QFont*>(ptr)->setStretch(factor);
}

void QFont_SetStrikeOut(void* ptr, int enable){
	static_cast<QFont*>(ptr)->setStrikeOut(enable != 0);
}

void QFont_SetStyle(void* ptr, int style){
	static_cast<QFont*>(ptr)->setStyle(static_cast<QFont::Style>(style));
}

void QFont_SetStyleHint(void* ptr, int hint, int strategy){
	static_cast<QFont*>(ptr)->setStyleHint(static_cast<QFont::StyleHint>(hint), static_cast<QFont::StyleStrategy>(strategy));
}

void QFont_SetStyleName(void* ptr, char* styleName){
	static_cast<QFont*>(ptr)->setStyleName(QString(styleName));
}

void QFont_SetStyleStrategy(void* ptr, int s){
	static_cast<QFont*>(ptr)->setStyleStrategy(static_cast<QFont::StyleStrategy>(s));
}

void QFont_SetUnderline(void* ptr, int enable){
	static_cast<QFont*>(ptr)->setUnderline(enable != 0);
}

void QFont_SetWeight(void* ptr, int weight){
	static_cast<QFont*>(ptr)->setWeight(weight);
}

void QFont_SetWordSpacing(void* ptr, double spacing){
	static_cast<QFont*>(ptr)->setWordSpacing(static_cast<qreal>(spacing));
}

int QFont_Stretch(void* ptr){
	return static_cast<QFont*>(ptr)->stretch();
}

int QFont_StrikeOut(void* ptr){
	return static_cast<QFont*>(ptr)->strikeOut();
}

int QFont_Style(void* ptr){
	return static_cast<QFont*>(ptr)->style();
}

int QFont_StyleHint(void* ptr){
	return static_cast<QFont*>(ptr)->styleHint();
}

char* QFont_StyleName(void* ptr){
	return static_cast<QFont*>(ptr)->styleName().toUtf8().data();
}

int QFont_StyleStrategy(void* ptr){
	return static_cast<QFont*>(ptr)->styleStrategy();
}

char* QFont_QFont_Substitute(char* familyName){
	return QFont::substitute(QString(familyName)).toUtf8().data();
}

char* QFont_QFont_Substitutes(char* familyName){
	return QFont::substitutes(QString(familyName)).join("|").toUtf8().data();
}

char* QFont_QFont_Substitutions(){
	return QFont::substitutions().join("|").toUtf8().data();
}

void QFont_Swap(void* ptr, void* other){
	static_cast<QFont*>(ptr)->swap(*static_cast<QFont*>(other));
}

char* QFont_ToString(void* ptr){
	return static_cast<QFont*>(ptr)->toString().toUtf8().data();
}

int QFont_Underline(void* ptr){
	return static_cast<QFont*>(ptr)->underline();
}

int QFont_Weight(void* ptr){
	return static_cast<QFont*>(ptr)->weight();
}

double QFont_WordSpacing(void* ptr){
	return static_cast<double>(static_cast<QFont*>(ptr)->wordSpacing());
}

void QFont_DestroyQFont(void* ptr){
	static_cast<QFont*>(ptr)->~QFont();
}

#include "qimagereader.h"
#include <QString>
#include <QUrl>
#include <QRect>
#include <QImage>
#include <QImageIOHandler>
#include <QColor>
#include <QVariant>
#include <QModelIndex>
#include <QSize>
#include <QByteArray>
#include <QIODevice>
#include <QImageReader>
#include "_cgo_export.h"

class MyQImageReader: public QImageReader {
public:
};

void* QImageReader_NewQImageReader(){
	return new QImageReader();
}

void* QImageReader_NewQImageReader2(void* device, void* format){
	return new QImageReader(static_cast<QIODevice*>(device), *static_cast<QByteArray*>(format));
}

void* QImageReader_NewQImageReader3(char* fileName, void* format){
	return new QImageReader(QString(fileName), *static_cast<QByteArray*>(format));
}

int QImageReader_AutoDetectImageFormat(void* ptr){
	return static_cast<QImageReader*>(ptr)->autoDetectImageFormat();
}

int QImageReader_AutoTransform(void* ptr){
	return static_cast<QImageReader*>(ptr)->autoTransform();
}

void* QImageReader_BackgroundColor(void* ptr){
	return new QColor(static_cast<QImageReader*>(ptr)->backgroundColor());
}

int QImageReader_CanRead(void* ptr){
	return static_cast<QImageReader*>(ptr)->canRead();
}

int QImageReader_CurrentImageNumber(void* ptr){
	return static_cast<QImageReader*>(ptr)->currentImageNumber();
}

int QImageReader_DecideFormatFromContent(void* ptr){
	return static_cast<QImageReader*>(ptr)->decideFormatFromContent();
}

void* QImageReader_Device(void* ptr){
	return static_cast<QImageReader*>(ptr)->device();
}

int QImageReader_Error(void* ptr){
	return static_cast<QImageReader*>(ptr)->error();
}

char* QImageReader_ErrorString(void* ptr){
	return static_cast<QImageReader*>(ptr)->errorString().toUtf8().data();
}

char* QImageReader_FileName(void* ptr){
	return static_cast<QImageReader*>(ptr)->fileName().toUtf8().data();
}

void* QImageReader_Format(void* ptr){
	return new QByteArray(static_cast<QImageReader*>(ptr)->format());
}

int QImageReader_ImageCount(void* ptr){
	return static_cast<QImageReader*>(ptr)->imageCount();
}

void* QImageReader_QImageReader_ImageFormat3(void* device){
	return new QByteArray(QImageReader::imageFormat(static_cast<QIODevice*>(device)));
}

void* QImageReader_QImageReader_ImageFormat2(char* fileName){
	return new QByteArray(QImageReader::imageFormat(QString(fileName)));
}

int QImageReader_ImageFormat(void* ptr){
	return static_cast<QImageReader*>(ptr)->imageFormat();
}

int QImageReader_JumpToImage(void* ptr, int imageNumber){
	return static_cast<QImageReader*>(ptr)->jumpToImage(imageNumber);
}

int QImageReader_JumpToNextImage(void* ptr){
	return static_cast<QImageReader*>(ptr)->jumpToNextImage();
}

int QImageReader_LoopCount(void* ptr){
	return static_cast<QImageReader*>(ptr)->loopCount();
}

int QImageReader_NextImageDelay(void* ptr){
	return static_cast<QImageReader*>(ptr)->nextImageDelay();
}

int QImageReader_Quality(void* ptr){
	return static_cast<QImageReader*>(ptr)->quality();
}

int QImageReader_Read2(void* ptr, void* image){
	return static_cast<QImageReader*>(ptr)->read(static_cast<QImage*>(image));
}

void QImageReader_SetAutoDetectImageFormat(void* ptr, int enabled){
	static_cast<QImageReader*>(ptr)->setAutoDetectImageFormat(enabled != 0);
}

void QImageReader_SetAutoTransform(void* ptr, int enabled){
	static_cast<QImageReader*>(ptr)->setAutoTransform(enabled != 0);
}

void QImageReader_SetBackgroundColor(void* ptr, void* color){
	static_cast<QImageReader*>(ptr)->setBackgroundColor(*static_cast<QColor*>(color));
}

void QImageReader_SetClipRect(void* ptr, void* rect){
	static_cast<QImageReader*>(ptr)->setClipRect(*static_cast<QRect*>(rect));
}

void QImageReader_SetDecideFormatFromContent(void* ptr, int ignored){
	static_cast<QImageReader*>(ptr)->setDecideFormatFromContent(ignored != 0);
}

void QImageReader_SetDevice(void* ptr, void* device){
	static_cast<QImageReader*>(ptr)->setDevice(static_cast<QIODevice*>(device));
}

void QImageReader_SetFileName(void* ptr, char* fileName){
	static_cast<QImageReader*>(ptr)->setFileName(QString(fileName));
}

void QImageReader_SetFormat(void* ptr, void* format){
	static_cast<QImageReader*>(ptr)->setFormat(*static_cast<QByteArray*>(format));
}

void QImageReader_SetQuality(void* ptr, int quality){
	static_cast<QImageReader*>(ptr)->setQuality(quality);
}

void QImageReader_SetScaledClipRect(void* ptr, void* rect){
	static_cast<QImageReader*>(ptr)->setScaledClipRect(*static_cast<QRect*>(rect));
}

void QImageReader_SetScaledSize(void* ptr, void* size){
	static_cast<QImageReader*>(ptr)->setScaledSize(*static_cast<QSize*>(size));
}

void* QImageReader_SubType(void* ptr){
	return new QByteArray(static_cast<QImageReader*>(ptr)->subType());
}

int QImageReader_SupportsAnimation(void* ptr){
	return static_cast<QImageReader*>(ptr)->supportsAnimation();
}

int QImageReader_SupportsOption(void* ptr, int option){
	return static_cast<QImageReader*>(ptr)->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

char* QImageReader_Text(void* ptr, char* key){
	return static_cast<QImageReader*>(ptr)->text(QString(key)).toUtf8().data();
}

char* QImageReader_TextKeys(void* ptr){
	return static_cast<QImageReader*>(ptr)->textKeys().join("|").toUtf8().data();
}

int QImageReader_Transformation(void* ptr){
	return static_cast<QImageReader*>(ptr)->transformation();
}

void QImageReader_DestroyQImageReader(void* ptr){
	static_cast<QImageReader*>(ptr)->~QImageReader();
}

#include "qpixmap.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QColor>
#include <QRegion>
#include <QBitmap>
#include <QRect>
#include <QModelIndex>
#include <QIODevice>
#include <QImage>
#include <QByteArray>
#include <QPixmap>
#include "_cgo_export.h"

class MyQPixmap: public QPixmap {
public:
};

int QPixmap_Depth(void* ptr){
	return static_cast<QPixmap*>(ptr)->depth();
}

int QPixmap_Height(void* ptr){
	return static_cast<QPixmap*>(ptr)->height();
}

int QPixmap_IsNull(void* ptr){
	return static_cast<QPixmap*>(ptr)->isNull();
}

int QPixmap_IsQBitmap(void* ptr){
	return static_cast<QPixmap*>(ptr)->isQBitmap();
}

int QPixmap_Width(void* ptr){
	return static_cast<QPixmap*>(ptr)->width();
}

int QPixmap_ConvertFromImage(void* ptr, void* image, int flags){
	return static_cast<QPixmap*>(ptr)->convertFromImage(*static_cast<QImage*>(image), static_cast<Qt::ImageConversionFlag>(flags));
}

int QPixmap_QPixmap_DefaultDepth(){
	return QPixmap::defaultDepth();
}

void QPixmap_Detach(void* ptr){
	static_cast<QPixmap*>(ptr)->detach();
}

double QPixmap_DevicePixelRatio(void* ptr){
	return static_cast<double>(static_cast<QPixmap*>(ptr)->devicePixelRatio());
}

void QPixmap_Fill(void* ptr, void* color){
	static_cast<QPixmap*>(ptr)->fill(*static_cast<QColor*>(color));
}

int QPixmap_HasAlpha(void* ptr){
	return static_cast<QPixmap*>(ptr)->hasAlpha();
}

int QPixmap_HasAlphaChannel(void* ptr){
	return static_cast<QPixmap*>(ptr)->hasAlphaChannel();
}

int QPixmap_Load(void* ptr, char* fileName, char* format, int flags){
	return static_cast<QPixmap*>(ptr)->load(QString(fileName), const_cast<const char*>(format), static_cast<Qt::ImageConversionFlag>(flags));
}

int QPixmap_LoadFromData2(void* ptr, void* data, char* format, int flags){
	return static_cast<QPixmap*>(ptr)->loadFromData(*static_cast<QByteArray*>(data), const_cast<const char*>(format), static_cast<Qt::ImageConversionFlag>(flags));
}

int QPixmap_Save2(void* ptr, void* device, char* format, int quality){
	return static_cast<QPixmap*>(ptr)->save(static_cast<QIODevice*>(device), const_cast<const char*>(format), quality);
}

int QPixmap_Save(void* ptr, char* fileName, char* format, int quality){
	return static_cast<QPixmap*>(ptr)->save(QString(fileName), const_cast<const char*>(format), quality);
}

void QPixmap_Scroll2(void* ptr, int dx, int dy, void* rect, void* exposed){
	static_cast<QPixmap*>(ptr)->scroll(dx, dy, *static_cast<QRect*>(rect), static_cast<QRegion*>(exposed));
}

void QPixmap_Scroll(void* ptr, int dx, int dy, int x, int y, int width, int height, void* exposed){
	static_cast<QPixmap*>(ptr)->scroll(dx, dy, x, y, width, height, static_cast<QRegion*>(exposed));
}

void QPixmap_SetDevicePixelRatio(void* ptr, double scaleFactor){
	static_cast<QPixmap*>(ptr)->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

void QPixmap_SetMask(void* ptr, void* mask){
	static_cast<QPixmap*>(ptr)->setMask(*static_cast<QBitmap*>(mask));
}

void QPixmap_Swap(void* ptr, void* other){
	static_cast<QPixmap*>(ptr)->swap(*static_cast<QPixmap*>(other));
}

void QPixmap_DestroyQPixmap(void* ptr){
	static_cast<QPixmap*>(ptr)->~QPixmap();
}

#include "qhideevent.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QHideEvent>
#include "_cgo_export.h"

class MyQHideEvent: public QHideEvent {
public:
};

void* QHideEvent_NewQHideEvent(){
	return new QHideEvent();
}

#include "qtexttable.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextCursor>
#include <QTextTableFormat>
#include <QString>
#include <QTextTable>
#include "_cgo_export.h"

class MyQTextTable: public QTextTable {
public:
};

void QTextTable_InsertColumns(void* ptr, int index, int columns){
	static_cast<QTextTable*>(ptr)->insertColumns(index, columns);
}

void QTextTable_InsertRows(void* ptr, int index, int rows){
	static_cast<QTextTable*>(ptr)->insertRows(index, rows);
}

void QTextTable_RemoveColumns(void* ptr, int index, int columns){
	static_cast<QTextTable*>(ptr)->removeColumns(index, columns);
}

void QTextTable_RemoveRows(void* ptr, int index, int rows){
	static_cast<QTextTable*>(ptr)->removeRows(index, rows);
}

void QTextTable_Resize(void* ptr, int rows, int columns){
	static_cast<QTextTable*>(ptr)->resize(rows, columns);
}

void QTextTable_SetFormat(void* ptr, void* format){
	static_cast<QTextTable*>(ptr)->setFormat(*static_cast<QTextTableFormat*>(format));
}

void QTextTable_AppendColumns(void* ptr, int count){
	static_cast<QTextTable*>(ptr)->appendColumns(count);
}

void QTextTable_AppendRows(void* ptr, int count){
	static_cast<QTextTable*>(ptr)->appendRows(count);
}

int QTextTable_Columns(void* ptr){
	return static_cast<QTextTable*>(ptr)->columns();
}

void QTextTable_MergeCells2(void* ptr, void* cursor){
	static_cast<QTextTable*>(ptr)->mergeCells(*static_cast<QTextCursor*>(cursor));
}

void QTextTable_MergeCells(void* ptr, int row, int column, int numRows, int numCols){
	static_cast<QTextTable*>(ptr)->mergeCells(row, column, numRows, numCols);
}

int QTextTable_Rows(void* ptr){
	return static_cast<QTextTable*>(ptr)->rows();
}

void QTextTable_SplitCell(void* ptr, int row, int column, int numRows, int numCols){
	static_cast<QTextTable*>(ptr)->splitCell(row, column, numRows, numCols);
}

#include "qopenglfunctions_4_5_compatibility.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qstandarditem.h"
#include <QVariant>
#include <QModelIndex>
#include <QFont>
#include <QBrush>
#include <QDataStream>
#include <QString>
#include <QUrl>
#include <QIcon>
#include <QSize>
#include <QStandardItem>
#include "_cgo_export.h"

class MyQStandardItem: public QStandardItem {
public:
};

void* QStandardItem_NewQStandardItem(){
	return new QStandardItem();
}

void* QStandardItem_NewQStandardItem3(void* icon, char* text){
	return new QStandardItem(*static_cast<QIcon*>(icon), QString(text));
}

void* QStandardItem_NewQStandardItem2(char* text){
	return new QStandardItem(QString(text));
}

void* QStandardItem_NewQStandardItem4(int rows, int columns){
	return new QStandardItem(rows, columns);
}

char* QStandardItem_AccessibleDescription(void* ptr){
	return static_cast<QStandardItem*>(ptr)->accessibleDescription().toUtf8().data();
}

char* QStandardItem_AccessibleText(void* ptr){
	return static_cast<QStandardItem*>(ptr)->accessibleText().toUtf8().data();
}

void QStandardItem_AppendRow2(void* ptr, void* item){
	static_cast<QStandardItem*>(ptr)->appendRow(static_cast<QStandardItem*>(item));
}

void* QStandardItem_Background(void* ptr){
	return new QBrush(static_cast<QStandardItem*>(ptr)->background());
}

int QStandardItem_CheckState(void* ptr){
	return static_cast<QStandardItem*>(ptr)->checkState();
}

void* QStandardItem_Child(void* ptr, int row, int column){
	return static_cast<QStandardItem*>(ptr)->child(row, column);
}

void* QStandardItem_Clone(void* ptr){
	return static_cast<QStandardItem*>(ptr)->clone();
}

int QStandardItem_Column(void* ptr){
	return static_cast<QStandardItem*>(ptr)->column();
}

int QStandardItem_ColumnCount(void* ptr){
	return static_cast<QStandardItem*>(ptr)->columnCount();
}

void* QStandardItem_Data(void* ptr, int role){
	return new QVariant(static_cast<QStandardItem*>(ptr)->data(role));
}

int QStandardItem_Flags(void* ptr){
	return static_cast<QStandardItem*>(ptr)->flags();
}

void* QStandardItem_Foreground(void* ptr){
	return new QBrush(static_cast<QStandardItem*>(ptr)->foreground());
}

int QStandardItem_HasChildren(void* ptr){
	return static_cast<QStandardItem*>(ptr)->hasChildren();
}

void* QStandardItem_Index(void* ptr){
	return static_cast<QStandardItem*>(ptr)->index().internalPointer();
}

void QStandardItem_InsertColumns(void* ptr, int column, int count){
	static_cast<QStandardItem*>(ptr)->insertColumns(column, count);
}

void QStandardItem_InsertRow2(void* ptr, int row, void* item){
	static_cast<QStandardItem*>(ptr)->insertRow(row, static_cast<QStandardItem*>(item));
}

void QStandardItem_InsertRows2(void* ptr, int row, int count){
	static_cast<QStandardItem*>(ptr)->insertRows(row, count);
}

int QStandardItem_IsCheckable(void* ptr){
	return static_cast<QStandardItem*>(ptr)->isCheckable();
}

int QStandardItem_IsDragEnabled(void* ptr){
	return static_cast<QStandardItem*>(ptr)->isDragEnabled();
}

int QStandardItem_IsDropEnabled(void* ptr){
	return static_cast<QStandardItem*>(ptr)->isDropEnabled();
}

int QStandardItem_IsEditable(void* ptr){
	return static_cast<QStandardItem*>(ptr)->isEditable();
}

int QStandardItem_IsEnabled(void* ptr){
	return static_cast<QStandardItem*>(ptr)->isEnabled();
}

int QStandardItem_IsSelectable(void* ptr){
	return static_cast<QStandardItem*>(ptr)->isSelectable();
}

int QStandardItem_IsTristate(void* ptr){
	return static_cast<QStandardItem*>(ptr)->isTristate();
}

void* QStandardItem_Model(void* ptr){
	return static_cast<QStandardItem*>(ptr)->model();
}

void* QStandardItem_Parent(void* ptr){
	return static_cast<QStandardItem*>(ptr)->parent();
}

void QStandardItem_Read(void* ptr, void* in){
	static_cast<QStandardItem*>(ptr)->read(*static_cast<QDataStream*>(in));
}

void QStandardItem_RemoveColumn(void* ptr, int column){
	static_cast<QStandardItem*>(ptr)->removeColumn(column);
}

void QStandardItem_RemoveColumns(void* ptr, int column, int count){
	static_cast<QStandardItem*>(ptr)->removeColumns(column, count);
}

void QStandardItem_RemoveRow(void* ptr, int row){
	static_cast<QStandardItem*>(ptr)->removeRow(row);
}

void QStandardItem_RemoveRows(void* ptr, int row, int count){
	static_cast<QStandardItem*>(ptr)->removeRows(row, count);
}

int QStandardItem_Row(void* ptr){
	return static_cast<QStandardItem*>(ptr)->row();
}

int QStandardItem_RowCount(void* ptr){
	return static_cast<QStandardItem*>(ptr)->rowCount();
}

void QStandardItem_SetAccessibleDescription(void* ptr, char* accessibleDescription){
	static_cast<QStandardItem*>(ptr)->setAccessibleDescription(QString(accessibleDescription));
}

void QStandardItem_SetAccessibleText(void* ptr, char* accessibleText){
	static_cast<QStandardItem*>(ptr)->setAccessibleText(QString(accessibleText));
}

void QStandardItem_SetBackground(void* ptr, void* brush){
	static_cast<QStandardItem*>(ptr)->setBackground(*static_cast<QBrush*>(brush));
}

void QStandardItem_SetCheckState(void* ptr, int state){
	static_cast<QStandardItem*>(ptr)->setCheckState(static_cast<Qt::CheckState>(state));
}

void QStandardItem_SetCheckable(void* ptr, int checkable){
	static_cast<QStandardItem*>(ptr)->setCheckable(checkable != 0);
}

void QStandardItem_SetChild2(void* ptr, int row, void* item){
	static_cast<QStandardItem*>(ptr)->setChild(row, static_cast<QStandardItem*>(item));
}

void QStandardItem_SetChild(void* ptr, int row, int column, void* item){
	static_cast<QStandardItem*>(ptr)->setChild(row, column, static_cast<QStandardItem*>(item));
}

void QStandardItem_SetColumnCount(void* ptr, int columns){
	static_cast<QStandardItem*>(ptr)->setColumnCount(columns);
}

void QStandardItem_SetData(void* ptr, void* value, int role){
	static_cast<QStandardItem*>(ptr)->setData(*static_cast<QVariant*>(value), role);
}

void QStandardItem_SetDragEnabled(void* ptr, int dragEnabled){
	static_cast<QStandardItem*>(ptr)->setDragEnabled(dragEnabled != 0);
}

void QStandardItem_SetDropEnabled(void* ptr, int dropEnabled){
	static_cast<QStandardItem*>(ptr)->setDropEnabled(dropEnabled != 0);
}

void QStandardItem_SetEditable(void* ptr, int editable){
	static_cast<QStandardItem*>(ptr)->setEditable(editable != 0);
}

void QStandardItem_SetEnabled(void* ptr, int enabled){
	static_cast<QStandardItem*>(ptr)->setEnabled(enabled != 0);
}

void QStandardItem_SetFlags(void* ptr, int flags){
	static_cast<QStandardItem*>(ptr)->setFlags(static_cast<Qt::ItemFlag>(flags));
}

void QStandardItem_SetFont(void* ptr, void* font){
	static_cast<QStandardItem*>(ptr)->setFont(*static_cast<QFont*>(font));
}

void QStandardItem_SetForeground(void* ptr, void* brush){
	static_cast<QStandardItem*>(ptr)->setForeground(*static_cast<QBrush*>(brush));
}

void QStandardItem_SetIcon(void* ptr, void* icon){
	static_cast<QStandardItem*>(ptr)->setIcon(*static_cast<QIcon*>(icon));
}

void QStandardItem_SetRowCount(void* ptr, int rows){
	static_cast<QStandardItem*>(ptr)->setRowCount(rows);
}

void QStandardItem_SetSelectable(void* ptr, int selectable){
	static_cast<QStandardItem*>(ptr)->setSelectable(selectable != 0);
}

void QStandardItem_SetSizeHint(void* ptr, void* size){
	static_cast<QStandardItem*>(ptr)->setSizeHint(*static_cast<QSize*>(size));
}

void QStandardItem_SetStatusTip(void* ptr, char* statusTip){
	static_cast<QStandardItem*>(ptr)->setStatusTip(QString(statusTip));
}

void QStandardItem_SetText(void* ptr, char* text){
	static_cast<QStandardItem*>(ptr)->setText(QString(text));
}

void QStandardItem_SetTextAlignment(void* ptr, int alignment){
	static_cast<QStandardItem*>(ptr)->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QStandardItem_SetToolTip(void* ptr, char* toolTip){
	static_cast<QStandardItem*>(ptr)->setToolTip(QString(toolTip));
}

void QStandardItem_SetTristate(void* ptr, int tristate){
	static_cast<QStandardItem*>(ptr)->setTristate(tristate != 0);
}

void QStandardItem_SetWhatsThis(void* ptr, char* whatsThis){
	static_cast<QStandardItem*>(ptr)->setWhatsThis(QString(whatsThis));
}

void QStandardItem_SortChildren(void* ptr, int column, int order){
	static_cast<QStandardItem*>(ptr)->sortChildren(column, static_cast<Qt::SortOrder>(order));
}

char* QStandardItem_StatusTip(void* ptr){
	return static_cast<QStandardItem*>(ptr)->statusTip().toUtf8().data();
}

void* QStandardItem_TakeChild(void* ptr, int row, int column){
	return static_cast<QStandardItem*>(ptr)->takeChild(row, column);
}

char* QStandardItem_Text(void* ptr){
	return static_cast<QStandardItem*>(ptr)->text().toUtf8().data();
}

int QStandardItem_TextAlignment(void* ptr){
	return static_cast<QStandardItem*>(ptr)->textAlignment();
}

char* QStandardItem_ToolTip(void* ptr){
	return static_cast<QStandardItem*>(ptr)->toolTip().toUtf8().data();
}

int QStandardItem_Type(void* ptr){
	return static_cast<QStandardItem*>(ptr)->type();
}

char* QStandardItem_WhatsThis(void* ptr){
	return static_cast<QStandardItem*>(ptr)->whatsThis().toUtf8().data();
}

void QStandardItem_Write(void* ptr, void* out){
	static_cast<QStandardItem*>(ptr)->write(*static_cast<QDataStream*>(out));
}

void QStandardItem_DestroyQStandardItem(void* ptr){
	static_cast<QStandardItem*>(ptr)->~QStandardItem();
}

#include "qshowevent.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QShowEvent>
#include "_cgo_export.h"

class MyQShowEvent: public QShowEvent {
public:
};

void* QShowEvent_NewQShowEvent(){
	return new QShowEvent();
}

#include "qconicalgradient.h"
#include <QUrl>
#include <QModelIndex>
#include <QPoint>
#include <QPointF>
#include <QString>
#include <QVariant>
#include <QConicalGradient>
#include "_cgo_export.h"

class MyQConicalGradient: public QConicalGradient {
public:
};

void* QConicalGradient_NewQConicalGradient(){
	return new QConicalGradient();
}

void* QConicalGradient_NewQConicalGradient2(void* center, double angle){
	return new QConicalGradient(*static_cast<QPointF*>(center), static_cast<qreal>(angle));
}

void* QConicalGradient_NewQConicalGradient3(double cx, double cy, double angle){
	return new QConicalGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(angle));
}

double QConicalGradient_Angle(void* ptr){
	return static_cast<double>(static_cast<QConicalGradient*>(ptr)->angle());
}

void QConicalGradient_SetAngle(void* ptr, double angle){
	static_cast<QConicalGradient*>(ptr)->setAngle(static_cast<qreal>(angle));
}

void QConicalGradient_SetCenter(void* ptr, void* center){
	static_cast<QConicalGradient*>(ptr)->setCenter(*static_cast<QPointF*>(center));
}

void QConicalGradient_SetCenter2(void* ptr, double x, double y){
	static_cast<QConicalGradient*>(ptr)->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

#include "qopenglbuffer.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qtextblock.h"
#include <QUrl>
#include <QModelIndex>
#include <QTextBlockUserData>
#include <QTextDocument>
#include <QString>
#include <QVariant>
#include <QTextBlock>
#include "_cgo_export.h"

class MyQTextBlock: public QTextBlock {
public:
};

int QTextBlock_IsValid(void* ptr){
	return static_cast<QTextBlock*>(ptr)->isValid();
}

void* QTextBlock_NewQTextBlock(void* other){
	return new QTextBlock(*static_cast<QTextBlock*>(other));
}

int QTextBlock_BlockFormatIndex(void* ptr){
	return static_cast<QTextBlock*>(ptr)->blockFormatIndex();
}

int QTextBlock_CharFormatIndex(void* ptr){
	return static_cast<QTextBlock*>(ptr)->charFormatIndex();
}

void QTextBlock_ClearLayout(void* ptr){
	static_cast<QTextBlock*>(ptr)->clearLayout();
}

int QTextBlock_Contains(void* ptr, int position){
	return static_cast<QTextBlock*>(ptr)->contains(position);
}

int QTextBlock_BlockNumber(void* ptr){
	return static_cast<QTextBlock*>(ptr)->blockNumber();
}

void* QTextBlock_Document(void* ptr){
	return const_cast<QTextDocument*>(static_cast<QTextBlock*>(ptr)->document());
}

int QTextBlock_FirstLineNumber(void* ptr){
	return static_cast<QTextBlock*>(ptr)->firstLineNumber();
}

int QTextBlock_IsVisible(void* ptr){
	return static_cast<QTextBlock*>(ptr)->isVisible();
}

void* QTextBlock_Layout(void* ptr){
	return static_cast<QTextBlock*>(ptr)->layout();
}

int QTextBlock_Length(void* ptr){
	return static_cast<QTextBlock*>(ptr)->length();
}

int QTextBlock_LineCount(void* ptr){
	return static_cast<QTextBlock*>(ptr)->lineCount();
}

int QTextBlock_Position(void* ptr){
	return static_cast<QTextBlock*>(ptr)->position();
}

int QTextBlock_Revision(void* ptr){
	return static_cast<QTextBlock*>(ptr)->revision();
}

void QTextBlock_SetLineCount(void* ptr, int count){
	static_cast<QTextBlock*>(ptr)->setLineCount(count);
}

void QTextBlock_SetRevision(void* ptr, int rev){
	static_cast<QTextBlock*>(ptr)->setRevision(rev);
}

void QTextBlock_SetUserData(void* ptr, void* data){
	static_cast<QTextBlock*>(ptr)->setUserData(static_cast<QTextBlockUserData*>(data));
}

void QTextBlock_SetUserState(void* ptr, int state){
	static_cast<QTextBlock*>(ptr)->setUserState(state);
}

void QTextBlock_SetVisible(void* ptr, int visible){
	static_cast<QTextBlock*>(ptr)->setVisible(visible != 0);
}

char* QTextBlock_Text(void* ptr){
	return static_cast<QTextBlock*>(ptr)->text().toUtf8().data();
}

int QTextBlock_TextDirection(void* ptr){
	return static_cast<QTextBlock*>(ptr)->textDirection();
}

void* QTextBlock_TextList(void* ptr){
	return static_cast<QTextBlock*>(ptr)->textList();
}

void* QTextBlock_UserData(void* ptr){
	return static_cast<QTextBlock*>(ptr)->userData();
}

int QTextBlock_UserState(void* ptr){
	return static_cast<QTextBlock*>(ptr)->userState();
}

#include "qbackingstore.h"
#include <QPoint>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QRegion>
#include <QWindow>
#include <QSize>
#include <QBackingStore>
#include "_cgo_export.h"

class MyQBackingStore: public QBackingStore {
public:
};

void* QBackingStore_PaintDevice(void* ptr){
	return static_cast<QBackingStore*>(ptr)->paintDevice();
}

void* QBackingStore_NewQBackingStore(void* window){
	return new QBackingStore(static_cast<QWindow*>(window));
}

void QBackingStore_BeginPaint(void* ptr, void* region){
	static_cast<QBackingStore*>(ptr)->beginPaint(*static_cast<QRegion*>(region));
}

void QBackingStore_EndPaint(void* ptr){
	static_cast<QBackingStore*>(ptr)->endPaint();
}

void QBackingStore_Flush(void* ptr, void* region, void* win, void* offset){
	static_cast<QBackingStore*>(ptr)->flush(*static_cast<QRegion*>(region), static_cast<QWindow*>(win), *static_cast<QPoint*>(offset));
}

int QBackingStore_HasStaticContents(void* ptr){
	return static_cast<QBackingStore*>(ptr)->hasStaticContents();
}

void QBackingStore_Resize(void* ptr, void* size){
	static_cast<QBackingStore*>(ptr)->resize(*static_cast<QSize*>(size));
}

int QBackingStore_Scroll(void* ptr, void* area, int dx, int dy){
	return static_cast<QBackingStore*>(ptr)->scroll(*static_cast<QRegion*>(area), dx, dy);
}

void QBackingStore_SetStaticContents(void* ptr, void* region){
	static_cast<QBackingStore*>(ptr)->setStaticContents(*static_cast<QRegion*>(region));
}

void* QBackingStore_StaticContents(void* ptr){
	return new QRegion(static_cast<QBackingStore*>(ptr)->staticContents());
}

void* QBackingStore_Window(void* ptr){
	return static_cast<QBackingStore*>(ptr)->window();
}

void QBackingStore_DestroyQBackingStore(void* ptr){
	static_cast<QBackingStore*>(ptr)->~QBackingStore();
}

#include "qicon.h"
#include <QPixmap>
#include <QRect>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QIconEngine>
#include <QIcon>
#include "_cgo_export.h"

class MyQIcon: public QIcon {
public:
};

void* QIcon_NewQIcon(){
	return new QIcon();
}

void* QIcon_NewQIcon4(void* other){
	return new QIcon(*static_cast<QIcon*>(other));
}

void* QIcon_NewQIcon6(void* engine){
	return new QIcon(static_cast<QIconEngine*>(engine));
}

void* QIcon_NewQIcon3(void* other){
	return new QIcon(*static_cast<QIcon*>(other));
}

void* QIcon_NewQIcon2(void* pixmap){
	return new QIcon(*static_cast<QPixmap*>(pixmap));
}

void* QIcon_NewQIcon5(char* fileName){
	return new QIcon(QString(fileName));
}

void QIcon_AddFile(void* ptr, char* fileName, void* size, int mode, int state){
	static_cast<QIcon*>(ptr)->addFile(QString(fileName), *static_cast<QSize*>(size), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_AddPixmap(void* ptr, void* pixmap, int mode, int state){
	static_cast<QIcon*>(ptr)->addPixmap(*static_cast<QPixmap*>(pixmap), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

int QIcon_QIcon_HasThemeIcon(char* name){
	return QIcon::hasThemeIcon(QString(name));
}

int QIcon_IsNull(void* ptr){
	return static_cast<QIcon*>(ptr)->isNull();
}

char* QIcon_Name(void* ptr){
	return static_cast<QIcon*>(ptr)->name().toUtf8().data();
}

void QIcon_Paint(void* ptr, void* painter, void* rect, int alignment, int mode, int state){
	static_cast<QIcon*>(ptr)->paint(static_cast<QPainter*>(painter), *static_cast<QRect*>(rect), static_cast<Qt::AlignmentFlag>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_Paint2(void* ptr, void* painter, int x, int y, int w, int h, int alignment, int mode, int state){
	static_cast<QIcon*>(ptr)->paint(static_cast<QPainter*>(painter), x, y, w, h, static_cast<Qt::AlignmentFlag>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_QIcon_SetThemeName(char* name){
	QIcon::setThemeName(QString(name));
}

void QIcon_QIcon_SetThemeSearchPaths(char* paths){
	QIcon::setThemeSearchPaths(QString(paths).split("|", QString::SkipEmptyParts));
}

void QIcon_Swap(void* ptr, void* other){
	static_cast<QIcon*>(ptr)->swap(*static_cast<QIcon*>(other));
}

char* QIcon_QIcon_ThemeName(){
	return QIcon::themeName().toUtf8().data();
}

char* QIcon_QIcon_ThemeSearchPaths(){
	return QIcon::themeSearchPaths().join("|").toUtf8().data();
}

void QIcon_DestroyQIcon(void* ptr){
	static_cast<QIcon*>(ptr)->~QIcon();
}

#include "qopenglfunctions_4_1_compatibility.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qpalette.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QColor>
#include <QBrush>
#include <QPalette>
#include "_cgo_export.h"

class MyQPalette: public QPalette {
public:
};

int QPalette_NColorRoles_Type(){
	return QPalette::NColorRoles;
}

void* QPalette_Brush(void* ptr, int group, int role){
	return new QBrush(static_cast<QPalette*>(ptr)->brush(static_cast<QPalette::ColorGroup>(group), static_cast<QPalette::ColorRole>(role)));
}

int QPalette_IsEqual(void* ptr, int cg1, int cg2){
	return static_cast<QPalette*>(ptr)->isEqual(static_cast<QPalette::ColorGroup>(cg1), static_cast<QPalette::ColorGroup>(cg2));
}

void QPalette_SetBrush2(void* ptr, int group, int role, void* brush){
	static_cast<QPalette*>(ptr)->setBrush(static_cast<QPalette::ColorGroup>(group), static_cast<QPalette::ColorRole>(role), *static_cast<QBrush*>(brush));
}

void* QPalette_NewQPalette(){
	return new QPalette();
}

void* QPalette_NewQPalette8(void* other){
	return new QPalette(*static_cast<QPalette*>(other));
}

void* QPalette_NewQPalette3(int button){
	return new QPalette(static_cast<Qt::GlobalColor>(button));
}

void* QPalette_NewQPalette5(void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window){
	return new QPalette(*static_cast<QBrush*>(windowText), *static_cast<QBrush*>(button), *static_cast<QBrush*>(light), *static_cast<QBrush*>(dark), *static_cast<QBrush*>(mid), *static_cast<QBrush*>(text), *static_cast<QBrush*>(bright_text), *static_cast<QBrush*>(base), *static_cast<QBrush*>(window));
}

void* QPalette_NewQPalette2(void* button){
	return new QPalette(*static_cast<QColor*>(button));
}

void* QPalette_NewQPalette4(void* button, void* window){
	return new QPalette(*static_cast<QColor*>(button), *static_cast<QColor*>(window));
}

void* QPalette_NewQPalette7(void* p){
	return new QPalette(*static_cast<QPalette*>(p));
}

void* QPalette_AlternateBase(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->alternateBase());
}

void* QPalette_Base(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->base());
}

void* QPalette_BrightText(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->brightText());
}

void* QPalette_Brush2(void* ptr, int role){
	return new QBrush(static_cast<QPalette*>(ptr)->brush(static_cast<QPalette::ColorRole>(role)));
}

void* QPalette_Button(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->button());
}

void* QPalette_ButtonText(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->buttonText());
}

void* QPalette_Color(void* ptr, int group, int role){
	return new QColor(static_cast<QPalette*>(ptr)->color(static_cast<QPalette::ColorGroup>(group), static_cast<QPalette::ColorRole>(role)));
}

void* QPalette_Color2(void* ptr, int role){
	return new QColor(static_cast<QPalette*>(ptr)->color(static_cast<QPalette::ColorRole>(role)));
}

int QPalette_CurrentColorGroup(void* ptr){
	return static_cast<QPalette*>(ptr)->currentColorGroup();
}

void* QPalette_Dark(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->dark());
}

void* QPalette_Highlight(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->highlight());
}

void* QPalette_HighlightedText(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->highlightedText());
}

int QPalette_IsBrushSet(void* ptr, int cg, int cr){
	return static_cast<QPalette*>(ptr)->isBrushSet(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
}

int QPalette_IsCopyOf(void* ptr, void* p){
	return static_cast<QPalette*>(ptr)->isCopyOf(*static_cast<QPalette*>(p));
}

void* QPalette_Light(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->light());
}

void* QPalette_Link(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->link());
}

void* QPalette_LinkVisited(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->linkVisited());
}

void* QPalette_Mid(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->mid());
}

void* QPalette_Midlight(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->midlight());
}

void QPalette_SetBrush(void* ptr, int role, void* brush){
	static_cast<QPalette*>(ptr)->setBrush(static_cast<QPalette::ColorRole>(role), *static_cast<QBrush*>(brush));
}

void QPalette_SetColor(void* ptr, int group, int role, void* color){
	static_cast<QPalette*>(ptr)->setColor(static_cast<QPalette::ColorGroup>(group), static_cast<QPalette::ColorRole>(role), *static_cast<QColor*>(color));
}

void QPalette_SetColor2(void* ptr, int role, void* color){
	static_cast<QPalette*>(ptr)->setColor(static_cast<QPalette::ColorRole>(role), *static_cast<QColor*>(color));
}

void QPalette_SetColorGroup(void* ptr, int cg, void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window){
	static_cast<QPalette*>(ptr)->setColorGroup(static_cast<QPalette::ColorGroup>(cg), *static_cast<QBrush*>(windowText), *static_cast<QBrush*>(button), *static_cast<QBrush*>(light), *static_cast<QBrush*>(dark), *static_cast<QBrush*>(mid), *static_cast<QBrush*>(text), *static_cast<QBrush*>(bright_text), *static_cast<QBrush*>(base), *static_cast<QBrush*>(window));
}

void QPalette_SetCurrentColorGroup(void* ptr, int cg){
	static_cast<QPalette*>(ptr)->setCurrentColorGroup(static_cast<QPalette::ColorGroup>(cg));
}

void* QPalette_Shadow(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->shadow());
}

void QPalette_Swap(void* ptr, void* other){
	static_cast<QPalette*>(ptr)->swap(*static_cast<QPalette*>(other));
}

void* QPalette_Text(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->text());
}

void* QPalette_ToolTipBase(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->toolTipBase());
}

void* QPalette_ToolTipText(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->toolTipText());
}

void* QPalette_Window(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->window());
}

void* QPalette_WindowText(void* ptr){
	return new QBrush(static_cast<QPalette*>(ptr)->windowText());
}

void QPalette_DestroyQPalette(void* ptr){
	static_cast<QPalette*>(ptr)->~QPalette();
}

#include "qopengldebugmessage.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopengltexture.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qtextimageformat.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QTextImageFormat>
#include "_cgo_export.h"

class MyQTextImageFormat: public QTextImageFormat {
public:
};

void* QTextImageFormat_NewQTextImageFormat(){
	return new QTextImageFormat();
}

double QTextImageFormat_Height(void* ptr){
	return static_cast<double>(static_cast<QTextImageFormat*>(ptr)->height());
}

int QTextImageFormat_IsValid(void* ptr){
	return static_cast<QTextImageFormat*>(ptr)->isValid();
}

char* QTextImageFormat_Name(void* ptr){
	return static_cast<QTextImageFormat*>(ptr)->name().toUtf8().data();
}

void QTextImageFormat_SetHeight(void* ptr, double height){
	static_cast<QTextImageFormat*>(ptr)->setHeight(static_cast<qreal>(height));
}

void QTextImageFormat_SetName(void* ptr, char* name){
	static_cast<QTextImageFormat*>(ptr)->setName(QString(name));
}

void QTextImageFormat_SetWidth(void* ptr, double width){
	static_cast<QTextImageFormat*>(ptr)->setWidth(static_cast<qreal>(width));
}

double QTextImageFormat_Width(void* ptr){
	return static_cast<double>(static_cast<QTextImageFormat*>(ptr)->width());
}

#include "qnativegestureevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QNativeGestureEvent>
#include "_cgo_export.h"

class MyQNativeGestureEvent: public QNativeGestureEvent {
public:
};

int QNativeGestureEvent_GestureType(void* ptr){
	return static_cast<QNativeGestureEvent*>(ptr)->gestureType();
}

double QNativeGestureEvent_Value(void* ptr){
	return static_cast<double>(static_cast<QNativeGestureEvent*>(ptr)->value());
}

#include "qtextinlineobject.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QTextInlineObject>
#include "_cgo_export.h"

class MyQTextInlineObject: public QTextInlineObject {
public:
};

double QTextInlineObject_Ascent(void* ptr){
	return static_cast<double>(static_cast<QTextInlineObject*>(ptr)->ascent());
}

double QTextInlineObject_Descent(void* ptr){
	return static_cast<double>(static_cast<QTextInlineObject*>(ptr)->descent());
}

int QTextInlineObject_FormatIndex(void* ptr){
	return static_cast<QTextInlineObject*>(ptr)->formatIndex();
}

double QTextInlineObject_Height(void* ptr){
	return static_cast<double>(static_cast<QTextInlineObject*>(ptr)->height());
}

int QTextInlineObject_IsValid(void* ptr){
	return static_cast<QTextInlineObject*>(ptr)->isValid();
}

void QTextInlineObject_SetAscent(void* ptr, double a){
	static_cast<QTextInlineObject*>(ptr)->setAscent(static_cast<qreal>(a));
}

void QTextInlineObject_SetDescent(void* ptr, double d){
	static_cast<QTextInlineObject*>(ptr)->setDescent(static_cast<qreal>(d));
}

void QTextInlineObject_SetWidth(void* ptr, double w){
	static_cast<QTextInlineObject*>(ptr)->setWidth(static_cast<qreal>(w));
}

int QTextInlineObject_TextDirection(void* ptr){
	return static_cast<QTextInlineObject*>(ptr)->textDirection();
}

int QTextInlineObject_TextPosition(void* ptr){
	return static_cast<QTextInlineObject*>(ptr)->textPosition();
}

double QTextInlineObject_Width(void* ptr){
	return static_cast<double>(static_cast<QTextInlineObject*>(ptr)->width());
}

#include "qscrollprepareevent.h"
#include <QSizeF>
#include <QModelIndex>
#include <QVariant>
#include <QUrl>
#include <QPoint>
#include <QRectF>
#include <QPointF>
#include <QSize>
#include <QRect>
#include <QString>
#include <QScrollPrepareEvent>
#include "_cgo_export.h"

class MyQScrollPrepareEvent: public QScrollPrepareEvent {
public:
};

void* QScrollPrepareEvent_NewQScrollPrepareEvent(void* startPos){
	return new QScrollPrepareEvent(*static_cast<QPointF*>(startPos));
}

void QScrollPrepareEvent_SetContentPos(void* ptr, void* pos){
	static_cast<QScrollPrepareEvent*>(ptr)->setContentPos(*static_cast<QPointF*>(pos));
}

void QScrollPrepareEvent_SetContentPosRange(void* ptr, void* rect){
	static_cast<QScrollPrepareEvent*>(ptr)->setContentPosRange(*static_cast<QRectF*>(rect));
}

void QScrollPrepareEvent_SetViewportSize(void* ptr, void* size){
	static_cast<QScrollPrepareEvent*>(ptr)->setViewportSize(*static_cast<QSizeF*>(size));
}

void QScrollPrepareEvent_DestroyQScrollPrepareEvent(void* ptr){
	static_cast<QScrollPrepareEvent*>(ptr)->~QScrollPrepareEvent();
}

#include "qiconengine.h"
#include <QPixmap>
#include <QRect>
#include <QDataStream>
#include <QPainter>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QIcon>
#include <QSize>
#include <QString>
#include <QIconEngine>
#include "_cgo_export.h"

class MyQIconEngine: public QIconEngine {
public:
};

void QIconEngine_AddFile(void* ptr, char* fileName, void* size, int mode, int state){
	static_cast<QIconEngine*>(ptr)->addFile(QString(fileName), *static_cast<QSize*>(size), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIconEngine_AddPixmap(void* ptr, void* pixmap, int mode, int state){
	static_cast<QIconEngine*>(ptr)->addPixmap(*static_cast<QPixmap*>(pixmap), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void* QIconEngine_Clone(void* ptr){
	return static_cast<QIconEngine*>(ptr)->clone();
}

char* QIconEngine_IconName(void* ptr){
	return static_cast<QIconEngine*>(ptr)->iconName().toUtf8().data();
}

char* QIconEngine_Key(void* ptr){
	return static_cast<QIconEngine*>(ptr)->key().toUtf8().data();
}

void QIconEngine_Paint(void* ptr, void* painter, void* rect, int mode, int state){
	static_cast<QIconEngine*>(ptr)->paint(static_cast<QPainter*>(painter), *static_cast<QRect*>(rect), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

int QIconEngine_Read(void* ptr, void* in){
	return static_cast<QIconEngine*>(ptr)->read(*static_cast<QDataStream*>(in));
}

int QIconEngine_Write(void* ptr, void* out){
	return static_cast<QIconEngine*>(ptr)->write(*static_cast<QDataStream*>(out));
}

void QIconEngine_DestroyQIconEngine(void* ptr){
	static_cast<QIconEngine*>(ptr)->~QIconEngine();
}

#include "qopenglfunctions_3_3_core.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qtextblockgroup.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextBlock>
#include <QTextBlockGroup>
#include "_cgo_export.h"

class MyQTextBlockGroup: public QTextBlockGroup {
public:
};

#include "qopenglshaderprogram.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qtouchdevice.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTouchDevice>
#include "_cgo_export.h"

class MyQTouchDevice: public QTouchDevice {
public:
};

void* QTouchDevice_NewQTouchDevice(){
	return new QTouchDevice();
}

int QTouchDevice_Capabilities(void* ptr){
	return static_cast<QTouchDevice*>(ptr)->capabilities();
}

int QTouchDevice_MaximumTouchPoints(void* ptr){
	return static_cast<QTouchDevice*>(ptr)->maximumTouchPoints();
}

char* QTouchDevice_Name(void* ptr){
	return static_cast<QTouchDevice*>(ptr)->name().toUtf8().data();
}

void QTouchDevice_SetCapabilities(void* ptr, int caps){
	static_cast<QTouchDevice*>(ptr)->setCapabilities(static_cast<QTouchDevice::CapabilityFlag>(caps));
}

void QTouchDevice_SetMaximumTouchPoints(void* ptr, int max){
	static_cast<QTouchDevice*>(ptr)->setMaximumTouchPoints(max);
}

void QTouchDevice_SetName(void* ptr, char* name){
	static_cast<QTouchDevice*>(ptr)->setName(QString(name));
}

void QTouchDevice_SetType(void* ptr, int devType){
	static_cast<QTouchDevice*>(ptr)->setType(static_cast<QTouchDevice::DeviceType>(devType));
}

int QTouchDevice_Type(void* ptr){
	return static_cast<QTouchDevice*>(ptr)->type();
}

void QTouchDevice_DestroyQTouchDevice(void* ptr){
	static_cast<QTouchDevice*>(ptr)->~QTouchDevice();
}

#include "qlineargradient.h"
#include <QPointF>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QLine>
#include <QPoint>
#include <QLinearGradient>
#include "_cgo_export.h"

class MyQLinearGradient: public QLinearGradient {
public:
};

void* QLinearGradient_NewQLinearGradient3(double x1, double y1, double x2, double y2){
	return new QLinearGradient(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

void* QLinearGradient_NewQLinearGradient(){
	return new QLinearGradient();
}

void* QLinearGradient_NewQLinearGradient2(void* start, void* finalStop){
	return new QLinearGradient(*static_cast<QPointF*>(start), *static_cast<QPointF*>(finalStop));
}

void QLinearGradient_SetFinalStop(void* ptr, void* stop){
	static_cast<QLinearGradient*>(ptr)->setFinalStop(*static_cast<QPointF*>(stop));
}

void QLinearGradient_SetFinalStop2(void* ptr, double x, double y){
	static_cast<QLinearGradient*>(ptr)->setFinalStop(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QLinearGradient_SetStart(void* ptr, void* start){
	static_cast<QLinearGradient*>(ptr)->setStart(*static_cast<QPointF*>(start));
}

void QLinearGradient_SetStart2(void* ptr, double x, double y){
	static_cast<QLinearGradient*>(ptr)->setStart(static_cast<qreal>(x), static_cast<qreal>(y));
}

#include "qdrag.h"
#include <QUrl>
#include <QModelIndex>
#include <QPixmap>
#include <QMimeData>
#include <QPoint>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QDrag>
#include "_cgo_export.h"

class MyQDrag: public QDrag {
public:
void Signal_ActionChanged(Qt::DropAction action){callbackQDragActionChanged(this->objectName().toUtf8().data(), action);};
void Signal_TargetChanged(QObject * newTarget){callbackQDragTargetChanged(this->objectName().toUtf8().data(), newTarget);};
};

void* QDrag_NewQDrag(void* dragSource){
	return new QDrag(static_cast<QObject*>(dragSource));
}

void QDrag_ConnectActionChanged(void* ptr){
	QObject::connect(static_cast<QDrag*>(ptr), static_cast<void (QDrag::*)(Qt::DropAction)>(&QDrag::actionChanged), static_cast<MyQDrag*>(ptr), static_cast<void (MyQDrag::*)(Qt::DropAction)>(&MyQDrag::Signal_ActionChanged));;
}

void QDrag_DisconnectActionChanged(void* ptr){
	QObject::disconnect(static_cast<QDrag*>(ptr), static_cast<void (QDrag::*)(Qt::DropAction)>(&QDrag::actionChanged), static_cast<MyQDrag*>(ptr), static_cast<void (MyQDrag::*)(Qt::DropAction)>(&MyQDrag::Signal_ActionChanged));;
}

int QDrag_Exec(void* ptr, int supportedActions){
	return static_cast<QDrag*>(ptr)->exec(static_cast<Qt::DropAction>(supportedActions));
}

int QDrag_Exec2(void* ptr, int supportedActions, int defaultDropAction){
	return static_cast<QDrag*>(ptr)->exec(static_cast<Qt::DropAction>(supportedActions), static_cast<Qt::DropAction>(defaultDropAction));
}

void* QDrag_MimeData(void* ptr){
	return static_cast<QDrag*>(ptr)->mimeData();
}

void QDrag_SetDragCursor(void* ptr, void* cursor, int action){
	static_cast<QDrag*>(ptr)->setDragCursor(*static_cast<QPixmap*>(cursor), static_cast<Qt::DropAction>(action));
}

void QDrag_SetHotSpot(void* ptr, void* hotspot){
	static_cast<QDrag*>(ptr)->setHotSpot(*static_cast<QPoint*>(hotspot));
}

void QDrag_SetMimeData(void* ptr, void* data){
	static_cast<QDrag*>(ptr)->setMimeData(static_cast<QMimeData*>(data));
}

void QDrag_SetPixmap(void* ptr, void* pixmap){
	static_cast<QDrag*>(ptr)->setPixmap(*static_cast<QPixmap*>(pixmap));
}

void* QDrag_Source(void* ptr){
	return static_cast<QDrag*>(ptr)->source();
}

int QDrag_SupportedActions(void* ptr){
	return static_cast<QDrag*>(ptr)->supportedActions();
}

void* QDrag_Target(void* ptr){
	return static_cast<QDrag*>(ptr)->target();
}

void QDrag_ConnectTargetChanged(void* ptr){
	QObject::connect(static_cast<QDrag*>(ptr), static_cast<void (QDrag::*)(QObject *)>(&QDrag::targetChanged), static_cast<MyQDrag*>(ptr), static_cast<void (MyQDrag::*)(QObject *)>(&MyQDrag::Signal_TargetChanged));;
}

void QDrag_DisconnectTargetChanged(void* ptr){
	QObject::disconnect(static_cast<QDrag*>(ptr), static_cast<void (QDrag::*)(QObject *)>(&QDrag::targetChanged), static_cast<MyQDrag*>(ptr), static_cast<void (MyQDrag::*)(QObject *)>(&MyQDrag::Signal_TargetChanged));;
}

void QDrag_DestroyQDrag(void* ptr){
	static_cast<QDrag*>(ptr)->~QDrag();
}

#include "qopenglfunctions_2_0.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qexposeevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QRegion>
#include <QExposeEvent>
#include "_cgo_export.h"

class MyQExposeEvent: public QExposeEvent {
public:
};

void* QExposeEvent_NewQExposeEvent(void* exposeRegion){
	return new QExposeEvent(*static_cast<QRegion*>(exposeRegion));
}

void* QExposeEvent_Region(void* ptr){
	return new QRegion(static_cast<QExposeEvent*>(ptr)->region());
}

#include "qpaintengine.h"
#include <QPixmap>
#include <QPainterPath>
#include <QLine>
#include <QUrl>
#include <QModelIndex>
#include <QPointF>
#include <QPaintDevice>
#include <QRect>
#include <QPaintEngineState>
#include <QPainter>
#include <QImage>
#include <QTextItem>
#include <QRectF>
#include <QPoint>
#include <QString>
#include <QVariant>
#include <QLineF>
#include <QPaintEngine>
#include "_cgo_export.h"

class MyQPaintEngine: public QPaintEngine {
public:
};

void QPaintEngine_DrawEllipse(void* ptr, void* rect){
	static_cast<QPaintEngine*>(ptr)->drawEllipse(*static_cast<QRectF*>(rect));
}

void QPaintEngine_DrawImage(void* ptr, void* rectangle, void* image, void* sr, int flags){
	static_cast<QPaintEngine*>(ptr)->drawImage(*static_cast<QRectF*>(rectangle), *static_cast<QImage*>(image), *static_cast<QRectF*>(sr), static_cast<Qt::ImageConversionFlag>(flags));
}

void QPaintEngine_DrawPolygon(void* ptr, void* points, int pointCount, int mode){
	static_cast<QPaintEngine*>(ptr)->drawPolygon(static_cast<QPointF*>(points), pointCount, static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

int QPaintEngine_Begin(void* ptr, void* pdev){
	return static_cast<QPaintEngine*>(ptr)->begin(static_cast<QPaintDevice*>(pdev));
}

void QPaintEngine_DrawEllipse2(void* ptr, void* rect){
	static_cast<QPaintEngine*>(ptr)->drawEllipse(*static_cast<QRect*>(rect));
}

void QPaintEngine_DrawLines2(void* ptr, void* lines, int lineCount){
	static_cast<QPaintEngine*>(ptr)->drawLines(static_cast<QLine*>(lines), lineCount);
}

void QPaintEngine_DrawLines(void* ptr, void* lines, int lineCount){
	static_cast<QPaintEngine*>(ptr)->drawLines(static_cast<QLineF*>(lines), lineCount);
}

void QPaintEngine_DrawPath(void* ptr, void* path){
	static_cast<QPaintEngine*>(ptr)->drawPath(*static_cast<QPainterPath*>(path));
}

void QPaintEngine_DrawPixmap(void* ptr, void* r, void* pm, void* sr){
	static_cast<QPaintEngine*>(ptr)->drawPixmap(*static_cast<QRectF*>(r), *static_cast<QPixmap*>(pm), *static_cast<QRectF*>(sr));
}

void QPaintEngine_DrawPoints2(void* ptr, void* points, int pointCount){
	static_cast<QPaintEngine*>(ptr)->drawPoints(static_cast<QPoint*>(points), pointCount);
}

void QPaintEngine_DrawPoints(void* ptr, void* points, int pointCount){
	static_cast<QPaintEngine*>(ptr)->drawPoints(static_cast<QPointF*>(points), pointCount);
}

void QPaintEngine_DrawPolygon2(void* ptr, void* points, int pointCount, int mode){
	static_cast<QPaintEngine*>(ptr)->drawPolygon(static_cast<QPoint*>(points), pointCount, static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_DrawRects2(void* ptr, void* rects, int rectCount){
	static_cast<QPaintEngine*>(ptr)->drawRects(static_cast<QRect*>(rects), rectCount);
}

void QPaintEngine_DrawRects(void* ptr, void* rects, int rectCount){
	static_cast<QPaintEngine*>(ptr)->drawRects(static_cast<QRectF*>(rects), rectCount);
}

void QPaintEngine_DrawTextItem(void* ptr, void* p, void* textItem){
	static_cast<QPaintEngine*>(ptr)->drawTextItem(*static_cast<QPointF*>(p), *static_cast<QTextItem*>(textItem));
}

void QPaintEngine_DrawTiledPixmap(void* ptr, void* rect, void* pixmap, void* p){
	static_cast<QPaintEngine*>(ptr)->drawTiledPixmap(*static_cast<QRectF*>(rect), *static_cast<QPixmap*>(pixmap), *static_cast<QPointF*>(p));
}

int QPaintEngine_End(void* ptr){
	return static_cast<QPaintEngine*>(ptr)->end();
}

int QPaintEngine_HasFeature(void* ptr, int feature){
	return static_cast<QPaintEngine*>(ptr)->hasFeature(static_cast<QPaintEngine::PaintEngineFeature>(feature));
}

int QPaintEngine_IsActive(void* ptr){
	return static_cast<QPaintEngine*>(ptr)->isActive();
}

void* QPaintEngine_PaintDevice(void* ptr){
	return static_cast<QPaintEngine*>(ptr)->paintDevice();
}

void* QPaintEngine_Painter(void* ptr){
	return static_cast<QPaintEngine*>(ptr)->painter();
}

void QPaintEngine_SetActive(void* ptr, int state){
	static_cast<QPaintEngine*>(ptr)->setActive(state != 0);
}

int QPaintEngine_Type(void* ptr){
	return static_cast<QPaintEngine*>(ptr)->type();
}

void QPaintEngine_UpdateState(void* ptr, void* state){
	static_cast<QPaintEngine*>(ptr)->updateState(*static_cast<QPaintEngineState*>(state));
}

void QPaintEngine_DestroyQPaintEngine(void* ptr){
	static_cast<QPaintEngine*>(ptr)->~QPaintEngine();
}

#include "qpixelformat.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPixelFormat>
#include "_cgo_export.h"

class MyQPixelFormat: public QPixelFormat {
public:
};

void* QPixelFormat_NewQPixelFormat(){
	return new QPixelFormat();
}

int QPixelFormat_AlphaPosition(void* ptr){
	return static_cast<QPixelFormat*>(ptr)->alphaPosition();
}

int QPixelFormat_AlphaUsage(void* ptr){
	return static_cast<QPixelFormat*>(ptr)->alphaUsage();
}

int QPixelFormat_ByteOrder(void* ptr){
	return static_cast<QPixelFormat*>(ptr)->byteOrder();
}

int QPixelFormat_ColorModel(void* ptr){
	return static_cast<QPixelFormat*>(ptr)->colorModel();
}

int QPixelFormat_Premultiplied(void* ptr){
	return static_cast<QPixelFormat*>(ptr)->premultiplied();
}

int QPixelFormat_TypeInterpretation(void* ptr){
	return static_cast<QPixelFormat*>(ptr)->typeInterpretation();
}

int QPixelFormat_YuvLayout(void* ptr){
	return static_cast<QPixelFormat*>(ptr)->yuvLayout();
}

#include "qopenglfunctions_1_5.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qpainterpath.h"
#include <QPolygonF>
#include <QPointF>
#include <QFont>
#include <QString>
#include <QVariant>
#include <QModelIndex>
#include <QRegion>
#include <QRectF>
#include <QRect>
#include <QPolygon>
#include <QUrl>
#include <QPainter>
#include <QPoint>
#include <QPainterPath>
#include "_cgo_export.h"

class MyQPainterPath: public QPainterPath {
public:
};

void* QPainterPath_NewQPainterPath3(void* path){
	return new QPainterPath(*static_cast<QPainterPath*>(path));
}

void QPainterPath_AddEllipse(void* ptr, void* boundingRectangle){
	static_cast<QPainterPath*>(ptr)->addEllipse(*static_cast<QRectF*>(boundingRectangle));
}

void QPainterPath_AddPath(void* ptr, void* path){
	static_cast<QPainterPath*>(ptr)->addPath(*static_cast<QPainterPath*>(path));
}

void QPainterPath_AddRect(void* ptr, void* rectangle){
	static_cast<QPainterPath*>(ptr)->addRect(*static_cast<QRectF*>(rectangle));
}

void QPainterPath_AddText(void* ptr, void* point, void* font, char* text){
	static_cast<QPainterPath*>(ptr)->addText(*static_cast<QPointF*>(point), *static_cast<QFont*>(font), QString(text));
}

void QPainterPath_ArcMoveTo(void* ptr, void* rectangle, double angle){
	static_cast<QPainterPath*>(ptr)->arcMoveTo(*static_cast<QRectF*>(rectangle), static_cast<qreal>(angle));
}

void QPainterPath_ArcTo(void* ptr, void* rectangle, double startAngle, double sweepLength){
	static_cast<QPainterPath*>(ptr)->arcTo(*static_cast<QRectF*>(rectangle), static_cast<qreal>(startAngle), static_cast<qreal>(sweepLength));
}

void QPainterPath_ConnectPath(void* ptr, void* path){
	static_cast<QPainterPath*>(ptr)->connectPath(*static_cast<QPainterPath*>(path));
}

int QPainterPath_Contains(void* ptr, void* point){
	return static_cast<QPainterPath*>(ptr)->contains(*static_cast<QPointF*>(point));
}

int QPainterPath_Contains2(void* ptr, void* rectangle){
	return static_cast<QPainterPath*>(ptr)->contains(*static_cast<QRectF*>(rectangle));
}

void QPainterPath_CubicTo(void* ptr, void* c1, void* c2, void* endPoint){
	static_cast<QPainterPath*>(ptr)->cubicTo(*static_cast<QPointF*>(c1), *static_cast<QPointF*>(c2), *static_cast<QPointF*>(endPoint));
}

int QPainterPath_ElementCount(void* ptr){
	return static_cast<QPainterPath*>(ptr)->elementCount();
}

int QPainterPath_Intersects(void* ptr, void* rectangle){
	return static_cast<QPainterPath*>(ptr)->intersects(*static_cast<QRectF*>(rectangle));
}

int QPainterPath_IsEmpty(void* ptr){
	return static_cast<QPainterPath*>(ptr)->isEmpty();
}

void QPainterPath_LineTo(void* ptr, void* endPoint){
	static_cast<QPainterPath*>(ptr)->lineTo(*static_cast<QPointF*>(endPoint));
}

void QPainterPath_MoveTo(void* ptr, void* point){
	static_cast<QPainterPath*>(ptr)->moveTo(*static_cast<QPointF*>(point));
}

void QPainterPath_QuadTo(void* ptr, void* c, void* endPoint){
	static_cast<QPainterPath*>(ptr)->quadTo(*static_cast<QPointF*>(c), *static_cast<QPointF*>(endPoint));
}

void QPainterPath_SetElementPositionAt(void* ptr, int index, double x, double y){
	static_cast<QPainterPath*>(ptr)->setElementPositionAt(index, static_cast<qreal>(x), static_cast<qreal>(y));
}

void QPainterPath_SetFillRule(void* ptr, int fillRule){
	static_cast<QPainterPath*>(ptr)->setFillRule(static_cast<Qt::FillRule>(fillRule));
}

void* QPainterPath_NewQPainterPath(){
	return new QPainterPath();
}

void* QPainterPath_NewQPainterPath2(void* startPoint){
	return new QPainterPath(*static_cast<QPointF*>(startPoint));
}

void QPainterPath_AddEllipse3(void* ptr, void* center, double rx, double ry){
	static_cast<QPainterPath*>(ptr)->addEllipse(*static_cast<QPointF*>(center), static_cast<qreal>(rx), static_cast<qreal>(ry));
}

void QPainterPath_AddEllipse2(void* ptr, double x, double y, double width, double height){
	static_cast<QPainterPath*>(ptr)->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

void QPainterPath_AddPolygon(void* ptr, void* polygon){
	static_cast<QPainterPath*>(ptr)->addPolygon(*static_cast<QPolygonF*>(polygon));
}

void QPainterPath_AddRect2(void* ptr, double x, double y, double width, double height){
	static_cast<QPainterPath*>(ptr)->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

void QPainterPath_AddRegion(void* ptr, void* region){
	static_cast<QPainterPath*>(ptr)->addRegion(*static_cast<QRegion*>(region));
}

void QPainterPath_AddRoundedRect(void* ptr, void* rect, double xRadius, double yRadius, int mode){
	static_cast<QPainterPath*>(ptr)->addRoundedRect(*static_cast<QRectF*>(rect), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainterPath_AddRoundedRect2(void* ptr, double x, double y, double w, double h, double xRadius, double yRadius, int mode){
	static_cast<QPainterPath*>(ptr)->addRoundedRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainterPath_AddText2(void* ptr, double x, double y, void* font, char* text){
	static_cast<QPainterPath*>(ptr)->addText(static_cast<qreal>(x), static_cast<qreal>(y), *static_cast<QFont*>(font), QString(text));
}

double QPainterPath_AngleAtPercent(void* ptr, double t){
	return static_cast<double>(static_cast<QPainterPath*>(ptr)->angleAtPercent(static_cast<qreal>(t)));
}

void QPainterPath_ArcMoveTo2(void* ptr, double x, double y, double width, double height, double angle){
	static_cast<QPainterPath*>(ptr)->arcMoveTo(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height), static_cast<qreal>(angle));
}

void QPainterPath_ArcTo2(void* ptr, double x, double y, double width, double height, double startAngle, double sweepLength){
	static_cast<QPainterPath*>(ptr)->arcTo(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height), static_cast<qreal>(startAngle), static_cast<qreal>(sweepLength));
}

void QPainterPath_CloseSubpath(void* ptr){
	static_cast<QPainterPath*>(ptr)->closeSubpath();
}

int QPainterPath_Contains3(void* ptr, void* p){
	return static_cast<QPainterPath*>(ptr)->contains(*static_cast<QPainterPath*>(p));
}

void QPainterPath_CubicTo2(void* ptr, double c1X, double c1Y, double c2X, double c2Y, double endPointX, double endPointY){
	static_cast<QPainterPath*>(ptr)->cubicTo(static_cast<qreal>(c1X), static_cast<qreal>(c1Y), static_cast<qreal>(c2X), static_cast<qreal>(c2Y), static_cast<qreal>(endPointX), static_cast<qreal>(endPointY));
}

int QPainterPath_FillRule(void* ptr){
	return static_cast<QPainterPath*>(ptr)->fillRule();
}

int QPainterPath_Intersects2(void* ptr, void* p){
	return static_cast<QPainterPath*>(ptr)->intersects(*static_cast<QPainterPath*>(p));
}

double QPainterPath_Length(void* ptr){
	return static_cast<double>(static_cast<QPainterPath*>(ptr)->length());
}

void QPainterPath_LineTo2(void* ptr, double x, double y){
	static_cast<QPainterPath*>(ptr)->lineTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QPainterPath_MoveTo2(void* ptr, double x, double y){
	static_cast<QPainterPath*>(ptr)->moveTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QPainterPath_PercentAtLength(void* ptr, double len){
	return static_cast<double>(static_cast<QPainterPath*>(ptr)->percentAtLength(static_cast<qreal>(len)));
}

void QPainterPath_QuadTo2(void* ptr, double cx, double cy, double endPointX, double endPointY){
	static_cast<QPainterPath*>(ptr)->quadTo(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(endPointX), static_cast<qreal>(endPointY));
}

double QPainterPath_SlopeAtPercent(void* ptr, double t){
	return static_cast<double>(static_cast<QPainterPath*>(ptr)->slopeAtPercent(static_cast<qreal>(t)));
}

void QPainterPath_Swap(void* ptr, void* other){
	static_cast<QPainterPath*>(ptr)->swap(*static_cast<QPainterPath*>(other));
}

void QPainterPath_Translate2(void* ptr, void* offset){
	static_cast<QPainterPath*>(ptr)->translate(*static_cast<QPointF*>(offset));
}

void QPainterPath_Translate(void* ptr, double dx, double dy){
	static_cast<QPainterPath*>(ptr)->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QPainterPath_DestroyQPainterPath(void* ptr){
	static_cast<QPainterPath*>(ptr)->~QPainterPath();
}

#include "qtextblockuserdata.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextBlock>
#include <QTextBlockUserData>
#include "_cgo_export.h"

class MyQTextBlockUserData: public QTextBlockUserData {
public:
};

void QTextBlockUserData_DestroyQTextBlockUserData(void* ptr){
	static_cast<QTextBlockUserData*>(ptr)->~QTextBlockUserData();
}

#include "qkeysequence.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QKeySequence>
#include "_cgo_export.h"

class MyQKeySequence: public QKeySequence {
public:
};

void* QKeySequence_NewQKeySequence(){
	return new QKeySequence();
}

void* QKeySequence_NewQKeySequence5(int key){
	return new QKeySequence(static_cast<QKeySequence::StandardKey>(key));
}

void* QKeySequence_NewQKeySequence4(void* keysequence){
	return new QKeySequence(*static_cast<QKeySequence*>(keysequence));
}

void* QKeySequence_NewQKeySequence2(char* key, int format){
	return new QKeySequence(QString(key), static_cast<QKeySequence::SequenceFormat>(format));
}

void* QKeySequence_NewQKeySequence3(int k1, int k2, int k3, int k4){
	return new QKeySequence(k1, k2, k3, k4);
}

int QKeySequence_Count(void* ptr){
	return static_cast<QKeySequence*>(ptr)->count();
}

int QKeySequence_IsEmpty(void* ptr){
	return static_cast<QKeySequence*>(ptr)->isEmpty();
}

int QKeySequence_Matches(void* ptr, void* seq){
	return static_cast<QKeySequence*>(ptr)->matches(*static_cast<QKeySequence*>(seq));
}

void QKeySequence_Swap(void* ptr, void* other){
	static_cast<QKeySequence*>(ptr)->swap(*static_cast<QKeySequence*>(other));
}

char* QKeySequence_ToString(void* ptr, int format){
	return static_cast<QKeySequence*>(ptr)->toString(static_cast<QKeySequence::SequenceFormat>(format)).toUtf8().data();
}

void QKeySequence_DestroyQKeySequence(void* ptr){
	static_cast<QKeySequence*>(ptr)->~QKeySequence();
}

#include "qtextframeformat.h"
#include <QBrush>
#include <QTextLength>
#include <QTextFormat>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextFrame>
#include <QTextFrameFormat>
#include "_cgo_export.h"

class MyQTextFrameFormat: public QTextFrameFormat {
public:
};

void* QTextFrameFormat_NewQTextFrameFormat(){
	return new QTextFrameFormat();
}

double QTextFrameFormat_BottomMargin(void* ptr){
	return static_cast<double>(static_cast<QTextFrameFormat*>(ptr)->bottomMargin());
}

double QTextFrameFormat_LeftMargin(void* ptr){
	return static_cast<double>(static_cast<QTextFrameFormat*>(ptr)->leftMargin());
}

double QTextFrameFormat_RightMargin(void* ptr){
	return static_cast<double>(static_cast<QTextFrameFormat*>(ptr)->rightMargin());
}

void QTextFrameFormat_SetMargin(void* ptr, double margin){
	static_cast<QTextFrameFormat*>(ptr)->setMargin(static_cast<qreal>(margin));
}

double QTextFrameFormat_TopMargin(void* ptr){
	return static_cast<double>(static_cast<QTextFrameFormat*>(ptr)->topMargin());
}

double QTextFrameFormat_Border(void* ptr){
	return static_cast<double>(static_cast<QTextFrameFormat*>(ptr)->border());
}

void* QTextFrameFormat_BorderBrush(void* ptr){
	return new QBrush(static_cast<QTextFrameFormat*>(ptr)->borderBrush());
}

int QTextFrameFormat_BorderStyle(void* ptr){
	return static_cast<QTextFrameFormat*>(ptr)->borderStyle();
}

int QTextFrameFormat_IsValid(void* ptr){
	return static_cast<QTextFrameFormat*>(ptr)->isValid();
}

double QTextFrameFormat_Margin(void* ptr){
	return static_cast<double>(static_cast<QTextFrameFormat*>(ptr)->margin());
}

double QTextFrameFormat_Padding(void* ptr){
	return static_cast<double>(static_cast<QTextFrameFormat*>(ptr)->padding());
}

int QTextFrameFormat_PageBreakPolicy(void* ptr){
	return static_cast<QTextFrameFormat*>(ptr)->pageBreakPolicy();
}

int QTextFrameFormat_Position(void* ptr){
	return static_cast<QTextFrameFormat*>(ptr)->position();
}

void QTextFrameFormat_SetBorder(void* ptr, double width){
	static_cast<QTextFrameFormat*>(ptr)->setBorder(static_cast<qreal>(width));
}

void QTextFrameFormat_SetBorderBrush(void* ptr, void* brush){
	static_cast<QTextFrameFormat*>(ptr)->setBorderBrush(*static_cast<QBrush*>(brush));
}

void QTextFrameFormat_SetBorderStyle(void* ptr, int style){
	static_cast<QTextFrameFormat*>(ptr)->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

void QTextFrameFormat_SetBottomMargin(void* ptr, double margin){
	static_cast<QTextFrameFormat*>(ptr)->setBottomMargin(static_cast<qreal>(margin));
}

void QTextFrameFormat_SetHeight(void* ptr, void* height){
	static_cast<QTextFrameFormat*>(ptr)->setHeight(*static_cast<QTextLength*>(height));
}

void QTextFrameFormat_SetHeight2(void* ptr, double height){
	static_cast<QTextFrameFormat*>(ptr)->setHeight(static_cast<qreal>(height));
}

void QTextFrameFormat_SetLeftMargin(void* ptr, double margin){
	static_cast<QTextFrameFormat*>(ptr)->setLeftMargin(static_cast<qreal>(margin));
}

void QTextFrameFormat_SetPadding(void* ptr, double width){
	static_cast<QTextFrameFormat*>(ptr)->setPadding(static_cast<qreal>(width));
}

void QTextFrameFormat_SetPageBreakPolicy(void* ptr, int policy){
	static_cast<QTextFrameFormat*>(ptr)->setPageBreakPolicy(static_cast<QTextFormat::PageBreakFlag>(policy));
}

void QTextFrameFormat_SetPosition(void* ptr, int policy){
	static_cast<QTextFrameFormat*>(ptr)->setPosition(static_cast<QTextFrameFormat::Position>(policy));
}

void QTextFrameFormat_SetRightMargin(void* ptr, double margin){
	static_cast<QTextFrameFormat*>(ptr)->setRightMargin(static_cast<qreal>(margin));
}

void QTextFrameFormat_SetTopMargin(void* ptr, double margin){
	static_cast<QTextFrameFormat*>(ptr)->setTopMargin(static_cast<qreal>(margin));
}

void QTextFrameFormat_SetWidth(void* ptr, void* width){
	static_cast<QTextFrameFormat*>(ptr)->setWidth(*static_cast<QTextLength*>(width));
}

void QTextFrameFormat_SetWidth2(void* ptr, double width){
	static_cast<QTextFrameFormat*>(ptr)->setWidth(static_cast<qreal>(width));
}

#include "qpaintevent.h"
#include <QModelIndex>
#include <QRegion>
#include <QRect>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QPaintEvent>
#include "_cgo_export.h"

class MyQPaintEvent: public QPaintEvent {
public:
};

void* QPaintEvent_NewQPaintEvent2(void* paintRect){
	return new QPaintEvent(*static_cast<QRect*>(paintRect));
}

void* QPaintEvent_NewQPaintEvent(void* paintRegion){
	return new QPaintEvent(*static_cast<QRegion*>(paintRegion));
}

void* QPaintEvent_Region(void* ptr){
	return new QRegion(static_cast<QPaintEvent*>(ptr)->region());
}

#include "qsupportedwritingsystems.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qtexttablecell.h"
#include <QModelIndex>
#include <QTextTable>
#include <QTextCharFormat>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QTextTableCell>
#include "_cgo_export.h"

class MyQTextTableCell: public QTextTableCell {
public:
};

void* QTextTableCell_NewQTextTableCell(){
	return new QTextTableCell();
}

void* QTextTableCell_NewQTextTableCell2(void* other){
	return new QTextTableCell(*static_cast<QTextTableCell*>(other));
}

int QTextTableCell_Column(void* ptr){
	return static_cast<QTextTableCell*>(ptr)->column();
}

int QTextTableCell_ColumnSpan(void* ptr){
	return static_cast<QTextTableCell*>(ptr)->columnSpan();
}

int QTextTableCell_IsValid(void* ptr){
	return static_cast<QTextTableCell*>(ptr)->isValid();
}

int QTextTableCell_Row(void* ptr){
	return static_cast<QTextTableCell*>(ptr)->row();
}

int QTextTableCell_RowSpan(void* ptr){
	return static_cast<QTextTableCell*>(ptr)->rowSpan();
}

void QTextTableCell_SetFormat(void* ptr, void* format){
	static_cast<QTextTableCell*>(ptr)->setFormat(*static_cast<QTextCharFormat*>(format));
}

int QTextTableCell_TableCellFormatIndex(void* ptr){
	return static_cast<QTextTableCell*>(ptr)->tableCellFormatIndex();
}

void QTextTableCell_DestroyQTextTableCell(void* ptr){
	static_cast<QTextTableCell*>(ptr)->~QTextTableCell();
}

#include "qopenglfunctions_4_0_compatibility.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qwindowstatechangeevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QWindow>
#include <QWindowStateChangeEvent>
#include "_cgo_export.h"

class MyQWindowStateChangeEvent: public QWindowStateChangeEvent {
public:
};

int QWindowStateChangeEvent_OldState(void* ptr){
	return static_cast<QWindowStateChangeEvent*>(ptr)->oldState();
}

#include "qaccessibletextinsertevent.h"
#include <QObject>
#include <QAccessibleInterface>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QAccessibleTextInsertEvent>
#include "_cgo_export.h"

class MyQAccessibleTextInsertEvent: public QAccessibleTextInsertEvent {
public:
};

void* QAccessibleTextInsertEvent_NewQAccessibleTextInsertEvent2(void* iface, int position, char* text){
	return new QAccessibleTextInsertEvent(static_cast<QAccessibleInterface*>(iface), position, QString(text));
}

void* QAccessibleTextInsertEvent_NewQAccessibleTextInsertEvent(void* object, int position, char* text){
	return new QAccessibleTextInsertEvent(static_cast<QObject*>(object), position, QString(text));
}

int QAccessibleTextInsertEvent_ChangePosition(void* ptr){
	return static_cast<QAccessibleTextInsertEvent*>(ptr)->changePosition();
}

char* QAccessibleTextInsertEvent_TextInserted(void* ptr){
	return static_cast<QAccessibleTextInsertEvent*>(ptr)->textInserted().toUtf8().data();
}

#include "qpdfwriter.h"
#include <QUrl>
#include <QModelIndex>
#include <QMargins>
#include <QMarginsF>
#include <QPageSize>
#include <QPageLayout>
#include <QIODevice>
#include <QVariant>
#include <QString>
#include <QPdfWriter>
#include "_cgo_export.h"

class MyQPdfWriter: public QPdfWriter {
public:
};

void* QPdfWriter_NewQPdfWriter2(void* device){
	return new QPdfWriter(static_cast<QIODevice*>(device));
}

void* QPdfWriter_NewQPdfWriter(char* filename){
	return new QPdfWriter(QString(filename));
}

char* QPdfWriter_Creator(void* ptr){
	return static_cast<QPdfWriter*>(ptr)->creator().toUtf8().data();
}

int QPdfWriter_NewPage(void* ptr){
	return static_cast<QPdfWriter*>(ptr)->newPage();
}

int QPdfWriter_Resolution(void* ptr){
	return static_cast<QPdfWriter*>(ptr)->resolution();
}

void QPdfWriter_SetCreator(void* ptr, char* creator){
	static_cast<QPdfWriter*>(ptr)->setCreator(QString(creator));
}

int QPdfWriter_SetPageLayout(void* ptr, void* newPageLayout){
	return static_cast<QPdfWriter*>(ptr)->setPageLayout(*static_cast<QPageLayout*>(newPageLayout));
}

int QPdfWriter_SetPageMargins(void* ptr, void* margins){
	return static_cast<QPdfWriter*>(ptr)->setPageMargins(*static_cast<QMarginsF*>(margins));
}

int QPdfWriter_SetPageMargins2(void* ptr, void* margins, int units){
	return static_cast<QPdfWriter*>(ptr)->setPageMargins(*static_cast<QMarginsF*>(margins), static_cast<QPageLayout::Unit>(units));
}

int QPdfWriter_SetPageOrientation(void* ptr, int orientation){
	return static_cast<QPdfWriter*>(ptr)->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

int QPdfWriter_SetPageSize(void* ptr, void* pageSize){
	return static_cast<QPdfWriter*>(ptr)->setPageSize(*static_cast<QPageSize*>(pageSize));
}

void QPdfWriter_SetResolution(void* ptr, int resolution){
	static_cast<QPdfWriter*>(ptr)->setResolution(resolution);
}

void QPdfWriter_SetTitle(void* ptr, char* title){
	static_cast<QPdfWriter*>(ptr)->setTitle(QString(title));
}

char* QPdfWriter_Title(void* ptr){
	return static_cast<QPdfWriter*>(ptr)->title().toUtf8().data();
}

void QPdfWriter_DestroyQPdfWriter(void* ptr){
	static_cast<QPdfWriter*>(ptr)->~QPdfWriter();
}

#include "qdropevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QEvent>
#include <QPointF>
#include <QMimeData>
#include <QPoint>
#include <QString>
#include <QDropEvent>
#include "_cgo_export.h"

class MyQDropEvent: public QDropEvent {
public:
};

void QDropEvent_SetDropAction(void* ptr, int action){
	static_cast<QDropEvent*>(ptr)->setDropAction(static_cast<Qt::DropAction>(action));
}

void* QDropEvent_NewQDropEvent(void* pos, int actions, void* data, int buttons, int modifiers, int ty){
	return new QDropEvent(*static_cast<QPointF*>(pos), static_cast<Qt::DropAction>(actions), static_cast<QMimeData*>(data), static_cast<Qt::MouseButton>(buttons), static_cast<Qt::KeyboardModifier>(modifiers), static_cast<QEvent::Type>(ty));
}

void QDropEvent_AcceptProposedAction(void* ptr){
	static_cast<QDropEvent*>(ptr)->acceptProposedAction();
}

int QDropEvent_DropAction(void* ptr){
	return static_cast<QDropEvent*>(ptr)->dropAction();
}

int QDropEvent_KeyboardModifiers(void* ptr){
	return static_cast<QDropEvent*>(ptr)->keyboardModifiers();
}

void* QDropEvent_MimeData(void* ptr){
	return const_cast<QMimeData*>(static_cast<QDropEvent*>(ptr)->mimeData());
}

int QDropEvent_MouseButtons(void* ptr){
	return static_cast<QDropEvent*>(ptr)->mouseButtons();
}

int QDropEvent_PossibleActions(void* ptr){
	return static_cast<QDropEvent*>(ptr)->possibleActions();
}

int QDropEvent_ProposedAction(void* ptr){
	return static_cast<QDropEvent*>(ptr)->proposedAction();
}

void* QDropEvent_Source(void* ptr){
	return static_cast<QDropEvent*>(ptr)->source();
}

#include "qtextframe.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextFrameFormat>
#include <QTextDocument>
#include <QTextFrame>
#include "_cgo_export.h"

class MyQTextFrame: public QTextFrame {
public:
};

void* QTextFrame_NewQTextFrame(void* document){
	return new QTextFrame(static_cast<QTextDocument*>(document));
}

int QTextFrame_FirstPosition(void* ptr){
	return static_cast<QTextFrame*>(ptr)->firstPosition();
}

int QTextFrame_LastPosition(void* ptr){
	return static_cast<QTextFrame*>(ptr)->lastPosition();
}

void* QTextFrame_ParentFrame(void* ptr){
	return static_cast<QTextFrame*>(ptr)->parentFrame();
}

void QTextFrame_SetFrameFormat(void* ptr, void* format){
	static_cast<QTextFrame*>(ptr)->setFrameFormat(*static_cast<QTextFrameFormat*>(format));
}

void QTextFrame_DestroyQTextFrame(void* ptr){
	static_cast<QTextFrame*>(ptr)->~QTextFrame();
}

#include "qaccessibleinterface.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QColor>
#include <QAccessibleInterface>
#include "_cgo_export.h"

class MyQAccessibleInterface: public QAccessibleInterface {
public:
};

void* QAccessibleInterface_ActionInterface(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->actionInterface();
}

void* QAccessibleInterface_BackgroundColor(void* ptr){
	return new QColor(static_cast<QAccessibleInterface*>(ptr)->backgroundColor());
}

void* QAccessibleInterface_Child(void* ptr, int index){
	return static_cast<QAccessibleInterface*>(ptr)->child(index);
}

void* QAccessibleInterface_ChildAt(void* ptr, int x, int y){
	return static_cast<QAccessibleInterface*>(ptr)->childAt(x, y);
}

int QAccessibleInterface_ChildCount(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->childCount();
}

void* QAccessibleInterface_FocusChild(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->focusChild();
}

void* QAccessibleInterface_ForegroundColor(void* ptr){
	return new QColor(static_cast<QAccessibleInterface*>(ptr)->foregroundColor());
}

int QAccessibleInterface_IndexOfChild(void* ptr, void* child){
	return static_cast<QAccessibleInterface*>(ptr)->indexOfChild(static_cast<QAccessibleInterface*>(child));
}

void* QAccessibleInterface_Interface_cast(void* ptr, int ty){
	return static_cast<QAccessibleInterface*>(ptr)->interface_cast(static_cast<QAccessible::InterfaceType>(ty));
}

int QAccessibleInterface_IsValid(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->isValid();
}

void* QAccessibleInterface_Object(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->object();
}

void* QAccessibleInterface_Parent(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->parent();
}

int QAccessibleInterface_Role(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->role();
}

void QAccessibleInterface_SetText(void* ptr, int t, char* text){
	static_cast<QAccessibleInterface*>(ptr)->setText(static_cast<QAccessible::Text>(t), QString(text));
}

void* QAccessibleInterface_TableCellInterface(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->tableCellInterface();
}

void* QAccessibleInterface_TableInterface(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->tableInterface();
}

char* QAccessibleInterface_Text(void* ptr, int t){
	return static_cast<QAccessibleInterface*>(ptr)->text(static_cast<QAccessible::Text>(t)).toUtf8().data();
}

void* QAccessibleInterface_TextInterface(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->textInterface();
}

void* QAccessibleInterface_ValueInterface(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->valueInterface();
}

void* QAccessibleInterface_Window(void* ptr){
	return static_cast<QAccessibleInterface*>(ptr)->window();
}

#include "qiconengineplugin.h"
#include <QIcon>
#include <QIconEngine>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QIconEnginePlugin>
#include "_cgo_export.h"

#include "qpicture.h"
#include <QIODevice>
#include <QRect>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPainter>
#include <QPicture>
#include "_cgo_export.h"

class MyQPicture: public QPicture {
public:
};

int QPicture_IsNull(void* ptr){
	return static_cast<QPicture*>(ptr)->isNull();
}

int QPicture_Load2(void* ptr, void* dev, char* format){
	return static_cast<QPicture*>(ptr)->load(static_cast<QIODevice*>(dev), const_cast<const char*>(format));
}

int QPicture_Load(void* ptr, char* fileName, char* format){
	return static_cast<QPicture*>(ptr)->load(QString(fileName), const_cast<const char*>(format));
}

int QPicture_Play(void* ptr, void* painter){
	return static_cast<QPicture*>(ptr)->play(static_cast<QPainter*>(painter));
}

int QPicture_Save2(void* ptr, void* dev, char* format){
	return static_cast<QPicture*>(ptr)->save(static_cast<QIODevice*>(dev), const_cast<const char*>(format));
}

int QPicture_Save(void* ptr, char* fileName, char* format){
	return static_cast<QPicture*>(ptr)->save(QString(fileName), const_cast<const char*>(format));
}

void QPicture_SetBoundingRect(void* ptr, void* r){
	static_cast<QPicture*>(ptr)->setBoundingRect(*static_cast<QRect*>(r));
}

void QPicture_Swap(void* ptr, void* other){
	static_cast<QPicture*>(ptr)->swap(*static_cast<QPicture*>(other));
}

void QPicture_DestroyQPicture(void* ptr){
	static_cast<QPicture*>(ptr)->~QPicture();
}

#include "qdesktopservices.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QDesktopServices>
#include "_cgo_export.h"

class MyQDesktopServices: public QDesktopServices {
public:
};

int QDesktopServices_QDesktopServices_OpenUrl(void* url){
	return QDesktopServices::openUrl(*static_cast<QUrl*>(url));
}

void QDesktopServices_QDesktopServices_SetUrlHandler(char* scheme, void* receiver, char* method){
	QDesktopServices::setUrlHandler(QString(scheme), static_cast<QObject*>(receiver), const_cast<const char*>(method));
}

void QDesktopServices_QDesktopServices_UnsetUrlHandler(char* scheme){
	QDesktopServices::unsetUrlHandler(QString(scheme));
}

#include "qabstracttextdocumentlayout.h"
#include <QPointF>
#include <QPaintDevice>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPoint>
#include <QObject>
#include <QAbstractTextDocumentLayout>
#include "_cgo_export.h"

class MyQAbstractTextDocumentLayout: public QAbstractTextDocumentLayout {
public:
void Signal_PageCountChanged(int newPages){callbackQAbstractTextDocumentLayoutPageCountChanged(this->objectName().toUtf8().data(), newPages);};
};

char* QAbstractTextDocumentLayout_AnchorAt(void* ptr, void* position){
	return static_cast<QAbstractTextDocumentLayout*>(ptr)->anchorAt(*static_cast<QPointF*>(position)).toUtf8().data();
}

void* QAbstractTextDocumentLayout_Document(void* ptr){
	return static_cast<QAbstractTextDocumentLayout*>(ptr)->document();
}

void* QAbstractTextDocumentLayout_HandlerForObject(void* ptr, int objectType){
	return static_cast<QAbstractTextDocumentLayout*>(ptr)->handlerForObject(objectType);
}

int QAbstractTextDocumentLayout_PageCount(void* ptr){
	return static_cast<QAbstractTextDocumentLayout*>(ptr)->pageCount();
}

void QAbstractTextDocumentLayout_ConnectPageCountChanged(void* ptr){
	QObject::connect(static_cast<QAbstractTextDocumentLayout*>(ptr), static_cast<void (QAbstractTextDocumentLayout::*)(int)>(&QAbstractTextDocumentLayout::pageCountChanged), static_cast<MyQAbstractTextDocumentLayout*>(ptr), static_cast<void (MyQAbstractTextDocumentLayout::*)(int)>(&MyQAbstractTextDocumentLayout::Signal_PageCountChanged));;
}

void QAbstractTextDocumentLayout_DisconnectPageCountChanged(void* ptr){
	QObject::disconnect(static_cast<QAbstractTextDocumentLayout*>(ptr), static_cast<void (QAbstractTextDocumentLayout::*)(int)>(&QAbstractTextDocumentLayout::pageCountChanged), static_cast<MyQAbstractTextDocumentLayout*>(ptr), static_cast<void (MyQAbstractTextDocumentLayout::*)(int)>(&MyQAbstractTextDocumentLayout::Signal_PageCountChanged));;
}

void* QAbstractTextDocumentLayout_PaintDevice(void* ptr){
	return static_cast<QAbstractTextDocumentLayout*>(ptr)->paintDevice();
}

void QAbstractTextDocumentLayout_RegisterHandler(void* ptr, int objectType, void* component){
	static_cast<QAbstractTextDocumentLayout*>(ptr)->registerHandler(objectType, static_cast<QObject*>(component));
}

void QAbstractTextDocumentLayout_SetPaintDevice(void* ptr, void* device){
	static_cast<QAbstractTextDocumentLayout*>(ptr)->setPaintDevice(static_cast<QPaintDevice*>(device));
}

void QAbstractTextDocumentLayout_UnregisterHandler(void* ptr, int objectType, void* component){
	static_cast<QAbstractTextDocumentLayout*>(ptr)->unregisterHandler(objectType, static_cast<QObject*>(component));
}

#include "qtextcharformat.h"
#include <QModelIndex>
#include <QFont>
#include <QPen>
#include <QColor>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QTextCharFormat>
#include "_cgo_export.h"

class MyQTextCharFormat: public QTextCharFormat {
public:
};

void* QTextCharFormat_NewQTextCharFormat(){
	return new QTextCharFormat();
}

char* QTextCharFormat_AnchorNames(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->anchorNames().join("|").toUtf8().data();
}

int QTextCharFormat_FontUnderline(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontUnderline();
}

void QTextCharFormat_SetUnderlineStyle(void* ptr, int style){
	static_cast<QTextCharFormat*>(ptr)->setUnderlineStyle(static_cast<QTextCharFormat::UnderlineStyle>(style));
}

char* QTextCharFormat_AnchorHref(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->anchorHref().toUtf8().data();
}

int QTextCharFormat_FontCapitalization(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontCapitalization();
}

char* QTextCharFormat_FontFamily(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontFamily().toUtf8().data();
}

int QTextCharFormat_FontFixedPitch(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontFixedPitch();
}

int QTextCharFormat_FontHintingPreference(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontHintingPreference();
}

int QTextCharFormat_FontItalic(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontItalic();
}

int QTextCharFormat_FontKerning(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontKerning();
}

double QTextCharFormat_FontLetterSpacing(void* ptr){
	return static_cast<double>(static_cast<QTextCharFormat*>(ptr)->fontLetterSpacing());
}

int QTextCharFormat_FontLetterSpacingType(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontLetterSpacingType();
}

int QTextCharFormat_FontOverline(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontOverline();
}

double QTextCharFormat_FontPointSize(void* ptr){
	return static_cast<double>(static_cast<QTextCharFormat*>(ptr)->fontPointSize());
}

int QTextCharFormat_FontStretch(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontStretch();
}

int QTextCharFormat_FontStrikeOut(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontStrikeOut();
}

int QTextCharFormat_FontStyleHint(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontStyleHint();
}

int QTextCharFormat_FontStyleStrategy(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontStyleStrategy();
}

int QTextCharFormat_FontWeight(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->fontWeight();
}

double QTextCharFormat_FontWordSpacing(void* ptr){
	return static_cast<double>(static_cast<QTextCharFormat*>(ptr)->fontWordSpacing());
}

int QTextCharFormat_IsAnchor(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->isAnchor();
}

int QTextCharFormat_IsValid(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->isValid();
}

void QTextCharFormat_SetAnchor(void* ptr, int anchor){
	static_cast<QTextCharFormat*>(ptr)->setAnchor(anchor != 0);
}

void QTextCharFormat_SetAnchorHref(void* ptr, char* value){
	static_cast<QTextCharFormat*>(ptr)->setAnchorHref(QString(value));
}

void QTextCharFormat_SetAnchorNames(void* ptr, char* names){
	static_cast<QTextCharFormat*>(ptr)->setAnchorNames(QString(names).split("|", QString::SkipEmptyParts));
}

void QTextCharFormat_SetFont2(void* ptr, void* font){
	static_cast<QTextCharFormat*>(ptr)->setFont(*static_cast<QFont*>(font));
}

void QTextCharFormat_SetFont(void* ptr, void* font, int behavior){
	static_cast<QTextCharFormat*>(ptr)->setFont(*static_cast<QFont*>(font), static_cast<QTextCharFormat::FontPropertiesInheritanceBehavior>(behavior));
}

void QTextCharFormat_SetFontCapitalization(void* ptr, int capitalization){
	static_cast<QTextCharFormat*>(ptr)->setFontCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

void QTextCharFormat_SetFontFamily(void* ptr, char* family){
	static_cast<QTextCharFormat*>(ptr)->setFontFamily(QString(family));
}

void QTextCharFormat_SetFontFixedPitch(void* ptr, int fixedPitch){
	static_cast<QTextCharFormat*>(ptr)->setFontFixedPitch(fixedPitch != 0);
}

void QTextCharFormat_SetFontHintingPreference(void* ptr, int hintingPreference){
	static_cast<QTextCharFormat*>(ptr)->setFontHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

void QTextCharFormat_SetFontItalic(void* ptr, int italic){
	static_cast<QTextCharFormat*>(ptr)->setFontItalic(italic != 0);
}

void QTextCharFormat_SetFontKerning(void* ptr, int enable){
	static_cast<QTextCharFormat*>(ptr)->setFontKerning(enable != 0);
}

void QTextCharFormat_SetFontLetterSpacing(void* ptr, double spacing){
	static_cast<QTextCharFormat*>(ptr)->setFontLetterSpacing(static_cast<qreal>(spacing));
}

void QTextCharFormat_SetFontLetterSpacingType(void* ptr, int letterSpacingType){
	static_cast<QTextCharFormat*>(ptr)->setFontLetterSpacingType(static_cast<QFont::SpacingType>(letterSpacingType));
}

void QTextCharFormat_SetFontOverline(void* ptr, int overline){
	static_cast<QTextCharFormat*>(ptr)->setFontOverline(overline != 0);
}

void QTextCharFormat_SetFontPointSize(void* ptr, double size){
	static_cast<QTextCharFormat*>(ptr)->setFontPointSize(static_cast<qreal>(size));
}

void QTextCharFormat_SetFontStretch(void* ptr, int factor){
	static_cast<QTextCharFormat*>(ptr)->setFontStretch(factor);
}

void QTextCharFormat_SetFontStrikeOut(void* ptr, int strikeOut){
	static_cast<QTextCharFormat*>(ptr)->setFontStrikeOut(strikeOut != 0);
}

void QTextCharFormat_SetFontStyleHint(void* ptr, int hint, int strategy){
	static_cast<QTextCharFormat*>(ptr)->setFontStyleHint(static_cast<QFont::StyleHint>(hint), static_cast<QFont::StyleStrategy>(strategy));
}

void QTextCharFormat_SetFontStyleStrategy(void* ptr, int strategy){
	static_cast<QTextCharFormat*>(ptr)->setFontStyleStrategy(static_cast<QFont::StyleStrategy>(strategy));
}

void QTextCharFormat_SetFontUnderline(void* ptr, int underline){
	static_cast<QTextCharFormat*>(ptr)->setFontUnderline(underline != 0);
}

void QTextCharFormat_SetFontWeight(void* ptr, int weight){
	static_cast<QTextCharFormat*>(ptr)->setFontWeight(weight);
}

void QTextCharFormat_SetFontWordSpacing(void* ptr, double spacing){
	static_cast<QTextCharFormat*>(ptr)->setFontWordSpacing(static_cast<qreal>(spacing));
}

void QTextCharFormat_SetTextOutline(void* ptr, void* pen){
	static_cast<QTextCharFormat*>(ptr)->setTextOutline(*static_cast<QPen*>(pen));
}

void QTextCharFormat_SetToolTip(void* ptr, char* text){
	static_cast<QTextCharFormat*>(ptr)->setToolTip(QString(text));
}

void QTextCharFormat_SetUnderlineColor(void* ptr, void* color){
	static_cast<QTextCharFormat*>(ptr)->setUnderlineColor(*static_cast<QColor*>(color));
}

void QTextCharFormat_SetVerticalAlignment(void* ptr, int alignment){
	static_cast<QTextCharFormat*>(ptr)->setVerticalAlignment(static_cast<QTextCharFormat::VerticalAlignment>(alignment));
}

char* QTextCharFormat_ToolTip(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->toolTip().toUtf8().data();
}

void* QTextCharFormat_UnderlineColor(void* ptr){
	return new QColor(static_cast<QTextCharFormat*>(ptr)->underlineColor());
}

int QTextCharFormat_UnderlineStyle(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->underlineStyle();
}

int QTextCharFormat_VerticalAlignment(void* ptr){
	return static_cast<QTextCharFormat*>(ptr)->verticalAlignment();
}

#include "qenterevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPoint>
#include <QPointF>
#include <QString>
#include <QEnterEvent>
#include "_cgo_export.h"

class MyQEnterEvent: public QEnterEvent {
public:
};

void* QEnterEvent_NewQEnterEvent(void* localPos, void* windowPos, void* screenPos){
	return new QEnterEvent(*static_cast<QPointF*>(localPos), *static_cast<QPointF*>(windowPos), *static_cast<QPointF*>(screenPos));
}

int QEnterEvent_GlobalX(void* ptr){
	return static_cast<QEnterEvent*>(ptr)->globalX();
}

int QEnterEvent_GlobalY(void* ptr){
	return static_cast<QEnterEvent*>(ptr)->globalY();
}

int QEnterEvent_X(void* ptr){
	return static_cast<QEnterEvent*>(ptr)->x();
}

int QEnterEvent_Y(void* ptr){
	return static_cast<QEnterEvent*>(ptr)->y();
}

#include "qbrush.h"
#include <QImage>
#include <QGradient>
#include <QTransform>
#include <QVariant>
#include <QModelIndex>
#include <QColor>
#include <QPixmap>
#include <QString>
#include <QUrl>
#include <QBrush>
#include "_cgo_export.h"

class MyQBrush: public QBrush {
public:
};

void* QBrush_NewQBrush4(int color, int style){
	return new QBrush(static_cast<Qt::GlobalColor>(color), static_cast<Qt::BrushStyle>(style));
}

void QBrush_SetColor(void* ptr, void* color){
	static_cast<QBrush*>(ptr)->setColor(*static_cast<QColor*>(color));
}

void* QBrush_NewQBrush(){
	return new QBrush();
}

void* QBrush_NewQBrush2(int style){
	return new QBrush(static_cast<Qt::BrushStyle>(style));
}

void* QBrush_NewQBrush6(int color, void* pixmap){
	return new QBrush(static_cast<Qt::GlobalColor>(color), *static_cast<QPixmap*>(pixmap));
}

void* QBrush_NewQBrush9(void* other){
	return new QBrush(*static_cast<QBrush*>(other));
}

void* QBrush_NewQBrush3(void* color, int style){
	return new QBrush(*static_cast<QColor*>(color), static_cast<Qt::BrushStyle>(style));
}

void* QBrush_NewQBrush5(void* color, void* pixmap){
	return new QBrush(*static_cast<QColor*>(color), *static_cast<QPixmap*>(pixmap));
}

void* QBrush_NewQBrush10(void* gradient){
	return new QBrush(*static_cast<QGradient*>(gradient));
}

void* QBrush_NewQBrush8(void* image){
	return new QBrush(*static_cast<QImage*>(image));
}

void* QBrush_NewQBrush7(void* pixmap){
	return new QBrush(*static_cast<QPixmap*>(pixmap));
}

void* QBrush_Color(void* ptr){
	return new QColor(static_cast<QBrush*>(ptr)->color());
}

void* QBrush_Gradient(void* ptr){
	return const_cast<QGradient*>(static_cast<QBrush*>(ptr)->gradient());
}

int QBrush_IsOpaque(void* ptr){
	return static_cast<QBrush*>(ptr)->isOpaque();
}

void QBrush_SetColor2(void* ptr, int color){
	static_cast<QBrush*>(ptr)->setColor(static_cast<Qt::GlobalColor>(color));
}

void QBrush_SetStyle(void* ptr, int style){
	static_cast<QBrush*>(ptr)->setStyle(static_cast<Qt::BrushStyle>(style));
}

void QBrush_SetTexture(void* ptr, void* pixmap){
	static_cast<QBrush*>(ptr)->setTexture(*static_cast<QPixmap*>(pixmap));
}

void QBrush_SetTextureImage(void* ptr, void* image){
	static_cast<QBrush*>(ptr)->setTextureImage(*static_cast<QImage*>(image));
}

void QBrush_SetTransform(void* ptr, void* matrix){
	static_cast<QBrush*>(ptr)->setTransform(*static_cast<QTransform*>(matrix));
}

int QBrush_Style(void* ptr){
	return static_cast<QBrush*>(ptr)->style();
}

void QBrush_Swap(void* ptr, void* other){
	static_cast<QBrush*>(ptr)->swap(*static_cast<QBrush*>(other));
}

void QBrush_DestroyQBrush(void* ptr){
	static_cast<QBrush*>(ptr)->~QBrush();
}

#include "qgenericplugin.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QGenericPlugin>
#include "_cgo_export.h"

#include "qaccessiblestatechangeevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QAccessibleStateChangeEvent>
#include "_cgo_export.h"

class MyQAccessibleStateChangeEvent: public QAccessibleStateChangeEvent {
public:
};

#include "qopenglfunctions_1_3.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qstatustipevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QStatusTipEvent>
#include "_cgo_export.h"

class MyQStatusTipEvent: public QStatusTipEvent {
public:
};

void* QStatusTipEvent_NewQStatusTipEvent(char* tip){
	return new QStatusTipEvent(QString(tip));
}

char* QStatusTipEvent_Tip(void* ptr){
	return static_cast<QStatusTipEvent*>(ptr)->tip().toUtf8().data();
}

#include "qtextdocumentfragment.h"
#include <QByteArray>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextDocument>
#include <QTextCursor>
#include <QTextDocumentFragment>
#include "_cgo_export.h"

class MyQTextDocumentFragment: public QTextDocumentFragment {
public:
};

void* QTextDocumentFragment_NewQTextDocumentFragment4(void* other){
	return new QTextDocumentFragment(*static_cast<QTextDocumentFragment*>(other));
}

void* QTextDocumentFragment_NewQTextDocumentFragment(){
	return new QTextDocumentFragment();
}

void* QTextDocumentFragment_NewQTextDocumentFragment3(void* cursor){
	return new QTextDocumentFragment(*static_cast<QTextCursor*>(cursor));
}

void* QTextDocumentFragment_NewQTextDocumentFragment2(void* document){
	return new QTextDocumentFragment(static_cast<QTextDocument*>(document));
}

int QTextDocumentFragment_IsEmpty(void* ptr){
	return static_cast<QTextDocumentFragment*>(ptr)->isEmpty();
}

char* QTextDocumentFragment_ToHtml(void* ptr, void* encoding){
	return static_cast<QTextDocumentFragment*>(ptr)->toHtml(*static_cast<QByteArray*>(encoding)).toUtf8().data();
}

char* QTextDocumentFragment_ToPlainText(void* ptr){
	return static_cast<QTextDocumentFragment*>(ptr)->toPlainText().toUtf8().data();
}

void QTextDocumentFragment_DestroyQTextDocumentFragment(void* ptr){
	static_cast<QTextDocumentFragment*>(ptr)->~QTextDocumentFragment();
}

#include "qaccessibleobject.h"
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QString>
#include <QVariant>
#include <QAccessibleObject>
#include "_cgo_export.h"

class MyQAccessibleObject: public QAccessibleObject {
public:
};

void* QAccessibleObject_ChildAt(void* ptr, int x, int y){
	return static_cast<QAccessibleObject*>(ptr)->childAt(x, y);
}

int QAccessibleObject_IsValid(void* ptr){
	return static_cast<QAccessibleObject*>(ptr)->isValid();
}

void* QAccessibleObject_Object(void* ptr){
	return static_cast<QAccessibleObject*>(ptr)->object();
}

void QAccessibleObject_SetText(void* ptr, int t, char* text){
	static_cast<QAccessibleObject*>(ptr)->setText(static_cast<QAccessible::Text>(t), QString(text));
}

#include "qpolygon.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QRect>
#include <QPoint>
#include <QString>
#include <QPolygon>
#include "_cgo_export.h"

class MyQPolygon: public QPolygon {
public:
};

void* QPolygon_NewQPolygon5(void* rectangle, int closed){
	return new QPolygon(*static_cast<QRect*>(rectangle), closed != 0);
}

int QPolygon_ContainsPoint(void* ptr, void* point, int fillRule){
	return static_cast<QPolygon*>(ptr)->containsPoint(*static_cast<QPoint*>(point), static_cast<Qt::FillRule>(fillRule));
}

void QPolygon_PutPoints3(void* ptr, int index, int nPoints, void* fromPolygon, int fromIndex){
	static_cast<QPolygon*>(ptr)->putPoints(index, nPoints, *static_cast<QPolygon*>(fromPolygon), fromIndex);
}

void* QPolygon_NewQPolygon(){
	return new QPolygon();
}

void* QPolygon_NewQPolygon3(void* polygon){
	return new QPolygon(*static_cast<QPolygon*>(polygon));
}

void* QPolygon_NewQPolygon2(int size){
	return new QPolygon(size);
}

void QPolygon_Point(void* ptr, int index, int x, int y){
	static_cast<QPolygon*>(ptr)->point(index, &x, &y);
}

void QPolygon_SetPoint2(void* ptr, int index, void* point){
	static_cast<QPolygon*>(ptr)->setPoint(index, *static_cast<QPoint*>(point));
}

void QPolygon_SetPoint(void* ptr, int index, int x, int y){
	static_cast<QPolygon*>(ptr)->setPoint(index, x, y);
}

void QPolygon_SetPoints(void* ptr, int nPoints, int points){
	static_cast<QPolygon*>(ptr)->setPoints(nPoints, &points);
}

void QPolygon_Swap(void* ptr, void* other){
	static_cast<QPolygon*>(ptr)->swap(*static_cast<QPolygon*>(other));
}

void QPolygon_Translate2(void* ptr, void* offset){
	static_cast<QPolygon*>(ptr)->translate(*static_cast<QPoint*>(offset));
}

void QPolygon_Translate(void* ptr, int dx, int dy){
	static_cast<QPolygon*>(ptr)->translate(dx, dy);
}

void QPolygon_DestroyQPolygon(void* ptr){
	static_cast<QPolygon*>(ptr)->~QPolygon();
}

#include "qopenglfunctions_4_3_core.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qopenglfunctions_4_0_core.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopenglfunctions_3_0.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qopenglfunctions_4_1_core.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qaccessibletablecellinterface.h"
#include <QModelIndex>
#include <QAccessible>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QAccessibleTableCellInterface>
#include "_cgo_export.h"

class MyQAccessibleTableCellInterface: public QAccessibleTableCellInterface {
public:
};

int QAccessibleTableCellInterface_ColumnExtent(void* ptr){
	return static_cast<QAccessibleTableCellInterface*>(ptr)->columnExtent();
}

int QAccessibleTableCellInterface_ColumnIndex(void* ptr){
	return static_cast<QAccessibleTableCellInterface*>(ptr)->columnIndex();
}

int QAccessibleTableCellInterface_IsSelected(void* ptr){
	return static_cast<QAccessibleTableCellInterface*>(ptr)->isSelected();
}

int QAccessibleTableCellInterface_RowExtent(void* ptr){
	return static_cast<QAccessibleTableCellInterface*>(ptr)->rowExtent();
}

int QAccessibleTableCellInterface_RowIndex(void* ptr){
	return static_cast<QAccessibleTableCellInterface*>(ptr)->rowIndex();
}

void* QAccessibleTableCellInterface_Table(void* ptr){
	return static_cast<QAccessibleTableCellInterface*>(ptr)->table();
}

void QAccessibleTableCellInterface_DestroyQAccessibleTableCellInterface(void* ptr){
	static_cast<QAccessibleTableCellInterface*>(ptr)->~QAccessibleTableCellInterface();
}

#include "qresizeevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QSize>
#include <QResizeEvent>
#include "_cgo_export.h"

class MyQResizeEvent: public QResizeEvent {
public:
};

void* QResizeEvent_NewQResizeEvent(void* size, void* oldSize){
	return new QResizeEvent(*static_cast<QSize*>(size), *static_cast<QSize*>(oldSize));
}

#include "qtextobjectinterface.h"
#include <QUrl>
#include <QModelIndex>
#include <QTextObject>
#include <QRectF>
#include <QRect>
#include <QString>
#include <QVariant>
#include <QTextDocument>
#include <QTextFormat>
#include <QPainter>
#include <QTextObjectInterface>
#include "_cgo_export.h"

class MyQTextObjectInterface: public QTextObjectInterface {
public:
};

void QTextObjectInterface_DrawObject(void* ptr, void* painter, void* rect, void* doc, int posInDocument, void* format){
	static_cast<QTextObjectInterface*>(ptr)->drawObject(static_cast<QPainter*>(painter), *static_cast<QRectF*>(rect), static_cast<QTextDocument*>(doc), posInDocument, *static_cast<QTextFormat*>(format));
}

void QTextObjectInterface_DestroyQTextObjectInterface(void* ptr){
	static_cast<QTextObjectInterface*>(ptr)->~QTextObjectInterface();
}

#include "qdoublevalidator.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QDoubleValidator>
#include "_cgo_export.h"

class MyQDoubleValidator: public QDoubleValidator {
public:
};

int QDoubleValidator_Notation(void* ptr){
	return static_cast<QDoubleValidator*>(ptr)->notation();
}

void QDoubleValidator_SetDecimals(void* ptr, int v){
	static_cast<QDoubleValidator*>(ptr)->setDecimals(v);
}

void QDoubleValidator_SetNotation(void* ptr, int v){
	static_cast<QDoubleValidator*>(ptr)->setNotation(static_cast<QDoubleValidator::Notation>(v));
}

void* QDoubleValidator_NewQDoubleValidator(void* parent){
	return new QDoubleValidator(static_cast<QObject*>(parent));
}

int QDoubleValidator_Decimals(void* ptr){
	return static_cast<QDoubleValidator*>(ptr)->decimals();
}

void QDoubleValidator_DestroyQDoubleValidator(void* ptr){
	static_cast<QDoubleValidator*>(ptr)->~QDoubleValidator();
}

#include "qaccessibletextupdateevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessibleInterface>
#include <QAccessible>
#include <QObject>
#include <QAccessibleTextUpdateEvent>
#include "_cgo_export.h"

class MyQAccessibleTextUpdateEvent: public QAccessibleTextUpdateEvent {
public:
};

void* QAccessibleTextUpdateEvent_NewQAccessibleTextUpdateEvent2(void* iface, int position, char* oldText, char* text){
	return new QAccessibleTextUpdateEvent(static_cast<QAccessibleInterface*>(iface), position, QString(oldText), QString(text));
}

void* QAccessibleTextUpdateEvent_NewQAccessibleTextUpdateEvent(void* object, int position, char* oldText, char* text){
	return new QAccessibleTextUpdateEvent(static_cast<QObject*>(object), position, QString(oldText), QString(text));
}

int QAccessibleTextUpdateEvent_ChangePosition(void* ptr){
	return static_cast<QAccessibleTextUpdateEvent*>(ptr)->changePosition();
}

char* QAccessibleTextUpdateEvent_TextInserted(void* ptr){
	return static_cast<QAccessibleTextUpdateEvent*>(ptr)->textInserted().toUtf8().data();
}

char* QAccessibleTextUpdateEvent_TextRemoved(void* ptr){
	return static_cast<QAccessibleTextUpdateEvent*>(ptr)->textRemoved().toUtf8().data();
}

#include "qaccessibleplugin.h"
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QString>
#include <QVariant>
#include <QAccessiblePlugin>
#include "_cgo_export.h"

#include "qplatformgraphicsbuffer.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qinputmethod.h"
#include <QMetaObject>
#include <QRectF>
#include <QString>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QVariant>
#include <QTransform>
#include <QRect>
#include <QInputMethod>
#include "_cgo_export.h"

class MyQInputMethod: public QInputMethod {
public:
void Signal_AnimatingChanged(){callbackQInputMethodAnimatingChanged(this->objectName().toUtf8().data());};
void Signal_CursorRectangleChanged(){callbackQInputMethodCursorRectangleChanged(this->objectName().toUtf8().data());};
void Signal_InputDirectionChanged(Qt::LayoutDirection newDirection){callbackQInputMethodInputDirectionChanged(this->objectName().toUtf8().data(), newDirection);};
void Signal_KeyboardRectangleChanged(){callbackQInputMethodKeyboardRectangleChanged(this->objectName().toUtf8().data());};
void Signal_LocaleChanged(){callbackQInputMethodLocaleChanged(this->objectName().toUtf8().data());};
void Signal_VisibleChanged(){callbackQInputMethodVisibleChanged(this->objectName().toUtf8().data());};
};

int QInputMethod_InputDirection(void* ptr){
	return static_cast<QInputMethod*>(ptr)->inputDirection();
}

int QInputMethod_IsAnimating(void* ptr){
	return static_cast<QInputMethod*>(ptr)->isAnimating();
}

int QInputMethod_IsVisible(void* ptr){
	return static_cast<QInputMethod*>(ptr)->isVisible();
}

void QInputMethod_ConnectAnimatingChanged(void* ptr){
	QObject::connect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::animatingChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_AnimatingChanged));;
}

void QInputMethod_DisconnectAnimatingChanged(void* ptr){
	QObject::disconnect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::animatingChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_AnimatingChanged));;
}

void QInputMethod_Commit(void* ptr){
	QMetaObject::invokeMethod(static_cast<QInputMethod*>(ptr), "commit");
}

void QInputMethod_ConnectCursorRectangleChanged(void* ptr){
	QObject::connect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::cursorRectangleChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_CursorRectangleChanged));;
}

void QInputMethod_DisconnectCursorRectangleChanged(void* ptr){
	QObject::disconnect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::cursorRectangleChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_CursorRectangleChanged));;
}

void QInputMethod_Hide(void* ptr){
	QMetaObject::invokeMethod(static_cast<QInputMethod*>(ptr), "hide");
}

void QInputMethod_ConnectInputDirectionChanged(void* ptr){
	QObject::connect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)(Qt::LayoutDirection)>(&QInputMethod::inputDirectionChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)(Qt::LayoutDirection)>(&MyQInputMethod::Signal_InputDirectionChanged));;
}

void QInputMethod_DisconnectInputDirectionChanged(void* ptr){
	QObject::disconnect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)(Qt::LayoutDirection)>(&QInputMethod::inputDirectionChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)(Qt::LayoutDirection)>(&MyQInputMethod::Signal_InputDirectionChanged));;
}

void QInputMethod_InvokeAction(void* ptr, int a, int cursorPosition){
	QMetaObject::invokeMethod(static_cast<QInputMethod*>(ptr), "invokeAction", Q_ARG(QInputMethod::Action, static_cast<QInputMethod::Action>(a)), Q_ARG(int, cursorPosition));
}

void QInputMethod_ConnectKeyboardRectangleChanged(void* ptr){
	QObject::connect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::keyboardRectangleChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_KeyboardRectangleChanged));;
}

void QInputMethod_DisconnectKeyboardRectangleChanged(void* ptr){
	QObject::disconnect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::keyboardRectangleChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_KeyboardRectangleChanged));;
}

void QInputMethod_ConnectLocaleChanged(void* ptr){
	QObject::connect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::localeChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_LocaleChanged));;
}

void QInputMethod_DisconnectLocaleChanged(void* ptr){
	QObject::disconnect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::localeChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_LocaleChanged));;
}

void* QInputMethod_QInputMethod_QueryFocusObject(int query, void* argument){
	return new QVariant(QInputMethod::queryFocusObject(static_cast<Qt::InputMethodQuery>(query), *static_cast<QVariant*>(argument)));
}

void QInputMethod_Reset(void* ptr){
	QMetaObject::invokeMethod(static_cast<QInputMethod*>(ptr), "reset");
}

void QInputMethod_SetInputItemRectangle(void* ptr, void* rect){
	static_cast<QInputMethod*>(ptr)->setInputItemRectangle(*static_cast<QRectF*>(rect));
}

void QInputMethod_SetInputItemTransform(void* ptr, void* transform){
	static_cast<QInputMethod*>(ptr)->setInputItemTransform(*static_cast<QTransform*>(transform));
}

void QInputMethod_SetVisible(void* ptr, int visible){
	static_cast<QInputMethod*>(ptr)->setVisible(visible != 0);
}

void QInputMethod_Show(void* ptr){
	QMetaObject::invokeMethod(static_cast<QInputMethod*>(ptr), "show");
}

void QInputMethod_Update(void* ptr, int queries){
	QMetaObject::invokeMethod(static_cast<QInputMethod*>(ptr), "update", Q_ARG(Qt::InputMethodQuery, static_cast<Qt::InputMethodQuery>(queries)));
}

void QInputMethod_ConnectVisibleChanged(void* ptr){
	QObject::connect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::visibleChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_VisibleChanged));;
}

void QInputMethod_DisconnectVisibleChanged(void* ptr){
	QObject::disconnect(static_cast<QInputMethod*>(ptr), static_cast<void (QInputMethod::*)()>(&QInputMethod::visibleChanged), static_cast<MyQInputMethod*>(ptr), static_cast<void (MyQInputMethod::*)()>(&MyQInputMethod::Signal_VisibleChanged));;
}

#include "qscreen.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QScreen>
#include "_cgo_export.h"

class MyQScreen: public QScreen {
public:
void Signal_OrientationChanged(Qt::ScreenOrientation orientation){callbackQScreenOrientationChanged(this->objectName().toUtf8().data(), orientation);};
void Signal_PrimaryOrientationChanged(Qt::ScreenOrientation orientation){callbackQScreenPrimaryOrientationChanged(this->objectName().toUtf8().data(), orientation);};
};

int QScreen_Depth(void* ptr){
	return static_cast<QScreen*>(ptr)->depth();
}

double QScreen_DevicePixelRatio(void* ptr){
	return static_cast<double>(static_cast<QScreen*>(ptr)->devicePixelRatio());
}

double QScreen_LogicalDotsPerInch(void* ptr){
	return static_cast<double>(static_cast<QScreen*>(ptr)->logicalDotsPerInch());
}

double QScreen_LogicalDotsPerInchX(void* ptr){
	return static_cast<double>(static_cast<QScreen*>(ptr)->logicalDotsPerInchX());
}

double QScreen_LogicalDotsPerInchY(void* ptr){
	return static_cast<double>(static_cast<QScreen*>(ptr)->logicalDotsPerInchY());
}

char* QScreen_Name(void* ptr){
	return static_cast<QScreen*>(ptr)->name().toUtf8().data();
}

int QScreen_NativeOrientation(void* ptr){
	return static_cast<QScreen*>(ptr)->nativeOrientation();
}

int QScreen_Orientation(void* ptr){
	return static_cast<QScreen*>(ptr)->orientation();
}

double QScreen_PhysicalDotsPerInch(void* ptr){
	return static_cast<double>(static_cast<QScreen*>(ptr)->physicalDotsPerInch());
}

double QScreen_PhysicalDotsPerInchX(void* ptr){
	return static_cast<double>(static_cast<QScreen*>(ptr)->physicalDotsPerInchX());
}

double QScreen_PhysicalDotsPerInchY(void* ptr){
	return static_cast<double>(static_cast<QScreen*>(ptr)->physicalDotsPerInchY());
}

int QScreen_PrimaryOrientation(void* ptr){
	return static_cast<QScreen*>(ptr)->primaryOrientation();
}

double QScreen_RefreshRate(void* ptr){
	return static_cast<double>(static_cast<QScreen*>(ptr)->refreshRate());
}

int QScreen_AngleBetween(void* ptr, int a, int b){
	return static_cast<QScreen*>(ptr)->angleBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b));
}

int QScreen_IsLandscape(void* ptr, int o){
	return static_cast<QScreen*>(ptr)->isLandscape(static_cast<Qt::ScreenOrientation>(o));
}

int QScreen_IsPortrait(void* ptr, int o){
	return static_cast<QScreen*>(ptr)->isPortrait(static_cast<Qt::ScreenOrientation>(o));
}

void QScreen_ConnectOrientationChanged(void* ptr){
	QObject::connect(static_cast<QScreen*>(ptr), static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::orientationChanged), static_cast<MyQScreen*>(ptr), static_cast<void (MyQScreen::*)(Qt::ScreenOrientation)>(&MyQScreen::Signal_OrientationChanged));;
}

void QScreen_DisconnectOrientationChanged(void* ptr){
	QObject::disconnect(static_cast<QScreen*>(ptr), static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::orientationChanged), static_cast<MyQScreen*>(ptr), static_cast<void (MyQScreen::*)(Qt::ScreenOrientation)>(&MyQScreen::Signal_OrientationChanged));;
}

int QScreen_OrientationUpdateMask(void* ptr){
	return static_cast<QScreen*>(ptr)->orientationUpdateMask();
}

void QScreen_ConnectPrimaryOrientationChanged(void* ptr){
	QObject::connect(static_cast<QScreen*>(ptr), static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::primaryOrientationChanged), static_cast<MyQScreen*>(ptr), static_cast<void (MyQScreen::*)(Qt::ScreenOrientation)>(&MyQScreen::Signal_PrimaryOrientationChanged));;
}

void QScreen_DisconnectPrimaryOrientationChanged(void* ptr){
	QObject::disconnect(static_cast<QScreen*>(ptr), static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::primaryOrientationChanged), static_cast<MyQScreen*>(ptr), static_cast<void (MyQScreen::*)(Qt::ScreenOrientation)>(&MyQScreen::Signal_PrimaryOrientationChanged));;
}

void QScreen_SetOrientationUpdateMask(void* ptr, int mask){
	static_cast<QScreen*>(ptr)->setOrientationUpdateMask(static_cast<Qt::ScreenOrientation>(mask));
}

void QScreen_DestroyQScreen(void* ptr){
	static_cast<QScreen*>(ptr)->~QScreen();
}

#include "qopenglframebufferobject.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopenglpixeltransferoptions.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qaccessibletextremoveevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessibleInterface>
#include <QAccessible>
#include <QObject>
#include <QString>
#include <QAccessibleTextRemoveEvent>
#include "_cgo_export.h"

class MyQAccessibleTextRemoveEvent: public QAccessibleTextRemoveEvent {
public:
};

void* QAccessibleTextRemoveEvent_NewQAccessibleTextRemoveEvent2(void* iface, int position, char* text){
	return new QAccessibleTextRemoveEvent(static_cast<QAccessibleInterface*>(iface), position, QString(text));
}

void* QAccessibleTextRemoveEvent_NewQAccessibleTextRemoveEvent(void* object, int position, char* text){
	return new QAccessibleTextRemoveEvent(static_cast<QObject*>(object), position, QString(text));
}

int QAccessibleTextRemoveEvent_ChangePosition(void* ptr){
	return static_cast<QAccessibleTextRemoveEvent*>(ptr)->changePosition();
}

char* QAccessibleTextRemoveEvent_TextRemoved(void* ptr){
	return static_cast<QAccessibleTextRemoveEvent*>(ptr)->textRemoved().toUtf8().data();
}

#include "qvalidator.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QLocale>
#include <QValidator>
#include "_cgo_export.h"

class MyQValidator: public QValidator {
public:
void Signal_Changed(){callbackQValidatorChanged(this->objectName().toUtf8().data());};
};

void QValidator_ConnectChanged(void* ptr){
	QObject::connect(static_cast<QValidator*>(ptr), static_cast<void (QValidator::*)()>(&QValidator::changed), static_cast<MyQValidator*>(ptr), static_cast<void (MyQValidator::*)()>(&MyQValidator::Signal_Changed));;
}

void QValidator_DisconnectChanged(void* ptr){
	QObject::disconnect(static_cast<QValidator*>(ptr), static_cast<void (QValidator::*)()>(&QValidator::changed), static_cast<MyQValidator*>(ptr), static_cast<void (MyQValidator::*)()>(&MyQValidator::Signal_Changed));;
}

void QValidator_SetLocale(void* ptr, void* locale){
	static_cast<QValidator*>(ptr)->setLocale(*static_cast<QLocale*>(locale));
}

void QValidator_DestroyQValidator(void* ptr){
	static_cast<QValidator*>(ptr)->~QValidator();
}

#include "qopenglversionprofile.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopenglfunctions_4_2_core.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qaccessible.h"
#include <QObject>
#include <QAccessibleEvent>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include "_cgo_export.h"

class MyQAccessible: public QAccessible {
public:
};

int QAccessible_InvalidEvent_Type(){
	return QAccessible::InvalidEvent;
}

int QAccessible_QAccessible_IsActive(){
	return QAccessible::isActive();
}

void* QAccessible_QAccessible_QueryAccessibleInterface(void* object){
	return QAccessible::queryAccessibleInterface(static_cast<QObject*>(object));
}

void QAccessible_QAccessible_SetRootObject(void* object){
	QAccessible::setRootObject(static_cast<QObject*>(object));
}

void QAccessible_QAccessible_UpdateAccessibility(void* event){
	QAccessible::updateAccessibility(static_cast<QAccessibleEvent*>(event));
}

#include "qtextoption.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextOption>
#include "_cgo_export.h"

class MyQTextOption: public QTextOption {
public:
};

void* QTextOption_NewQTextOption3(void* other){
	return new QTextOption(*static_cast<QTextOption*>(other));
}

void* QTextOption_NewQTextOption(){
	return new QTextOption();
}

void* QTextOption_NewQTextOption2(int alignment){
	return new QTextOption(static_cast<Qt::AlignmentFlag>(alignment));
}

int QTextOption_Alignment(void* ptr){
	return static_cast<QTextOption*>(ptr)->alignment();
}

int QTextOption_Flags(void* ptr){
	return static_cast<QTextOption*>(ptr)->flags();
}

void QTextOption_SetAlignment(void* ptr, int alignment){
	static_cast<QTextOption*>(ptr)->setAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QTextOption_SetFlags(void* ptr, int flags){
	static_cast<QTextOption*>(ptr)->setFlags(static_cast<QTextOption::Flag>(flags));
}

void QTextOption_SetTabStop(void* ptr, double tabStop){
	static_cast<QTextOption*>(ptr)->setTabStop(static_cast<qreal>(tabStop));
}

void QTextOption_SetTextDirection(void* ptr, int direction){
	static_cast<QTextOption*>(ptr)->setTextDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QTextOption_SetUseDesignMetrics(void* ptr, int enable){
	static_cast<QTextOption*>(ptr)->setUseDesignMetrics(enable != 0);
}

void QTextOption_SetWrapMode(void* ptr, int mode){
	static_cast<QTextOption*>(ptr)->setWrapMode(static_cast<QTextOption::WrapMode>(mode));
}

double QTextOption_TabStop(void* ptr){
	return static_cast<double>(static_cast<QTextOption*>(ptr)->tabStop());
}

int QTextOption_TextDirection(void* ptr){
	return static_cast<QTextOption*>(ptr)->textDirection();
}

int QTextOption_UseDesignMetrics(void* ptr){
	return static_cast<QTextOption*>(ptr)->useDesignMetrics();
}

int QTextOption_WrapMode(void* ptr){
	return static_cast<QTextOption*>(ptr)->wrapMode();
}

void QTextOption_DestroyQTextOption(void* ptr){
	static_cast<QTextOption*>(ptr)->~QTextOption();
}

#include "qfileopenevent.h"
#include <QModelIndex>
#include <QIODevice>
#include <QFile>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QFileOpenEvent>
#include "_cgo_export.h"

class MyQFileOpenEvent: public QFileOpenEvent {
public:
};

int QFileOpenEvent_OpenFile(void* ptr, void* file, int flags){
	return static_cast<QFileOpenEvent*>(ptr)->openFile(*static_cast<QFile*>(file), static_cast<QIODevice::OpenModeFlag>(flags));
}

char* QFileOpenEvent_File(void* ptr){
	return static_cast<QFileOpenEvent*>(ptr)->file().toUtf8().data();
}

#include "qpainterpathstroker.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPainter>
#include <QPen>
#include <QPainterPath>
#include <QPainterPathStroker>
#include "_cgo_export.h"

class MyQPainterPathStroker: public QPainterPathStroker {
public:
};

void* QPainterPathStroker_NewQPainterPathStroker(){
	return new QPainterPathStroker();
}

void* QPainterPathStroker_NewQPainterPathStroker2(void* pen){
	return new QPainterPathStroker(*static_cast<QPen*>(pen));
}

int QPainterPathStroker_CapStyle(void* ptr){
	return static_cast<QPainterPathStroker*>(ptr)->capStyle();
}

double QPainterPathStroker_CurveThreshold(void* ptr){
	return static_cast<double>(static_cast<QPainterPathStroker*>(ptr)->curveThreshold());
}

double QPainterPathStroker_DashOffset(void* ptr){
	return static_cast<double>(static_cast<QPainterPathStroker*>(ptr)->dashOffset());
}

int QPainterPathStroker_JoinStyle(void* ptr){
	return static_cast<QPainterPathStroker*>(ptr)->joinStyle();
}

double QPainterPathStroker_MiterLimit(void* ptr){
	return static_cast<double>(static_cast<QPainterPathStroker*>(ptr)->miterLimit());
}

void QPainterPathStroker_SetCapStyle(void* ptr, int style){
	static_cast<QPainterPathStroker*>(ptr)->setCapStyle(static_cast<Qt::PenCapStyle>(style));
}

void QPainterPathStroker_SetCurveThreshold(void* ptr, double threshold){
	static_cast<QPainterPathStroker*>(ptr)->setCurveThreshold(static_cast<qreal>(threshold));
}

void QPainterPathStroker_SetDashOffset(void* ptr, double offset){
	static_cast<QPainterPathStroker*>(ptr)->setDashOffset(static_cast<qreal>(offset));
}

void QPainterPathStroker_SetDashPattern(void* ptr, int style){
	static_cast<QPainterPathStroker*>(ptr)->setDashPattern(static_cast<Qt::PenStyle>(style));
}

void QPainterPathStroker_SetJoinStyle(void* ptr, int style){
	static_cast<QPainterPathStroker*>(ptr)->setJoinStyle(static_cast<Qt::PenJoinStyle>(style));
}

void QPainterPathStroker_SetMiterLimit(void* ptr, double limit){
	static_cast<QPainterPathStroker*>(ptr)->setMiterLimit(static_cast<qreal>(limit));
}

void QPainterPathStroker_SetWidth(void* ptr, double width){
	static_cast<QPainterPathStroker*>(ptr)->setWidth(static_cast<qreal>(width));
}

double QPainterPathStroker_Width(void* ptr){
	return static_cast<double>(static_cast<QPainterPathStroker*>(ptr)->width());
}

void QPainterPathStroker_DestroyQPainterPathStroker(void* ptr){
	static_cast<QPainterPathStroker*>(ptr)->~QPainterPathStroker();
}

#include "qtextlength.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QTextLength>
#include "_cgo_export.h"

class MyQTextLength: public QTextLength {
public:
};

void* QTextLength_NewQTextLength(){
	return new QTextLength();
}

void* QTextLength_NewQTextLength2(int ty, double value){
	return new QTextLength(static_cast<QTextLength::Type>(ty), static_cast<qreal>(value));
}

double QTextLength_RawValue(void* ptr){
	return static_cast<double>(static_cast<QTextLength*>(ptr)->rawValue());
}

int QTextLength_Type(void* ptr){
	return static_cast<QTextLength*>(ptr)->type();
}

double QTextLength_Value(void* ptr, double maximumLength){
	return static_cast<double>(static_cast<QTextLength*>(ptr)->value(static_cast<qreal>(maximumLength)));
}

#include "qstandarditemmodel.h"
#include <QStandardItem>
#include <QMimeData>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QStandardItemModel>
#include "_cgo_export.h"

class MyQStandardItemModel: public QStandardItemModel {
public:
void Signal_ItemChanged(QStandardItem * item){callbackQStandardItemModelItemChanged(this->objectName().toUtf8().data(), item);};
};

void QStandardItemModel_SetSortRole(void* ptr, int role){
	static_cast<QStandardItemModel*>(ptr)->setSortRole(role);
}

int QStandardItemModel_SortRole(void* ptr){
	return static_cast<QStandardItemModel*>(ptr)->sortRole();
}

void* QStandardItemModel_NewQStandardItemModel(void* parent){
	return new QStandardItemModel(static_cast<QObject*>(parent));
}

void* QStandardItemModel_NewQStandardItemModel2(int rows, int columns, void* parent){
	return new QStandardItemModel(rows, columns, static_cast<QObject*>(parent));
}

void QStandardItemModel_AppendRow2(void* ptr, void* item){
	static_cast<QStandardItemModel*>(ptr)->appendRow(static_cast<QStandardItem*>(item));
}

void QStandardItemModel_Clear(void* ptr){
	static_cast<QStandardItemModel*>(ptr)->clear();
}

int QStandardItemModel_ColumnCount(void* ptr, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->columnCount(*static_cast<QModelIndex*>(parent));
}

void* QStandardItemModel_Data(void* ptr, void* index, int role){
	return new QVariant(static_cast<QStandardItemModel*>(ptr)->data(*static_cast<QModelIndex*>(index), role));
}

int QStandardItemModel_DropMimeData(void* ptr, void* data, int action, int row, int column, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->dropMimeData(static_cast<QMimeData*>(data), static_cast<Qt::DropAction>(action), row, column, *static_cast<QModelIndex*>(parent));
}

int QStandardItemModel_Flags(void* ptr, void* index){
	return static_cast<QStandardItemModel*>(ptr)->flags(*static_cast<QModelIndex*>(index));
}

int QStandardItemModel_HasChildren(void* ptr, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->hasChildren(*static_cast<QModelIndex*>(parent));
}

void* QStandardItemModel_HeaderData(void* ptr, int section, int orientation, int role){
	return new QVariant(static_cast<QStandardItemModel*>(ptr)->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

void* QStandardItemModel_HorizontalHeaderItem(void* ptr, int column){
	return static_cast<QStandardItemModel*>(ptr)->horizontalHeaderItem(column);
}

void* QStandardItemModel_Index(void* ptr, int row, int column, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->index(row, column, *static_cast<QModelIndex*>(parent)).internalPointer();
}

void* QStandardItemModel_IndexFromItem(void* ptr, void* item){
	return static_cast<QStandardItemModel*>(ptr)->indexFromItem(static_cast<QStandardItem*>(item)).internalPointer();
}

int QStandardItemModel_InsertColumn2(void* ptr, int column, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->insertColumn(column, *static_cast<QModelIndex*>(parent));
}

int QStandardItemModel_InsertColumns(void* ptr, int column, int count, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->insertColumns(column, count, *static_cast<QModelIndex*>(parent));
}

int QStandardItemModel_InsertRow2(void* ptr, int row, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->insertRow(row, *static_cast<QModelIndex*>(parent));
}

void QStandardItemModel_InsertRow3(void* ptr, int row, void* item){
	static_cast<QStandardItemModel*>(ptr)->insertRow(row, static_cast<QStandardItem*>(item));
}

int QStandardItemModel_InsertRows(void* ptr, int row, int count, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->insertRows(row, count, *static_cast<QModelIndex*>(parent));
}

void* QStandardItemModel_InvisibleRootItem(void* ptr){
	return static_cast<QStandardItemModel*>(ptr)->invisibleRootItem();
}

void* QStandardItemModel_Item(void* ptr, int row, int column){
	return static_cast<QStandardItemModel*>(ptr)->item(row, column);
}

void QStandardItemModel_ConnectItemChanged(void* ptr){
	QObject::connect(static_cast<QStandardItemModel*>(ptr), static_cast<void (QStandardItemModel::*)(QStandardItem *)>(&QStandardItemModel::itemChanged), static_cast<MyQStandardItemModel*>(ptr), static_cast<void (MyQStandardItemModel::*)(QStandardItem *)>(&MyQStandardItemModel::Signal_ItemChanged));;
}

void QStandardItemModel_DisconnectItemChanged(void* ptr){
	QObject::disconnect(static_cast<QStandardItemModel*>(ptr), static_cast<void (QStandardItemModel::*)(QStandardItem *)>(&QStandardItemModel::itemChanged), static_cast<MyQStandardItemModel*>(ptr), static_cast<void (MyQStandardItemModel::*)(QStandardItem *)>(&MyQStandardItemModel::Signal_ItemChanged));;
}

void* QStandardItemModel_ItemFromIndex(void* ptr, void* index){
	return static_cast<QStandardItemModel*>(ptr)->itemFromIndex(*static_cast<QModelIndex*>(index));
}

void* QStandardItemModel_ItemPrototype(void* ptr){
	return const_cast<QStandardItem*>(static_cast<QStandardItemModel*>(ptr)->itemPrototype());
}

char* QStandardItemModel_MimeTypes(void* ptr){
	return static_cast<QStandardItemModel*>(ptr)->mimeTypes().join("|").toUtf8().data();
}

void* QStandardItemModel_Parent(void* ptr, void* child){
	return static_cast<QStandardItemModel*>(ptr)->parent(*static_cast<QModelIndex*>(child)).internalPointer();
}

int QStandardItemModel_RemoveColumns(void* ptr, int column, int count, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->removeColumns(column, count, *static_cast<QModelIndex*>(parent));
}

int QStandardItemModel_RemoveRows(void* ptr, int row, int count, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->removeRows(row, count, *static_cast<QModelIndex*>(parent));
}

int QStandardItemModel_RowCount(void* ptr, void* parent){
	return static_cast<QStandardItemModel*>(ptr)->rowCount(*static_cast<QModelIndex*>(parent));
}

void QStandardItemModel_SetColumnCount(void* ptr, int columns){
	static_cast<QStandardItemModel*>(ptr)->setColumnCount(columns);
}

int QStandardItemModel_SetData(void* ptr, void* index, void* value, int role){
	return static_cast<QStandardItemModel*>(ptr)->setData(*static_cast<QModelIndex*>(index), *static_cast<QVariant*>(value), role);
}

int QStandardItemModel_SetHeaderData(void* ptr, int section, int orientation, void* value, int role){
	return static_cast<QStandardItemModel*>(ptr)->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *static_cast<QVariant*>(value), role);
}

void QStandardItemModel_SetHorizontalHeaderItem(void* ptr, int column, void* item){
	static_cast<QStandardItemModel*>(ptr)->setHorizontalHeaderItem(column, static_cast<QStandardItem*>(item));
}

void QStandardItemModel_SetHorizontalHeaderLabels(void* ptr, char* labels){
	static_cast<QStandardItemModel*>(ptr)->setHorizontalHeaderLabels(QString(labels).split("|", QString::SkipEmptyParts));
}

void QStandardItemModel_SetItem2(void* ptr, int row, void* item){
	static_cast<QStandardItemModel*>(ptr)->setItem(row, static_cast<QStandardItem*>(item));
}

void QStandardItemModel_SetItem(void* ptr, int row, int column, void* item){
	static_cast<QStandardItemModel*>(ptr)->setItem(row, column, static_cast<QStandardItem*>(item));
}

void QStandardItemModel_SetItemPrototype(void* ptr, void* item){
	static_cast<QStandardItemModel*>(ptr)->setItemPrototype(static_cast<QStandardItem*>(item));
}

void QStandardItemModel_SetRowCount(void* ptr, int rows){
	static_cast<QStandardItemModel*>(ptr)->setRowCount(rows);
}

void QStandardItemModel_SetVerticalHeaderItem(void* ptr, int row, void* item){
	static_cast<QStandardItemModel*>(ptr)->setVerticalHeaderItem(row, static_cast<QStandardItem*>(item));
}

void QStandardItemModel_SetVerticalHeaderLabels(void* ptr, char* labels){
	static_cast<QStandardItemModel*>(ptr)->setVerticalHeaderLabels(QString(labels).split("|", QString::SkipEmptyParts));
}

void* QStandardItemModel_Sibling(void* ptr, int row, int column, void* idx){
	return static_cast<QStandardItemModel*>(ptr)->sibling(row, column, *static_cast<QModelIndex*>(idx)).internalPointer();
}

void QStandardItemModel_Sort(void* ptr, int column, int order){
	static_cast<QStandardItemModel*>(ptr)->sort(column, static_cast<Qt::SortOrder>(order));
}

int QStandardItemModel_SupportedDropActions(void* ptr){
	return static_cast<QStandardItemModel*>(ptr)->supportedDropActions();
}

void* QStandardItemModel_TakeHorizontalHeaderItem(void* ptr, int column){
	return static_cast<QStandardItemModel*>(ptr)->takeHorizontalHeaderItem(column);
}

void* QStandardItemModel_TakeItem(void* ptr, int row, int column){
	return static_cast<QStandardItemModel*>(ptr)->takeItem(row, column);
}

void* QStandardItemModel_TakeVerticalHeaderItem(void* ptr, int row){
	return static_cast<QStandardItemModel*>(ptr)->takeVerticalHeaderItem(row);
}

void* QStandardItemModel_VerticalHeaderItem(void* ptr, int row){
	return static_cast<QStandardItemModel*>(ptr)->verticalHeaderItem(row);
}

void QStandardItemModel_DestroyQStandardItemModel(void* ptr){
	static_cast<QStandardItemModel*>(ptr)->~QStandardItemModel();
}

#include "qopenglpaintdevice.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qaccessibletableinterface.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QAccessible>
#include <QAccessibleTableModelChangeEvent>
#include <QAccessibleTableInterface>
#include "_cgo_export.h"

class MyQAccessibleTableInterface: public QAccessibleTableInterface {
public:
};

void* QAccessibleTableInterface_Caption(void* ptr){
	return static_cast<QAccessibleTableInterface*>(ptr)->caption();
}

void* QAccessibleTableInterface_CellAt(void* ptr, int row, int column){
	return static_cast<QAccessibleTableInterface*>(ptr)->cellAt(row, column);
}

int QAccessibleTableInterface_ColumnCount(void* ptr){
	return static_cast<QAccessibleTableInterface*>(ptr)->columnCount();
}

char* QAccessibleTableInterface_ColumnDescription(void* ptr, int column){
	return static_cast<QAccessibleTableInterface*>(ptr)->columnDescription(column).toUtf8().data();
}

int QAccessibleTableInterface_IsColumnSelected(void* ptr, int column){
	return static_cast<QAccessibleTableInterface*>(ptr)->isColumnSelected(column);
}

int QAccessibleTableInterface_IsRowSelected(void* ptr, int row){
	return static_cast<QAccessibleTableInterface*>(ptr)->isRowSelected(row);
}

void QAccessibleTableInterface_ModelChange(void* ptr, void* event){
	static_cast<QAccessibleTableInterface*>(ptr)->modelChange(static_cast<QAccessibleTableModelChangeEvent*>(event));
}

int QAccessibleTableInterface_RowCount(void* ptr){
	return static_cast<QAccessibleTableInterface*>(ptr)->rowCount();
}

char* QAccessibleTableInterface_RowDescription(void* ptr, int row){
	return static_cast<QAccessibleTableInterface*>(ptr)->rowDescription(row).toUtf8().data();
}

int QAccessibleTableInterface_SelectColumn(void* ptr, int column){
	return static_cast<QAccessibleTableInterface*>(ptr)->selectColumn(column);
}

int QAccessibleTableInterface_SelectRow(void* ptr, int row){
	return static_cast<QAccessibleTableInterface*>(ptr)->selectRow(row);
}

int QAccessibleTableInterface_SelectedCellCount(void* ptr){
	return static_cast<QAccessibleTableInterface*>(ptr)->selectedCellCount();
}

int QAccessibleTableInterface_SelectedColumnCount(void* ptr){
	return static_cast<QAccessibleTableInterface*>(ptr)->selectedColumnCount();
}

int QAccessibleTableInterface_SelectedRowCount(void* ptr){
	return static_cast<QAccessibleTableInterface*>(ptr)->selectedRowCount();
}

void* QAccessibleTableInterface_Summary(void* ptr){
	return static_cast<QAccessibleTableInterface*>(ptr)->summary();
}

int QAccessibleTableInterface_UnselectColumn(void* ptr, int column){
	return static_cast<QAccessibleTableInterface*>(ptr)->unselectColumn(column);
}

int QAccessibleTableInterface_UnselectRow(void* ptr, int row){
	return static_cast<QAccessibleTableInterface*>(ptr)->unselectRow(row);
}

void QAccessibleTableInterface_DestroyQAccessibleTableInterface(void* ptr){
	static_cast<QAccessibleTableInterface*>(ptr)->~QAccessibleTableInterface();
}

#include "qimagewriter.h"
#include <QModelIndex>
#include <QImage>
#include <QIODevice>
#include <QImageIOHandler>
#include <QByteArray>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QImageWriter>
#include "_cgo_export.h"

class MyQImageWriter: public QImageWriter {
public:
};

void* QImageWriter_NewQImageWriter(){
	return new QImageWriter();
}

void* QImageWriter_NewQImageWriter2(void* device, void* format){
	return new QImageWriter(static_cast<QIODevice*>(device), *static_cast<QByteArray*>(format));
}

void* QImageWriter_NewQImageWriter3(char* fileName, void* format){
	return new QImageWriter(QString(fileName), *static_cast<QByteArray*>(format));
}

int QImageWriter_CanWrite(void* ptr){
	return static_cast<QImageWriter*>(ptr)->canWrite();
}

int QImageWriter_Compression(void* ptr){
	return static_cast<QImageWriter*>(ptr)->compression();
}

void* QImageWriter_Device(void* ptr){
	return static_cast<QImageWriter*>(ptr)->device();
}

int QImageWriter_Error(void* ptr){
	return static_cast<QImageWriter*>(ptr)->error();
}

char* QImageWriter_ErrorString(void* ptr){
	return static_cast<QImageWriter*>(ptr)->errorString().toUtf8().data();
}

char* QImageWriter_FileName(void* ptr){
	return static_cast<QImageWriter*>(ptr)->fileName().toUtf8().data();
}

void* QImageWriter_Format(void* ptr){
	return new QByteArray(static_cast<QImageWriter*>(ptr)->format());
}

int QImageWriter_OptimizedWrite(void* ptr){
	return static_cast<QImageWriter*>(ptr)->optimizedWrite();
}

int QImageWriter_ProgressiveScanWrite(void* ptr){
	return static_cast<QImageWriter*>(ptr)->progressiveScanWrite();
}

int QImageWriter_Quality(void* ptr){
	return static_cast<QImageWriter*>(ptr)->quality();
}

void QImageWriter_SetCompression(void* ptr, int compression){
	static_cast<QImageWriter*>(ptr)->setCompression(compression);
}

void QImageWriter_SetDevice(void* ptr, void* device){
	static_cast<QImageWriter*>(ptr)->setDevice(static_cast<QIODevice*>(device));
}

void QImageWriter_SetFileName(void* ptr, char* fileName){
	static_cast<QImageWriter*>(ptr)->setFileName(QString(fileName));
}

void QImageWriter_SetFormat(void* ptr, void* format){
	static_cast<QImageWriter*>(ptr)->setFormat(*static_cast<QByteArray*>(format));
}

void QImageWriter_SetOptimizedWrite(void* ptr, int optimize){
	static_cast<QImageWriter*>(ptr)->setOptimizedWrite(optimize != 0);
}

void QImageWriter_SetProgressiveScanWrite(void* ptr, int progressive){
	static_cast<QImageWriter*>(ptr)->setProgressiveScanWrite(progressive != 0);
}

void QImageWriter_SetQuality(void* ptr, int quality){
	static_cast<QImageWriter*>(ptr)->setQuality(quality);
}

void QImageWriter_SetSubType(void* ptr, void* ty){
	static_cast<QImageWriter*>(ptr)->setSubType(*static_cast<QByteArray*>(ty));
}

void QImageWriter_SetText(void* ptr, char* key, char* text){
	static_cast<QImageWriter*>(ptr)->setText(QString(key), QString(text));
}

void QImageWriter_SetTransformation(void* ptr, int transform){
	static_cast<QImageWriter*>(ptr)->setTransformation(static_cast<QImageIOHandler::Transformation>(transform));
}

void* QImageWriter_SubType(void* ptr){
	return new QByteArray(static_cast<QImageWriter*>(ptr)->subType());
}

int QImageWriter_SupportsOption(void* ptr, int option){
	return static_cast<QImageWriter*>(ptr)->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

int QImageWriter_Transformation(void* ptr){
	return static_cast<QImageWriter*>(ptr)->transformation();
}

int QImageWriter_Write(void* ptr, void* image){
	return static_cast<QImageWriter*>(ptr)->write(*static_cast<QImage*>(image));
}

void QImageWriter_DestroyQImageWriter(void* ptr){
	static_cast<QImageWriter*>(ptr)->~QImageWriter();
}

#include "qdragleaveevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QDrag>
#include <QDragLeaveEvent>
#include "_cgo_export.h"

class MyQDragLeaveEvent: public QDragLeaveEvent {
public:
};

void* QDragLeaveEvent_NewQDragLeaveEvent(){
	return new QDragLeaveEvent();
}

#include "qopenglfunctions_3_2_core.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopenglfunctions_1_0.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qpaintenginestate.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QRegion>
#include <QPaintEngine>
#include <QBrush>
#include <QPaintEngineState>
#include "_cgo_export.h"

class MyQPaintEngineState: public QPaintEngineState {
public:
};

void* QPaintEngineState_BackgroundBrush(void* ptr){
	return new QBrush(static_cast<QPaintEngineState*>(ptr)->backgroundBrush());
}

int QPaintEngineState_BackgroundMode(void* ptr){
	return static_cast<QPaintEngineState*>(ptr)->backgroundMode();
}

void* QPaintEngineState_Brush(void* ptr){
	return new QBrush(static_cast<QPaintEngineState*>(ptr)->brush());
}

int QPaintEngineState_BrushNeedsResolving(void* ptr){
	return static_cast<QPaintEngineState*>(ptr)->brushNeedsResolving();
}

int QPaintEngineState_ClipOperation(void* ptr){
	return static_cast<QPaintEngineState*>(ptr)->clipOperation();
}

void* QPaintEngineState_ClipRegion(void* ptr){
	return new QRegion(static_cast<QPaintEngineState*>(ptr)->clipRegion());
}

int QPaintEngineState_CompositionMode(void* ptr){
	return static_cast<QPaintEngineState*>(ptr)->compositionMode();
}

int QPaintEngineState_IsClipEnabled(void* ptr){
	return static_cast<QPaintEngineState*>(ptr)->isClipEnabled();
}

double QPaintEngineState_Opacity(void* ptr){
	return static_cast<double>(static_cast<QPaintEngineState*>(ptr)->opacity());
}

void* QPaintEngineState_Painter(void* ptr){
	return static_cast<QPaintEngineState*>(ptr)->painter();
}

int QPaintEngineState_PenNeedsResolving(void* ptr){
	return static_cast<QPaintEngineState*>(ptr)->penNeedsResolving();
}

int QPaintEngineState_RenderHints(void* ptr){
	return static_cast<QPaintEngineState*>(ptr)->renderHints();
}

#include "qintvalidator.h"
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QIntValidator>
#include "_cgo_export.h"

class MyQIntValidator: public QIntValidator {
public:
};

void QIntValidator_SetBottom(void* ptr, int v){
	static_cast<QIntValidator*>(ptr)->setBottom(v);
}

void QIntValidator_SetTop(void* ptr, int v){
	static_cast<QIntValidator*>(ptr)->setTop(v);
}

void* QIntValidator_NewQIntValidator(void* parent){
	return new QIntValidator(static_cast<QObject*>(parent));
}

void* QIntValidator_NewQIntValidator2(int minimum, int maximum, void* parent){
	return new QIntValidator(minimum, maximum, static_cast<QObject*>(parent));
}

int QIntValidator_Bottom(void* ptr){
	return static_cast<QIntValidator*>(ptr)->bottom();
}

void QIntValidator_SetRange(void* ptr, int bottom, int top){
	static_cast<QIntValidator*>(ptr)->setRange(bottom, top);
}

int QIntValidator_Top(void* ptr){
	return static_cast<QIntValidator*>(ptr)->top();
}

void QIntValidator_DestroyQIntValidator(void* ptr){
	static_cast<QIntValidator*>(ptr)->~QIntValidator();
}

#include "qkeyevent.h"
#include <QKeySequence>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QKeyEvent>
#include "_cgo_export.h"

class MyQKeyEvent: public QKeyEvent {
public:
};

int QKeyEvent_Matches(void* ptr, int key){
	return static_cast<QKeyEvent*>(ptr)->matches(static_cast<QKeySequence::StandardKey>(key));
}

int QKeyEvent_Count(void* ptr){
	return static_cast<QKeyEvent*>(ptr)->count();
}

int QKeyEvent_IsAutoRepeat(void* ptr){
	return static_cast<QKeyEvent*>(ptr)->isAutoRepeat();
}

int QKeyEvent_Key(void* ptr){
	return static_cast<QKeyEvent*>(ptr)->key();
}

int QKeyEvent_Modifiers(void* ptr){
	return static_cast<QKeyEvent*>(ptr)->modifiers();
}

char* QKeyEvent_Text(void* ptr){
	return static_cast<QKeyEvent*>(ptr)->text().toUtf8().data();
}

#include "qstylehints.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QStyleHints>
#include "_cgo_export.h"

class MyQStyleHints: public QStyleHints {
public:
void Signal_CursorFlashTimeChanged(int cursorFlashTime){callbackQStyleHintsCursorFlashTimeChanged(this->objectName().toUtf8().data(), cursorFlashTime);};
void Signal_KeyboardInputIntervalChanged(int keyboardInputInterval){callbackQStyleHintsKeyboardInputIntervalChanged(this->objectName().toUtf8().data(), keyboardInputInterval);};
void Signal_MouseDoubleClickIntervalChanged(int mouseDoubleClickInterval){callbackQStyleHintsMouseDoubleClickIntervalChanged(this->objectName().toUtf8().data(), mouseDoubleClickInterval);};
void Signal_StartDragDistanceChanged(int startDragDistance){callbackQStyleHintsStartDragDistanceChanged(this->objectName().toUtf8().data(), startDragDistance);};
void Signal_StartDragTimeChanged(int startDragTime){callbackQStyleHintsStartDragTimeChanged(this->objectName().toUtf8().data(), startDragTime);};
};

int QStyleHints_CursorFlashTime(void* ptr){
	return static_cast<QStyleHints*>(ptr)->cursorFlashTime();
}

double QStyleHints_FontSmoothingGamma(void* ptr){
	return static_cast<double>(static_cast<QStyleHints*>(ptr)->fontSmoothingGamma());
}

int QStyleHints_KeyboardAutoRepeatRate(void* ptr){
	return static_cast<QStyleHints*>(ptr)->keyboardAutoRepeatRate();
}

int QStyleHints_KeyboardInputInterval(void* ptr){
	return static_cast<QStyleHints*>(ptr)->keyboardInputInterval();
}

int QStyleHints_MouseDoubleClickInterval(void* ptr){
	return static_cast<QStyleHints*>(ptr)->mouseDoubleClickInterval();
}

int QStyleHints_MousePressAndHoldInterval(void* ptr){
	return static_cast<QStyleHints*>(ptr)->mousePressAndHoldInterval();
}

int QStyleHints_PasswordMaskDelay(void* ptr){
	return static_cast<QStyleHints*>(ptr)->passwordMaskDelay();
}

int QStyleHints_SetFocusOnTouchRelease(void* ptr){
	return static_cast<QStyleHints*>(ptr)->setFocusOnTouchRelease();
}

int QStyleHints_ShowIsFullScreen(void* ptr){
	return static_cast<QStyleHints*>(ptr)->showIsFullScreen();
}

int QStyleHints_SingleClickActivation(void* ptr){
	return static_cast<QStyleHints*>(ptr)->singleClickActivation();
}

int QStyleHints_StartDragDistance(void* ptr){
	return static_cast<QStyleHints*>(ptr)->startDragDistance();
}

int QStyleHints_StartDragTime(void* ptr){
	return static_cast<QStyleHints*>(ptr)->startDragTime();
}

int QStyleHints_StartDragVelocity(void* ptr){
	return static_cast<QStyleHints*>(ptr)->startDragVelocity();
}

int QStyleHints_TabFocusBehavior(void* ptr){
	return static_cast<QStyleHints*>(ptr)->tabFocusBehavior();
}

int QStyleHints_UseRtlExtensions(void* ptr){
	return static_cast<QStyleHints*>(ptr)->useRtlExtensions();
}

void QStyleHints_ConnectCursorFlashTimeChanged(void* ptr){
	QObject::connect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::cursorFlashTimeChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_CursorFlashTimeChanged));;
}

void QStyleHints_DisconnectCursorFlashTimeChanged(void* ptr){
	QObject::disconnect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::cursorFlashTimeChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_CursorFlashTimeChanged));;
}

void QStyleHints_ConnectKeyboardInputIntervalChanged(void* ptr){
	QObject::connect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::keyboardInputIntervalChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_KeyboardInputIntervalChanged));;
}

void QStyleHints_DisconnectKeyboardInputIntervalChanged(void* ptr){
	QObject::disconnect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::keyboardInputIntervalChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_KeyboardInputIntervalChanged));;
}

void QStyleHints_ConnectMouseDoubleClickIntervalChanged(void* ptr){
	QObject::connect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseDoubleClickIntervalChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_MouseDoubleClickIntervalChanged));;
}

void QStyleHints_DisconnectMouseDoubleClickIntervalChanged(void* ptr){
	QObject::disconnect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseDoubleClickIntervalChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_MouseDoubleClickIntervalChanged));;
}

void QStyleHints_ConnectStartDragDistanceChanged(void* ptr){
	QObject::connect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragDistanceChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_StartDragDistanceChanged));;
}

void QStyleHints_DisconnectStartDragDistanceChanged(void* ptr){
	QObject::disconnect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragDistanceChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_StartDragDistanceChanged));;
}

void QStyleHints_ConnectStartDragTimeChanged(void* ptr){
	QObject::connect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragTimeChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_StartDragTimeChanged));;
}

void QStyleHints_DisconnectStartDragTimeChanged(void* ptr){
	QObject::disconnect(static_cast<QStyleHints*>(ptr), static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragTimeChanged), static_cast<MyQStyleHints*>(ptr), static_cast<void (MyQStyleHints::*)(int)>(&MyQStyleHints::Signal_StartDragTimeChanged));;
}

#include "qopenglfunctions_2_1.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qpagesize.h"
#include <QSize>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QSizeF>
#include <QPageSize>
#include "_cgo_export.h"

class MyQPageSize: public QPageSize {
public:
};

void* QPageSize_NewQPageSize(){
	return new QPageSize();
}

void* QPageSize_NewQPageSize2(int pageSize){
	return new QPageSize(static_cast<QPageSize::PageSizeId>(pageSize));
}

void* QPageSize_NewQPageSize5(void* other){
	return new QPageSize(*static_cast<QPageSize*>(other));
}

void* QPageSize_NewQPageSize3(void* pointSize, char* name, int matchPolicy){
	return new QPageSize(*static_cast<QSize*>(pointSize), QString(name), static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

void* QPageSize_NewQPageSize4(void* size, int units, char* name, int matchPolicy){
	return new QPageSize(*static_cast<QSizeF*>(size), static_cast<QPageSize::Unit>(units), QString(name), static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

int QPageSize_QPageSize_DefinitionUnits2(int pageSizeId){
	return QPageSize::definitionUnits(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

int QPageSize_DefinitionUnits(void* ptr){
	return static_cast<QPageSize*>(ptr)->definitionUnits();
}

int QPageSize_QPageSize_Id2(void* pointSize, int matchPolicy){
	return QPageSize::id(*static_cast<QSize*>(pointSize), static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

int QPageSize_QPageSize_Id3(void* size, int units, int matchPolicy){
	return QPageSize::id(*static_cast<QSizeF*>(size), static_cast<QPageSize::Unit>(units), static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

int QPageSize_QPageSize_Id4(int windowsId){
	return QPageSize::id(windowsId);
}

int QPageSize_Id(void* ptr){
	return static_cast<QPageSize*>(ptr)->id();
}

int QPageSize_IsEquivalentTo(void* ptr, void* other){
	return static_cast<QPageSize*>(ptr)->isEquivalentTo(*static_cast<QPageSize*>(other));
}

int QPageSize_IsValid(void* ptr){
	return static_cast<QPageSize*>(ptr)->isValid();
}

char* QPageSize_QPageSize_Key2(int pageSizeId){
	return QPageSize::key(static_cast<QPageSize::PageSizeId>(pageSizeId)).toUtf8().data();
}

char* QPageSize_Key(void* ptr){
	return static_cast<QPageSize*>(ptr)->key().toUtf8().data();
}

char* QPageSize_QPageSize_Name2(int pageSizeId){
	return QPageSize::name(static_cast<QPageSize::PageSizeId>(pageSizeId)).toUtf8().data();
}

char* QPageSize_Name(void* ptr){
	return static_cast<QPageSize*>(ptr)->name().toUtf8().data();
}

void QPageSize_Swap(void* ptr, void* other){
	static_cast<QPageSize*>(ptr)->swap(*static_cast<QPageSize*>(other));
}

int QPageSize_QPageSize_WindowsId2(int pageSizeId){
	return QPageSize::windowsId(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

int QPageSize_WindowsId(void* ptr){
	return static_cast<QPageSize*>(ptr)->windowsId();
}

void QPageSize_DestroyQPageSize(void* ptr){
	static_cast<QPageSize*>(ptr)->~QPageSize();
}

#include "qmoveevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPoint>
#include <QString>
#include <QMoveEvent>
#include "_cgo_export.h"

class MyQMoveEvent: public QMoveEvent {
public:
};

void* QMoveEvent_NewQMoveEvent(void* pos, void* oldPos){
	return new QMoveEvent(*static_cast<QPoint*>(pos), *static_cast<QPoint*>(oldPos));
}

#include "qpaintdevicewindow.h"
#include <QModelIndex>
#include <QRect>
#include <QMetaObject>
#include <QRegion>
#include <QPaintDevice>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QPaintDeviceWindow>
#include "_cgo_export.h"

class MyQPaintDeviceWindow: public QPaintDeviceWindow {
public:
};

void QPaintDeviceWindow_Update3(void* ptr){
	QMetaObject::invokeMethod(static_cast<QPaintDeviceWindow*>(ptr), "update");
}

void QPaintDeviceWindow_Update(void* ptr, void* rect){
	static_cast<QPaintDeviceWindow*>(ptr)->update(*static_cast<QRect*>(rect));
}

void QPaintDeviceWindow_Update2(void* ptr, void* region){
	static_cast<QPaintDeviceWindow*>(ptr)->update(*static_cast<QRegion*>(region));
}

#include "qtextblockformat.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextBlock>
#include <QTextFormat>
#include <QTextBlockFormat>
#include "_cgo_export.h"

class MyQTextBlockFormat: public QTextBlockFormat {
public:
};

void* QTextBlockFormat_NewQTextBlockFormat(){
	return new QTextBlockFormat();
}

int QTextBlockFormat_Alignment(void* ptr){
	return static_cast<QTextBlockFormat*>(ptr)->alignment();
}

double QTextBlockFormat_BottomMargin(void* ptr){
	return static_cast<double>(static_cast<QTextBlockFormat*>(ptr)->bottomMargin());
}

int QTextBlockFormat_Indent(void* ptr){
	return static_cast<QTextBlockFormat*>(ptr)->indent();
}

int QTextBlockFormat_IsValid(void* ptr){
	return static_cast<QTextBlockFormat*>(ptr)->isValid();
}

double QTextBlockFormat_LeftMargin(void* ptr){
	return static_cast<double>(static_cast<QTextBlockFormat*>(ptr)->leftMargin());
}

double QTextBlockFormat_LineHeight2(void* ptr){
	return static_cast<double>(static_cast<QTextBlockFormat*>(ptr)->lineHeight());
}

double QTextBlockFormat_LineHeight(void* ptr, double scriptLineHeight, double scaling){
	return static_cast<double>(static_cast<QTextBlockFormat*>(ptr)->lineHeight(static_cast<qreal>(scriptLineHeight), static_cast<qreal>(scaling)));
}

int QTextBlockFormat_LineHeightType(void* ptr){
	return static_cast<QTextBlockFormat*>(ptr)->lineHeightType();
}

int QTextBlockFormat_NonBreakableLines(void* ptr){
	return static_cast<QTextBlockFormat*>(ptr)->nonBreakableLines();
}

int QTextBlockFormat_PageBreakPolicy(void* ptr){
	return static_cast<QTextBlockFormat*>(ptr)->pageBreakPolicy();
}

double QTextBlockFormat_RightMargin(void* ptr){
	return static_cast<double>(static_cast<QTextBlockFormat*>(ptr)->rightMargin());
}

void QTextBlockFormat_SetAlignment(void* ptr, int alignment){
	static_cast<QTextBlockFormat*>(ptr)->setAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QTextBlockFormat_SetBottomMargin(void* ptr, double margin){
	static_cast<QTextBlockFormat*>(ptr)->setBottomMargin(static_cast<qreal>(margin));
}

void QTextBlockFormat_SetIndent(void* ptr, int indentation){
	static_cast<QTextBlockFormat*>(ptr)->setIndent(indentation);
}

void QTextBlockFormat_SetLeftMargin(void* ptr, double margin){
	static_cast<QTextBlockFormat*>(ptr)->setLeftMargin(static_cast<qreal>(margin));
}

void QTextBlockFormat_SetLineHeight(void* ptr, double height, int heightType){
	static_cast<QTextBlockFormat*>(ptr)->setLineHeight(static_cast<qreal>(height), heightType);
}

void QTextBlockFormat_SetNonBreakableLines(void* ptr, int b){
	static_cast<QTextBlockFormat*>(ptr)->setNonBreakableLines(b != 0);
}

void QTextBlockFormat_SetPageBreakPolicy(void* ptr, int policy){
	static_cast<QTextBlockFormat*>(ptr)->setPageBreakPolicy(static_cast<QTextFormat::PageBreakFlag>(policy));
}

void QTextBlockFormat_SetRightMargin(void* ptr, double margin){
	static_cast<QTextBlockFormat*>(ptr)->setRightMargin(static_cast<qreal>(margin));
}

void QTextBlockFormat_SetTextIndent(void* ptr, double indent){
	static_cast<QTextBlockFormat*>(ptr)->setTextIndent(static_cast<qreal>(indent));
}

void QTextBlockFormat_SetTopMargin(void* ptr, double margin){
	static_cast<QTextBlockFormat*>(ptr)->setTopMargin(static_cast<qreal>(margin));
}

double QTextBlockFormat_TextIndent(void* ptr){
	return static_cast<double>(static_cast<QTextBlockFormat*>(ptr)->textIndent());
}

double QTextBlockFormat_TopMargin(void* ptr){
	return static_cast<double>(static_cast<QTextBlockFormat*>(ptr)->topMargin());
}

#include "qhoverevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPoint>
#include <QEvent>
#include <QPointF>
#include <QHoverEvent>
#include "_cgo_export.h"

class MyQHoverEvent: public QHoverEvent {
public:
};

void* QHoverEvent_NewQHoverEvent(int ty, void* pos, void* oldPos, int modifiers){
	return new QHoverEvent(static_cast<QEvent::Type>(ty), *static_cast<QPointF*>(pos), *static_cast<QPointF*>(oldPos), static_cast<Qt::KeyboardModifier>(modifiers));
}

#include "qcloseevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QCloseEvent>
#include "_cgo_export.h"

class MyQCloseEvent: public QCloseEvent {
public:
};

void* QCloseEvent_NewQCloseEvent(){
	return new QCloseEvent();
}

#include "qhelpevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QEvent>
#include <QPoint>
#include <QString>
#include <QHelpEvent>
#include "_cgo_export.h"

class MyQHelpEvent: public QHelpEvent {
public:
};

void* QHelpEvent_NewQHelpEvent(int ty, void* pos, void* globalPos){
	return new QHelpEvent(static_cast<QEvent::Type>(ty), *static_cast<QPoint*>(pos), *static_cast<QPoint*>(globalPos));
}

int QHelpEvent_GlobalX(void* ptr){
	return static_cast<QHelpEvent*>(ptr)->globalX();
}

int QHelpEvent_GlobalY(void* ptr){
	return static_cast<QHelpEvent*>(ptr)->globalY();
}

int QHelpEvent_X(void* ptr){
	return static_cast<QHelpEvent*>(ptr)->x();
}

int QHelpEvent_Y(void* ptr){
	return static_cast<QHelpEvent*>(ptr)->y();
}

#include "qpainter.h"
#include <QTextOption>
#include <QRectF>
#include <QPaintDevice>
#include <QString>
#include <QVariant>
#include <QLineF>
#include <QPen>
#include <QColor>
#include <QRegion>
#include <QPainterPath>
#include <QRect>
#include <QPicture>
#include <QPolygon>
#include <QStaticText>
#include <QLine>
#include <QImage>
#include <QGlyphRun>
#include <QPolygonF>
#include <QUrl>
#include <QModelIndex>
#include <QBrush>
#include <QPixmap>
#include <QFont>
#include <QPoint>
#include <QPointF>
#include <QTransform>
#include <QPainter>
#include "_cgo_export.h"

class MyQPainter: public QPainter {
public:
};

void* QPainter_NewQPainter2(void* device){
	return new QPainter(static_cast<QPaintDevice*>(device));
}

int QPainter_Begin(void* ptr, void* device){
	return static_cast<QPainter*>(ptr)->begin(static_cast<QPaintDevice*>(device));
}

void QPainter_DrawArc(void* ptr, void* rectangle, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawArc(*static_cast<QRectF*>(rectangle), startAngle, spanAngle);
}

void QPainter_DrawChord(void* ptr, void* rectangle, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawChord(*static_cast<QRectF*>(rectangle), startAngle, spanAngle);
}

void QPainter_DrawConvexPolygon2(void* ptr, void* points, int pointCount){
	static_cast<QPainter*>(ptr)->drawConvexPolygon(static_cast<QPoint*>(points), pointCount);
}

void QPainter_DrawConvexPolygon(void* ptr, void* points, int pointCount){
	static_cast<QPainter*>(ptr)->drawConvexPolygon(static_cast<QPointF*>(points), pointCount);
}

void QPainter_DrawEllipse2(void* ptr, void* rectangle){
	static_cast<QPainter*>(ptr)->drawEllipse(*static_cast<QRect*>(rectangle));
}

void QPainter_DrawEllipse(void* ptr, void* rectangle){
	static_cast<QPainter*>(ptr)->drawEllipse(*static_cast<QRectF*>(rectangle));
}

void QPainter_DrawGlyphRun(void* ptr, void* position, void* glyphs){
	static_cast<QPainter*>(ptr)->drawGlyphRun(*static_cast<QPointF*>(position), *static_cast<QGlyphRun*>(glyphs));
}

void QPainter_DrawImage3(void* ptr, void* point, void* image){
	static_cast<QPainter*>(ptr)->drawImage(*static_cast<QPointF*>(point), *static_cast<QImage*>(image));
}

void QPainter_DrawImage(void* ptr, void* target, void* image, void* source, int flags){
	static_cast<QPainter*>(ptr)->drawImage(*static_cast<QRectF*>(target), *static_cast<QImage*>(image), *static_cast<QRectF*>(source), static_cast<Qt::ImageConversionFlag>(flags));
}

void QPainter_DrawLines2(void* ptr, void* lines, int lineCount){
	static_cast<QPainter*>(ptr)->drawLines(static_cast<QLine*>(lines), lineCount);
}

void QPainter_DrawPicture(void* ptr, void* point, void* picture){
	static_cast<QPainter*>(ptr)->drawPicture(*static_cast<QPointF*>(point), *static_cast<QPicture*>(picture));
}

void QPainter_DrawPie(void* ptr, void* rectangle, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawPie(*static_cast<QRectF*>(rectangle), startAngle, spanAngle);
}

void QPainter_DrawPixmap5(void* ptr, void* point, void* pixmap){
	static_cast<QPainter*>(ptr)->drawPixmap(*static_cast<QPointF*>(point), *static_cast<QPixmap*>(pixmap));
}

void QPainter_DrawPixmap(void* ptr, void* target, void* pixmap, void* source){
	static_cast<QPainter*>(ptr)->drawPixmap(*static_cast<QRectF*>(target), *static_cast<QPixmap*>(pixmap), *static_cast<QRectF*>(source));
}

void QPainter_DrawRects2(void* ptr, void* rectangles, int rectCount){
	static_cast<QPainter*>(ptr)->drawRects(static_cast<QRect*>(rectangles), rectCount);
}

void QPainter_DrawRects(void* ptr, void* rectangles, int rectCount){
	static_cast<QPainter*>(ptr)->drawRects(static_cast<QRectF*>(rectangles), rectCount);
}

void QPainter_DrawText(void* ptr, void* position, char* text){
	static_cast<QPainter*>(ptr)->drawText(*static_cast<QPointF*>(position), QString(text));
}

void QPainter_DrawText5(void* ptr, void* rectangle, int flags, char* text, void* boundingRect){
	static_cast<QPainter*>(ptr)->drawText(*static_cast<QRect*>(rectangle), flags, QString(text), static_cast<QRect*>(boundingRect));
}

void QPainter_DrawText8(void* ptr, void* rectangle, char* text, void* option){
	static_cast<QPainter*>(ptr)->drawText(*static_cast<QRectF*>(rectangle), QString(text), *static_cast<QTextOption*>(option));
}

void QPainter_DrawText4(void* ptr, void* rectangle, int flags, char* text, void* boundingRect){
	static_cast<QPainter*>(ptr)->drawText(*static_cast<QRectF*>(rectangle), flags, QString(text), static_cast<QRectF*>(boundingRect));
}

void QPainter_DrawTiledPixmap(void* ptr, void* rectangle, void* pixmap, void* position){
	static_cast<QPainter*>(ptr)->drawTiledPixmap(*static_cast<QRectF*>(rectangle), *static_cast<QPixmap*>(pixmap), *static_cast<QPointF*>(position));
}

void QPainter_EraseRect(void* ptr, void* rectangle){
	static_cast<QPainter*>(ptr)->eraseRect(*static_cast<QRectF*>(rectangle));
}

void QPainter_FillRect5(void* ptr, void* rectangle, void* brush){
	static_cast<QPainter*>(ptr)->fillRect(*static_cast<QRect*>(rectangle), *static_cast<QBrush*>(brush));
}

void QPainter_FillRect6(void* ptr, void* rectangle, void* color){
	static_cast<QPainter*>(ptr)->fillRect(*static_cast<QRect*>(rectangle), *static_cast<QColor*>(color));
}

void QPainter_FillRect(void* ptr, void* rectangle, void* brush){
	static_cast<QPainter*>(ptr)->fillRect(*static_cast<QRectF*>(rectangle), *static_cast<QBrush*>(brush));
}

void QPainter_FillRect7(void* ptr, void* rectangle, void* color){
	static_cast<QPainter*>(ptr)->fillRect(*static_cast<QRectF*>(rectangle), *static_cast<QColor*>(color));
}

void QPainter_Rotate(void* ptr, double angle){
	static_cast<QPainter*>(ptr)->rotate(static_cast<qreal>(angle));
}

void QPainter_SetBackground(void* ptr, void* brush){
	static_cast<QPainter*>(ptr)->setBackground(*static_cast<QBrush*>(brush));
}

void QPainter_SetBrushOrigin(void* ptr, void* position){
	static_cast<QPainter*>(ptr)->setBrushOrigin(*static_cast<QPointF*>(position));
}

void QPainter_SetClipPath(void* ptr, void* path, int operation){
	static_cast<QPainter*>(ptr)->setClipPath(*static_cast<QPainterPath*>(path), static_cast<Qt::ClipOperation>(operation));
}

void QPainter_SetClipRect3(void* ptr, void* rectangle, int operation){
	static_cast<QPainter*>(ptr)->setClipRect(*static_cast<QRect*>(rectangle), static_cast<Qt::ClipOperation>(operation));
}

void QPainter_SetClipRect(void* ptr, void* rectangle, int operation){
	static_cast<QPainter*>(ptr)->setClipRect(*static_cast<QRectF*>(rectangle), static_cast<Qt::ClipOperation>(operation));
}

void QPainter_SetClipRegion(void* ptr, void* region, int operation){
	static_cast<QPainter*>(ptr)->setClipRegion(*static_cast<QRegion*>(region), static_cast<Qt::ClipOperation>(operation));
}

void QPainter_SetViewport(void* ptr, void* rectangle){
	static_cast<QPainter*>(ptr)->setViewport(*static_cast<QRect*>(rectangle));
}

void QPainter_SetWindow(void* ptr, void* rectangle){
	static_cast<QPainter*>(ptr)->setWindow(*static_cast<QRect*>(rectangle));
}

void* QPainter_NewQPainter(){
	return new QPainter();
}

void* QPainter_Background(void* ptr){
	return new QBrush(static_cast<QPainter*>(ptr)->background());
}

int QPainter_BackgroundMode(void* ptr){
	return static_cast<QPainter*>(ptr)->backgroundMode();
}

void QPainter_BeginNativePainting(void* ptr){
	static_cast<QPainter*>(ptr)->beginNativePainting();
}

void* QPainter_Brush(void* ptr){
	return new QBrush(static_cast<QPainter*>(ptr)->brush());
}

void* QPainter_ClipRegion(void* ptr){
	return new QRegion(static_cast<QPainter*>(ptr)->clipRegion());
}

int QPainter_CompositionMode(void* ptr){
	return static_cast<QPainter*>(ptr)->compositionMode();
}

void* QPainter_Device(void* ptr){
	return static_cast<QPainter*>(ptr)->device();
}

void QPainter_DrawArc2(void* ptr, void* rectangle, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawArc(*static_cast<QRect*>(rectangle), startAngle, spanAngle);
}

void QPainter_DrawArc3(void* ptr, int x, int y, int width, int height, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawArc(x, y, width, height, startAngle, spanAngle);
}

void QPainter_DrawChord2(void* ptr, void* rectangle, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawChord(*static_cast<QRect*>(rectangle), startAngle, spanAngle);
}

void QPainter_DrawChord3(void* ptr, int x, int y, int width, int height, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawChord(x, y, width, height, startAngle, spanAngle);
}

void QPainter_DrawConvexPolygon4(void* ptr, void* polygon){
	static_cast<QPainter*>(ptr)->drawConvexPolygon(*static_cast<QPolygon*>(polygon));
}

void QPainter_DrawConvexPolygon3(void* ptr, void* polygon){
	static_cast<QPainter*>(ptr)->drawConvexPolygon(*static_cast<QPolygonF*>(polygon));
}

void QPainter_DrawEllipse5(void* ptr, void* center, int rx, int ry){
	static_cast<QPainter*>(ptr)->drawEllipse(*static_cast<QPoint*>(center), rx, ry);
}

void QPainter_DrawEllipse4(void* ptr, void* center, double rx, double ry){
	static_cast<QPainter*>(ptr)->drawEllipse(*static_cast<QPointF*>(center), static_cast<qreal>(rx), static_cast<qreal>(ry));
}

void QPainter_DrawEllipse3(void* ptr, int x, int y, int width, int height){
	static_cast<QPainter*>(ptr)->drawEllipse(x, y, width, height);
}

void QPainter_DrawImage4(void* ptr, void* point, void* image){
	static_cast<QPainter*>(ptr)->drawImage(*static_cast<QPoint*>(point), *static_cast<QImage*>(image));
}

void QPainter_DrawImage6(void* ptr, void* point, void* image, void* source, int flags){
	static_cast<QPainter*>(ptr)->drawImage(*static_cast<QPoint*>(point), *static_cast<QImage*>(image), *static_cast<QRect*>(source), static_cast<Qt::ImageConversionFlag>(flags));
}

void QPainter_DrawImage5(void* ptr, void* point, void* image, void* source, int flags){
	static_cast<QPainter*>(ptr)->drawImage(*static_cast<QPointF*>(point), *static_cast<QImage*>(image), *static_cast<QRectF*>(source), static_cast<Qt::ImageConversionFlag>(flags));
}

void QPainter_DrawImage8(void* ptr, void* rectangle, void* image){
	static_cast<QPainter*>(ptr)->drawImage(*static_cast<QRect*>(rectangle), *static_cast<QImage*>(image));
}

void QPainter_DrawImage2(void* ptr, void* target, void* image, void* source, int flags){
	static_cast<QPainter*>(ptr)->drawImage(*static_cast<QRect*>(target), *static_cast<QImage*>(image), *static_cast<QRect*>(source), static_cast<Qt::ImageConversionFlag>(flags));
}

void QPainter_DrawImage7(void* ptr, void* rectangle, void* image){
	static_cast<QPainter*>(ptr)->drawImage(*static_cast<QRectF*>(rectangle), *static_cast<QImage*>(image));
}

void QPainter_DrawImage9(void* ptr, int x, int y, void* image, int sx, int sy, int sw, int sh, int flags){
	static_cast<QPainter*>(ptr)->drawImage(x, y, *static_cast<QImage*>(image), sx, sy, sw, sh, static_cast<Qt::ImageConversionFlag>(flags));
}

void QPainter_DrawLine2(void* ptr, void* line){
	static_cast<QPainter*>(ptr)->drawLine(*static_cast<QLine*>(line));
}

void QPainter_DrawLine(void* ptr, void* line){
	static_cast<QPainter*>(ptr)->drawLine(*static_cast<QLineF*>(line));
}

void QPainter_DrawLine3(void* ptr, void* p1, void* p2){
	static_cast<QPainter*>(ptr)->drawLine(*static_cast<QPoint*>(p1), *static_cast<QPoint*>(p2));
}

void QPainter_DrawLine4(void* ptr, void* p1, void* p2){
	static_cast<QPainter*>(ptr)->drawLine(*static_cast<QPointF*>(p1), *static_cast<QPointF*>(p2));
}

void QPainter_DrawLine5(void* ptr, int x1, int y1, int x2, int y2){
	static_cast<QPainter*>(ptr)->drawLine(x1, y1, x2, y2);
}

void QPainter_DrawLines(void* ptr, void* lines, int lineCount){
	static_cast<QPainter*>(ptr)->drawLines(static_cast<QLineF*>(lines), lineCount);
}

void QPainter_DrawLines4(void* ptr, void* pointPairs, int lineCount){
	static_cast<QPainter*>(ptr)->drawLines(static_cast<QPoint*>(pointPairs), lineCount);
}

void QPainter_DrawLines3(void* ptr, void* pointPairs, int lineCount){
	static_cast<QPainter*>(ptr)->drawLines(static_cast<QPointF*>(pointPairs), lineCount);
}

void QPainter_DrawPath(void* ptr, void* path){
	static_cast<QPainter*>(ptr)->drawPath(*static_cast<QPainterPath*>(path));
}

void QPainter_DrawPicture2(void* ptr, void* point, void* picture){
	static_cast<QPainter*>(ptr)->drawPicture(*static_cast<QPoint*>(point), *static_cast<QPicture*>(picture));
}

void QPainter_DrawPicture3(void* ptr, int x, int y, void* picture){
	static_cast<QPainter*>(ptr)->drawPicture(x, y, *static_cast<QPicture*>(picture));
}

void QPainter_DrawPie2(void* ptr, void* rectangle, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawPie(*static_cast<QRect*>(rectangle), startAngle, spanAngle);
}

void QPainter_DrawPie3(void* ptr, int x, int y, int width, int height, int startAngle, int spanAngle){
	static_cast<QPainter*>(ptr)->drawPie(x, y, width, height, startAngle, spanAngle);
}

void QPainter_DrawPixmap6(void* ptr, void* point, void* pixmap){
	static_cast<QPainter*>(ptr)->drawPixmap(*static_cast<QPoint*>(point), *static_cast<QPixmap*>(pixmap));
}

void QPainter_DrawPixmap4(void* ptr, void* point, void* pixmap, void* source){
	static_cast<QPainter*>(ptr)->drawPixmap(*static_cast<QPoint*>(point), *static_cast<QPixmap*>(pixmap), *static_cast<QRect*>(source));
}

void QPainter_DrawPixmap3(void* ptr, void* point, void* pixmap, void* source){
	static_cast<QPainter*>(ptr)->drawPixmap(*static_cast<QPointF*>(point), *static_cast<QPixmap*>(pixmap), *static_cast<QRectF*>(source));
}

void QPainter_DrawPixmap8(void* ptr, void* rectangle, void* pixmap){
	static_cast<QPainter*>(ptr)->drawPixmap(*static_cast<QRect*>(rectangle), *static_cast<QPixmap*>(pixmap));
}

void QPainter_DrawPixmap2(void* ptr, void* target, void* pixmap, void* source){
	static_cast<QPainter*>(ptr)->drawPixmap(*static_cast<QRect*>(target), *static_cast<QPixmap*>(pixmap), *static_cast<QRect*>(source));
}

void QPainter_DrawPixmap7(void* ptr, int x, int y, void* pixmap){
	static_cast<QPainter*>(ptr)->drawPixmap(x, y, *static_cast<QPixmap*>(pixmap));
}

void QPainter_DrawPixmap11(void* ptr, int x, int y, void* pixmap, int sx, int sy, int sw, int sh){
	static_cast<QPainter*>(ptr)->drawPixmap(x, y, *static_cast<QPixmap*>(pixmap), sx, sy, sw, sh);
}

void QPainter_DrawPixmap10(void* ptr, int x, int y, int w, int h, void* pixmap, int sx, int sy, int sw, int sh){
	static_cast<QPainter*>(ptr)->drawPixmap(x, y, w, h, *static_cast<QPixmap*>(pixmap), sx, sy, sw, sh);
}

void QPainter_DrawPixmap9(void* ptr, int x, int y, int width, int height, void* pixmap){
	static_cast<QPainter*>(ptr)->drawPixmap(x, y, width, height, *static_cast<QPixmap*>(pixmap));
}

void QPainter_DrawPoint2(void* ptr, void* position){
	static_cast<QPainter*>(ptr)->drawPoint(*static_cast<QPoint*>(position));
}

void QPainter_DrawPoint(void* ptr, void* position){
	static_cast<QPainter*>(ptr)->drawPoint(*static_cast<QPointF*>(position));
}

void QPainter_DrawPoint3(void* ptr, int x, int y){
	static_cast<QPainter*>(ptr)->drawPoint(x, y);
}

void QPainter_DrawPoints2(void* ptr, void* points, int pointCount){
	static_cast<QPainter*>(ptr)->drawPoints(static_cast<QPoint*>(points), pointCount);
}

void QPainter_DrawPoints(void* ptr, void* points, int pointCount){
	static_cast<QPainter*>(ptr)->drawPoints(static_cast<QPointF*>(points), pointCount);
}

void QPainter_DrawPoints4(void* ptr, void* points){
	static_cast<QPainter*>(ptr)->drawPoints(*static_cast<QPolygon*>(points));
}

void QPainter_DrawPoints3(void* ptr, void* points){
	static_cast<QPainter*>(ptr)->drawPoints(*static_cast<QPolygonF*>(points));
}

void QPainter_DrawPolygon2(void* ptr, void* points, int pointCount, int fillRule){
	static_cast<QPainter*>(ptr)->drawPolygon(static_cast<QPoint*>(points), pointCount, static_cast<Qt::FillRule>(fillRule));
}

void QPainter_DrawPolygon(void* ptr, void* points, int pointCount, int fillRule){
	static_cast<QPainter*>(ptr)->drawPolygon(static_cast<QPointF*>(points), pointCount, static_cast<Qt::FillRule>(fillRule));
}

void QPainter_DrawPolygon4(void* ptr, void* points, int fillRule){
	static_cast<QPainter*>(ptr)->drawPolygon(*static_cast<QPolygon*>(points), static_cast<Qt::FillRule>(fillRule));
}

void QPainter_DrawPolygon3(void* ptr, void* points, int fillRule){
	static_cast<QPainter*>(ptr)->drawPolygon(*static_cast<QPolygonF*>(points), static_cast<Qt::FillRule>(fillRule));
}

void QPainter_DrawPolyline2(void* ptr, void* points, int pointCount){
	static_cast<QPainter*>(ptr)->drawPolyline(static_cast<QPoint*>(points), pointCount);
}

void QPainter_DrawPolyline(void* ptr, void* points, int pointCount){
	static_cast<QPainter*>(ptr)->drawPolyline(static_cast<QPointF*>(points), pointCount);
}

void QPainter_DrawPolyline4(void* ptr, void* points){
	static_cast<QPainter*>(ptr)->drawPolyline(*static_cast<QPolygon*>(points));
}

void QPainter_DrawPolyline3(void* ptr, void* points){
	static_cast<QPainter*>(ptr)->drawPolyline(*static_cast<QPolygonF*>(points));
}

void QPainter_DrawRect2(void* ptr, void* rectangle){
	static_cast<QPainter*>(ptr)->drawRect(*static_cast<QRect*>(rectangle));
}

void QPainter_DrawRect(void* ptr, void* rectangle){
	static_cast<QPainter*>(ptr)->drawRect(*static_cast<QRectF*>(rectangle));
}

void QPainter_DrawRect3(void* ptr, int x, int y, int width, int height){
	static_cast<QPainter*>(ptr)->drawRect(x, y, width, height);
}

void QPainter_DrawRoundedRect2(void* ptr, void* rect, double xRadius, double yRadius, int mode){
	static_cast<QPainter*>(ptr)->drawRoundedRect(*static_cast<QRect*>(rect), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_DrawRoundedRect(void* ptr, void* rect, double xRadius, double yRadius, int mode){
	static_cast<QPainter*>(ptr)->drawRoundedRect(*static_cast<QRectF*>(rect), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_DrawRoundedRect3(void* ptr, int x, int y, int w, int h, double xRadius, double yRadius, int mode){
	static_cast<QPainter*>(ptr)->drawRoundedRect(x, y, w, h, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_DrawStaticText2(void* ptr, void* topLeftPosition, void* staticText){
	static_cast<QPainter*>(ptr)->drawStaticText(*static_cast<QPoint*>(topLeftPosition), *static_cast<QStaticText*>(staticText));
}

void QPainter_DrawStaticText(void* ptr, void* topLeftPosition, void* staticText){
	static_cast<QPainter*>(ptr)->drawStaticText(*static_cast<QPointF*>(topLeftPosition), *static_cast<QStaticText*>(staticText));
}

void QPainter_DrawStaticText3(void* ptr, int left, int top, void* staticText){
	static_cast<QPainter*>(ptr)->drawStaticText(left, top, *static_cast<QStaticText*>(staticText));
}

void QPainter_DrawText3(void* ptr, void* position, char* text){
	static_cast<QPainter*>(ptr)->drawText(*static_cast<QPoint*>(position), QString(text));
}

void QPainter_DrawText6(void* ptr, int x, int y, char* text){
	static_cast<QPainter*>(ptr)->drawText(x, y, QString(text));
}

void QPainter_DrawText7(void* ptr, int x, int y, int width, int height, int flags, char* text, void* boundingRect){
	static_cast<QPainter*>(ptr)->drawText(x, y, width, height, flags, QString(text), static_cast<QRect*>(boundingRect));
}

void QPainter_DrawTiledPixmap2(void* ptr, void* rectangle, void* pixmap, void* position){
	static_cast<QPainter*>(ptr)->drawTiledPixmap(*static_cast<QRect*>(rectangle), *static_cast<QPixmap*>(pixmap), *static_cast<QPoint*>(position));
}

void QPainter_DrawTiledPixmap3(void* ptr, int x, int y, int width, int height, void* pixmap, int sx, int sy){
	static_cast<QPainter*>(ptr)->drawTiledPixmap(x, y, width, height, *static_cast<QPixmap*>(pixmap), sx, sy);
}

int QPainter_End(void* ptr){
	return static_cast<QPainter*>(ptr)->end();
}

void QPainter_EndNativePainting(void* ptr){
	static_cast<QPainter*>(ptr)->endNativePainting();
}

void QPainter_EraseRect2(void* ptr, void* rectangle){
	static_cast<QPainter*>(ptr)->eraseRect(*static_cast<QRect*>(rectangle));
}

void QPainter_EraseRect3(void* ptr, int x, int y, int width, int height){
	static_cast<QPainter*>(ptr)->eraseRect(x, y, width, height);
}

void QPainter_FillPath(void* ptr, void* path, void* brush){
	static_cast<QPainter*>(ptr)->fillPath(*static_cast<QPainterPath*>(path), *static_cast<QBrush*>(brush));
}

void QPainter_FillRect3(void* ptr, void* rectangle, int style){
	static_cast<QPainter*>(ptr)->fillRect(*static_cast<QRect*>(rectangle), static_cast<Qt::BrushStyle>(style));
}

void QPainter_FillRect11(void* ptr, void* rectangle, int color){
	static_cast<QPainter*>(ptr)->fillRect(*static_cast<QRect*>(rectangle), static_cast<Qt::GlobalColor>(color));
}

void QPainter_FillRect4(void* ptr, void* rectangle, int style){
	static_cast<QPainter*>(ptr)->fillRect(*static_cast<QRectF*>(rectangle), static_cast<Qt::BrushStyle>(style));
}

void QPainter_FillRect12(void* ptr, void* rectangle, int color){
	static_cast<QPainter*>(ptr)->fillRect(*static_cast<QRectF*>(rectangle), static_cast<Qt::GlobalColor>(color));
}

void QPainter_FillRect2(void* ptr, int x, int y, int width, int height, int style){
	static_cast<QPainter*>(ptr)->fillRect(x, y, width, height, static_cast<Qt::BrushStyle>(style));
}

void QPainter_FillRect10(void* ptr, int x, int y, int width, int height, int color){
	static_cast<QPainter*>(ptr)->fillRect(x, y, width, height, static_cast<Qt::GlobalColor>(color));
}

void QPainter_FillRect8(void* ptr, int x, int y, int width, int height, void* brush){
	static_cast<QPainter*>(ptr)->fillRect(x, y, width, height, *static_cast<QBrush*>(brush));
}

void QPainter_FillRect9(void* ptr, int x, int y, int width, int height, void* color){
	static_cast<QPainter*>(ptr)->fillRect(x, y, width, height, *static_cast<QColor*>(color));
}

int QPainter_HasClipping(void* ptr){
	return static_cast<QPainter*>(ptr)->hasClipping();
}

int QPainter_IsActive(void* ptr){
	return static_cast<QPainter*>(ptr)->isActive();
}

int QPainter_LayoutDirection(void* ptr){
	return static_cast<QPainter*>(ptr)->layoutDirection();
}

double QPainter_Opacity(void* ptr){
	return static_cast<double>(static_cast<QPainter*>(ptr)->opacity());
}

void* QPainter_PaintEngine(void* ptr){
	return static_cast<QPainter*>(ptr)->paintEngine();
}

int QPainter_RenderHints(void* ptr){
	return static_cast<QPainter*>(ptr)->renderHints();
}

void QPainter_ResetTransform(void* ptr){
	static_cast<QPainter*>(ptr)->resetTransform();
}

void QPainter_Restore(void* ptr){
	static_cast<QPainter*>(ptr)->restore();
}

void QPainter_Save(void* ptr){
	static_cast<QPainter*>(ptr)->save();
}

void QPainter_Scale(void* ptr, double sx, double sy){
	static_cast<QPainter*>(ptr)->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
}

void QPainter_SetBackgroundMode(void* ptr, int mode){
	static_cast<QPainter*>(ptr)->setBackgroundMode(static_cast<Qt::BGMode>(mode));
}

void QPainter_SetBrush2(void* ptr, int style){
	static_cast<QPainter*>(ptr)->setBrush(static_cast<Qt::BrushStyle>(style));
}

void QPainter_SetBrush(void* ptr, void* brush){
	static_cast<QPainter*>(ptr)->setBrush(*static_cast<QBrush*>(brush));
}

void QPainter_SetBrushOrigin2(void* ptr, void* position){
	static_cast<QPainter*>(ptr)->setBrushOrigin(*static_cast<QPoint*>(position));
}

void QPainter_SetBrushOrigin3(void* ptr, int x, int y){
	static_cast<QPainter*>(ptr)->setBrushOrigin(x, y);
}

void QPainter_SetClipRect2(void* ptr, int x, int y, int width, int height, int operation){
	static_cast<QPainter*>(ptr)->setClipRect(x, y, width, height, static_cast<Qt::ClipOperation>(operation));
}

void QPainter_SetClipping(void* ptr, int enable){
	static_cast<QPainter*>(ptr)->setClipping(enable != 0);
}

void QPainter_SetCompositionMode(void* ptr, int mode){
	static_cast<QPainter*>(ptr)->setCompositionMode(static_cast<QPainter::CompositionMode>(mode));
}

void QPainter_SetFont(void* ptr, void* font){
	static_cast<QPainter*>(ptr)->setFont(*static_cast<QFont*>(font));
}

void QPainter_SetLayoutDirection(void* ptr, int direction){
	static_cast<QPainter*>(ptr)->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QPainter_SetOpacity(void* ptr, double opacity){
	static_cast<QPainter*>(ptr)->setOpacity(static_cast<qreal>(opacity));
}

void QPainter_SetPen3(void* ptr, int style){
	static_cast<QPainter*>(ptr)->setPen(static_cast<Qt::PenStyle>(style));
}

void QPainter_SetPen2(void* ptr, void* color){
	static_cast<QPainter*>(ptr)->setPen(*static_cast<QColor*>(color));
}

void QPainter_SetPen(void* ptr, void* pen){
	static_cast<QPainter*>(ptr)->setPen(*static_cast<QPen*>(pen));
}

void QPainter_SetRenderHint(void* ptr, int hint, int on){
	static_cast<QPainter*>(ptr)->setRenderHint(static_cast<QPainter::RenderHint>(hint), on != 0);
}

void QPainter_SetRenderHints(void* ptr, int hints, int on){
	static_cast<QPainter*>(ptr)->setRenderHints(static_cast<QPainter::RenderHint>(hints), on != 0);
}

void QPainter_SetTransform(void* ptr, void* transform, int combine){
	static_cast<QPainter*>(ptr)->setTransform(*static_cast<QTransform*>(transform), combine != 0);
}

void QPainter_SetViewTransformEnabled(void* ptr, int enable){
	static_cast<QPainter*>(ptr)->setViewTransformEnabled(enable != 0);
}

void QPainter_SetViewport2(void* ptr, int x, int y, int width, int height){
	static_cast<QPainter*>(ptr)->setViewport(x, y, width, height);
}

void QPainter_SetWindow2(void* ptr, int x, int y, int width, int height){
	static_cast<QPainter*>(ptr)->setWindow(x, y, width, height);
}

void QPainter_SetWorldMatrixEnabled(void* ptr, int enable){
	static_cast<QPainter*>(ptr)->setWorldMatrixEnabled(enable != 0);
}

void QPainter_SetWorldTransform(void* ptr, void* matrix, int combine){
	static_cast<QPainter*>(ptr)->setWorldTransform(*static_cast<QTransform*>(matrix), combine != 0);
}

void QPainter_Shear(void* ptr, double sh, double sv){
	static_cast<QPainter*>(ptr)->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QPainter_StrokePath(void* ptr, void* path, void* pen){
	static_cast<QPainter*>(ptr)->strokePath(*static_cast<QPainterPath*>(path), *static_cast<QPen*>(pen));
}

int QPainter_TestRenderHint(void* ptr, int hint){
	return static_cast<QPainter*>(ptr)->testRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QPainter_Translate2(void* ptr, void* offset){
	static_cast<QPainter*>(ptr)->translate(*static_cast<QPoint*>(offset));
}

void QPainter_Translate(void* ptr, void* offset){
	static_cast<QPainter*>(ptr)->translate(*static_cast<QPointF*>(offset));
}

void QPainter_Translate3(void* ptr, double dx, double dy){
	static_cast<QPainter*>(ptr)->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

int QPainter_ViewTransformEnabled(void* ptr){
	return static_cast<QPainter*>(ptr)->viewTransformEnabled();
}

int QPainter_WorldMatrixEnabled(void* ptr){
	return static_cast<QPainter*>(ptr)->worldMatrixEnabled();
}

void QPainter_DestroyQPainter(void* ptr){
	static_cast<QPainter*>(ptr)->~QPainter();
}

#include "qsyntaxhighlighter.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextBlock>
#include <QTextDocument>
#include <QMetaObject>
#include <QString>
#include <QSyntaxHighlighter>
#include "_cgo_export.h"

class MyQSyntaxHighlighter: public QSyntaxHighlighter {
public:
};

void* QSyntaxHighlighter_Document(void* ptr){
	return static_cast<QSyntaxHighlighter*>(ptr)->document();
}

void QSyntaxHighlighter_Rehighlight(void* ptr){
	QMetaObject::invokeMethod(static_cast<QSyntaxHighlighter*>(ptr), "rehighlight");
}

void QSyntaxHighlighter_RehighlightBlock(void* ptr, void* block){
	QMetaObject::invokeMethod(static_cast<QSyntaxHighlighter*>(ptr), "rehighlightBlock", Q_ARG(QTextBlock, *static_cast<QTextBlock*>(block)));
}

void QSyntaxHighlighter_SetDocument(void* ptr, void* doc){
	static_cast<QSyntaxHighlighter*>(ptr)->setDocument(static_cast<QTextDocument*>(doc));
}

void QSyntaxHighlighter_DestroyQSyntaxHighlighter(void* ptr){
	static_cast<QSyntaxHighlighter*>(ptr)->~QSyntaxHighlighter();
}

#include "qicondragevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QIcon>
#include <QIconDragEvent>
#include "_cgo_export.h"

class MyQIconDragEvent: public QIconDragEvent {
public:
};

void* QIconDragEvent_NewQIconDragEvent(){
	return new QIconDragEvent();
}

#include "qtextlist.h"
#include <QList>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextListFormat>
#include <QList>
#include <QTextBlock>
#include <QTextList>
#include "_cgo_export.h"

class MyQTextList: public QTextList {
public:
};

int QTextList_ItemNumber(void* ptr, void* block){
	return static_cast<QTextList*>(ptr)->itemNumber(*static_cast<QTextBlock*>(block));
}

char* QTextList_ItemText(void* ptr, void* block){
	return static_cast<QTextList*>(ptr)->itemText(*static_cast<QTextBlock*>(block)).toUtf8().data();
}

void QTextList_Add(void* ptr, void* block){
	static_cast<QTextList*>(ptr)->add(*static_cast<QTextBlock*>(block));
}

int QTextList_Count(void* ptr){
	return static_cast<QTextList*>(ptr)->count();
}

void QTextList_RemoveItem(void* ptr, int i){
	static_cast<QTextList*>(ptr)->removeItem(i);
}

void QTextList_SetFormat(void* ptr, void* format){
	static_cast<QTextList*>(ptr)->setFormat(*static_cast<QTextListFormat*>(format));
}

#include "qopenglfunctions_4_5_core.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qstatictext.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTransform>
#include <QFont>
#include <QTextOption>
#include <QString>
#include <QStaticText>
#include "_cgo_export.h"

class MyQStaticText: public QStaticText {
public:
};

void* QStaticText_NewQStaticText(){
	return new QStaticText();
}

void* QStaticText_NewQStaticText3(void* other){
	return new QStaticText(*static_cast<QStaticText*>(other));
}

void* QStaticText_NewQStaticText2(char* text){
	return new QStaticText(QString(text));
}

int QStaticText_PerformanceHint(void* ptr){
	return static_cast<QStaticText*>(ptr)->performanceHint();
}

void QStaticText_Prepare(void* ptr, void* matrix, void* font){
	static_cast<QStaticText*>(ptr)->prepare(*static_cast<QTransform*>(matrix), *static_cast<QFont*>(font));
}

void QStaticText_SetPerformanceHint(void* ptr, int performanceHint){
	static_cast<QStaticText*>(ptr)->setPerformanceHint(static_cast<QStaticText::PerformanceHint>(performanceHint));
}

void QStaticText_SetText(void* ptr, char* text){
	static_cast<QStaticText*>(ptr)->setText(QString(text));
}

void QStaticText_SetTextFormat(void* ptr, int textFormat){
	static_cast<QStaticText*>(ptr)->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

void QStaticText_SetTextOption(void* ptr, void* textOption){
	static_cast<QStaticText*>(ptr)->setTextOption(*static_cast<QTextOption*>(textOption));
}

void QStaticText_SetTextWidth(void* ptr, double textWidth){
	static_cast<QStaticText*>(ptr)->setTextWidth(static_cast<qreal>(textWidth));
}

void QStaticText_Swap(void* ptr, void* other){
	static_cast<QStaticText*>(ptr)->swap(*static_cast<QStaticText*>(other));
}

char* QStaticText_Text(void* ptr){
	return static_cast<QStaticText*>(ptr)->text().toUtf8().data();
}

int QStaticText_TextFormat(void* ptr){
	return static_cast<QStaticText*>(ptr)->textFormat();
}

double QStaticText_TextWidth(void* ptr){
	return static_cast<double>(static_cast<QStaticText*>(ptr)->textWidth());
}

void QStaticText_DestroyQStaticText(void* ptr){
	static_cast<QStaticText*>(ptr)->~QStaticText();
}

#include "qopenglfunctions_1_4.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopenglfunctions_3_2_compatibility.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qtextdocumentwriter.h"
#include <QUrl>
#include <QModelIndex>
#include <QTextCodec>
#include <QIODevice>
#include <QString>
#include <QVariant>
#include <QByteArray>
#include <QTextDocumentFragment>
#include <QTextDocument>
#include <QTextDocumentWriter>
#include "_cgo_export.h"

class MyQTextDocumentWriter: public QTextDocumentWriter {
public:
};

void* QTextDocumentWriter_NewQTextDocumentWriter(){
	return new QTextDocumentWriter();
}

void* QTextDocumentWriter_NewQTextDocumentWriter2(void* device, void* format){
	return new QTextDocumentWriter(static_cast<QIODevice*>(device), *static_cast<QByteArray*>(format));
}

void* QTextDocumentWriter_NewQTextDocumentWriter3(char* fileName, void* format){
	return new QTextDocumentWriter(QString(fileName), *static_cast<QByteArray*>(format));
}

void* QTextDocumentWriter_Codec(void* ptr){
	return static_cast<QTextDocumentWriter*>(ptr)->codec();
}

void* QTextDocumentWriter_Device(void* ptr){
	return static_cast<QTextDocumentWriter*>(ptr)->device();
}

char* QTextDocumentWriter_FileName(void* ptr){
	return static_cast<QTextDocumentWriter*>(ptr)->fileName().toUtf8().data();
}

void* QTextDocumentWriter_Format(void* ptr){
	return new QByteArray(static_cast<QTextDocumentWriter*>(ptr)->format());
}

void QTextDocumentWriter_SetCodec(void* ptr, void* codec){
	static_cast<QTextDocumentWriter*>(ptr)->setCodec(static_cast<QTextCodec*>(codec));
}

void QTextDocumentWriter_SetDevice(void* ptr, void* device){
	static_cast<QTextDocumentWriter*>(ptr)->setDevice(static_cast<QIODevice*>(device));
}

void QTextDocumentWriter_SetFileName(void* ptr, char* fileName){
	static_cast<QTextDocumentWriter*>(ptr)->setFileName(QString(fileName));
}

void QTextDocumentWriter_SetFormat(void* ptr, void* format){
	static_cast<QTextDocumentWriter*>(ptr)->setFormat(*static_cast<QByteArray*>(format));
}

int QTextDocumentWriter_Write(void* ptr, void* document){
	return static_cast<QTextDocumentWriter*>(ptr)->write(static_cast<QTextDocument*>(document));
}

int QTextDocumentWriter_Write2(void* ptr, void* fragment){
	return static_cast<QTextDocumentWriter*>(ptr)->write(*static_cast<QTextDocumentFragment*>(fragment));
}

void QTextDocumentWriter_DestroyQTextDocumentWriter(void* ptr){
	static_cast<QTextDocumentWriter*>(ptr)->~QTextDocumentWriter();
}

#include "qrasterpaintengine.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qfocusevent.h"
#include <QModelIndex>
#include <QEvent>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QFocusEvent>
#include "_cgo_export.h"

class MyQFocusEvent: public QFocusEvent {
public:
};

void* QFocusEvent_NewQFocusEvent(int ty, int reason){
	return new QFocusEvent(static_cast<QEvent::Type>(ty), static_cast<Qt::FocusReason>(reason));
}

int QFocusEvent_GotFocus(void* ptr){
	return static_cast<QFocusEvent*>(ptr)->gotFocus();
}

int QFocusEvent_LostFocus(void* ptr){
	return static_cast<QFocusEvent*>(ptr)->lostFocus();
}

int QFocusEvent_Reason(void* ptr){
	return static_cast<QFocusEvent*>(ptr)->reason();
}

#include "qoffscreensurface.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QScreen>
#include <QObject>
#include <QSurfaceFormat>
#include <QSurface>
#include <QOffscreenSurface>
#include "_cgo_export.h"

class MyQOffscreenSurface: public QOffscreenSurface {
public:
void Signal_ScreenChanged(QScreen * screen){callbackQOffscreenSurfaceScreenChanged(this->objectName().toUtf8().data(), screen);};
};

void* QOffscreenSurface_NewQOffscreenSurface(void* targetScreen){
	return new QOffscreenSurface(static_cast<QScreen*>(targetScreen));
}

void QOffscreenSurface_Create(void* ptr){
	static_cast<QOffscreenSurface*>(ptr)->create();
}

void QOffscreenSurface_Destroy(void* ptr){
	static_cast<QOffscreenSurface*>(ptr)->destroy();
}

int QOffscreenSurface_IsValid(void* ptr){
	return static_cast<QOffscreenSurface*>(ptr)->isValid();
}

void* QOffscreenSurface_Screen(void* ptr){
	return static_cast<QOffscreenSurface*>(ptr)->screen();
}

void QOffscreenSurface_ConnectScreenChanged(void* ptr){
	QObject::connect(static_cast<QOffscreenSurface*>(ptr), static_cast<void (QOffscreenSurface::*)(QScreen *)>(&QOffscreenSurface::screenChanged), static_cast<MyQOffscreenSurface*>(ptr), static_cast<void (MyQOffscreenSurface::*)(QScreen *)>(&MyQOffscreenSurface::Signal_ScreenChanged));;
}

void QOffscreenSurface_DisconnectScreenChanged(void* ptr){
	QObject::disconnect(static_cast<QOffscreenSurface*>(ptr), static_cast<void (QOffscreenSurface::*)(QScreen *)>(&QOffscreenSurface::screenChanged), static_cast<MyQOffscreenSurface*>(ptr), static_cast<void (MyQOffscreenSurface::*)(QScreen *)>(&MyQOffscreenSurface::Signal_ScreenChanged));;
}

void QOffscreenSurface_SetFormat(void* ptr, void* format){
	static_cast<QOffscreenSurface*>(ptr)->setFormat(*static_cast<QSurfaceFormat*>(format));
}

void QOffscreenSurface_SetScreen(void* ptr, void* newScreen){
	static_cast<QOffscreenSurface*>(ptr)->setScreen(static_cast<QScreen*>(newScreen));
}

int QOffscreenSurface_SurfaceType(void* ptr){
	return static_cast<QOffscreenSurface*>(ptr)->surfaceType();
}

void QOffscreenSurface_DestroyQOffscreenSurface(void* ptr){
	static_cast<QOffscreenSurface*>(ptr)->~QOffscreenSurface();
}

#include "qpen.h"
#include <QColor>
#include <QBrush>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QPen>
#include "_cgo_export.h"

class MyQPen: public QPen {
public:
};

void* QPen_NewQPen4(void* brush, double width, int style, int cap, int join){
	return new QPen(*static_cast<QBrush*>(brush), static_cast<qreal>(width), static_cast<Qt::PenStyle>(style), static_cast<Qt::PenCapStyle>(cap), static_cast<Qt::PenJoinStyle>(join));
}

void* QPen_NewQPen5(void* pen){
	return new QPen(*static_cast<QPen*>(pen));
}

void* QPen_Color(void* ptr){
	return new QColor(static_cast<QPen*>(ptr)->color());
}

void QPen_SetCapStyle(void* ptr, int style){
	static_cast<QPen*>(ptr)->setCapStyle(static_cast<Qt::PenCapStyle>(style));
}

void QPen_SetColor(void* ptr, void* color){
	static_cast<QPen*>(ptr)->setColor(*static_cast<QColor*>(color));
}

void QPen_SetJoinStyle(void* ptr, int style){
	static_cast<QPen*>(ptr)->setJoinStyle(static_cast<Qt::PenJoinStyle>(style));
}

void QPen_SetStyle(void* ptr, int style){
	static_cast<QPen*>(ptr)->setStyle(static_cast<Qt::PenStyle>(style));
}

void QPen_SetWidth(void* ptr, int width){
	static_cast<QPen*>(ptr)->setWidth(width);
}

int QPen_Style(void* ptr){
	return static_cast<QPen*>(ptr)->style();
}

int QPen_Width(void* ptr){
	return static_cast<QPen*>(ptr)->width();
}

double QPen_WidthF(void* ptr){
	return static_cast<double>(static_cast<QPen*>(ptr)->widthF());
}

void* QPen_NewQPen(){
	return new QPen();
}

void* QPen_NewQPen6(void* pen){
	return new QPen(*static_cast<QPen*>(pen));
}

void* QPen_NewQPen2(int style){
	return new QPen(static_cast<Qt::PenStyle>(style));
}

void* QPen_NewQPen3(void* color){
	return new QPen(*static_cast<QColor*>(color));
}

void* QPen_Brush(void* ptr){
	return new QBrush(static_cast<QPen*>(ptr)->brush());
}

int QPen_CapStyle(void* ptr){
	return static_cast<QPen*>(ptr)->capStyle();
}

double QPen_DashOffset(void* ptr){
	return static_cast<double>(static_cast<QPen*>(ptr)->dashOffset());
}

int QPen_IsCosmetic(void* ptr){
	return static_cast<QPen*>(ptr)->isCosmetic();
}

int QPen_IsSolid(void* ptr){
	return static_cast<QPen*>(ptr)->isSolid();
}

int QPen_JoinStyle(void* ptr){
	return static_cast<QPen*>(ptr)->joinStyle();
}

double QPen_MiterLimit(void* ptr){
	return static_cast<double>(static_cast<QPen*>(ptr)->miterLimit());
}

void QPen_SetBrush(void* ptr, void* brush){
	static_cast<QPen*>(ptr)->setBrush(*static_cast<QBrush*>(brush));
}

void QPen_SetCosmetic(void* ptr, int cosmetic){
	static_cast<QPen*>(ptr)->setCosmetic(cosmetic != 0);
}

void QPen_SetDashOffset(void* ptr, double offset){
	static_cast<QPen*>(ptr)->setDashOffset(static_cast<qreal>(offset));
}

void QPen_SetMiterLimit(void* ptr, double limit){
	static_cast<QPen*>(ptr)->setMiterLimit(static_cast<qreal>(limit));
}

void QPen_SetWidthF(void* ptr, double width){
	static_cast<QPen*>(ptr)->setWidthF(static_cast<qreal>(width));
}

void QPen_Swap(void* ptr, void* other){
	static_cast<QPen*>(ptr)->swap(*static_cast<QPen*>(other));
}

void QPen_DestroyQPen(void* ptr){
	static_cast<QPen*>(ptr)->~QPen();
}

#include "qregularexpressionvalidator.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QMetaObject>
#include <QRegularExpression>
#include <QString>
#include <QRegularExpressionValidator>
#include "_cgo_export.h"

class MyQRegularExpressionValidator: public QRegularExpressionValidator {
public:
void Signal_RegularExpressionChanged(const QRegularExpression & re){callbackQRegularExpressionValidatorRegularExpressionChanged(this->objectName().toUtf8().data(), new QRegularExpression(re));};
};

void* QRegularExpressionValidator_RegularExpression(void* ptr){
	return new QRegularExpression(static_cast<QRegularExpressionValidator*>(ptr)->regularExpression());
}

void QRegularExpressionValidator_SetRegularExpression(void* ptr, void* re){
	QMetaObject::invokeMethod(static_cast<QRegularExpressionValidator*>(ptr), "setRegularExpression", Q_ARG(QRegularExpression, *static_cast<QRegularExpression*>(re)));
}

void* QRegularExpressionValidator_NewQRegularExpressionValidator(void* parent){
	return new QRegularExpressionValidator(static_cast<QObject*>(parent));
}

void* QRegularExpressionValidator_NewQRegularExpressionValidator2(void* re, void* parent){
	return new QRegularExpressionValidator(*static_cast<QRegularExpression*>(re), static_cast<QObject*>(parent));
}

void QRegularExpressionValidator_ConnectRegularExpressionChanged(void* ptr){
	QObject::connect(static_cast<QRegularExpressionValidator*>(ptr), static_cast<void (QRegularExpressionValidator::*)(const QRegularExpression &)>(&QRegularExpressionValidator::regularExpressionChanged), static_cast<MyQRegularExpressionValidator*>(ptr), static_cast<void (MyQRegularExpressionValidator::*)(const QRegularExpression &)>(&MyQRegularExpressionValidator::Signal_RegularExpressionChanged));;
}

void QRegularExpressionValidator_DisconnectRegularExpressionChanged(void* ptr){
	QObject::disconnect(static_cast<QRegularExpressionValidator*>(ptr), static_cast<void (QRegularExpressionValidator::*)(const QRegularExpression &)>(&QRegularExpressionValidator::regularExpressionChanged), static_cast<MyQRegularExpressionValidator*>(ptr), static_cast<void (MyQRegularExpressionValidator::*)(const QRegularExpression &)>(&MyQRegularExpressionValidator::Signal_RegularExpressionChanged));;
}

void QRegularExpressionValidator_DestroyQRegularExpressionValidator(void* ptr){
	static_cast<QRegularExpressionValidator*>(ptr)->~QRegularExpressionValidator();
}

#include "qclipboard.h"
#include <QImage>
#include <QPixmap>
#include <QMimeData>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QObject>
#include <QClipboard>
#include "_cgo_export.h"

class MyQClipboard: public QClipboard {
public:
void Signal_Changed(QClipboard::Mode mode){callbackQClipboardChanged(this->objectName().toUtf8().data(), mode);};
void Signal_DataChanged(){callbackQClipboardDataChanged(this->objectName().toUtf8().data());};
void Signal_FindBufferChanged(){callbackQClipboardFindBufferChanged(this->objectName().toUtf8().data());};
void Signal_SelectionChanged(){callbackQClipboardSelectionChanged(this->objectName().toUtf8().data());};
};

void QClipboard_Clear(void* ptr, int mode){
	static_cast<QClipboard*>(ptr)->clear(static_cast<QClipboard::Mode>(mode));
}

void* QClipboard_MimeData(void* ptr, int mode){
	return const_cast<QMimeData*>(static_cast<QClipboard*>(ptr)->mimeData(static_cast<QClipboard::Mode>(mode)));
}

void QClipboard_SetMimeData(void* ptr, void* src, int mode){
	static_cast<QClipboard*>(ptr)->setMimeData(static_cast<QMimeData*>(src), static_cast<QClipboard::Mode>(mode));
}

void QClipboard_ConnectChanged(void* ptr){
	QObject::connect(static_cast<QClipboard*>(ptr), static_cast<void (QClipboard::*)(QClipboard::Mode)>(&QClipboard::changed), static_cast<MyQClipboard*>(ptr), static_cast<void (MyQClipboard::*)(QClipboard::Mode)>(&MyQClipboard::Signal_Changed));;
}

void QClipboard_DisconnectChanged(void* ptr){
	QObject::disconnect(static_cast<QClipboard*>(ptr), static_cast<void (QClipboard::*)(QClipboard::Mode)>(&QClipboard::changed), static_cast<MyQClipboard*>(ptr), static_cast<void (MyQClipboard::*)(QClipboard::Mode)>(&MyQClipboard::Signal_Changed));;
}

void QClipboard_ConnectDataChanged(void* ptr){
	QObject::connect(static_cast<QClipboard*>(ptr), static_cast<void (QClipboard::*)()>(&QClipboard::dataChanged), static_cast<MyQClipboard*>(ptr), static_cast<void (MyQClipboard::*)()>(&MyQClipboard::Signal_DataChanged));;
}

void QClipboard_DisconnectDataChanged(void* ptr){
	QObject::disconnect(static_cast<QClipboard*>(ptr), static_cast<void (QClipboard::*)()>(&QClipboard::dataChanged), static_cast<MyQClipboard*>(ptr), static_cast<void (MyQClipboard::*)()>(&MyQClipboard::Signal_DataChanged));;
}

void QClipboard_ConnectFindBufferChanged(void* ptr){
	QObject::connect(static_cast<QClipboard*>(ptr), static_cast<void (QClipboard::*)()>(&QClipboard::findBufferChanged), static_cast<MyQClipboard*>(ptr), static_cast<void (MyQClipboard::*)()>(&MyQClipboard::Signal_FindBufferChanged));;
}

void QClipboard_DisconnectFindBufferChanged(void* ptr){
	QObject::disconnect(static_cast<QClipboard*>(ptr), static_cast<void (QClipboard::*)()>(&QClipboard::findBufferChanged), static_cast<MyQClipboard*>(ptr), static_cast<void (MyQClipboard::*)()>(&MyQClipboard::Signal_FindBufferChanged));;
}

int QClipboard_OwnsClipboard(void* ptr){
	return static_cast<QClipboard*>(ptr)->ownsClipboard();
}

int QClipboard_OwnsFindBuffer(void* ptr){
	return static_cast<QClipboard*>(ptr)->ownsFindBuffer();
}

int QClipboard_OwnsSelection(void* ptr){
	return static_cast<QClipboard*>(ptr)->ownsSelection();
}

void QClipboard_ConnectSelectionChanged(void* ptr){
	QObject::connect(static_cast<QClipboard*>(ptr), static_cast<void (QClipboard::*)()>(&QClipboard::selectionChanged), static_cast<MyQClipboard*>(ptr), static_cast<void (MyQClipboard::*)()>(&MyQClipboard::Signal_SelectionChanged));;
}

void QClipboard_DisconnectSelectionChanged(void* ptr){
	QObject::disconnect(static_cast<QClipboard*>(ptr), static_cast<void (QClipboard::*)()>(&QClipboard::selectionChanged), static_cast<MyQClipboard*>(ptr), static_cast<void (MyQClipboard::*)()>(&MyQClipboard::Signal_SelectionChanged));;
}

void QClipboard_SetImage(void* ptr, void* image, int mode){
	static_cast<QClipboard*>(ptr)->setImage(*static_cast<QImage*>(image), static_cast<QClipboard::Mode>(mode));
}

void QClipboard_SetPixmap(void* ptr, void* pixmap, int mode){
	static_cast<QClipboard*>(ptr)->setPixmap(*static_cast<QPixmap*>(pixmap), static_cast<QClipboard::Mode>(mode));
}

void QClipboard_SetText(void* ptr, char* text, int mode){
	static_cast<QClipboard*>(ptr)->setText(QString(text), static_cast<QClipboard::Mode>(mode));
}

int QClipboard_SupportsFindBuffer(void* ptr){
	return static_cast<QClipboard*>(ptr)->supportsFindBuffer();
}

int QClipboard_SupportsSelection(void* ptr){
	return static_cast<QClipboard*>(ptr)->supportsSelection();
}

char* QClipboard_Text(void* ptr, int mode){
	return static_cast<QClipboard*>(ptr)->text(static_cast<QClipboard::Mode>(mode)).toUtf8().data();
}

#include "qcursor.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QBitmap>
#include <QPixmap>
#include <QScreen>
#include <QPoint>
#include <QCursor>
#include "_cgo_export.h"

class MyQCursor: public QCursor {
public:
};

void QCursor_QCursor_SetPos2(void* screen, int x, int y){
	QCursor::setPos(static_cast<QScreen*>(screen), x, y);
}

void QCursor_QCursor_SetPos(int x, int y){
	QCursor::setPos(x, y);
}

void* QCursor_NewQCursor(){
	return new QCursor();
}

void* QCursor_NewQCursor6(void* other){
	return new QCursor(*static_cast<QCursor*>(other));
}

void* QCursor_NewQCursor2(int shape){
	return new QCursor(static_cast<Qt::CursorShape>(shape));
}

void* QCursor_NewQCursor3(void* bitmap, void* mask, int hotX, int hotY){
	return new QCursor(*static_cast<QBitmap*>(bitmap), *static_cast<QBitmap*>(mask), hotX, hotY);
}

void* QCursor_NewQCursor5(void* c){
	return new QCursor(*static_cast<QCursor*>(c));
}

void* QCursor_NewQCursor4(void* pixmap, int hotX, int hotY){
	return new QCursor(*static_cast<QPixmap*>(pixmap), hotX, hotY);
}

void* QCursor_Bitmap(void* ptr){
	return const_cast<QBitmap*>(static_cast<QCursor*>(ptr)->bitmap());
}

void* QCursor_Mask(void* ptr){
	return const_cast<QBitmap*>(static_cast<QCursor*>(ptr)->mask());
}

void QCursor_QCursor_SetPos4(void* screen, void* p){
	QCursor::setPos(static_cast<QScreen*>(screen), *static_cast<QPoint*>(p));
}

void QCursor_QCursor_SetPos3(void* p){
	QCursor::setPos(*static_cast<QPoint*>(p));
}

void QCursor_SetShape(void* ptr, int shape){
	static_cast<QCursor*>(ptr)->setShape(static_cast<Qt::CursorShape>(shape));
}

int QCursor_Shape(void* ptr){
	return static_cast<QCursor*>(ptr)->shape();
}

void QCursor_DestroyQCursor(void* ptr){
	static_cast<QCursor*>(ptr)->~QCursor();
}

#include "qactionevent.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QActionEvent>
#include "_cgo_export.h"

class MyQActionEvent: public QActionEvent {
public:
};

#include "qinputevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QInputEvent>
#include "_cgo_export.h"

class MyQInputEvent: public QInputEvent {
public:
};

int QInputEvent_Modifiers(void* ptr){
	return static_cast<QInputEvent*>(ptr)->modifiers();
}

#include "qopengltimerquery.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qgenericpluginfactory.h"
#include <QUrl>
#include <QModelIndex>
#include <QGenericPlugin>
#include <QString>
#include <QVariant>
#include <QGenericPluginFactory>
#include "_cgo_export.h"

class MyQGenericPluginFactory: public QGenericPluginFactory {
public:
};

void* QGenericPluginFactory_QGenericPluginFactory_Create(char* key, char* specification){
	return QGenericPluginFactory::create(QString(key), QString(specification));
}

char* QGenericPluginFactory_QGenericPluginFactory_Keys(){
	return QGenericPluginFactory::keys().join("|").toUtf8().data();
}

#include "qtextobject.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QTextObject>
#include "_cgo_export.h"

class MyQTextObject: public QTextObject {
public:
};

void* QTextObject_Document(void* ptr){
	return static_cast<QTextObject*>(ptr)->document();
}

int QTextObject_FormatIndex(void* ptr){
	return static_cast<QTextObject*>(ptr)->formatIndex();
}

int QTextObject_ObjectIndex(void* ptr){
	return static_cast<QTextObject*>(ptr)->objectIndex();
}

#include "qquaternion.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QVector>
#include <QVector3D>
#include <QVector4D>
#include <QString>
#include <QQuaternion>
#include "_cgo_export.h"

class MyQQuaternion: public QQuaternion {
public:
};

void* QQuaternion_NewQQuaternion(){
	return new QQuaternion();
}

void* QQuaternion_NewQQuaternion5(void* vector){
	return new QQuaternion(*static_cast<QVector4D*>(vector));
}

void QQuaternion_GetAxes(void* ptr, void* xAxis, void* yAxis, void* zAxis){
	static_cast<QQuaternion*>(ptr)->getAxes(static_cast<QVector3D*>(xAxis), static_cast<QVector3D*>(yAxis), static_cast<QVector3D*>(zAxis));
}

int QQuaternion_IsIdentity(void* ptr){
	return static_cast<QQuaternion*>(ptr)->isIdentity();
}

int QQuaternion_IsNull(void* ptr){
	return static_cast<QQuaternion*>(ptr)->isNull();
}

void QQuaternion_Normalize(void* ptr){
	static_cast<QQuaternion*>(ptr)->normalize();
}

void QQuaternion_SetVector(void* ptr, void* vector){
	static_cast<QQuaternion*>(ptr)->setVector(*static_cast<QVector3D*>(vector));
}

#include "qopenglfunctions_1_1.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qopenglfunctions_3_3_compatibility.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qfontmetrics.h"
#include <QPaintDevice>
#include <QFont>
#include <QChar>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QFontMetrics>
#include "_cgo_export.h"

class MyQFontMetrics: public QFontMetrics {
public:
};

void* QFontMetrics_NewQFontMetrics(void* font){
	return new QFontMetrics(*static_cast<QFont*>(font));
}

void* QFontMetrics_NewQFontMetrics2(void* font, void* paintdevice){
	return new QFontMetrics(*static_cast<QFont*>(font), static_cast<QPaintDevice*>(paintdevice));
}

void* QFontMetrics_NewQFontMetrics3(void* fm){
	return new QFontMetrics(*static_cast<QFontMetrics*>(fm));
}

int QFontMetrics_Ascent(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->ascent();
}

int QFontMetrics_AverageCharWidth(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->averageCharWidth();
}

int QFontMetrics_Descent(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->descent();
}

char* QFontMetrics_ElidedText(void* ptr, char* text, int mode, int width, int flags){
	return static_cast<QFontMetrics*>(ptr)->elidedText(QString(text), static_cast<Qt::TextElideMode>(mode), width, flags).toUtf8().data();
}

int QFontMetrics_Height(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->height();
}

int QFontMetrics_InFont(void* ptr, void* ch){
	return static_cast<QFontMetrics*>(ptr)->inFont(*static_cast<QChar*>(ch));
}

int QFontMetrics_Leading(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->leading();
}

int QFontMetrics_LeftBearing(void* ptr, void* ch){
	return static_cast<QFontMetrics*>(ptr)->leftBearing(*static_cast<QChar*>(ch));
}

int QFontMetrics_LineSpacing(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->lineSpacing();
}

int QFontMetrics_LineWidth(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->lineWidth();
}

int QFontMetrics_MaxWidth(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->maxWidth();
}

int QFontMetrics_MinLeftBearing(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->minLeftBearing();
}

int QFontMetrics_MinRightBearing(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->minRightBearing();
}

int QFontMetrics_OverlinePos(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->overlinePos();
}

int QFontMetrics_RightBearing(void* ptr, void* ch){
	return static_cast<QFontMetrics*>(ptr)->rightBearing(*static_cast<QChar*>(ch));
}

int QFontMetrics_StrikeOutPos(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->strikeOutPos();
}

void QFontMetrics_Swap(void* ptr, void* other){
	static_cast<QFontMetrics*>(ptr)->swap(*static_cast<QFontMetrics*>(other));
}

int QFontMetrics_UnderlinePos(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->underlinePos();
}

int QFontMetrics_Width3(void* ptr, void* ch){
	return static_cast<QFontMetrics*>(ptr)->width(*static_cast<QChar*>(ch));
}

int QFontMetrics_Width(void* ptr, char* text, int len){
	return static_cast<QFontMetrics*>(ptr)->width(QString(text), len);
}

int QFontMetrics_XHeight(void* ptr){
	return static_cast<QFontMetrics*>(ptr)->xHeight();
}

void QFontMetrics_DestroyQFontMetrics(void* ptr){
	static_cast<QFontMetrics*>(ptr)->~QFontMetrics();
}

#include "qshortcutevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QKeySequence>
#include <QShortcutEvent>
#include "_cgo_export.h"

class MyQShortcutEvent: public QShortcutEvent {
public:
};

void* QShortcutEvent_NewQShortcutEvent(void* key, int id, int ambiguous){
	return new QShortcutEvent(*static_cast<QKeySequence*>(key), id, ambiguous != 0);
}

int QShortcutEvent_IsAmbiguous(void* ptr){
	return static_cast<QShortcutEvent*>(ptr)->isAmbiguous();
}

int QShortcutEvent_ShortcutId(void* ptr){
	return static_cast<QShortcutEvent*>(ptr)->shortcutId();
}

void QShortcutEvent_DestroyQShortcutEvent(void* ptr){
	static_cast<QShortcutEvent*>(ptr)->~QShortcutEvent();
}

