//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOClient-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>

@class NSString, VCAudioPayload;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTTYDevice : NSObject <VCMediaStreamProtocol, VCAudioIOClient>
{
    struct AudioStreamBasicDescription vpioFormat;
    int deviceRole;
    BOOL isValid;
    NSObject<VCMediaStreamDelegate> *delegate;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    struct _opaque_pthread_mutex_t sessionLock;
    int state;
    VCAudioPayload *_currentAudioPayload;
    struct SoundDec_t *_decoder;
    struct opaqueCMSimpleQueue *_charQueue;
    struct tagVCMemoryPool *_characterPool;
}

@property(nonatomic) NSObject<VCMediaStreamDelegate> *delegate; // @synthesize delegate;
@property int deviceRole; // @synthesize deviceRole;
@property BOOL isValid; // @synthesize isValid;
- (void)setCanProcessAudio:(BOOL)arg1;
- (BOOL)canProcessAudio;
- (BOOL)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (BOOL)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned int)arg9;
- (void)unlock;
- (void)lock;
- (void)setPause:(BOOL)arg1;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)sendCharater:(unsigned short)arg1;
- (void)startVirtualTTYWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithMode:(long long)arg1;
- (BOOL)setStreamConfig:(id)arg1 withError:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
