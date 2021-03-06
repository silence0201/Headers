//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantTV/SATVViewController.h>

#import <SetupAssistantTV/TVSDeviceActivationDelegate-Protocol.h>

@class NSString, SATVHeaderView, TVSDeviceActivationAction, UIActivityIndicatorView, UIView;

@interface SATVActivationViewController : SATVViewController <TVSDeviceActivationDelegate>
{
    SATVHeaderView *_headerView;
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_activityIndicatorContainerView;
    TVSDeviceActivationAction *_activator;
}

@property(retain, nonatomic) TVSDeviceActivationAction *activator; // @synthesize activator=_activator;
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SATVHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)_presentDateAndTimeErrorController;
- (void)_presentActivationErrorController;
- (id)_localizedMacAddressDescription;
- (void)_forgetCurrentWiFiNetworkIfNeeded;
- (void)_failedToSetDateAndTime;
- (void)_activationFailed;
- (void)activationAction:(id)arg1 didFailWithError:(id)arg2;
- (void)activationActionDidSucceed:(id)arg1 successType:(unsigned long long)arg2;
- (void)_attemptActivation;
- (void)_setDateAndTimeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginProcess;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldSkipToNextController;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

