//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class NSLayoutConstraint, PKPaymentAuthorizationLayout, PKPaymentAuthorizationNavigationBarBackgroundView, UIButton, UIImageView, UIView;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar
{
    PKPaymentAuthorizationNavigationBarBackgroundView *_bgView;
    UIImageView *_logoView;
    UIButton *_customButton;
    id _customButtonTarget;
    SEL _customButtonAction;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorLeftConstraint;
    long long _style;
    PKPaymentAuthorizationLayout *_layout;
}

@property(nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long style; // @synthesize style=_style;
- (id)_buttonAttributedStringWithString:(id)arg1;
- (id)_titleAttributedStringWithString:(id)arg1 color:(id)arg2;
- (void)updateConstraints;
- (void)_prepareConstraints;
- (void)_createSubviewsWithFrame:(struct CGRect)arg1;
- (void)setCustomButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCustomButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setLogoHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

