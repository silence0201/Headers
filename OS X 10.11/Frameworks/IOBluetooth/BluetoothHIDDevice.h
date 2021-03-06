//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IOBluetoothDevice, NSString;

@interface BluetoothHIDDevice : NSObject
{
    unsigned int _objectID;
    unsigned int _hidDevice;
    struct IOHIDDeviceInterface **_hidDeviceInterface;
    BOOL _hidDeviceInterfaceOpen;
    IOBluetoothDevice *_bluetoothDevice;
    unsigned short _vendorIDSource;
    unsigned short _vendorID;
    unsigned short _productID;
    unsigned int _classOfDevice;
    struct BluetoothDeviceAddress _address;
    struct IOHIDQueueInterface **_queue;
    struct __CFRunLoopSource *_runLoopSource;
    struct UnsignedWide _timestamp;
    unsigned int _interestNotification;
}

+ (id)withBluetoothDevice:(id)arg1;
+ (id)withHIDDevice:(unsigned int)arg1;
- (BOOL)isCharging;
- (BOOL)representsEventService:(unsigned int)arg1;
- (BOOL)connectedOverUSB;
- (BOOL)recantConnection;
- (int)disconnect;
@property(readonly) BOOL isTrackpadDevice;
@property(readonly) BOOL isKeyboardDevice;
@property(readonly) BOOL isMouseDevice;
@property(readonly) NSString *product;
@property(readonly) NSString *manufacturer;
@property(readonly) NSString *addressString;
- (struct BluetoothDeviceAddress *)address;
@property(readonly) NSString *name;
@property(readonly) unsigned short primaryUsagePage;
@property(readonly) unsigned short primaryUsage;
@property(readonly) unsigned int classOfDevice;
@property(readonly) unsigned short version;
@property(readonly) unsigned short productID;
@property(readonly) unsigned short vendorID;
@property(readonly) unsigned short vendorIDSource;
@property(readonly) NSString *driverClass;
- (void)serviceInterestOfType:(unsigned int)arg1 argument:(void *)arg2;
- (void)deviceNameChanged:(id)arg1;
- (struct UnsignedWide)lastActivity;
- (void)queueEventReceived;
- (void)stopQueue;
- (BOOL)startQueue;
- (id)bluetoothDevice;
- (BOOL)hidDeviceInterfaceOpen;
- (struct IOHIDDeviceInterface **)hidDeviceInterface;
- (BOOL)_setHIDDevice:(unsigned int)arg1;
- (unsigned int)hidDevice;
- (unsigned int)objectID;
- (void)closeDownServices;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithBluetoothDevice:(id)arg1;
- (id)initWithHIDDevice:(unsigned int)arg1;

@end

