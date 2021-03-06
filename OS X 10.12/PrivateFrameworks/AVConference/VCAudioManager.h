//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioDevice, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioManager : NSObject
{
    int direction;
    int audioRefCount;
    int connectionRefCount;
    int hardwareSampleRate;
    struct AudioStreamBasicDescription vpioFormat;
    BOOL usingFloat;
    BOOL isGKVoiceChat;
    BOOL isInMediaserverd;
    BOOL isMicrophoneMuted;
    BOOL enableSpeakerPhone;
    BOOL isUsingSuppression;
    BOOL isTetheredDisplayMode;
    int clientPID;
    NSDictionary *backMicSource;
    NSDictionary *frontMicSource;
    struct _opaque_pthread_mutex_t audioLock;
    NSObject<OS_dispatch_queue> *cmSessionQueue;
    NSObject<OS_dispatch_queue> *inputDeviceQueue;
    struct tagHANDLE *hAUIO;
    AVAudioDevice *targetInputDevice;
    AVAudioDevice *targetOutputDevice;
    int inferredOperatingMode;
    int inferredDeviceRole;
    BOOL inferredUseSpeakerMode;
    id _weakAudioRelay;
    id _weakSafeViewAudioRelay;
    double preferredHWSampleRate;
    double preferredBlockSize;
    NSMutableDictionary *audioManagerClients;
    unsigned int currentVPOperatingMode;
    BOOL currentAudioRecordingMode;
    int currentSampleRate;
    int currentMinSamplesPerFrame;
    BOOL currentReceiverStatus;
    BOOL isUsingBBIO;
    int requestedVPOperatingMode;
    double requestedVPSampleRate;
    struct AudioEventQueue_t *eventQ;
    NSMutableArray *spkrClientList;
    NSMutableArray *micClientList;
}

+ (id)defaultManager;
@property(nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted; // @synthesize microphoneMuted=isMicrophoneMuted;
@property(readonly, nonatomic) int inferredOperatingMode; // @synthesize inferredOperatingMode;
@property(retain) AVAudioDevice *targetOutputDevice; // @synthesize targetOutputDevice;
@property(retain) AVAudioDevice *targetInputDevice; // @synthesize targetInputDevice;
@property(readonly, nonatomic) BOOL usingFloat; // @synthesize usingFloat;
@property(nonatomic) int clientPID; // @synthesize clientPID;
@property(nonatomic) BOOL isUsingSuppression; // @synthesize isUsingSuppression;
@property(nonatomic) BOOL isGKVoiceChat; // @synthesize isGKVoiceChat;
- (void)clearTargetIODevices;
- (BOOL)shouldCallAudioCallbackOnAudioIOClient:(id)arg1 forDeviceRole:(int)arg2;
- (void)stopRelayIOWithDeviceRole:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)internalSetupAudioRelayWithIO:(id)arg1 deviceRole:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupAudioRelayWithIO:(id)arg1 deviceRole:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startRelayIOWithFormat:(struct AudioStreamBasicDescription)arg1 deviceRole:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)audioRelayWithDeviceRole:(int)arg1;
- (void)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned int)arg9 deviceRole:(int)arg10;
- (void)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5 deviceRole:(int)arg6;
- (BOOL)projectionModeEnabledState;
- (void)setBlockSize:(BOOL)arg1;
- (void)setupVPBlockFormat;
- (void)setSampleRate;
- (void)setAudioSessionMode:(id)arg1;
- (int)resetAudioSessionProperties;
- (void)setAudioSessionProperties;
- (BOOL)forceBufferFrames:(int *)arg1;
- (BOOL)forceSampleRate:(double *)arg1;
- (void)tearDownAudioSessionForced:(BOOL)arg1;
- (void)stopAudioSession;
- (unsigned long long)startAudioSessionWithCompletionHandler:(CDUnknownBlockType)arg1 dispatchQueue:(id)arg2;
- (void)setAudioSessionParameters:(id)arg1;
- (void)resetAudioSessionOutputPortOverride;
- (void)stopAudioManagerClient:(id)arg1;
- (unsigned long long)setupAudioSession;
@property(nonatomic) BOOL isInMediaserverd;
- (void)setupAudioNotifications;
- (id)getAudioManagerClientWithPid:(id)arg1 create:(BOOL)arg2;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
- (void)enableMetering:(BOOL)arg1 isInputMeter:(BOOL)arg2;
- (void)setSamplesPerFrame:(int)arg1;
- (void)getVpioFormat:(struct AudioStreamBasicDescription *)arg1;
- (void)processEventQueue;
- (void)removeAudioIOClient:(id)arg1;
- (void)addAudioIOClient:(id)arg1;
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;
- (void)internalSetRemoteBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (void)setRemoteBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (void)stopAudioIOWithDeviceRole:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tearDownAudioIO:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cleanupAUIOSetupWithResult:(int)arg1 completionHandler:(CDUnknownBlockType)arg2 ignoreRefCount:(BOOL)arg3;
- (void)startAudioIOWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg1 minSamplesPerFrame:(int)arg2 internalFormat:(struct AudioStreamBasicDescription)arg3 allowAudioRecording:(BOOL)arg4 operatingMode:(int)arg5 deviceRole:(int)arg6 remoteBasebandCodecType:(id)arg7 remoteBasebandCodecSampleRate:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)AUIOTeardown:(BOOL)arg1;
- (void)AUIOSetup:(struct VoiceIOFarEndVersionInfo *)arg1 minSamplesPerFrame:(int)arg2 allowAudioRecording:(BOOL)arg3 ignoreRefCount:(BOOL)arg4 operatingMode:(int)arg5 deviceRole:(int)arg6 remoteCodecType:(unsigned int)arg7 remoteCodecSampleRate:(double)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)setDirection:(int)arg1;
- (void)updateTargetOutputDevice;
- (void)updateTargetInputDevice;
- (BOOL)setCurrentOutputDevice:(id)arg1;
- (BOOL)setCurrentInputDevice:(id)arg1;
- (id)currentOutputDevice;
- (id)currentInputDevice;
- (void)dealloc;
- (id)init;
- (void)getPreferredHWSampleRate:(double *)arg1 blockSize:(double *)arg2;

@end

