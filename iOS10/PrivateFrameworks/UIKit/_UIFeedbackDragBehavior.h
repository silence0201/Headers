//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFeedbackGenerator.h>

#import <UIKit/UIFeedbackGeneratorUserInteractionDriven-Protocol.h>

@class _UIFeedback, _UIFeedbackDragBehaviorConfiguration;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIFeedbackDragBehavior : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
    long long _state;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

+ (id)retargetBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
+ (id)dragBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (id)dragBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
+ (Class)_configurationClass;
@property(retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // @synthesize playingContinuousFeedback=_playingContinuousFeedback;
@property(nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)snappedToFinalPosition;
- (void)targetUpdated;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (void)_startPlayingContinuousFeedback;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
@property(readonly, nonatomic, getter=_dragConfiguration) _UIFeedbackDragBehaviorConfiguration *dragConfiguration;

@end

