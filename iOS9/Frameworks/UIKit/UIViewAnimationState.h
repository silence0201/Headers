//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSMutableArray, NSString, NSUUID, UIView;
@protocol _UIBasicAnimationFactory;

__attribute__((visibility("hidden")))
@interface UIViewAnimationState : NSObject
{
    UIViewAnimationState *_nextState;
    NSString *_animationID;
    void *_context;
    id _delegate;
    double _duration;
    double _delay;
    double _frameInterval;
    double _start;
    long long _curve;
    float _repeatCount;
    long long _transition;
    UIView *_transitionView;
    int _filter;
    UIView *_filterView;
    float _filterValue;
    SEL _willStartSelector;
    SEL _didEndSelector;
    int _didEndCount;
    struct CGPoint _position;
    unsigned int _willStartSent:1;
    unsigned int _useCurrentLayerState:1;
    unsigned int _cacheTransition:1;
    unsigned int _autoreverses:1;
    unsigned int _roundsToInteger:1;
    unsigned int _preventsAdditive:1;
    unsigned int _layoutSubviews:1;
    NSMutableArray *_trackedAnimations;
    NSUUID *_uuid;
    id <_UIBasicAnimationFactory> _animationFactory;
    CAMediaTimingFunction *_customCurve;
    _Bool _animationFactoryMakesPerAnimationCustomCurves;
    CDUnknownBlockType _alongsideAnimations;
    NSMutableArray *_addedCompletions;
    _Bool _animationDidStopSent;
    _Bool _allowUserInteractionToCutOffEndOfAnimation;
    UIViewAnimationState *_retainedSelf;
    NSMutableArray *_viewsPendingConstraintBasedAnimation;
}

+ (void)_addSystemPostAnimationAction:(CDUnknownBlockType)arg1;
+ (void)_addViewForConstraintBasedAnimation:(id)arg1;
+ (void)_addConstraintPendingAnimation:(id)arg1 container:(id)arg2;
+ (void)popAnimationState;
+ (void)pushViewAnimationState:(id)arg1 context:(void *)arg2;
- (void).cxx_destruct;
- (id)_defaultAnimationForKey:(id)arg1;
- (void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4;
- (void)_addAnimationStateForTracking:(id)arg1;
- (id)_trackedAnimations;
- (void)_removeAnimationStateFromTrackingMap:(_Bool)arg1 disableTrackingIfNeeded:(_Bool)arg2;
- (void)_removeAnimationStateFromTrackingMap:(_Bool)arg1;
- (void)_acceptEarlyAnimationCutoff:(id)arg1;
- (_Bool)_allowsUserInteractionToCutOffEndOfAnimation;
@property(readonly, nonatomic) _Bool _allowsUserInteraction;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(_Bool)arg2 skipDelegateAssignment:(_Bool)arg3 customCurve:(id)arg4;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(_Bool)arg2 skipDelegateAssignment:(_Bool)arg3;
- (void)_runAlongsideAnimations;
- (void)_setAlongsideAnimations:(CDUnknownBlockType)arg1;
- (void)setAnimationAttributes:(id)arg1;
- (void)setupCustomTimingCurve;
- (void)_runConstraintBasedLayoutAnimations;
- (void)pop;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (_Bool)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (_Bool)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2;
- (void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (id)init;

@end

