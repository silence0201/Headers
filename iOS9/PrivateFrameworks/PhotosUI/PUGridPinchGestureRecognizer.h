//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPinchGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer
{
    struct CGPoint _touch0InitialLocation;
    struct CGPoint _touch1InitialLocation;
    double _lastTransitionProgress;
    unsigned long long _transitionDirection;
}

@property(readonly, nonatomic) unsigned long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
@property(readonly, nonatomic) _Bool transitionShouldFinish;
@property(readonly, nonatomic) struct CGSize centerOffset;
@property(readonly, nonatomic) double transitionProgress;
- (void)setState:(long long)arg1;
- (void)reset;
- (void)_resetTransitionState;

@end

