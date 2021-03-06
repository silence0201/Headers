//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, CUBitCoder, CURetrier, NSArray, NSData, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate>
{
    _Bool _activateCalled;
    CBCentralManager *_centralManager;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    _Bool _needDups;
    NSData *_payloadFilterData;
    NSData *_payloadFilterMask;
    long long _payloadType;
    NSObject<OS_dispatch_source> *_rescanTimer;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_rssiEventLogFile;
    _Bool _scanStarted;
    CURetrier *_startRetrier;
    _Bool _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    struct LogCategory *_ucat;
    _Bool _rssiLog;
    _Bool _scanCache;
    unsigned int _changeFlags;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    NSArray *_deviceFilter;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CUBitCoder *_payloadCoder;
    double _rescanInterval;
    long long _rssiThreshold;
    long long _scanInterval;
    long long _scanRate;
    long long _scanWindow;
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
}

@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long scanWindow; // @synthesize scanWindow=_scanWindow;
@property(nonatomic) long long scanRate; // @synthesize scanRate=_scanRate;
@property(nonatomic) long long scanInterval; // @synthesize scanInterval=_scanInterval;
@property(nonatomic) _Bool scanCache; // @synthesize scanCache=_scanCache;
@property(nonatomic) long long rssiThreshold; // @synthesize rssiThreshold=_rssiThreshold;
@property(nonatomic) _Bool rssiLog; // @synthesize rssiLog=_rssiLog;
@property(nonatomic) double rescanInterval; // @synthesize rescanInterval=_rescanInterval;
@property(retain, nonatomic) CUBitCoder *payloadCoder; // @synthesize payloadCoder=_payloadCoder;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) NSArray *deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
- (void).cxx_destruct;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_updateRescanTimer;
- (_Bool)_updateCounterpart:(id)arg1;
- (void)_timeoutTimerFired;
- (void)_startTimeoutIfNeeded;
- (void)_rssiLogClose;
- (void)_rssiLogOpen;
- (void)_restartIfNeeded;
- (void)_rescanTimerFired;
- (void)_poweredOff;
- (_Bool)_needDups;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPayloadFilterData:(id)arg1 mask:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

