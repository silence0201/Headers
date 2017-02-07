//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgEventCacheHit, GEOLogMsgEventDirections, GEOLogMsgEventListInteractionSession, GEOLogMsgEventLogFramework, GEOLogMsgEventMapLaunch, GEOLogMsgEventMapsWidgetsInteractionSession, GEOLogMsgEventNetwork, GEOLogMsgEventPlaceDataCache, GEOLogMsgEventProactiveSuggestionInteractionSession, GEOLogMsgEventRefineSearchSession, GEOLogMsgEventStaleResource, GEOLogMsgEventStateTiming, GEOLogMsgEventTelemetric, GEOLogMsgEventTileSetState, GEOLogMsgEventTimeToLeaveHypothesis, GEOLogMsgEventTimeToLeaveInitialTravelTime, GEOLogMsgEventTransitAppLaunch, GEOLogMsgEventUserAction, LOGMSGEVENTLogMsgEventRideBookedSession, LOGMSGEVENTLogMsgEventRideBookingSession, LOGMSGEVENTLogMsgEventTableBookedSession, LOGMSGEVENTLogMsgEventTableBookingSession, NSMutableArray;

@interface GEOLogMsgEvent : PBCodable <NSCopying>
{
    GEOLogMsgEventCacheHit *_cacheHitEvent;
    GEOLogMsgEventDirections *_directionsEvent;
    int _eventType;
    GEOLogMsgEventListInteractionSession *_listInteractionSession;
    GEOLogMsgEventLogFramework *_logFrameworkEvent;
    NSMutableArray *_logMsgStates;
    GEOLogMsgEventMapLaunch *_mapLaunchEvent;
    GEOLogMsgEventMapsWidgetsInteractionSession *_mapsWidgetsInteractionSession;
    GEOLogMsgEventNetwork *_networkEvent;
    GEOLogMsgEventPlaceDataCache *_placeDataCacheEvent;
    GEOLogMsgEventProactiveSuggestionInteractionSession *_proactiveSuggestionInteractionSessionEvent;
    GEOLogMsgEventRefineSearchSession *_refineSearchSession;
    LOGMSGEVENTLogMsgEventRideBookedSession *_rideBookedSession;
    LOGMSGEVENTLogMsgEventRideBookingSession *_rideBookingSession;
    GEOLogMsgEventStaleResource *_staleResourceEvent;
    GEOLogMsgEventStateTiming *_stateTimingEvent;
    LOGMSGEVENTLogMsgEventTableBookedSession *_tableBookedSession;
    LOGMSGEVENTLogMsgEventTableBookingSession *_tableBookingSession;
    GEOLogMsgEventTelemetric *_telemetric;
    GEOLogMsgEventTileSetState *_tileSetStateEvent;
    GEOLogMsgEventTimeToLeaveHypothesis *_timeToLeaveHypothesisEvent;
    GEOLogMsgEventTimeToLeaveInitialTravelTime *_timeToLeaveInitialTravelTimeEvent;
    GEOLogMsgEventTransitAppLaunch *_transitAppLaunchEvent;
    GEOLogMsgEventUserAction *_userActionEvent;
    struct {
        unsigned int eventType:1;
    } _has;
}

+ (Class)logMsgStateType;
+ (_Bool)logMsgEventType:(int)arg1 acceptsLogMsgStateType:(int)arg2;
+ (id)acceptedLogMsgStatesForLogMsgEventType:(int)arg1;
+ (id)acceptedLogMsgStates;
+ (void)_initializeAllowedSessionTypes;
+ (void)_initializeAcceptedLogMsgStateTypes;
@property(retain, nonatomic) GEOLogMsgEventTelemetric *telemetric; // @synthesize telemetric=_telemetric;
@property(retain, nonatomic) GEOLogMsgEventStaleResource *staleResourceEvent; // @synthesize staleResourceEvent=_staleResourceEvent;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventTableBookedSession *tableBookedSession; // @synthesize tableBookedSession=_tableBookedSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventTableBookingSession *tableBookingSession; // @synthesize tableBookingSession=_tableBookingSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventRideBookedSession *rideBookedSession; // @synthesize rideBookedSession=_rideBookedSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventRideBookingSession *rideBookingSession; // @synthesize rideBookingSession=_rideBookingSession;
@property(retain, nonatomic) GEOLogMsgEventMapLaunch *mapLaunchEvent; // @synthesize mapLaunchEvent=_mapLaunchEvent;
@property(retain, nonatomic) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent; // @synthesize proactiveSuggestionInteractionSessionEvent=_proactiveSuggestionInteractionSessionEvent;
@property(retain, nonatomic) GEOLogMsgEventRefineSearchSession *refineSearchSession; // @synthesize refineSearchSession=_refineSearchSession;
@property(retain, nonatomic) GEOLogMsgEventListInteractionSession *listInteractionSession; // @synthesize listInteractionSession=_listInteractionSession;
@property(retain, nonatomic) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession; // @synthesize mapsWidgetsInteractionSession=_mapsWidgetsInteractionSession;
@property(retain, nonatomic) GEOLogMsgEventLogFramework *logFrameworkEvent; // @synthesize logFrameworkEvent=_logFrameworkEvent;
@property(retain, nonatomic) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent; // @synthesize timeToLeaveInitialTravelTimeEvent=_timeToLeaveInitialTravelTimeEvent;
@property(retain, nonatomic) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent; // @synthesize timeToLeaveHypothesisEvent=_timeToLeaveHypothesisEvent;
@property(retain, nonatomic) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent; // @synthesize transitAppLaunchEvent=_transitAppLaunchEvent;
@property(retain, nonatomic) GEOLogMsgEventDirections *directionsEvent; // @synthesize directionsEvent=_directionsEvent;
@property(retain, nonatomic) GEOLogMsgEventCacheHit *cacheHitEvent; // @synthesize cacheHitEvent=_cacheHitEvent;
@property(retain, nonatomic) GEOLogMsgEventNetwork *networkEvent; // @synthesize networkEvent=_networkEvent;
@property(retain, nonatomic) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent; // @synthesize placeDataCacheEvent=_placeDataCacheEvent;
@property(retain, nonatomic) GEOLogMsgEventTileSetState *tileSetStateEvent; // @synthesize tileSetStateEvent=_tileSetStateEvent;
@property(retain, nonatomic) GEOLogMsgEventStateTiming *stateTimingEvent; // @synthesize stateTimingEvent=_stateTimingEvent;
@property(retain, nonatomic) GEOLogMsgEventUserAction *userActionEvent; // @synthesize userActionEvent=_userActionEvent;
@property(retain, nonatomic) NSMutableArray *logMsgStates; // @synthesize logMsgStates=_logMsgStates;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTelemetric;
@property(readonly, nonatomic) _Bool hasStaleResourceEvent;
@property(readonly, nonatomic) _Bool hasTableBookedSession;
@property(readonly, nonatomic) _Bool hasTableBookingSession;
@property(readonly, nonatomic) _Bool hasRideBookedSession;
@property(readonly, nonatomic) _Bool hasRideBookingSession;
@property(readonly, nonatomic) _Bool hasMapLaunchEvent;
@property(readonly, nonatomic) _Bool hasProactiveSuggestionInteractionSessionEvent;
@property(readonly, nonatomic) _Bool hasRefineSearchSession;
@property(readonly, nonatomic) _Bool hasListInteractionSession;
@property(readonly, nonatomic) _Bool hasMapsWidgetsInteractionSession;
@property(readonly, nonatomic) _Bool hasLogFrameworkEvent;
@property(readonly, nonatomic) _Bool hasTimeToLeaveInitialTravelTimeEvent;
@property(readonly, nonatomic) _Bool hasTimeToLeaveHypothesisEvent;
@property(readonly, nonatomic) _Bool hasTransitAppLaunchEvent;
@property(readonly, nonatomic) _Bool hasDirectionsEvent;
@property(readonly, nonatomic) _Bool hasCacheHitEvent;
@property(readonly, nonatomic) _Bool hasNetworkEvent;
@property(readonly, nonatomic) _Bool hasPlaceDataCacheEvent;
@property(readonly, nonatomic) _Bool hasTileSetStateEvent;
@property(readonly, nonatomic) _Bool hasStateTimingEvent;
@property(readonly, nonatomic) _Bool hasUserActionEvent;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
- (id)logMsgStateAtIndex:(unsigned long long)arg1;
- (unsigned long long)logMsgStatesCount;
- (void)addLogMsgState:(id)arg1;
- (void)clearLogMsgStates;
- (void)dealloc;
- (id)logMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;
- (id)logMsgStateOfType:(int)arg1;
- (unsigned long long)numberOfLogMsgStatesOfType:(int)arg1 stateOrigin:(id)arg2;
- (unsigned long long)numberOfLogMsgStatesOfType:(int)arg1;
- (_Bool)isFullCarPlayStateAllowed;
- (_Bool)isNavigationSessionAllowed;
- (unsigned long long)allowedSessionType;
- (_Bool)acceptsLogMsgStateType:(int)arg1;

@end
