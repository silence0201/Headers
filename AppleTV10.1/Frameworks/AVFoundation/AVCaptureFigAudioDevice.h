//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureDevice.h>

@class AVWeakReference, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AVCaptureFigAudioDevice : AVCaptureDevice
{
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource *_fcs;
    NSDictionary *_attributes;
    _Bool _levelMeteringEnabled;
    _Bool _isConnected;
    NSString *_localizedName;
    AVWeakReference *_weakReference;
}

+ (void)_reconnectDevices:(id)arg1;
+ (id)_devices;
+ (void)initialize;
- (void)_handleNotification:(struct __CFString *)arg1 payload:(id)arg2;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (id)_copyFigCaptureSourceProperty:(struct __CFString *)arg1;
- (struct OpaqueCMClock *)deviceClock;
- (_Bool)supportsAVCaptureSessionPreset:(id)arg1;
- (void)stopUsingDevice;
- (_Bool)startUsingDevice:(id *)arg1;
- (_Bool)isConnected;
- (_Bool)isInUseByAnotherApplication;
- (_Bool)hasMediaType:(id)arg1;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1;
- (id)deviceType;
- (id)localizedName;
- (id)modelID;
- (id)uniqueID;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;
- (struct OpaqueFigCaptureSource *)figCaptureSource;
- (void)dealloc;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;
- (id)init;

@end

