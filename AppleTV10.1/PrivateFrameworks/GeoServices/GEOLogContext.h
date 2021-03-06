//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSLock, NSMutableArray;

@interface GEOLogContext : NSObject <NSCopying>
{
    NSMutableArray *_logMsgStates;
    NSLock *_logMsgStatesLock;
}

+ (id)logContextFromTraits:(id)arg1;
+ (id)logContextWithDefaultTraitsForCachedContext;
+ (id)logContextWithDefaultTraits;
+ (id)defaultLogContext;
@property(readonly, nonatomic) NSArray *logMsgStates; // @synthesize logMsgStates=_logMsgStates;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_registerMapViewStateWithTraits:(id)arg1;
- (void)_registerCarPlayStateWithTraits:(id)arg1;
- (void)_registerDeviceLocaleStateWithTraits:(id)arg1;
- (void)_registerDeviceBaseStateWithTraits:(id)arg1;
- (void)_registerDefaultMapUIState;
- (void)_registerExperimentsState;
- (void)_registerDeviceConnectionState;
- (void)_registerApplicationIdentifierState;
- (void)_registerDeviceIdentifierState;
- (void)_registerLogContextWithTraits:(id)arg1;
- (void)_initializeDefaultStates;
- (id)logMsgStateOfType:(int)arg1;
- (void)registerUserSessionStateOfType:(unsigned long long)arg1 isNavSessionAllowed:(_Bool)arg2;
- (void)unregisterLogMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)registerLogMsgState:(id)arg1;
- (id)logContextByMergingLogContext:(id)arg1;
- (void)mergeLogContext:(id)arg1;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;
- (id)initWithDefaultTraits;
- (id)initWithDefaultStates;
- (id)init;

@end

