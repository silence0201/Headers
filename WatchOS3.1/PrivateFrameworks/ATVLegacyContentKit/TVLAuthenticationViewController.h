//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLTextEntryViewController.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class NSString, UITapGestureRecognizer, UIView;

@interface TVLAuthenticationViewController : TVLTextEntryViewController <ATVUpdatable>
{
    NSString *_accountName;
    UITapGestureRecognizer *_menuRecognizer;
    NSString *_password;
    long long _state;
    UIView *preferedFocusView;
}

- (void).cxx_destruct;
@property(copy, nonatomic, getter=_password, setter=_setPassword:) NSString *_password;
@property(copy, nonatomic, getter=_accountName, setter=_setAccountName:) NSString *_accountName;
@property(nonatomic, getter=_state, setter=_setState:) long long _state;
- (id)_authenticationElement;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)_didSelectDefaultButton;
- (void)_authenticationFinished:(_Bool)arg1 withFailureMessage:(id)arg2;
- (void)_cancelAuthentication;
- (void)_attemptJSAuthentication;
- (void)_menuButtonAction:(id)arg1;
- (void)didUpdateFeedElementRequiringUserInterfaceUpdate:(_Bool)arg1 previousElement:(id)arg2;
- (id)initWithAuthenticationElement:(id)arg1;

@end
