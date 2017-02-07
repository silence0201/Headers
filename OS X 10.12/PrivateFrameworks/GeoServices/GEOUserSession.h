//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOUserSessionEntity, NSData, NSLock;

@interface GEOUserSession : NSObject
{
    struct GEOSessionID _sessionID;
    double _sessionCreationTime;
    unsigned int _sequenceNumber;
    struct GEOSessionID _usageCollectionSessionID;
    double _usageSessionIDGenerationTime;
    BOOL _shareSessionWithMaps;
    GEOUserSessionEntity *_mapsUserSessionEntity;
    BOOL _zeroSessionIDMode;
    NSLock *_lock;
    NSData *_navigationDirectionsID;
    struct GEOSessionID _navigationSessionID;
    double _navigationSessionStartTime;
    NSData *_previousNavigationDirectionsID;
    struct GEOSessionID _previousNavigationSessionID;
    double _previousNavigationSessionStartTime;
    double _previousNavigationSessionEndTime;
    struct GEOSessionID _zeroSessionID;
}

+ (void)registerGEOLogFacility;
+ (id)sharedInstance;
+ (void)setIsGeod;
+ (BOOL)isGeod;
@property BOOL zeroSessionIDMode; // @synthesize zeroSessionIDMode=_zeroSessionIDMode;
@property BOOL shareSessionWithMaps; // @synthesize shareSessionWithMaps=_shareSessionWithMaps;
- (void)endNavigationSession;
- (void)startNavigationSessionWithDirectionsID:(id)arg1 originalDirectionsID:(id)arg2;
@property(readonly) GEOUserSessionEntity *navSessionEntity;
- (void)_updateNavSessionID;
- (void)_generateNewNavSessionID;
- (unsigned int)incrementSequenceNumber;
- (void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(BOOL)arg2;
@property(retain, nonatomic) GEOUserSessionEntity *mapsUserSessionEntity; // @synthesize mapsUserSessionEntity=_mapsUserSessionEntity;
@property(readonly) struct GEOSessionID usageCollectionSessionID;
- (void)mapsSessionEntityWithCallback:(CDUnknownBlockType)arg1 shareSessionIDWithMaps:(BOOL)arg2 resetSession:(BOOL)arg3;
- (void)_mapsSessionEntityWithCallback:(CDUnknownBlockType)arg1;
- (void)_resetSessionID;
- (void)_updateSessionID;
- (void)_renewUsageCollectionSessionID;
- (void)_safe_renewUsageCollectionSessionID;
- (void)_updateWithNewUUIDForSessionID:(struct GEOSessionID *)arg1;
- (id)_defaultForKey:(id)arg1;
- (void)_setDefault:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (double)_getCFAbsoluteCurrentTime;

@end
