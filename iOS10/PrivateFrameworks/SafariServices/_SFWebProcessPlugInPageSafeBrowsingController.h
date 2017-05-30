//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFSafeBrowsingWebProcessController-Protocol.h>

@class NSDictionary, NSString, _SFSecurityInfo, _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;
@protocol _SFSafeBrowsingWarningResponseObserver;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInPageSafeBrowsingController : NSObject <_SFSafeBrowsingWebProcessController>
{
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_safeBrowsingControllerInterface;
    _SFSecurityInfo *_securityInfo;
    _Bool _canGoBack;
    CDUnknownBlockType _completionHandler;
    id <_SFSafeBrowsingWarningResponseObserver> _responseObserver;
    NSDictionary *_localizedStrings;
}

- (void).cxx_destruct;
- (void)safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1 canGoBack:(_Bool)arg2 localizedStrings:(id)arg3;
- (void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(_Bool)arg2;
- (id)localizedStringForString:(id)arg1;
- (void)didRespondToSecurityWarning:(long long)arg1;
- (void)securityWarningPageLoaded;
- (void)injectPhishingAlertBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (_Bool)urlPassesFastSafeBrowsingCheck:(id)arg1;
- (_Bool)_canSkipSafeBrowsingCheckForURL:(id)arg1;
- (id)_responseObserverProxy;
- (void)_clearSafeBrowsingControllerInterface;
- (void)_setUpSafeBrowsingControllerInterface;
- (void)performSafeBrowsingCheckForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
