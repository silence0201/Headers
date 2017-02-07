//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface MPButton : UIButton
{
    unsigned int _holding:1;
    UIView *_hitTestDebugView;
    _Bool _hitTestDebugEnabled;
    double _holdDelayInterval;
    struct UIEdgeInsets _alignmentRectInsets;
    struct UIEdgeInsets _hitRectInsets;
}

+ (id)easyTouchButtonWithType:(long long)arg1;
+ (double)easyTouchDefaultCharge;
+ (struct UIEdgeInsets)easyTouchDefaultHitRectInsets;
@property(nonatomic) _Bool hitTestDebugEnabled; // @synthesize hitTestDebugEnabled=_hitTestDebugEnabled;
@property(nonatomic) double holdDelayInterval; // @synthesize holdDelayInterval=_holdDelayInterval;
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
- (void).cxx_destruct;
- (void)_handleTouchUp;
- (void)_handleTouchDown;
- (void)_handleTouchCancel;
- (void)_delayedTriggerHold;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(readonly, nonatomic, getter=isHolding) _Bool holding;
- (void)layoutSubviews;
- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

