//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioDeviceList;

@interface AVAudioClient : NSObject
{
    AVAudioDeviceList *deviceList;
}

+ (BOOL)setOutputDevice:(id)arg1;
+ (BOOL)setInputDevice:(id)arg1;
+ (id)currentOutputDevice;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
+ (BOOL)isMicrophoneMuted;
+ (void)setMicrophoneMuted:(BOOL)arg1;
+ (BOOL)hasActiveAudioSession;
+ (void)resetAudioSessionOutputPortOverride;
+ (void)stopAudioSession;
+ (void)setAudioSessionProperties:(id)arg1;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)initializeAudioSessionQ;
@property(retain, nonatomic) AVAudioDeviceList *deviceList; // @synthesize deviceList;
- (id)outputDevices;
- (id)inputDevices;
- (id)devices;
@property(nonatomic) CDUnknownBlockType changeListener;
- (void)dealloc;
- (id)init;

@end
