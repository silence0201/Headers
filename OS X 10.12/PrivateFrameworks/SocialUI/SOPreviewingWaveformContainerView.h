//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTextField, SOPreviewingWaveformView;

@interface SOPreviewingWaveformContainerView : NSView
{
    SOPreviewingWaveformView *_waveformView;
    NSTextField *_timeStamp;
}

@property(retain, nonatomic) NSTextField *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) SOPreviewingWaveformView *waveformView; // @synthesize waveformView=_waveformView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)clearWaveform;
- (void)setTime:(double)arg1;
- (void)setWaveformImage:(id)arg1;

@end

