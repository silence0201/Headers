//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ADPrerollSlider, UILabel;

@interface ADProgressView : UIView
{
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    ADPrerollSlider *_slider;
}

@property(retain, nonatomic) ADPrerollSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

