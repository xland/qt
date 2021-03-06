#include "qplacesearchrequest.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplaceimage.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qplacecontent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplace.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplaceresult.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplacereview.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qgeoserviceprovider.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QLocale>
#include <QString>
#include <QGeoServiceProvider>
#include "_cgo_export.h"

class MyQGeoServiceProvider: public QGeoServiceProvider {
public:
};

int QGeoServiceProvider_OnlineGeocodingFeature_Type(){
	return QGeoServiceProvider::OnlineGeocodingFeature;
}

int QGeoServiceProvider_OfflineGeocodingFeature_Type(){
	return QGeoServiceProvider::OfflineGeocodingFeature;
}

int QGeoServiceProvider_ReverseGeocodingFeature_Type(){
	return QGeoServiceProvider::ReverseGeocodingFeature;
}

int QGeoServiceProvider_LocalizedGeocodingFeature_Type(){
	return QGeoServiceProvider::LocalizedGeocodingFeature;
}

int QGeoServiceProvider_AnyGeocodingFeatures_Type(){
	return QGeoServiceProvider::AnyGeocodingFeatures;
}

int QGeoServiceProvider_OnlineMappingFeature_Type(){
	return QGeoServiceProvider::OnlineMappingFeature;
}

int QGeoServiceProvider_OfflineMappingFeature_Type(){
	return QGeoServiceProvider::OfflineMappingFeature;
}

int QGeoServiceProvider_LocalizedMappingFeature_Type(){
	return QGeoServiceProvider::LocalizedMappingFeature;
}

int QGeoServiceProvider_AnyMappingFeatures_Type(){
	return QGeoServiceProvider::AnyMappingFeatures;
}

int QGeoServiceProvider_OnlinePlacesFeature_Type(){
	return QGeoServiceProvider::OnlinePlacesFeature;
}

int QGeoServiceProvider_OfflinePlacesFeature_Type(){
	return QGeoServiceProvider::OfflinePlacesFeature;
}

int QGeoServiceProvider_SavePlaceFeature_Type(){
	return QGeoServiceProvider::SavePlaceFeature;
}

int QGeoServiceProvider_RemovePlaceFeature_Type(){
	return QGeoServiceProvider::RemovePlaceFeature;
}

int QGeoServiceProvider_SaveCategoryFeature_Type(){
	return QGeoServiceProvider::SaveCategoryFeature;
}

int QGeoServiceProvider_RemoveCategoryFeature_Type(){
	return QGeoServiceProvider::RemoveCategoryFeature;
}

int QGeoServiceProvider_PlaceRecommendationsFeature_Type(){
	return QGeoServiceProvider::PlaceRecommendationsFeature;
}

int QGeoServiceProvider_SearchSuggestionsFeature_Type(){
	return QGeoServiceProvider::SearchSuggestionsFeature;
}

int QGeoServiceProvider_LocalizedPlacesFeature_Type(){
	return QGeoServiceProvider::LocalizedPlacesFeature;
}

int QGeoServiceProvider_NotificationsFeature_Type(){
	return QGeoServiceProvider::NotificationsFeature;
}

int QGeoServiceProvider_PlaceMatchingFeature_Type(){
	return QGeoServiceProvider::PlaceMatchingFeature;
}

int QGeoServiceProvider_AnyPlacesFeatures_Type(){
	return QGeoServiceProvider::AnyPlacesFeatures;
}

int QGeoServiceProvider_OnlineRoutingFeature_Type(){
	return QGeoServiceProvider::OnlineRoutingFeature;
}

int QGeoServiceProvider_OfflineRoutingFeature_Type(){
	return QGeoServiceProvider::OfflineRoutingFeature;
}

int QGeoServiceProvider_LocalizedRoutingFeature_Type(){
	return QGeoServiceProvider::LocalizedRoutingFeature;
}

int QGeoServiceProvider_RouteUpdatesFeature_Type(){
	return QGeoServiceProvider::RouteUpdatesFeature;
}

int QGeoServiceProvider_AlternativeRoutesFeature_Type(){
	return QGeoServiceProvider::AlternativeRoutesFeature;
}

int QGeoServiceProvider_ExcludeAreasRoutingFeature_Type(){
	return QGeoServiceProvider::ExcludeAreasRoutingFeature;
}

int QGeoServiceProvider_AnyRoutingFeatures_Type(){
	return QGeoServiceProvider::AnyRoutingFeatures;
}

char* QGeoServiceProvider_QGeoServiceProvider_AvailableServiceProviders(){
	return QGeoServiceProvider::availableServiceProviders().join("|").toUtf8().data();
}

int QGeoServiceProvider_Error(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->error();
}

char* QGeoServiceProvider_ErrorString(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->errorString().toUtf8().data();
}

int QGeoServiceProvider_GeocodingFeatures(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->geocodingFeatures();
}

void* QGeoServiceProvider_GeocodingManager(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->geocodingManager();
}

int QGeoServiceProvider_MappingFeatures(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->mappingFeatures();
}

void* QGeoServiceProvider_PlaceManager(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->placeManager();
}

int QGeoServiceProvider_PlacesFeatures(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->placesFeatures();
}

int QGeoServiceProvider_RoutingFeatures(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->routingFeatures();
}

void* QGeoServiceProvider_RoutingManager(void* ptr){
	return static_cast<QGeoServiceProvider*>(ptr)->routingManager();
}

void QGeoServiceProvider_SetAllowExperimental(void* ptr, int allow){
	static_cast<QGeoServiceProvider*>(ptr)->setAllowExperimental(allow != 0);
}

void QGeoServiceProvider_SetLocale(void* ptr, void* locale){
	static_cast<QGeoServiceProvider*>(ptr)->setLocale(*static_cast<QLocale*>(locale));
}

void QGeoServiceProvider_DestroyQGeoServiceProvider(void* ptr){
	static_cast<QGeoServiceProvider*>(ptr)->~QGeoServiceProvider();
}

#include "qplaceeditorial.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include "_cgo_export.h"

#include "qgeocodereply.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qgeoroutingmanager.h"
#include <QGeoRouteReply>
#include <QGeoRouteRequest>
#include <QLocale>
#include <QVariant>
#include <QGeoRoute>
#include <QModelIndex>
#include <QGeoCoordinate>
#include <QObject>
#include <QString>
#include <QUrl>
#include <QGeoRoutingManager>
#include "_cgo_export.h"

class MyQGeoRoutingManager: public QGeoRoutingManager {
public:
void Signal_Error(QGeoRouteReply * reply, QGeoRouteReply::Error error, QString errorString){callbackQGeoRoutingManagerError(this->objectName().toUtf8().data(), reply, error, errorString.toUtf8().data());};
void Signal_Finished(QGeoRouteReply * reply){callbackQGeoRoutingManagerFinished(this->objectName().toUtf8().data(), reply);};
};

void* QGeoRoutingManager_CalculateRoute(void* ptr, void* request){
	return static_cast<QGeoRoutingManager*>(ptr)->calculateRoute(*static_cast<QGeoRouteRequest*>(request));
}

void QGeoRoutingManager_ConnectError(void* ptr){
	QObject::connect(static_cast<QGeoRoutingManager*>(ptr), static_cast<void (QGeoRoutingManager::*)(QGeoRouteReply *, QGeoRouteReply::Error, QString)>(&QGeoRoutingManager::error), static_cast<MyQGeoRoutingManager*>(ptr), static_cast<void (MyQGeoRoutingManager::*)(QGeoRouteReply *, QGeoRouteReply::Error, QString)>(&MyQGeoRoutingManager::Signal_Error));;
}

void QGeoRoutingManager_DisconnectError(void* ptr){
	QObject::disconnect(static_cast<QGeoRoutingManager*>(ptr), static_cast<void (QGeoRoutingManager::*)(QGeoRouteReply *, QGeoRouteReply::Error, QString)>(&QGeoRoutingManager::error), static_cast<MyQGeoRoutingManager*>(ptr), static_cast<void (MyQGeoRoutingManager::*)(QGeoRouteReply *, QGeoRouteReply::Error, QString)>(&MyQGeoRoutingManager::Signal_Error));;
}

void QGeoRoutingManager_ConnectFinished(void* ptr){
	QObject::connect(static_cast<QGeoRoutingManager*>(ptr), static_cast<void (QGeoRoutingManager::*)(QGeoRouteReply *)>(&QGeoRoutingManager::finished), static_cast<MyQGeoRoutingManager*>(ptr), static_cast<void (MyQGeoRoutingManager::*)(QGeoRouteReply *)>(&MyQGeoRoutingManager::Signal_Finished));;
}

void QGeoRoutingManager_DisconnectFinished(void* ptr){
	QObject::disconnect(static_cast<QGeoRoutingManager*>(ptr), static_cast<void (QGeoRoutingManager::*)(QGeoRouteReply *)>(&QGeoRoutingManager::finished), static_cast<MyQGeoRoutingManager*>(ptr), static_cast<void (MyQGeoRoutingManager::*)(QGeoRouteReply *)>(&MyQGeoRoutingManager::Signal_Finished));;
}

char* QGeoRoutingManager_ManagerName(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->managerName().toUtf8().data();
}

int QGeoRoutingManager_ManagerVersion(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->managerVersion();
}

int QGeoRoutingManager_MeasurementSystem(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->measurementSystem();
}

void QGeoRoutingManager_SetLocale(void* ptr, void* locale){
	static_cast<QGeoRoutingManager*>(ptr)->setLocale(*static_cast<QLocale*>(locale));
}

void QGeoRoutingManager_SetMeasurementSystem(void* ptr, int system){
	static_cast<QGeoRoutingManager*>(ptr)->setMeasurementSystem(static_cast<QLocale::MeasurementSystem>(system));
}

int QGeoRoutingManager_SupportedFeatureTypes(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->supportedFeatureTypes();
}

int QGeoRoutingManager_SupportedFeatureWeights(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->supportedFeatureWeights();
}

int QGeoRoutingManager_SupportedManeuverDetails(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->supportedManeuverDetails();
}

int QGeoRoutingManager_SupportedRouteOptimizations(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->supportedRouteOptimizations();
}

int QGeoRoutingManager_SupportedSegmentDetails(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->supportedSegmentDetails();
}

int QGeoRoutingManager_SupportedTravelModes(void* ptr){
	return static_cast<QGeoRoutingManager*>(ptr)->supportedTravelModes();
}

void* QGeoRoutingManager_UpdateRoute(void* ptr, void* route, void* position){
	return static_cast<QGeoRoutingManager*>(ptr)->updateRoute(*static_cast<QGeoRoute*>(route), *static_cast<QGeoCoordinate*>(position));
}

void QGeoRoutingManager_DestroyQGeoRoutingManager(void* ptr){
	static_cast<QGeoRoutingManager*>(ptr)->~QGeoRoutingManager();
}

#include "qplacedetailsreply.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include "_cgo_export.h"

#include "qgeoserviceproviderfactory.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QGeoServiceProvider>
#include <QGeoServiceProviderFactory>
#include "_cgo_export.h"

class MyQGeoServiceProviderFactory: public QGeoServiceProviderFactory {
public:
};

void QGeoServiceProviderFactory_DestroyQGeoServiceProviderFactory(void* ptr){
	static_cast<QGeoServiceProviderFactory*>(ptr)->~QGeoServiceProviderFactory();
}

#include "qplacecontentrequest.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qplacecontentreply.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplaceratings.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qplacemanagerengine.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplacematchrequest.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplacesearchreply.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplacesearchresult.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplaceicon.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qplacemanager.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qgeoroutesegment.h"
#include <QGeoManeuver>
#include <QGeoRoute>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QGeoRouteSegment>
#include "_cgo_export.h"

class MyQGeoRouteSegment: public QGeoRouteSegment {
public:
};

void* QGeoRouteSegment_NewQGeoRouteSegment(){
	return new QGeoRouteSegment();
}

void* QGeoRouteSegment_NewQGeoRouteSegment2(void* other){
	return new QGeoRouteSegment(*static_cast<QGeoRouteSegment*>(other));
}

double QGeoRouteSegment_Distance(void* ptr){
	return static_cast<double>(static_cast<QGeoRouteSegment*>(ptr)->distance());
}

int QGeoRouteSegment_IsValid(void* ptr){
	return static_cast<QGeoRouteSegment*>(ptr)->isValid();
}

void QGeoRouteSegment_SetDistance(void* ptr, double distance){
	static_cast<QGeoRouteSegment*>(ptr)->setDistance(static_cast<qreal>(distance));
}

void QGeoRouteSegment_SetManeuver(void* ptr, void* maneuver){
	static_cast<QGeoRouteSegment*>(ptr)->setManeuver(*static_cast<QGeoManeuver*>(maneuver));
}

void QGeoRouteSegment_SetNextRouteSegment(void* ptr, void* routeSegment){
	static_cast<QGeoRouteSegment*>(ptr)->setNextRouteSegment(*static_cast<QGeoRouteSegment*>(routeSegment));
}

void QGeoRouteSegment_SetTravelTime(void* ptr, int secs){
	static_cast<QGeoRouteSegment*>(ptr)->setTravelTime(secs);
}

int QGeoRouteSegment_TravelTime(void* ptr){
	return static_cast<QGeoRouteSegment*>(ptr)->travelTime();
}

void QGeoRouteSegment_DestroyQGeoRouteSegment(void* ptr){
	static_cast<QGeoRouteSegment*>(ptr)->~QGeoRouteSegment();
}

#include "qplaceattribute.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qgeocodingmanagerengine.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplacesupplier.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplacematchreply.h"
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include "_cgo_export.h"

#include "qplacecontactdetail.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplaceuser.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QString>
#include "_cgo_export.h"

#include "qgeomaneuver.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QGeoCoordinate>
#include <QGeoManeuver>
#include "_cgo_export.h"

class MyQGeoManeuver: public QGeoManeuver {
public:
};

void* QGeoManeuver_NewQGeoManeuver(){
	return new QGeoManeuver();
}

void* QGeoManeuver_NewQGeoManeuver2(void* other){
	return new QGeoManeuver(*static_cast<QGeoManeuver*>(other));
}

int QGeoManeuver_Direction(void* ptr){
	return static_cast<QGeoManeuver*>(ptr)->direction();
}

double QGeoManeuver_DistanceToNextInstruction(void* ptr){
	return static_cast<double>(static_cast<QGeoManeuver*>(ptr)->distanceToNextInstruction());
}

char* QGeoManeuver_InstructionText(void* ptr){
	return static_cast<QGeoManeuver*>(ptr)->instructionText().toUtf8().data();
}

int QGeoManeuver_IsValid(void* ptr){
	return static_cast<QGeoManeuver*>(ptr)->isValid();
}

void QGeoManeuver_SetDirection(void* ptr, int direction){
	static_cast<QGeoManeuver*>(ptr)->setDirection(static_cast<QGeoManeuver::InstructionDirection>(direction));
}

void QGeoManeuver_SetDistanceToNextInstruction(void* ptr, double distance){
	static_cast<QGeoManeuver*>(ptr)->setDistanceToNextInstruction(static_cast<qreal>(distance));
}

void QGeoManeuver_SetInstructionText(void* ptr, char* instructionText){
	static_cast<QGeoManeuver*>(ptr)->setInstructionText(QString(instructionText));
}

void QGeoManeuver_SetPosition(void* ptr, void* position){
	static_cast<QGeoManeuver*>(ptr)->setPosition(*static_cast<QGeoCoordinate*>(position));
}

void QGeoManeuver_SetTimeToNextInstruction(void* ptr, int secs){
	static_cast<QGeoManeuver*>(ptr)->setTimeToNextInstruction(secs);
}

void QGeoManeuver_SetWaypoint(void* ptr, void* coordinate){
	static_cast<QGeoManeuver*>(ptr)->setWaypoint(*static_cast<QGeoCoordinate*>(coordinate));
}

int QGeoManeuver_TimeToNextInstruction(void* ptr){
	return static_cast<QGeoManeuver*>(ptr)->timeToNextInstruction();
}

void QGeoManeuver_DestroyQGeoManeuver(void* ptr){
	static_cast<QGeoManeuver*>(ptr)->~QGeoManeuver();
}

#include "qplacesearchsuggestionreply.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qgeorouterequest.h"
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QGeoCoordinate>
#include <QGeoRoute>
#include <QString>
#include <QGeoRouteRequest>
#include "_cgo_export.h"

class MyQGeoRouteRequest: public QGeoRouteRequest {
public:
};

void* QGeoRouteRequest_NewQGeoRouteRequest2(void* origin, void* destination){
	return new QGeoRouteRequest(*static_cast<QGeoCoordinate*>(origin), *static_cast<QGeoCoordinate*>(destination));
}

void* QGeoRouteRequest_NewQGeoRouteRequest3(void* other){
	return new QGeoRouteRequest(*static_cast<QGeoRouteRequest*>(other));
}

int QGeoRouteRequest_FeatureWeight(void* ptr, int featureType){
	return static_cast<QGeoRouteRequest*>(ptr)->featureWeight(static_cast<QGeoRouteRequest::FeatureType>(featureType));
}

int QGeoRouteRequest_ManeuverDetail(void* ptr){
	return static_cast<QGeoRouteRequest*>(ptr)->maneuverDetail();
}

int QGeoRouteRequest_NumberAlternativeRoutes(void* ptr){
	return static_cast<QGeoRouteRequest*>(ptr)->numberAlternativeRoutes();
}

int QGeoRouteRequest_RouteOptimization(void* ptr){
	return static_cast<QGeoRouteRequest*>(ptr)->routeOptimization();
}

int QGeoRouteRequest_SegmentDetail(void* ptr){
	return static_cast<QGeoRouteRequest*>(ptr)->segmentDetail();
}

void QGeoRouteRequest_SetFeatureWeight(void* ptr, int featureType, int featureWeight){
	static_cast<QGeoRouteRequest*>(ptr)->setFeatureWeight(static_cast<QGeoRouteRequest::FeatureType>(featureType), static_cast<QGeoRouteRequest::FeatureWeight>(featureWeight));
}

void QGeoRouteRequest_SetManeuverDetail(void* ptr, int maneuverDetail){
	static_cast<QGeoRouteRequest*>(ptr)->setManeuverDetail(static_cast<QGeoRouteRequest::ManeuverDetail>(maneuverDetail));
}

void QGeoRouteRequest_SetNumberAlternativeRoutes(void* ptr, int alternatives){
	static_cast<QGeoRouteRequest*>(ptr)->setNumberAlternativeRoutes(alternatives);
}

void QGeoRouteRequest_SetRouteOptimization(void* ptr, int optimization){
	static_cast<QGeoRouteRequest*>(ptr)->setRouteOptimization(static_cast<QGeoRouteRequest::RouteOptimization>(optimization));
}

void QGeoRouteRequest_SetSegmentDetail(void* ptr, int segmentDetail){
	static_cast<QGeoRouteRequest*>(ptr)->setSegmentDetail(static_cast<QGeoRouteRequest::SegmentDetail>(segmentDetail));
}

void QGeoRouteRequest_SetTravelModes(void* ptr, int travelModes){
	static_cast<QGeoRouteRequest*>(ptr)->setTravelModes(static_cast<QGeoRouteRequest::TravelMode>(travelModes));
}

int QGeoRouteRequest_TravelModes(void* ptr){
	return static_cast<QGeoRouteRequest*>(ptr)->travelModes();
}

void QGeoRouteRequest_DestroyQGeoRouteRequest(void* ptr){
	static_cast<QGeoRouteRequest*>(ptr)->~QGeoRouteRequest();
}

#include "qgeocodingmanager.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qgeoroutingmanagerengine.h"
#include <QModelIndex>
#include <QGeoCoordinate>
#include <QObject>
#include <QLocale>
#include <QGeoRoute>
#include <QGeoRouteReply>
#include <QVariant>
#include <QUrl>
#include <QGeoRoutingManager>
#include <QGeoRouteRequest>
#include <QString>
#include <QGeoRoutingManagerEngine>
#include "_cgo_export.h"

class MyQGeoRoutingManagerEngine: public QGeoRoutingManagerEngine {
public:
void Signal_Error(QGeoRouteReply * reply, QGeoRouteReply::Error error, QString errorString){callbackQGeoRoutingManagerEngineError(this->objectName().toUtf8().data(), reply, error, errorString.toUtf8().data());};
void Signal_Finished(QGeoRouteReply * reply){callbackQGeoRoutingManagerEngineFinished(this->objectName().toUtf8().data(), reply);};
};

void* QGeoRoutingManagerEngine_CalculateRoute(void* ptr, void* request){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->calculateRoute(*static_cast<QGeoRouteRequest*>(request));
}

void QGeoRoutingManagerEngine_ConnectError(void* ptr){
	QObject::connect(static_cast<QGeoRoutingManagerEngine*>(ptr), static_cast<void (QGeoRoutingManagerEngine::*)(QGeoRouteReply *, QGeoRouteReply::Error, QString)>(&QGeoRoutingManagerEngine::error), static_cast<MyQGeoRoutingManagerEngine*>(ptr), static_cast<void (MyQGeoRoutingManagerEngine::*)(QGeoRouteReply *, QGeoRouteReply::Error, QString)>(&MyQGeoRoutingManagerEngine::Signal_Error));;
}

void QGeoRoutingManagerEngine_DisconnectError(void* ptr){
	QObject::disconnect(static_cast<QGeoRoutingManagerEngine*>(ptr), static_cast<void (QGeoRoutingManagerEngine::*)(QGeoRouteReply *, QGeoRouteReply::Error, QString)>(&QGeoRoutingManagerEngine::error), static_cast<MyQGeoRoutingManagerEngine*>(ptr), static_cast<void (MyQGeoRoutingManagerEngine::*)(QGeoRouteReply *, QGeoRouteReply::Error, QString)>(&MyQGeoRoutingManagerEngine::Signal_Error));;
}

void QGeoRoutingManagerEngine_ConnectFinished(void* ptr){
	QObject::connect(static_cast<QGeoRoutingManagerEngine*>(ptr), static_cast<void (QGeoRoutingManagerEngine::*)(QGeoRouteReply *)>(&QGeoRoutingManagerEngine::finished), static_cast<MyQGeoRoutingManagerEngine*>(ptr), static_cast<void (MyQGeoRoutingManagerEngine::*)(QGeoRouteReply *)>(&MyQGeoRoutingManagerEngine::Signal_Finished));;
}

void QGeoRoutingManagerEngine_DisconnectFinished(void* ptr){
	QObject::disconnect(static_cast<QGeoRoutingManagerEngine*>(ptr), static_cast<void (QGeoRoutingManagerEngine::*)(QGeoRouteReply *)>(&QGeoRoutingManagerEngine::finished), static_cast<MyQGeoRoutingManagerEngine*>(ptr), static_cast<void (MyQGeoRoutingManagerEngine::*)(QGeoRouteReply *)>(&MyQGeoRoutingManagerEngine::Signal_Finished));;
}

char* QGeoRoutingManagerEngine_ManagerName(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->managerName().toUtf8().data();
}

int QGeoRoutingManagerEngine_ManagerVersion(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->managerVersion();
}

int QGeoRoutingManagerEngine_MeasurementSystem(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->measurementSystem();
}

void QGeoRoutingManagerEngine_SetLocale(void* ptr, void* locale){
	static_cast<QGeoRoutingManagerEngine*>(ptr)->setLocale(*static_cast<QLocale*>(locale));
}

void QGeoRoutingManagerEngine_SetMeasurementSystem(void* ptr, int system){
	static_cast<QGeoRoutingManagerEngine*>(ptr)->setMeasurementSystem(static_cast<QLocale::MeasurementSystem>(system));
}

int QGeoRoutingManagerEngine_SupportedFeatureTypes(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->supportedFeatureTypes();
}

int QGeoRoutingManagerEngine_SupportedFeatureWeights(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->supportedFeatureWeights();
}

int QGeoRoutingManagerEngine_SupportedManeuverDetails(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->supportedManeuverDetails();
}

int QGeoRoutingManagerEngine_SupportedRouteOptimizations(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->supportedRouteOptimizations();
}

int QGeoRoutingManagerEngine_SupportedSegmentDetails(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->supportedSegmentDetails();
}

int QGeoRoutingManagerEngine_SupportedTravelModes(void* ptr){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->supportedTravelModes();
}

void* QGeoRoutingManagerEngine_UpdateRoute(void* ptr, void* route, void* position){
	return static_cast<QGeoRoutingManagerEngine*>(ptr)->updateRoute(*static_cast<QGeoRoute*>(route), *static_cast<QGeoCoordinate*>(position));
}

void QGeoRoutingManagerEngine_DestroyQGeoRoutingManagerEngine(void* ptr){
	static_cast<QGeoRoutingManagerEngine*>(ptr)->~QGeoRoutingManagerEngine();
}

#include "qplaceidreply.h"
#include <QModelIndex>
#include <QString>
#include <QVariant>
#include <QUrl>
#include "_cgo_export.h"

#include "qplacereply.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplaceproposedsearchresult.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qplacecategory.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include "_cgo_export.h"

#include "qgeoroute.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QGeoRectangle>
#include <QGeoRouteSegment>
#include <QGeoRouteRequest>
#include <QGeoRoute>
#include "_cgo_export.h"

class MyQGeoRoute: public QGeoRoute {
public:
};

void* QGeoRoute_NewQGeoRoute(){
	return new QGeoRoute();
}

void* QGeoRoute_NewQGeoRoute2(void* other){
	return new QGeoRoute(*static_cast<QGeoRoute*>(other));
}

double QGeoRoute_Distance(void* ptr){
	return static_cast<double>(static_cast<QGeoRoute*>(ptr)->distance());
}

char* QGeoRoute_RouteId(void* ptr){
	return static_cast<QGeoRoute*>(ptr)->routeId().toUtf8().data();
}

void QGeoRoute_SetBounds(void* ptr, void* bounds){
	static_cast<QGeoRoute*>(ptr)->setBounds(*static_cast<QGeoRectangle*>(bounds));
}

void QGeoRoute_SetDistance(void* ptr, double distance){
	static_cast<QGeoRoute*>(ptr)->setDistance(static_cast<qreal>(distance));
}

void QGeoRoute_SetFirstRouteSegment(void* ptr, void* routeSegment){
	static_cast<QGeoRoute*>(ptr)->setFirstRouteSegment(*static_cast<QGeoRouteSegment*>(routeSegment));
}

void QGeoRoute_SetRequest(void* ptr, void* request){
	static_cast<QGeoRoute*>(ptr)->setRequest(*static_cast<QGeoRouteRequest*>(request));
}

void QGeoRoute_SetRouteId(void* ptr, char* id){
	static_cast<QGeoRoute*>(ptr)->setRouteId(QString(id));
}

void QGeoRoute_SetTravelMode(void* ptr, int mode){
	static_cast<QGeoRoute*>(ptr)->setTravelMode(static_cast<QGeoRouteRequest::TravelMode>(mode));
}

void QGeoRoute_SetTravelTime(void* ptr, int secs){
	static_cast<QGeoRoute*>(ptr)->setTravelTime(secs);
}

int QGeoRoute_TravelMode(void* ptr){
	return static_cast<QGeoRoute*>(ptr)->travelMode();
}

int QGeoRoute_TravelTime(void* ptr){
	return static_cast<QGeoRoute*>(ptr)->travelTime();
}

void QGeoRoute_DestroyQGeoRoute(void* ptr){
	static_cast<QGeoRoute*>(ptr)->~QGeoRoute();
}

#include "qgeoroutereply.h"
#include <QObject>
#include <QGeoRoute>
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QGeoRouteReply>
#include "_cgo_export.h"

class MyQGeoRouteReply: public QGeoRouteReply {
public:
void Signal_Finished(){callbackQGeoRouteReplyFinished(this->objectName().toUtf8().data());};
};

void* QGeoRouteReply_NewQGeoRouteReply(int error, char* errorString, void* parent){
	return new QGeoRouteReply(static_cast<QGeoRouteReply::Error>(error), QString(errorString), static_cast<QObject*>(parent));
}

void QGeoRouteReply_Abort(void* ptr){
	static_cast<QGeoRouteReply*>(ptr)->abort();
}

int QGeoRouteReply_Error(void* ptr){
	return static_cast<QGeoRouteReply*>(ptr)->error();
}

char* QGeoRouteReply_ErrorString(void* ptr){
	return static_cast<QGeoRouteReply*>(ptr)->errorString().toUtf8().data();
}

void QGeoRouteReply_ConnectFinished(void* ptr){
	QObject::connect(static_cast<QGeoRouteReply*>(ptr), static_cast<void (QGeoRouteReply::*)()>(&QGeoRouteReply::finished), static_cast<MyQGeoRouteReply*>(ptr), static_cast<void (MyQGeoRouteReply::*)()>(&MyQGeoRouteReply::Signal_Finished));;
}

void QGeoRouteReply_DisconnectFinished(void* ptr){
	QObject::disconnect(static_cast<QGeoRouteReply*>(ptr), static_cast<void (QGeoRouteReply::*)()>(&QGeoRouteReply::finished), static_cast<MyQGeoRouteReply*>(ptr), static_cast<void (MyQGeoRouteReply::*)()>(&MyQGeoRouteReply::Signal_Finished));;
}

int QGeoRouteReply_IsFinished(void* ptr){
	return static_cast<QGeoRouteReply*>(ptr)->isFinished();
}

void QGeoRouteReply_DestroyQGeoRouteReply(void* ptr){
	static_cast<QGeoRouteReply*>(ptr)->~QGeoRouteReply();
}

