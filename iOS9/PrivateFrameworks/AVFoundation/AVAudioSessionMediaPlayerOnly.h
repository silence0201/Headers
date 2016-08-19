//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioSessionMediaPlayerOnlyInternal, NSString;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnly : NSObject
{
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}

+ (void)initialize;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (void)_setFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (id)_weakReference;
@property(readonly) _Bool canEnterPIPMode;
- (_Bool)setUsingLongFormAudio:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setActivationContext:(id)arg1 error:(id *)arg2;
- (void)setApplicationAudioSession:(_Bool)arg1;
- (_Bool)isApplicationAudioSession;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *mode;
@property(readonly) long long currentHardwareOutputNumberOfChannels;
@property(readonly) long long currentHardwareInputNumberOfChannels;
@property(readonly) double currentHardwareSampleRate;
@property(readonly) _Bool inputIsAvailable;
@property(readonly) double preferredIOBufferDuration;
@property(readonly) double preferredHardwareSampleRate;
@property(readonly) NSString *category;
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (_Bool)setPreferredHardwareSampleRate:(double)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 withFlags:(long long)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
@property id <AVAudioSessionDelegateMediaPlayerOnly> delegate;
- (void)dealloc;
- (id)init;

@end

