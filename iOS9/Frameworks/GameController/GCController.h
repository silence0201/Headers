//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCExtendedGamepad, GCGamepad, GCMotion, NSArray, NSString;
@protocol GCNamedProfile, OS_dispatch_queue;

@interface GCController : NSObject
{
}

+ (void)stopWirelessControllerDiscovery;
+ (void)startWirelessControllerDiscoveryWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_startWirelessControllerDiscoveryWithCompanions:(_Bool)arg1 btClassic:(_Bool)arg2 btle:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)controllers;
+ (void)__daemon__appDidEnterBackground;
+ (void)__daemon__appWillEnterForeground;
+ (void)__daemon__controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
+ (void)__daemon__removeController:(id)arg1;
+ (void)__daemon__addController:(id)arg1;
+ (void)__daemon__requestConnectedHostUpdatesWithHandler:(CDUnknownBlockType)arg1;
+ (void)__daemon__setUserActivityUserInfo:(id)arg1;
+ (void)__daemon__startBonjourService;
+ (void)__setLogger__:(CDUnknownBlockType)arg1;
+ (void)__openXPC__;
+ (void)__open__;
@property(readonly, nonatomic) unsigned int service;
@property(readonly, nonatomic) struct __IOHIDDevice *deviceRef;
@property(retain, nonatomic) id <GCNamedProfile> profile;
@property(readonly, retain, nonatomic) GCMotion *motion;
@property(readonly, retain, nonatomic) GCExtendedGamepad *extendedGamepad;
@property(readonly, retain, nonatomic) GCGamepad *gamepad;
- (_Bool)isForwarded;
- (unsigned int)sampleRate;
- (void)addDeviceRefs:(id)arg1;
- (void)removeDeviceRef:(struct __IOHIDDevice *)arg1;
- (_Bool)isEqualToController:(id)arg1;
@property(nonatomic) char *hidReportBuffer;
@property(readonly, retain, nonatomic) NSArray *deviceRefs;
- (_Bool)supportsMotionLite;
- (unsigned long long)deviceHash;
@property(nonatomic) long long playerIndex;
@property(readonly, nonatomic, getter=isAttachedToDevice) _Bool attachedToDevice;
@property(readonly, copy, nonatomic) NSString *vendorName;
@property(retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property(copy, nonatomic) CDUnknownBlockType controllerPausedHandler;

@end

