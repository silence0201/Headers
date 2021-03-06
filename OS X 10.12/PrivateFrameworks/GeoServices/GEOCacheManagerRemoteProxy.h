//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOCacheManaging-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOCacheManagerRemoteProxy : NSObject <GEOCacheManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (long long)invalidationStateForComponent:(id)arg1;
- (long long)invalidationStateForPlace:(id)arg1;
- (void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_refreshMapItems:(id)arg1 updatedCoordinates:(id)arg2 xpcMessageName:(id)arg3 traits:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)versionsForDomains:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

