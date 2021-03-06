//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSAppDocumentControllerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSApplicationDelegate-Protocol.h>

@class JSValue, NSOperationQueue, NSString, VSAppDocumentController, VSApplication, VSApplicationControllerRequest, VSApplicationControllerResponseHandler, VSIdentityProvider, VSJSRequest, VSPreferences;
@protocol VSApplicationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate>
{
    _Bool _allowUI;
    id <VSApplicationControllerDelegate> _delegate;
    VSIdentityProvider *_identityProvider;
    NSOperationQueue *_privateQueue;
    VSApplication *_application;
    VSApplicationControllerRequest *_request;
    VSJSRequest *_javascriptRequest;
    VSApplicationControllerResponseHandler *_responseHandler;
    VSAppDocumentController *_appDocumentController;
    JSValue *_applicationReadyCallback;
    VSPreferences *_preferences;
}

+ (void)initialize;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool allowUI; // @synthesize allowUI=_allowUI;
@property(retain, nonatomic) JSValue *applicationReadyCallback; // @synthesize applicationReadyCallback=_applicationReadyCallback;
@property(retain, nonatomic) VSAppDocumentController *appDocumentController; // @synthesize appDocumentController=_appDocumentController;
@property(retain, nonatomic) VSApplicationControllerResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) VSJSRequest *javascriptRequest; // @synthesize javascriptRequest=_javascriptRequest;
@property(retain, nonatomic) VSApplicationControllerRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) VSApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(nonatomic) __weak id <VSApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_makeJavaScriptRequest;
- (id)_errorForJavascriptErrorValueValue:(id)arg1;
- (id)_javascriptShowUserInterfacePurposeForAuthenticationUserInterfacePurpose:(long long)arg1;
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_cleanUpStoppedApp;
- (void)_stopApp;
- (void)_startApp;
- (id)_applicationLaunchParams;
- (id)_bootURL;
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_notifyStartDidFailWithError:(id)arg1;
- (void)_notifyDidStart;
- (void)_notifyDidStop;
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)_notifyDidReceiveViewModelError:(id)arg1;
- (void)_notifyDidReceiveViewModel:(id)arg1;
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_completeRequestWithResult:(id)arg1;
- (void)_completeRequestWithJavascriptResponse:(id)arg1 javascriptErrorValue:(id)arg2;
- (void)_applicationReadyWithSuccess:(_Bool)arg1 javascriptErrorValue:(id)arg2;
- (void)_submitJavascriptRequest:(id)arg1;
- (void)_beginAuthentication;
- (void)_presentDocument:(id)arg1;
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;
- (id)activeAppDocumentForApplication:(id)arg1;
- (id)launchParamsForApplication:(id)arg1;
- (void)applicationDidStop:(id)arg1;
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;
- (void)applicationDidStart:(id)arg1;
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;
- (void)submitRequest:(id)arg1;
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1 purpose:(long long)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithIdentityProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

