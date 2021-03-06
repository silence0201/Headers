//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKPreferences : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPreferences> _preferences;
}

@property(readonly) struct Object *_apiObject;
@property(nonatomic) _Bool javaScriptCanOpenWindowsAutomatically;
@property(nonatomic) _Bool javaScriptEnabled;
@property(nonatomic) double minimumFontSize;
- (void)dealloc;
- (id)init;
@property(nonatomic, setter=_setAntialiasedFontDilationEnabled:) _Bool _antialiasedFontDilationEnabled;
@property(nonatomic, setter=_setDiagnosticLoggingEnabled:) _Bool _diagnosticLoggingEnabled;
@property(nonatomic, getter=_isStandalone, setter=_setStandalone:) _Bool _standalone;
@property(nonatomic, setter=_setJavaScriptRuntimeFlags:) unsigned long long _javaScriptRuntimeFlags;
@property(nonatomic, setter=_setAllowFileAccessFromFileURLs:) _Bool _allowFileAccessFromFileURLs;
@property(nonatomic, setter=_setLogsPageMessagesToSystemConsoleEnabled:) _Bool _logsPageMessagesToSystemConsoleEnabled;
@property(nonatomic, setter=_setDeveloperExtrasEnabled:) _Bool _developerExtrasEnabled;
@property(nonatomic, setter=_setSimpleLineLayoutDebugBordersEnabled:) _Bool _simpleLineLayoutDebugBordersEnabled;
@property(nonatomic, setter=_setVisibleDebugOverlayRegions:) unsigned long long _visibleDebugOverlayRegions;
@property(nonatomic, setter=_setTiledScrollingIndicatorVisible:) _Bool _tiledScrollingIndicatorVisible;
@property(nonatomic, setter=_setCompositingRepaintCountersVisible:) _Bool _compositingRepaintCountersVisible;
@property(nonatomic, setter=_setCompositingBordersVisible:) _Bool _compositingBordersVisible;
@property(nonatomic, setter=_setFullScreenEnabled:) _Bool _fullScreenEnabled;
@property(nonatomic, setter=_setOfflineApplicationCacheIsEnabled:) _Bool _offlineApplicationCacheIsEnabled;
@property(nonatomic, setter=_setStorageBlockingPolicy:) long long _storageBlockingPolicy;
@property(nonatomic, setter=_setTelephoneNumberDetectionIsEnabled:) _Bool _telephoneNumberDetectionIsEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

