//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExternalAccessory/NSObject-Protocol.h>

@class EABluetoothAccessoryPicker, NSString;

@protocol EABluetoothAccessoryPickerDelegate <NSObject>

@optional
- (void)devicePicker:(EABluetoothAccessoryPicker *)arg1 didSelectAddress:(NSString *)arg2 errorCode:(long long)arg3;
@end

