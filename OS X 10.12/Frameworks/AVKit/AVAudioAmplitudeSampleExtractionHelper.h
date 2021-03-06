//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioAmplitudeExtractionSession, NSTimer;

__attribute__((visibility("hidden")))
@interface AVAudioAmplitudeSampleExtractionHelper : NSObject
{
    long long _numberOfSamples;
    CDUnknownBlockType _completionHandler;
    AVAudioAmplitudeExtractionSession *_audioAmplitudeExtractionSession;
    NSTimer *_waveformGenerationTimer;
}

- (void).cxx_destruct;
- (void)_cancelWaveformGenerationTimer;
- (void)audioAmplitudeExtractionSessionDidFinish:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 numberOfSamples:(long long)arg2 startTime:(double)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

