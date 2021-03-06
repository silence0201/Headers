//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, NSHashTable, NSString, UITouch, UIView, _UIDeepPressAnalyzer, _UIFeedbackStatesBehavior, _UIPreviewInteractionStateRecognizer, _UITouchesObservingGestureRecognizer;
@protocol UIPreviewInteractionDelegate;

@interface UIPreviewInteraction : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_view;
    struct {
        unsigned int interactive:1;
        unsigned int delegateDidPreventInteraction:1;
        unsigned int interactionRequiresRestart:1;
        unsigned int interactionWasCancelled:1;
        unsigned int previousProgressWasNegativeOrZero:1;
        unsigned int interactionPaused:1;
        unsigned int currentState:3;
    } _previewInteractionFlags;
    _UITouchesObservingGestureRecognizer *_touchObservingGestureRecognizer;
    _UITouchesObservingGestureRecognizer *_modalTouchObservingGestureRecognizer;
    _UIPreviewInteractionStateRecognizer *_currentInteractionStateRecognizer;
    UITouch *_currentTouch;
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIDeepPressAnalyzer *_deepPressAnalyzer;
    _UIFeedbackStatesBehavior *_feedbackBehavior;
    _Bool _feedbackBehaviorTurnedOn;
    NSHashTable *_activeSystemAnimators;
    NSHashTable *_activeFailureRequirementGestureRecognizers;
    id <UIPreviewInteractionDelegate> _delegate;
}

@property(nonatomic) __weak id <UIPreviewInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (_Bool)_delegateRespondsToPreviewStateCancellations;
- (_Bool)_delegateRespondsToCommitStateTransitions;
- (_Bool)_shouldCancelTransitionToState:(long long)arg1;
- (void)_updateFeedbackTowardNextState:(long long)arg1 progress:(double)arg2;
- (void)_actuateFeedbackForStateIfNeeded:(long long)arg1;
- (void)_turnOffFeedbackBehavior;
- (void)_turnOnFeedbackBehavior;
- (void)_endUsingFeedbackIfNeeded;
- (void)_prepareUsingFeedback;
- (void)_prepareUsingFeedbackIfNeeded;
- (void)_endInteractionIfNeeded;
- (void)_updateFailureRequirementGestureRecognizersIfNeeded;
- (void)_updateAnimatorsIfNeeded;
- (void)_updateInteractionStateRecognizerForTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (void)_updateInteractionStateRecognizerForTouch:(id)arg1;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_handleTouchObservingGesture:(id)arg1;
- (id)_touchObservingGestureRecognizerForView:(id)arg1;
- (void)_attachToModalViewForRemainerOfInteraction:(id)arg1;
- (_Bool)_interactionIsPaused;
- (void)_resumeInteraction;
- (void)_pauseInteraction;
- (void)_resetAfterInteraction;
- (void)_endInteractiveStateTransitions;
- (void)_endContinuousEvaluation;
- (void)_prepareForInteractionWithGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (id)init;
- (id)initWithView:(id)arg1;
- (id)newAnimator;
- (id)newGestureRecognizerForFailureRelationship;
- (id)newAnimatorForViewControllerTransition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

