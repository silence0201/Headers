//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAlert, GEOETAServiceResponseSummary, GEOPBTransitRoutingIncidentMessage, GEORouteDisplayHints, GEOStyleAttributes, GEOTransitDecoderData, NSData, NSMutableArray, NSString;

@interface GEODirectionsResponse : PBCodable <NSCopying>
{
    CDStruct_95bda58d _supportedTransportTypes;
    struct GEOTimepoint _timepointUsed;
    unsigned long long _debugLatencyMs;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    GEOTransitDecoderData *_decoderData;
    NSData *_directionsResponseID;
    GEORouteDisplayHints *_displayHints;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOAlert *_failureAlert;
    NSData *_graphV3;
    NSMutableArray *_incidentsOffRoutes;
    NSMutableArray *_incidentsOnRoutes;
    int _instructionSignFillColor;
    int _liveRouteSavingsSeconds;
    int _localDistanceUnits;
    NSMutableArray *_placeSearchResponses;
    NSMutableArray *_routes;
    unsigned int _selectedRouteIndex;
    NSMutableArray *_serviceGaps;
    NSData *_sessionState;
    int _status;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_suggestedRoutes;
    NSString *_transitDataVersion;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    BOOL _isNavigable;
    BOOL _routeDeviatesFromOriginal;
    struct {
        unsigned int timepointUsed:1;
        unsigned int debugLatencyMs:1;
        unsigned int instructionSignFillColor:1;
        unsigned int liveRouteSavingsSeconds:1;
        unsigned int localDistanceUnits:1;
        unsigned int selectedRouteIndex:1;
        unsigned int isNavigable:1;
        unsigned int routeDeviatesFromOriginal:1;
    } _has;
}

+ (Class)suggestedRouteType;
+ (Class)serviceGapType;
+ (Class)incidentsOffRoutesType;
+ (Class)incidentsOnRoutesType;
+ (Class)placeSearchResponseType;
+ (Class)routeType;
@property(retain, nonatomic) NSString *transitDataVersion; // @synthesize transitDataVersion=_transitDataVersion;
@property(retain, nonatomic) NSData *graphV3; // @synthesize graphV3=_graphV3;
@property(retain, nonatomic) GEOTransitDecoderData *decoderData; // @synthesize decoderData=_decoderData;
@property(nonatomic) struct GEOTimepoint timepointUsed; // @synthesize timepointUsed=_timepointUsed;
@property(retain, nonatomic) NSMutableArray *suggestedRoutes; // @synthesize suggestedRoutes=_suggestedRoutes;
@property(nonatomic) int liveRouteSavingsSeconds; // @synthesize liveRouteSavingsSeconds=_liveRouteSavingsSeconds;
@property(retain, nonatomic) GEOAlert *failureAlert; // @synthesize failureAlert=_failureAlert;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) GEORouteDisplayHints *displayHints; // @synthesize displayHints=_displayHints;
@property(retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage; // @synthesize transitIncidentMessage=_transitIncidentMessage;
@property(nonatomic) unsigned int selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(retain, nonatomic) NSMutableArray *serviceGaps; // @synthesize serviceGaps=_serviceGaps;
@property(retain, nonatomic) NSMutableArray *incidentsOffRoutes; // @synthesize incidentsOffRoutes=_incidentsOffRoutes;
@property(retain, nonatomic) NSMutableArray *incidentsOnRoutes; // @synthesize incidentsOnRoutes=_incidentsOnRoutes;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) NSMutableArray *placeSearchResponses; // @synthesize placeSearchResponses=_placeSearchResponses;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTransitDataVersion;
@property(readonly, nonatomic) BOOL hasGraphV3;
@property(readonly, nonatomic) BOOL hasDecoderData;
@property(nonatomic) BOOL hasTimepointUsed;
- (id)suggestedRouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestedRoutesCount;
- (void)addSuggestedRoute:(id)arg1;
- (void)clearSuggestedRoutes;
@property(nonatomic) BOOL hasLiveRouteSavingsSeconds;
@property(readonly, nonatomic) BOOL hasFailureAlert;
@property(readonly, nonatomic) BOOL hasSessionState;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
@property(readonly, nonatomic) BOOL hasDisplayHints;
@property(readonly, nonatomic) BOOL hasTransitIncidentMessage;
@property(nonatomic) BOOL hasSelectedRouteIndex;
- (id)serviceGapAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceGapsCount;
- (void)addServiceGap:(id)arg1;
- (void)clearServiceGaps;
- (int)StringAsSupportedTransportTypes:(id)arg1;
- (id)supportedTransportTypesAsString:(int)arg1;
- (void)setSupportedTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedTransportTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedTransportType:(int)arg1;
- (void)clearSupportedTransportTypes;
@property(readonly, nonatomic) int *supportedTransportTypes;
@property(readonly, nonatomic) unsigned long long supportedTransportTypesCount;
- (void)setProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;
- (struct GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail)arg1;
- (void)clearProblemDetails;
@property(readonly, nonatomic) struct GEOProblemDetail *problemDetails;
@property(readonly, nonatomic) unsigned long long problemDetailsCount;
- (id)incidentsOffRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffRoutesCount;
- (void)addIncidentsOffRoutes:(id)arg1;
- (void)clearIncidentsOffRoutes;
- (id)incidentsOnRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnRoutesCount;
- (void)addIncidentsOnRoutes:(id)arg1;
- (void)clearIncidentsOnRoutes;
- (int)StringAsInstructionSignFillColor:(id)arg1;
- (id)instructionSignFillColorAsString:(int)arg1;
@property(nonatomic) BOOL hasInstructionSignFillColor;
@property(nonatomic) int instructionSignFillColor; // @synthesize instructionSignFillColor=_instructionSignFillColor;
@property(nonatomic) BOOL hasIsNavigable;
@property(nonatomic) BOOL isNavigable; // @synthesize isNavigable=_isNavigable;
@property(readonly, nonatomic) BOOL hasDirectionsResponseID;
@property(nonatomic) BOOL hasRouteDeviatesFromOriginal;
@property(nonatomic) BOOL routeDeviatesFromOriginal; // @synthesize routeDeviatesFromOriginal=_routeDeviatesFromOriginal;
- (int)StringAsLocalDistanceUnits:(id)arg1;
- (id)localDistanceUnitsAsString:(int)arg1;
@property(nonatomic) BOOL hasLocalDistanceUnits;
@property(nonatomic) int localDistanceUnits; // @synthesize localDistanceUnits=_localDistanceUnits;
- (id)placeSearchResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeSearchResponsesCount;
- (void)addPlaceSearchResponse:(id)arg1;
- (void)clearPlaceSearchResponses;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)dealloc;
@property(nonatomic) BOOL hasDebugLatencyMs;
@property(nonatomic) unsigned long long debugLatencyMs;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) BOOL hasEtaServiceSummary;
- (id)_destinationMapItem;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
