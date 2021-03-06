//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
}

- (void)scanForTWAINDevices;
- (void)resetAllTWAINDevices;
- (void)removeAllTWAINDevices;
- (id)copyOfTWAINDevices;
- (void)addTWAINDevice:(id)arg1;
- (id)deviceWithRef:(id)arg1;
- (BOOL)containsDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (id)preferredDevice;
@property(readonly) NSArray *devices;
- (void)stop;
- (void)start;
@property unsigned long long browsedDeviceTypeMask;
@property(readonly, getter=isBrowsing) BOOL browsing;
@property id <ICDeviceBrowserDelegate> delegate;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

