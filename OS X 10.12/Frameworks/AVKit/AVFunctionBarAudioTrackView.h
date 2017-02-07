//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVFunctionBarTrackView.h>

@class NSArray, NSColor;

__attribute__((visibility("hidden")))
@interface AVFunctionBarAudioTrackView : AVFunctionBarTrackView
{
    double _normalizedCurrentValue;
    NSColor *_waveformColor;
    NSArray *_amplitudeSamples;
    float _maximumAmplitudeSample;
}

+ (id)defaultWaveformColor;
- (void).cxx_destruct;
- (void)_updateWaveformColor;
- (BOOL)_showsWaveform;
- (void)updatePreviewLayerContent;
- (struct CGPoint)positionForPreviewLayerWithIndex:(long long)arg1;
- (long long)numberOfPreviewLayersForWidth:(double)arg1;
- (struct CGSize)previewLayerSize;
@property(retain) NSArray *amplitudeSamples;
@property(retain) NSColor *waveformColor;
- (void)setNormalizedCurrentValue:(double)arg1;
- (double)normalizedCurrentValue;
- (id)init;

@end
