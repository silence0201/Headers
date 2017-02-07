//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>

@class BBObserver, BLTDebugMetricsRatioOnInterval, NSString;
@protocol BLTDebugObserverWatchKitAppList;

@interface BLTDebugObserverHolder : NSObject <BBObserverDelegate>
{
    BBObserver *_observer;
    BLTDebugMetricsRatioOnInterval *_exceedeExpirationDebugMetric;
    id <BLTDebugObserverWatchKitAppList> _wkAppList;
}

+ (void)startWithExceededExpirationDebugMetric:(id)arg1 wkAppList:(id)arg2;
- (void).cxx_destruct;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)_reconnectObserver;
- (void)dealloc;
- (id)initWithExceededExpirationDebugMetric:(id)arg1 wkAppList:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
