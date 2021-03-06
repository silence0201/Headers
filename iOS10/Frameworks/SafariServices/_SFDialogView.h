//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, SFDialogContentView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol _SFDialogViewDelegate;

@interface _SFDialogView : UIView
{
    SFDialogContentView *_contentView;
    SFDialogContentView *_contentViewConfiguredForMinimumHeight;
    UISwipeGestureRecognizer *_keyboardDismissSwipeGesture;
    UITapGestureRecognizer *_keyboardDismissTapGesture;
    NSLayoutConstraint *_obscuredInsetTopConstraint;
    NSLayoutConstraint *_obscuredInsetLeftConstraint;
    NSLayoutConstraint *_obscuredInsetBottomConstraint;
    NSLayoutConstraint *_obscuredInsetRightConstraint;
    id <_SFDialogViewDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keyboardDismissGesture:(id)arg1;
- (void)setPrimaryActionTitle:(id)arg1 secondaryActionTitle:(id)arg2;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setUsesOpaqueAppearance:(_Bool)arg1;
- (void)setObscuredInsets:(struct UIEdgeInsets)arg1;
- (void)setMessageText:(id)arg1;
- (_Bool)becomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

