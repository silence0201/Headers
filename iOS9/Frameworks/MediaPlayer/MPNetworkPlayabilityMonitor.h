//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPNetworkPlayabilityMonitor : NSObject
{
    long long _effectiveNetworkTypeForCloudPlayback;
    double _lastAverageBitrate;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedNetworkPlayabilityMonitor;
- (void).cxx_destruct;
- (void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
- (long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;
@property(readonly, nonatomic) long long networkType;
@property(readonly, nonatomic) double lastAverageBitrate;
@property(readonly, nonatomic) long long effectiveNetworkTypeForPlayback;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

