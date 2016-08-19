//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIRemoveControlMinusButton;

@interface UIRemoveControl : UIView
{
    UIView *_target;
    id _delegate;
    UIView *_removeConfirmationButton;
    UIRemoveControlMinusButton *_minusButton;
    NSString *_label;
    struct {
        unsigned int removeButtonVisible:1;
        unsigned int removeConfirmationVisible:1;
        unsigned int removedFromTargetWhenHidden:1;
        unsigned int disableToggleRotate:1;
        unsigned int alwaysHideRemoveButton:1;
        unsigned int editingStyle:3;
        unsigned int reserved:23;
    } _removeControlFlags;
}

+ (void)hideAllRemoveConfirmationsInView:(id)arg1;
+ (_Bool)removeConfirmationsVisibleInView:(id)arg1;
+ (float)removeButtonWidth;
- (void)_hideRemoveAnimationDone;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)_shouldRemoveTarget;
- (void)_doRemove:(id)arg1;
- (void)_doInsert:(id)arg1;
- (void)_showDeleteConfirmation:(id)arg1;
- (void)_hideRemoveConfirmation;
- (void)addConfirmationButtonSubview:(id)arg1 withWidth:(float)arg2 target:(id)arg3;
- (void)_setTableViewCellEditingStyle:(long long)arg1;
- (void)_setInsertControl:(_Bool)arg1;
- (_Bool)_isInsertControl;
- (float)_verticalOffsetFromTarget;
- (id)_scriptingInfo;
- (id)removeConfirmationButton;
- (void)setRemoveConfirmationLabel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)hideControlsUsingRemoveAnimation;
- (void)setAlpha:(double)arg1;
- (id)_interceptEvent:(id)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent *)arg1;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (id)removeConfirmationView;
- (void)setRemoveConfirmationVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRemoveConfirmationVisible:(_Bool)arg1;
- (_Bool)isRemoveConfirmationVisible;
- (void)_setRemoveConfirmationShowing:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGRect)_removeConfirmationEndingFrame;
- (struct CGRect)_removeConfirmationStartingFrame;
- (struct CGRect)targetContentBounds;
- (void)_confirmationAnimationDidEnd;
- (_Bool)isRemoveButtonVisible;
- (void)showRemoveButton:(_Bool)arg1 animated:(_Bool)arg2;
- (float)removeButtonAnimationDuration;
- (struct CGRect)removeButtonEndingFrame;
- (struct CGRect)removeButtonStartingFrame;
- (struct CGRect)defaultRemoveButtonEndingFrame;
- (struct CGRect)defaultRemoveButtonStartingFrame;
- (void)_minusButtonFadeAnimationStopped;
- (void)minusButtonDidHide:(id)arg1;
- (void)_setInterceptMouseEvent:(_Bool)arg1;
- (_Bool)removedFromTargetWhenHidden;
- (void)setAlwaysHideRemoveButton:(_Bool)arg1;
- (void)setRemovedFromTargetWhenHidden:(_Bool)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end

