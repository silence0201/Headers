//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOBluetooth/IOBluetoothSDPServiceRecord.h>

@class IOBluetoothUserNotification, NSDictionary, NSMutableSet;

@interface IOBluetoothLocalSDPServiceRecord : IOBluetoothSDPServiceRecord
{
    NSDictionary *mServerAttributeDictionary;
    NSDictionary *mLocalAttributeDictionary;
    NSMutableSet *mAllowedDevices;
    NSMutableSet *mRestrictedDevices;
    IOBluetoothUserNotification *mIncomingChannelNotification;
}

+ (id)withServerAttributeDictionary:(id)arg1 localAttributeDictionary:(id)arg2;
+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldVendServiceForUser:(int)arg1;
- (void)launchApp:(id)arg1 objectID:(unsigned long long)arg2;
- (void)incomingL2CAPChannel:(id)arg1 channel:(id)arg2;
- (void)incomingRFCOMMChannel:(id)arg1 channel:(id)arg2;
- (BOOL)unregisterForIncomingChannelNotifications;
- (BOOL)registerForIncomingChannelNotifications;
- (id)getNameOfService;
- (BOOL)uniqueClientPerService;
- (BOOL)uniqueClientPerDevice;
- (BOOL)isPersistent;
- (id)getLocalAttribute:(id)arg1;
- (id)getLocalAttributeDictionary;
- (id)getServerAttributeDictionary;
- (void)dealloc;
- (id)initWithServerAttributeDictionary:(id)arg1 localAttributeDictionary:(id)arg2;

@end
