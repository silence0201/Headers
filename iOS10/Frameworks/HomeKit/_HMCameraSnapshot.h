//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

@interface _HMCameraSnapshot : _HMCameraSource
{
    NSDate *_captureDate;
}

@property(readonly, copy, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
- (void).cxx_destruct;
- (void)_releaseSlotIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 profileUniqueIdentifier:(id)arg6 aspectRatio:(id)arg7 captureDate:(id)arg8;

@end

