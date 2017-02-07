//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PUPlaybackTimeLabel : UIView
{
    _Bool __needsUpdateBackground;
    _Bool __needsUpdateLabel;
    long long _format;
    UIView *__backgroundView;
    UILabel *__label;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _playbackDuration;
}

@property(nonatomic, setter=_setNeedsUpdateLabel:) _Bool _needsUpdateLabel; // @synthesize _needsUpdateLabel=__needsUpdateLabel;
@property(nonatomic, setter=_setNeedsUpdateBackground:) _Bool _needsUpdateBackground; // @synthesize _needsUpdateBackground=__needsUpdateBackground;
@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) CDStruct_1b6d18a9 playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) CDStruct_1b6d18a9 currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) long long format; // @synthesize format=_format;
- (void).cxx_destruct;
- (id)_stringFromTimeInterval:(double)arg1;
- (id)_labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;
- (struct CGSize)_maximumLabelSizeWithDuration:(double)arg1;
- (void)_updateLabelIfNeeded;
- (void)_invalidateLabel;
- (void)_updateBackgroundIfNeeded;
- (void)_invalidateBackground;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

