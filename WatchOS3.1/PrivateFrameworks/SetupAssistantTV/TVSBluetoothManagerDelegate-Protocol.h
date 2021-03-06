//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantTV/NSObject-Protocol.h>

@class NSError, TVSBluetoothDevice, TVSBluetoothManager;

@protocol TVSBluetoothManagerDelegate <NSObject>

@optional
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 didRejectPairingPINForDevice:(TVSBluetoothDevice *)arg2;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 didAcceptPairingPINForDevice:(TVSBluetoothDevice *)arg2;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 presentPairingPIN:(long long)arg2 forDevice:(TVSBluetoothDevice *)arg3;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 didCompleteDeviceDisconnection:(TVSBluetoothDevice *)arg2 error:(NSError *)arg3;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 didCompleteDeviceConnection:(TVSBluetoothDevice *)arg2 error:(NSError *)arg3;
@end

