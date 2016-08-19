//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMHomeDelegate-Protocol.h>

@class CLLocation, HMHome, HMResidentDevice, NSArray;

@protocol HMHomeDelegatePrivate <HMHomeDelegate>

@optional
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 didUpdateConfigurationStateForResidentDevice:(HMResidentDevice *)arg2;
- (void)homeDidDiscoverNewResidentDevices:(HMHome *)arg1;
@end

