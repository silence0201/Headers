//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDSnapshotRequestHandlerProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HMDSnapshotCacheRequestHandler : NSObject <HMFLogging, HMFTimerDelegate, HMDSnapshotRequestHandlerProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_logString;
    NSMutableDictionary *_snapshotCacheMap;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSMutableDictionary *snapshotCacheMap; // @synthesize snapshotCacheMap=_snapshotCacheMap;
@property(readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)timerDidFire:(id)arg1;
- (void)setSnapshotFileToCache:(id)arg1 proactiveSessionID:(id)arg2;
- (void)removeSnapshotFileToCache:(id)arg1 error:(id)arg2;
- (void)addSnapshotFileToCache:(id)arg1;
- (id)logIdentifier;
- (id)initWithWorkQueue:(id)arg1 logID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

