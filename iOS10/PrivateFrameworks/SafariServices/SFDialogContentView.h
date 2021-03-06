//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SafariServices/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, SFDialogTextField, SFDialogTextView, UIButton, UIStackView, _SFDialogView;

__attribute__((visibility("hidden")))
@interface SFDialogContentView : UIView <UITextFieldDelegate>
{
    SFDialogTextView *_messageTextView;
    SFDialogTextField *_inputTextField;
    SFDialogTextField *_passwordTextField;
    NSArray *_layoutConstraintsWhenInputIsVisible;
    NSArray *_layoutConstraintsWhenPasswordIsVisible;
    NSArray *_layoutConstraintsWhenInputAndPasswordAreVisible;
    UIView *_separatorView;
    UIStackView *_actionButtonsView;
    UIButton *_primaryActionButton;
    UIButton *_secondaryActionButton;
    _Bool _hasSecondaryAction;
    _SFDialogView *_dialogView;
}

@property(nonatomic) __weak _SFDialogView *dialogView; // @synthesize dialogView=_dialogView;
- (void).cxx_destruct;
- (void)_invokeDelegateWithPrimaryAction:(_Bool)arg1;
- (void)_focusInputTextField:(id)arg1;
- (void)_secondaryAction:(id)arg1;
- (void)_primaryAction:(id)arg1;
- (_Bool)_usesLoginFormAppearance;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setPrimaryActionTitle:(id)arg1 secondaryActionTitle:(id)arg2;
- (void)endEditing;
- (void)_setText:(id)arg1 placeholder:(id)arg2 forTextField:(id)arg3;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setMessageText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

