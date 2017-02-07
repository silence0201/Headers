//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface UIEvent : NSObject
{
    struct __GSEvent *_gsEvent;
    struct __IOHIDEvent *_hidEvent;
    double _timestamp;
}

- (id)predictedTouchesForTouch:(id)arg1;
- (id)coalescedTouchesForTouch:(id)arg1;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
@property(readonly, nonatomic) NSSet *allTouches;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
- (void)dealloc;
- (struct CGPoint)_digitizerLocation;
- (_Bool)_isKeyDown;
- (long long)_modifierFlags;
- (id)_unmodifiedInput;
- (id)_modifiedInput;
- (id)_triggeringPhysicalButton;
- (unsigned long long)_focusHeading;
- (long long)_moveDirection;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (struct __IOHIDEvent *)_hidEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (struct __GSEvent *)_gsEvent;
- (void)_setGSEvent:(struct __GSEvent *)arg1;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (double)_wheelVelocity;
- (_Bool)isKeyDown;
- (void)_sendEventToResponder:(id)arg1;
- (id)_windows;
- (id)_screen;
- (void)_setTimestamp:(double)arg1;
- (id)_init;

@end

