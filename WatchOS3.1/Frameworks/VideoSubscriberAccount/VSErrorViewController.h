//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSError, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface VSErrorViewController : UIViewController
{
    _Bool _recoveryDestructive;
    NSError *_error;
    UIButton *_recoveryButton;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *recoveryButton; // @synthesize recoveryButton=_recoveryButton;
@property(nonatomic, getter=isRecoveryDestructive) _Bool recoveryDestructive; // @synthesize recoveryDestructive=_recoveryDestructive;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_recoveryButtonPressed:(id)arg1;
- (void)_updateText;

@end
