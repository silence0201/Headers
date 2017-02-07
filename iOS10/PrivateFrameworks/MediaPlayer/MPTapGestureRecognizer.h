//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer, UITouch;

@interface MPTapGestureRecognizer : UIGestureRecognizer
{
    unsigned long long _lastTapCount;
    struct CGPoint _tapLocation;
    UITouch *_trackingTouch;
    NSTimer *_tapHandleTimer;
}

@property unsigned long long tapCount; // @synthesize tapCount=_lastTapCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (void)_delayedHandleTaps:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetTapTimer;
- (void)_setTapTimerWithDuration:(double)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

