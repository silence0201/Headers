//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIKeyboardTextSelectionGestureController.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController
{
    _Bool _delayForceMagnify;
    _Bool _didLongForcePress;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool didLongForcePress; // @synthesize didLongForcePress=_didLongForcePress;
@property(nonatomic) _Bool delayForceMagnify; // @synthesize delayForceMagnify=_delayForceMagnify;
- (void)oneFingerForcePress:(id)arg1;
- (void)oneFingerForcePan:(id)arg1;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;
- (_Bool)allowOneFingerDeepPress;
- (_Bool)oneFingerForcePressShouldCancelTouchesInView;
- (_Bool)oneFingerForcePressShouldFailWithoutForce;
- (double)oneFingerForcePressMinimumDuration;
- (void)_cleanupDeadGesturesIfNecessary;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@end

