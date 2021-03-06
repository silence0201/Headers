//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import <VideoSubscriberAccount/TSKViewControllerExternalObserving-Protocol.h>
#import <VideoSubscriberAccount/VSIdentityProviderControllerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSIdentityProviderPickerViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>

@class NSString, VSRemoteNotifier, VSViewControllerPresentationStack;

@interface TVSettingsVideoSubscriberAccountViewController : TSKViewController <TSKViewControllerExternalObserving, VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderControllerDelegate, VSRemoteNotifierDelegate>
{
    id _externalValue;
    VSViewControllerPresentationStack *_viewControllerPresentationStack;
    VSRemoteNotifier *_remoteNotifier;
}

@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) VSViewControllerPresentationStack *viewControllerPresentationStack; // @synthesize viewControllerPresentationStack=_viewControllerPresentationStack;
@property(retain, nonatomic) id externalValue; // @synthesize externalValue=_externalValue;
- (void).cxx_destruct;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)identityProviderPickerViewControllerDidCancel:(id)arg1;
- (void)identityProviderController:(id)arg1 replaceViewControllerWithViewController:(id)arg2;
- (void)identityProviderController:(id)arg1 showViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_showMoreApps:(id)arg1;
- (void)_updatePassword:(id)arg1;
- (void)_signOut:(id)arg1;
- (void)_signIn:(id)arg1;
- (void)_handleIdentityProviderRequest:(id)arg1;
- (void)_updateExternalValue;
- (void)_videoSubscriberAccountAvailabilityStatusDidChange:(id)arg1;
- (void)_presentError:(id)arg1;
- (id)loadSettingGroups;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

