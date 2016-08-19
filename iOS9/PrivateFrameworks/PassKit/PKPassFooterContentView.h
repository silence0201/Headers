//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKLinkedAppIconView, PKPass, PKPaymentPass, UIButton;
@protocol PKPassFooterContentViewDelegate;

@interface PKPassFooterContentView : UIView
{
    _Bool _isVisibleAsFooter;
    _Bool _isPassAuthorized;
    long long _style;
    id <PKPassFooterContentViewDelegate> _delegate;
    PKPass *_pass;
    PKLinkedAppIconView *_appIconView;
    UIButton *_infoButton;
    UIView *_bottomRule;
}

@property(readonly, nonatomic) _Bool isPassAuthorized; // @synthesize isPassAuthorized=_isPassAuthorized;
@property(readonly, nonatomic) _Bool isVisibleAsFooter; // @synthesize isVisibleAsFooter=_isVisibleAsFooter;
@property(readonly, nonatomic) UIView *bottomRule; // @synthesize bottomRule=_bottomRule;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(readonly, nonatomic) PKLinkedAppIconView *appIconView; // @synthesize appIconView=_appIconView;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) id <PKPassFooterContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (double)_bottomRulePadding;
- (void)_infoButtonPressed:(id)arg1;
- (void)didBecomeHiddenAnimated:(_Bool)arg1;
- (void)willBecomeHiddenAnimated:(_Bool)arg1;
- (void)didBecomeVisibleAnimated:(_Bool)arg1;
- (void)willBecomeVisibleAnimated:(_Bool)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2;

@end
