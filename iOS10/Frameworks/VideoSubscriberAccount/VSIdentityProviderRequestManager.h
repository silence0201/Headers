//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSApplicationControllerDelegate-Protocol.h>

@class NSMutableArray, NSOperationQueue, NSString, VSAccount, VSAccountStore, VSApplicationController, VSApplicationControllerRequest, VSIdentityProvider, VSPreferences, VSViewModel;
@protocol OS_dispatch_source, VSIdentityProviderRequestManagerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderRequestManager : NSObject <VSApplicationControllerDelegate>
{
    _Bool _showingUserInterface;
    _Bool _didCreateAccount;
    _Bool _allowsApplicationControllerTimer;
    VSIdentityProvider *_identityProvider;
    id <VSIdentityProviderRequestManagerDelegate> _delegate;
    NSOperationQueue *_privateQueue;
    NSMutableArray *_requestContexts;
    VSApplicationController *_applicationController;
    VSApplicationControllerRequest *_currentApplicationControllerRequest;
    VSViewModel *_viewModel;
    VSAccount *_account;
    VSAccountStore *_accountStore;
    VSPreferences *_preferences;
    NSObject<OS_dispatch_source> *_applicationControllerTimerSource;
    double _applicationControllerTimerLeeway;
    double _requestCompletionDelayAfterShowingUserInterface;
    double _applicationControllerTimerDelay;
}

@property(nonatomic) double applicationControllerTimerDelay; // @synthesize applicationControllerTimerDelay=_applicationControllerTimerDelay;
@property(nonatomic) double requestCompletionDelayAfterShowingUserInterface; // @synthesize requestCompletionDelayAfterShowingUserInterface=_requestCompletionDelayAfterShowingUserInterface;
@property(nonatomic) double applicationControllerTimerLeeway; // @synthesize applicationControllerTimerLeeway=_applicationControllerTimerLeeway;
@property(nonatomic) _Bool allowsApplicationControllerTimer; // @synthesize allowsApplicationControllerTimer=_allowsApplicationControllerTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *applicationControllerTimerSource; // @synthesize applicationControllerTimerSource=_applicationControllerTimerSource;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool didCreateAccount; // @synthesize didCreateAccount=_didCreateAccount;
@property(nonatomic) _Bool showingUserInterface; // @synthesize showingUserInterface=_showingUserInterface;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) VSAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) VSViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) VSApplicationControllerRequest *currentApplicationControllerRequest; // @synthesize currentApplicationControllerRequest=_currentApplicationControllerRequest;
@property(retain, nonatomic) VSApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(retain, nonatomic) NSMutableArray *requestContexts; // @synthesize requestContexts=_requestContexts;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) __weak id <VSIdentityProviderRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationController:(id)arg1 request:(id)arg2 didCompleteWithResponse:(id)arg3;
- (void)applicationController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)applicationController:(id)arg1 didReceiveViewModel:(id)arg2;
- (void)applicationController:(id)arg1 didReceiveViewModelError:(id)arg2;
- (void)applicationController:(id)arg1 startDidFailWithError:(id)arg2;
- (void)applicationControllerDidStart:(id)arg1;
- (void)_resetVerificationStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_accountMetadataWithAuthenticationScheme:(id)arg1 responseStatusCode:(id)arg2 responseString:(id)arg3 accountMetadataRequest:(id)arg4 verificationData:(id)arg5;
- (_Bool)_canShowAuthenticationUI;
- (double)_requestCompletionDelay;
- (_Bool)_requestRequiresApplicationController:(id)arg1;
- (_Bool)_requestRequiresApplicationControllerIgnoringAuthentication:(id)arg1;
- (void)_hideUserInterfaceIfNecessary;
- (void)_notifyDidAuthenticateAccount;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_showAuthenticationUIWithPurpose:(long long)arg1;
- (void)_submitApplicationControllerRequest:(id)arg1;
- (void)_stopApplicationController;
- (id)_applicationControllerRequestWithIdentityProviderRequest:(id)arg1;
- (void)_completeCurrentRequestWithResult:(id)arg1;
- (void)_completeCurrentRequestWithError:(id)arg1;
- (void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1 verificationData:(id)arg2;
- (void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1;
- (void)_completeAuthenticationRequestWithApplicationControllerResponse:(id)arg1;
- (void)_completeCachedAccountMetadataRequest;
- (void)_updateAccountWithAccountAuthentication:(id)arg1;
- (void)_completeDeletingAccountWithError:(id)arg1;
- (void)_startDeletingAccount;
- (void)_handleApplicationControllerError:(id)arg1 forRequest:(id)arg2;
- (_Bool)_handleAccountMetadataRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (_Bool)_handleLogoutRequestDidComplete:(id)arg1;
- (_Bool)_handleSilentAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (_Bool)_handleAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_stopApplicationControllerTimer;
- (void)_startApplicationControllerTimer;
- (id)_currentRequest;
- (id)_currentRequestContext;
- (void)_processRequestContext:(id)arg1;
- (void)enqueueRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithIdentityProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

