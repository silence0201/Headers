//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponentsFormatter, NSString, PLDateRangeFormatter, UIColor, UITapGestureRecognizer, UIView;
@protocol PUPhotoBrowserTitleViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoBrowserTitleViewController : NSObject
{
    struct {
        _Bool respondsToTapped;
    } _delegateFlags;
    _Bool _tappable;
    _Bool _usingCompactTitleView;
    _Bool __isPerformingChanges;
    _Bool __isUpdating;
    _Bool __needsUpdateDayAndTimeDescriptions;
    _Bool __needsUpdatePlayClockDescription;
    _Bool __needsUpdateLabels;
    _Bool __needsUpdateGestureRecognizers;
    UIView *_view;
    id <PUPhotoBrowserTitleViewControllerDelegate> _delegate;
    NSString *_geoDescription;
    NSDate *_creationDate;
    PLDateRangeFormatter *__dayFormatter;
    PLDateRangeFormatter *__timeFormatter;
    NSDateComponentsFormatter *__playClockFormatter;
    NSString *__dayDescription;
    NSString *__timeDescription;
    NSString *__playClockDescription;
    UITapGestureRecognizer *__tapGestureRecognizer;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _playbackDuration;
}

@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(retain, nonatomic, setter=_setPlayClockDescription:) NSString *_playClockDescription; // @synthesize _playClockDescription=__playClockDescription;
@property(retain, nonatomic, setter=_setTimeDescription:) NSString *_timeDescription; // @synthesize _timeDescription=__timeDescription;
@property(retain, nonatomic, setter=_setDayDescription:) NSString *_dayDescription; // @synthesize _dayDescription=__dayDescription;
@property(readonly, nonatomic) NSDateComponentsFormatter *_playClockFormatter; // @synthesize _playClockFormatter=__playClockFormatter;
@property(readonly, nonatomic) PLDateRangeFormatter *_timeFormatter; // @synthesize _timeFormatter=__timeFormatter;
@property(readonly, nonatomic) PLDateRangeFormatter *_dayFormatter; // @synthesize _dayFormatter=__dayFormatter;
@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(nonatomic, setter=_setNeedsUpdateLabels:) _Bool _needsUpdateLabels; // @synthesize _needsUpdateLabels=__needsUpdateLabels;
@property(nonatomic, setter=_setNeedsUpdatePlayClockDescription:) _Bool _needsUpdatePlayClockDescription; // @synthesize _needsUpdatePlayClockDescription=__needsUpdatePlayClockDescription;
@property(nonatomic, setter=_setNeedsUpdateDayAndTimeDescriptions:) _Bool _needsUpdateDayAndTimeDescriptions; // @synthesize _needsUpdateDayAndTimeDescriptions=__needsUpdateDayAndTimeDescriptions;
@property(nonatomic, setter=_setUpdating:) _Bool _isUpdating; // @synthesize _isUpdating=__isUpdating;
@property(nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property(nonatomic) CDStruct_1b6d18a9 playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) CDStruct_1b6d18a9 currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *geoDescription; // @synthesize geoDescription=_geoDescription;
@property(nonatomic, getter=isUsingCompactTitleView) _Bool usingCompactTitleView; // @synthesize usingCompactTitleView=_usingCompactTitleView;
@property(nonatomic, getter=isTappable) _Bool tappable; // @synthesize tappable=_tappable;
@property(nonatomic) __weak id <PUPhotoBrowserTitleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_invalidateGestureRecognizers;
- (void)_updateLabelsIfNeeded;
- (void)_invalidateLabels;
- (void)_updatePlayClockDescriptionIfNeeded;
- (void)_invalidatePlayClockDescription;
- (void)_updateDayAndTimeDescriptionsIfNeeded;
- (void)_invalidateDayAndTimeDescriptions;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_assertInsideUpdate;
- (void)_assertInsideChangeBlock;
- (void)_dateFormatterChanged:(id)arg1;
@property(retain, nonatomic) UIColor *textColor;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)init;

@end

