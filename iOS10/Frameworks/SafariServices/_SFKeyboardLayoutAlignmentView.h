//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSNotification;

__attribute__((visibility("hidden")))
@interface _SFKeyboardLayoutAlignmentView : UIView
{
    NSNotification *_keyboardChangeNotificationForUpdateConstraints;
    struct CGRect lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
    _Bool _automaticKeyboardFrameTrackingDisabled;
}

@property(nonatomic) _Bool automaticKeyboardFrameTrackingDisabled; // @synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled;
- (void).cxx_destruct;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_removeConstraints;
- (void)_addConstraints;
- (void)_matchInitialKeyboardFrame;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect)arg1;
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;

@end

