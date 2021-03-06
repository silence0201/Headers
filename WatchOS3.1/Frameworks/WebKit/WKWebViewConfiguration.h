//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCoding-Protocol.h>
#import <WebKit/NSCopying-Protocol.h>

@class NSString, WKPreferences, WKProcessPool, WKUserContentController, WKWebView, WKWebViewContentProviderRegistry, WKWebsiteDataStore, _WKVisitedLinkProvider, _WKVisitedLinkStore, _WKWebsiteDataStore;

@interface WKWebViewConfiguration : NSObject <NSCoding, NSCopying>
{
    struct LazyInitialized<WTF::RetainPtr<WKProcessPool>> _processPool;
    struct LazyInitialized<WTF::RetainPtr<WKPreferences>> _preferences;
    struct LazyInitialized<WTF::RetainPtr<WKUserContentController>> _userContentController;
    struct LazyInitialized<WTF::RetainPtr<_WKVisitedLinkStore>> _visitedLinkStore;
    struct LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore>> _websiteDataStore;
    struct WeakObjCPtr<WKWebView> _relatedWebView;
    struct WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
    _Bool _treatsSHA1SignedCertificatesAsInsecure;
    struct RetainPtr<NSString> _groupIdentifier;
    struct LazyInitialized<WTF::RetainPtr<NSString>> _applicationNameForUserAgent;
    _Bool _respectsImageOrientation;
    _Bool _printsBackgrounds;
    double _incrementalRenderingSuppressionTimeout;
    _Bool _allowsJavaScriptMarkup;
    _Bool _convertsPositionStyleOnCopy;
    _Bool _allowsMetaRefresh;
    _Bool _allowUniversalAccessFromFileURLs;
    struct LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry>> _contentProviderRegistry;
    _Bool _alwaysRunsAtForegroundPriority;
    _Bool _allowsInlineMediaPlayback;
    _Bool _inlineMediaPlaybackRequiresPlaysInlineAttribute;
    _Bool _allowsInlineMediaPlaybackAfterFullscreen;
    _Bool _invisibleAutoplayNotPermitted;
    _Bool _mediaDataLoadsAutomatically;
    _Bool _attachmentElementEnabled;
    _Bool _mainContentUserGestureOverrideEnabled;
    _Bool _initialCapitalizationEnabled;
    _Bool _suppressesIncrementalRendering;
    _Bool _allowsAirPlayForMediaPlayback;
    _Bool _allowsPictureInPictureMediaPlayback;
    _Bool _ignoresViewportScaleLimits;
    unsigned long long _mediaTypesRequiringUserActionForPlayback;
    long long _selectionGranularity;
    unsigned long long _dataDetectorTypes;
}

@property(nonatomic) _Bool ignoresViewportScaleLimits; // @synthesize ignoresViewportScaleLimits=_ignoresViewportScaleLimits;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) _Bool allowsPictureInPictureMediaPlayback; // @synthesize allowsPictureInPictureMediaPlayback=_allowsPictureInPictureMediaPlayback;
@property(nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
@property(nonatomic) _Bool allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property(nonatomic) unsigned long long mediaTypesRequiringUserActionForPlayback; // @synthesize mediaTypesRequiringUserActionForPlayback=_mediaTypesRequiringUserActionForPlayback;
@property(nonatomic) _Bool allowsAirPlayForMediaPlayback; // @synthesize allowsAirPlayForMediaPlayback=_allowsAirPlayForMediaPlayback;
@property(nonatomic) _Bool suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_validate;
@property(nonatomic, setter=_setContentProviderRegistry:) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property(retain, nonatomic, setter=_setVisitedLinkProvider:) _WKVisitedLinkProvider *_visitedLinkProvider;
@property(retain, nonatomic, setter=_setWebsiteDataStore:) _WKWebsiteDataStore *_websiteDataStore;
@property(retain, nonatomic, setter=_setVisitedLinkStore:) _WKVisitedLinkStore *_visitedLinkStore;
@property(copy, nonatomic) NSString *applicationNameForUserAgent;
@property(retain, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property(retain, nonatomic) WKUserContentController *userContentController;
@property(retain, nonatomic) WKPreferences *preferences;
@property(retain, nonatomic) WKProcessPool *processPool;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
@property(nonatomic, setter=_setApplePayEnabled:) _Bool _applePayEnabled;
@property(nonatomic, setter=_setInitialCapitalizationEnabled:) _Bool _initialCapitalizationEnabled;
@property(nonatomic, setter=_setMainContentUserGestureOverrideEnabled:) _Bool _mainContentUserGestureOverrideEnabled;
@property(nonatomic, setter=_setRequiresUserActionForAudioPlayback:) _Bool _requiresUserActionForAudioPlayback;
@property(nonatomic, setter=_setRequiresUserActionForVideoPlayback:) _Bool _requiresUserActionForVideoPlayback;
@property(nonatomic, setter=_setAttachmentElementEnabled:) _Bool _attachmentElementEnabled;
@property(nonatomic, setter=_setMediaDataLoadsAutomatically:) _Bool _mediaDataLoadsAutomatically;
@property(nonatomic, setter=_setInvisibleAutoplayNotPermitted:) _Bool _invisibleAutoplayNotPermitted;
@property(nonatomic, setter=_setAllowsInlineMediaPlaybackAfterFullscreen:) _Bool _allowsInlineMediaPlaybackAfterFullscreen;
@property(nonatomic, setter=_setInlineMediaPlaybackRequiresPlaysInlineAttribute:) _Bool _inlineMediaPlaybackRequiresPlaysInlineAttribute;
@property(nonatomic, setter=_setAlwaysRunsAtForegroundPriority:) _Bool _alwaysRunsAtForegroundPriority;
@property(nonatomic, setter=_setAllowsMetaRefresh:) _Bool _allowsMetaRefresh;
@property(nonatomic, setter=_setConvertsPositionStyleOnCopy:) _Bool _convertsPositionStyleOnCopy;
@property(nonatomic, setter=_setAllowUniversalAccessFromFileURLs:) _Bool _allowUniversalAccessFromFileURLs;
@property(nonatomic, setter=_setAllowsJavaScriptMarkup:) _Bool _allowsJavaScriptMarkup;
@property(nonatomic, setter=_setIncrementalRenderingSuppressionTimeout:) double _incrementalRenderingSuppressionTimeout;
@property(nonatomic, setter=_setPrintsBackgrounds:) _Bool _printsBackgrounds;
@property(nonatomic, setter=_setRespectsImageOrientation:) _Bool _respectsImageOrientation;
@property(nonatomic, setter=_setTreatsSHA1SignedCertificatesAsInsecure:) _Bool _treatsSHA1SignedCertificatesAsInsecure;
@property(copy, nonatomic, setter=_setGroupIdentifier:) NSString *_groupIdentifier;
@property(nonatomic, setter=_setAlternateWebViewForNavigationGestures:) __weak WKWebView *_alternateWebViewForNavigationGestures;
@property(nonatomic, setter=_setRelatedWebView:) __weak WKWebView *_relatedWebView;
@property(nonatomic) _Bool requiresUserActionForMediaPlayback;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;

@end

