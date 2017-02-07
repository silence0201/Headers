//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/SCRAXETrackingGestureRecognizer-Protocol.h>

@class NSArray, NSString, SCRAXETrackingTouchEvent;
@protocol SCRAXETimer, SCRAXETrackingFlickGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface SCRAXETrackingFlickGestureRecognizer : NSObject <SCRAXETrackingGestureRecognizer>
{
    double _minimumFlickDistance;
    double _minimumFlickVelocity;
    double _maximumFlickDuration;
    id <SCRAXETrackingFlickGestureRecognizerDelegate> _delegate;
    unsigned long long __currentState;
    SCRAXETrackingTouchEvent *__flickStartTouchEvent;
    NSArray *__lastTouchingTouches;
    id <SCRAXETimer> __flickTimeoutTimer;
}

@property(retain, nonatomic) id <SCRAXETimer> _flickTimeoutTimer; // @synthesize _flickTimeoutTimer=__flickTimeoutTimer;
@property(retain, nonatomic) NSArray *_lastTouchingTouches; // @synthesize _lastTouchingTouches=__lastTouchingTouches;
@property(retain, nonatomic) SCRAXETrackingTouchEvent *_flickStartTouchEvent; // @synthesize _flickStartTouchEvent=__flickStartTouchEvent;
@property(nonatomic) unsigned long long _currentState; // @synthesize _currentState=__currentState;
@property(nonatomic) __weak id <SCRAXETrackingFlickGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double maximumFlickDuration; // @synthesize maximumFlickDuration=_maximumFlickDuration;
@property(readonly, nonatomic) double minimumFlickVelocity; // @synthesize minimumFlickVelocity=_minimumFlickVelocity;
@property(readonly, nonatomic) double minimumFlickDistance; // @synthesize minimumFlickDistance=_minimumFlickDistance;
- (void).cxx_destruct;
- (void)_signalFlickAborted:(id)arg1;
- (void)_signalFlickRecognized:(double)arg1;
- (void)_transitionToState:(unsigned long long)arg1;
- (void)_timeoutElapsed:(id)arg1;
- (void)reset;
- (void)processGestureEvent:(id)arg1;
- (void)dealloc;
- (id)initWithMinimumFlickDistance:(double)arg1 minimumFlickVelocity:(double)arg2 maximumFlickDuration:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
