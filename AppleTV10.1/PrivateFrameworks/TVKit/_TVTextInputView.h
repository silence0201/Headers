//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel, _TVSystemInputTextField;

@interface _TVTextInputView : UIView
{
    NSArray *_messageConstraints;
    NSArray *_textFieldConstraints;
    NSArray *_textFieldTitleConstraints;
    NSArray *_inputViewConstraints;
    _TVSystemInputTextField *_textField;
    UILabel *_textFieldTitleLabel;
    UILabel *_messageLabel;
    UIView *_systemInputView;
}

@property(retain, nonatomic) UIView *systemInputView; // @synthesize systemInputView=_systemInputView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *textFieldTitleLabel; // @synthesize textFieldTitleLabel=_textFieldTitleLabel;
@property(retain, nonatomic) _TVSystemInputTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

