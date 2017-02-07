//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/RequestDesktopSiteUIProcessListener-Protocol.h>
#import <SafariServices/SFContentBlockerManagerObserver-Protocol.h>

@class NSMutableSet, NSString, WBUInjectedJavaScriptController, WKWebView, _WKRemoteObjectInterface;
@protocol RequestDesktopSiteWebProcessPlugInListener;

@interface _SFReloadOptionsController : NSObject <RequestDesktopSiteUIProcessListener, SFContentBlockerManagerObserver>
{
    _WKRemoteObjectInterface *_requestDesktopSiteUIProcessPlugInListenerInterface;
    id <RequestDesktopSiteWebProcessPlugInListener> _requestDesktopSiteWebProcessPlugInListener;
    NSMutableSet *_domainsNeedingDesktopUserAgent;
    WKWebView *_webView;
    _Bool _hasEnabledContentBlockers;
    WBUInjectedJavaScriptController *_activityJSController;
}

@property(nonatomic) _Bool hasEnabledContentBlockers; // @synthesize hasEnabledContentBlockers=_hasEnabledContentBlockers;
@property(readonly, nonatomic) WBUInjectedJavaScriptController *activityJSController; // @synthesize activityJSController=_activityJSController;
- (void).cxx_destruct;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (void)_checkForContentBlockers;
- (void)dealloc;
- (void)invalidate;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1;
- (void)requestDesktopSiteWithURL:(id)arg1;
- (void)requestDesktopSite;
@property(readonly, nonatomic) _Bool loadedUsingDesktopUserAgent;
- (id)init;
- (id)initWithWebView:(id)arg1 activityJSController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

