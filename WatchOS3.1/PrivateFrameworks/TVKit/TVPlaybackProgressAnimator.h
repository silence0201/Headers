//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVKit/TVConstantRatePlaybackProgressAnimationDelegate-Protocol.h>
#import <TVKit/TVDragPlaybackProgressAnimationDelegate-Protocol.h>

@class CADisplayLink, NSString, TVPlaybackProgressAnimation, TVSStateMachine, TVTransportBarView;
@protocol TVPlaybackProgressAnimatorDelegate;

@interface TVPlaybackProgressAnimator : NSObject <TVConstantRatePlaybackProgressAnimationDelegate, TVDragPlaybackProgressAnimationDelegate>
{
    double _targetTime;
    double _playbackDuration;
    double _effectivePlaybackRate;
    _Bool _dragging;
    TVTransportBarView *_transportBarView;
    id <TVPlaybackProgressAnimatorDelegate> _delegate;
    CADisplayLink *_displayLink;
    TVPlaybackProgressAnimation *_animation;
    TVSStateMachine *_stateMachine;
}

@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) TVPlaybackProgressAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) __weak CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) double effectivePlaybackRate; // @synthesize effectivePlaybackRate=_effectivePlaybackRate;
@property(nonatomic) __weak id <TVPlaybackProgressAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TVTransportBarView *transportBarView; // @synthesize transportBarView=_transportBarView;
- (void).cxx_destruct;
- (void)invalidate;
- (void)moveModeratelyToElapsedTime:(double)arg1;
- (void)moveQuicklyToElapsedTime:(double)arg1;
- (void)moveInstantaneouslyToElapsedTime:(double)arg1;
@property(readonly, nonatomic) double moderateAnimationDuration;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (void)endDragging;
- (void)beginDragging;
- (double)presentedTime;
- (_Bool)getTargetElapsedTime:(double *)arg1;
- (void)setPlaybackDuration:(double)arg1;
- (void)_moveToElapsedTime:(double)arg1 withAnimationDuration:(double)arg2 timingFunctionName:(id)arg3;
- (void)_setTargetTime:(double)arg1;
- (void)_hidePlayhead;
- (void)_showPlayhead;
- (void)_updatePlaybackProgressForTransportBarView:(id)arg1 withElapsedTime:(double)arg2 playbackDuration:(double)arg3;
- (double)_presentedTime;
- (_Bool)_getActualTime:(double *)arg1;
- (void)_displayLinkFired:(id)arg1;
- (void)_cancelAnimations;
- (void)_updateTransportBarViewWithAnimation:(id)arg1;
- (_Bool)_getPlaybackDuration:(double *)arg1;
- (_Bool)_validatePlaybackDuration:(double)arg1;
- (_Bool)_getTargetTime:(double *)arg1;
- (_Bool)_validateCurrentTime:(double)arg1;
- (void)_setupStateMachine;
- (id)_nextStateByUpdatingWithAnimation:(id)arg1;
- (void)_updateTransportBarView:(id)arg1 withElapsedTime:(double)arg2 playbackDuration:(double)arg3;
- (id)_nextStateByDragging;
- (id)_nextStateByAnimatingLinearly;
- (void)dealloc;
- (id)init;
- (id)initWithTransportBarView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
