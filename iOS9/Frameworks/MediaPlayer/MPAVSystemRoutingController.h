//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPointerArray;
@protocol OS_dispatch_queue;

@interface MPAVSystemRoutingController : NSObject
{
    NSPointerArray *_clientRoutingControllers;
    long long _clientDiscoveryMode;
    NSObject<OS_dispatch_queue> *_serialQueue;
    int _debugNotifyToken;
}

+ (id)sharedRoutingController;
- (void).cxx_destruct;
- (void)_debugLogSystemControllerState;
- (void)_onQueueUpdateClientRouteDiscoveryMode;
- (void)_updateClientRouteDiscoveryMode;
- (void)_clientRoutingControllerDidUpdateDiscoveryModeNotification:(id)arg1;
- (void)unregisterClientRoutingController:(id)arg1;
- (void)registerClientRoutingController:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

