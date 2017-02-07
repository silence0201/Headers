//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSTimer, UIImageView, UILabel;

@interface CMKElapsedTimeView : UIView
{
    UILabel *__timeLabel;
    UIImageView *__recordingImageView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property(readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;
@property(readonly, nonatomic) UIImageView *_recordingImageView; // @synthesize _recordingImageView=__recordingImageView;
@property(readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
- (void).cxx_destruct;
- (void)_endRecordingAnimation;
- (void)_beginRecordingAnimation;
- (void)resetTimer;
- (void)endTimer;
- (void)_setStartTime:(id)arg1;
- (void)startTimer;
- (void)_update:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKElapsedTimeViewInitialization;

@end
