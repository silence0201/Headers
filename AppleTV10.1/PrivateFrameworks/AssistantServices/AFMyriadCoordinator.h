//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, NSUUID, _DKKnowledgeStore;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFMyriadCoordinator : NSObject
{
    unsigned long long _advertisingState;
    NSMutableDictionary *_replies;
    NSMutableDictionary *_replyCounts;
    id _delegate;
    NSString *_deviceClass;
    int _deviceAdjust;
    NSObject<OS_dispatch_queue> *_myriadListenQueue;
    NSObject<OS_dispatch_queue> *_myriadTimerQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_source> *_recentLossTimer;
    NSObject<OS_dispatch_source> *_delayedEndTimer;
    _Bool _listenTimerIsRunning;
    _Bool _coordinationEnabled;
    _Bool _clientIsDirectActivating;
    _Bool _clientRecentlyLostElection;
    _Bool _clientLostDueToTrumping;
    _Bool _clientIsListeningAfterRecentWin;
    _DKKnowledgeStore *_coreDuetStore;
    NSUUID *_designatedSelfID;
    NSDate *_lastSiriActivationTime;
    unsigned short _lastPHash;
}

+ (void)clearCurrentCoordinator;
+ (id)currentCoordinator;
- (void).cxx_destruct;
- (unsigned short)recentEventBump;
- (void)logCoreDuetResults:(id)arg1;
- (id)activityEventStream;
- (id)_sortedReplies;
- (_Bool)_shouldContinueFor:(id)arg1;
- (id)responseObject:(unsigned short)arg1;
- (id)directTriggerRecord;
- (id)voiceTriggerRecord;
- (void)_handleRecentClientElectionLoss;
- (void)_cancelTimer;
- (void)_startPostScanListenTimerFor:(float)arg1;
- (void)_startListenTimerFor:(float)arg1;
- (void)_startListenTimer;
- (void)endAdvertisingWithDeviceProhibitions:(id)arg1;
- (void)endAdvertising;
- (void)endAdvertisingAfterDelay:(float)arg1;
- (void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)advertiseWith:(id)arg1;
- (void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)startResponseAdvertising:(unsigned short)arg1;
- (void)startAdvertisingFromDirectTrigger;
- (void)startWatchAdvertisingFromVoiceTrigger;
- (void)startAdvertisingFromVoiceTrigger;
- (void)stopListening;
- (void)startListening;
- (void)resetReplies;
- (void)_initDeviceClassAndAdjustments;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

