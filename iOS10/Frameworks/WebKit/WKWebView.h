//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WebKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSData, NSNumber, NSString, NSURL, UIScrollView, WKBackForwardList, WKBrowsingContextHandle, WKWebViewConfiguration, WKWebViewContentProviderRegistry, _WKSessionState, _WKWebViewPrintFormatter;
@protocol WKHistoryDelegatePrivate, WKNavigationDelegate, WKUIDelegate, _WKDiagnosticLoggingDelegate, _WKFindDelegate, _WKFullscreenDelegate, _WKIconLoadingDelegate, _WKInputDelegate, _WKWebViewPrintProvider;

@interface WKWebView : UIView <UIScrollViewDelegate>
{
    struct RetainPtr<WKWebViewConfiguration> _configuration;
    RefPtr_0cd9f53a _page;
    unsigned long long _activeFocusedStateRetainCount;
    struct unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState>> _navigationState;
    struct unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate>> _uiDelegate;
    struct unique_ptr<WebKit::IconLoadingDelegate, std::__1::default_delete<WebKit::IconLoadingDelegate>> _iconLoadingDelegate;
    unsigned long long _observedRenderingProgressEvents;
    struct WeakObjCPtr<id<_WKInputDelegate>> _inputDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
    struct RetainPtr<WKScrollView> _scrollView;
    struct RetainPtr<WKContentView> _contentView;
    _Bool _overridesMinimumLayoutSize;
    struct CGSize _minimumLayoutSizeOverride;
    _Bool _overridesMaximumUnobscuredSize;
    struct CGSize _maximumUnobscuredSizeOverride;
    struct CGRect _inputViewBounds;
    double _viewportMetaTagWidth;
    _Bool _viewportMetaTagWidthWasExplicit;
    _Bool _viewportMetaTagCameFromImageDocument;
    double _initialScaleFactor;
    _Bool _fastClickingIsDisabled;
    _Bool _allowsLinkPreview;
    struct UIEdgeInsets _obscuredInsets;
    _Bool _haveSetObscuredInsets;
    _Bool _isChangingObscuredInsetsInteractively;
    long long _interfaceOrientationOverride;
    _Bool _overridesInterfaceOrientation;
    _Bool _allowsViewportShrinkToFit;
    _Bool _hasCommittedLoadForMainFrame;
    _Bool _needsResetViewStateAfterCommitLoadForMainFrame;
    unsigned long long _firstPaintAfterCommitLoadTransactionID;
    int _dynamicViewportUpdateMode;
    struct CATransform3D _resizeAnimationTransformAdjustments;
    struct optional<unsigned long long> _resizeAnimationTransformTransactionID;
    struct RetainPtr<UIView> _resizeAnimationView;
    double _lastAdjustmentForScroller;
    struct optional<CGRect> _frozenVisibleContentRect;
    struct optional<CGRect> _frozenUnobscuredContentRect;
    _Bool _needsToRestoreScrollPosition;
    _Bool _commitDidRestoreScrollPosition;
    struct FloatPoint _scrollOffsetToRestore;
    struct FloatSize _obscuredInsetWhenSaved;
    _Bool _needsToRestoreUnobscuredCenter;
    struct FloatPoint _unobscuredCenterToRestore;
    unsigned long long _firstTransactionIDAfterPageRestore;
    double _scaleToRestore;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController>> _gestureController;
    _Bool _allowsBackForwardNavigationGestures;
    struct RetainPtr<UIView<WKWebViewContentProvider>> _customContentView;
    struct RetainPtr<UIView> _customContentFixedOverlayView;
    struct RetainPtr<NSTimer> _enclosingScrollViewScrollTimer;
    _Bool _didScrollSinceLastTimerFire;
    struct Color _scrollViewBackgroundColor;
    double _totalScrollViewBottomInsetAdjustmentForKeyboard;
    _Bool _currentlyAdjustingScrollViewInsetsForKeyboard;
    _Bool _delayUpdateVisibleContentRects;
    _Bool _hadDelayedUpdateVisibleContentRects;
    int _activeAnimatedResizeCount;
    struct Vector<std::__1::function<void ()>, 0, WTF::CrashOnOverflow, 16> _snapshotsDeferredDuringResize;
    struct RetainPtr<NSMutableArray> _stableStatePresentationUpdateCallbacks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_navigationGestureDidEnd;
- (void)_navigationGestureDidBegin;
- (_Bool)_isNavigationSwipeGestureRecognizer:(id)arg1;
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (id)_contentSizeCategory;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_windowDidRotate:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (_Bool)_shouldUpdateKeyboardWithInfo:(id)arg1;
- (void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(_Bool)arg2;
- (void)_didSameDocumentNavigationForMainFrame:(int)arg1;
- (void)_didFailLoadForMainFrame;
- (void)_didFinishLoadForMainFrame;
- (void)_updateContentRectsWithState:(_Bool)arg1;
- (struct CGRect)_contentBoundsExtendedForRubberbandingWithScale:(double)arg1;
- (void)_updateVisibleContentRectAfterScrollInView:(id)arg1;
- (void)_updateVisibleContentRects;
- (_Bool)_scrollViewIsRubberBanding;
- (struct CGRect)_contentRectForUserInteraction;
- (void)_frameOrBoundsChanged;
- (void)_enclosingScrollerScrollingEnded:(id)arg1;
- (void)_didScroll;
- (struct CGRect)_visibleContentRect;
- (struct CGRect)_visibleRectInEnclosingScrollView:(id)arg1;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_didFinishScrolling;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize)arg3;
- (_Bool)usesStandardContentView;
@property(readonly, nonatomic) _Bool _allowsDoubleTapGestures;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)didMoveToWindow;
- (_Bool)_zoomToRect:(struct FloatRect)arg1 withOrigin:(struct FloatPoint)arg2 fitEntireRect:(_Bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6;
- (double)_targetContentZoomScaleForRect:(const struct FloatRect *)arg1 currentScale:(double)arg2 fitEntireRect:(_Bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;
- (void)_zoomToFocusRect:(struct FloatRect)arg1 selectionRect:(struct FloatRect)arg2 insideFixed:(_Bool)arg3 fontSize:(float)arg4 minimumScale:(double)arg5 maximumScale:(double)arg6 allowScaling:(_Bool)arg7 forceScroll:(_Bool)arg8;
- (void)_zoomToInitialScaleWithOrigin:(struct FloatPoint)arg1 animated:(_Bool)arg2;
- (void)_zoomOutWithOrigin:(struct FloatPoint)arg1 animated:(_Bool)arg2;
- (void)_scrollByContentOffset:(struct FloatPoint)arg1;
- (_Bool)_scrollToRect:(struct FloatRect)arg1 origin:(struct FloatPoint)arg2 minimumScrollDistance:(float)arg3;
- (void)_scrollToContentScrollPosition:(struct FloatPoint)arg1 scrollOrigin:(struct IntPoint)arg2;
- (void)_zoomToRect:(struct FloatRect)arg1 atScale:(double)arg2 origin:(struct FloatPoint)arg3 animated:(_Bool)arg4;
- (void)_zoomToPoint:(struct FloatPoint)arg1 atScale:(double)arg2 animated:(_Bool)arg3;
- (PassRefPtr_d1f98d0a)_takeViewSnapshot;
- (void)_restorePageStateToUnobscuredCenter:(struct FloatPoint)arg1 scale:(double)arg2;
- (void)_restorePageScrollPosition:(struct FloatPoint)arg1 scrollOrigin:(struct FloatPoint)arg2 previousObscuredInset:(struct FloatSize)arg3 scale:(double)arg4;
- (void)_couldNotRestorePageState;
- (void)_dynamicViewportUpdateChangedTargetToScale:(double)arg1 position:(struct CGPoint)arg2 nextValidLayerTreeTransactionID:(unsigned long long)arg3;
- (void)_layerTreeCommitComplete;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction *)arg1;
- (struct FloatRect)visibleRectInViewCoordinates;
- (void)_didCommitLoadForMainFrame;
- (void)_processDidExit;
@property(readonly, nonatomic) struct UIEdgeInsets _computedContentInset;
- (struct CGPoint)_adjustedContentOffset:(struct CGPoint)arg1;
- (void)_updateScrollViewBackground;
- (void)_didInvokeUIScrollViewDelegateCallback;
- (void)_willInvokeUIScrollViewDelegateCallback;
- (void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const struct String *)arg1 data:(id)arg2;
- (void)_setHasCustomContentView:(_Bool)arg1 loadedMIMEType:(const struct String *)arg2;
@property(readonly, nonatomic) long long _selectionGranularity;
@property(readonly, nonatomic) WKWebViewContentProviderRegistry *_contentProviderRegistry;
- (id)_currentContentView;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)browsingContextController;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool _isBackground;
@property(nonatomic) _Bool allowsLinkPreview;
- (struct OpaqueWKPage *)_pageForTesting;
@property(copy, nonatomic) NSString *customUserAgent;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopLoading;
- (id)reloadFromOrigin;
- (id)reload;
- (id)goForward;
- (id)goBack;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) struct __SecTrust *serverTrust;
@property(readonly, nonatomic) _Bool hasOnlySecureContent;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
- (id)goToBackForwardListItem:(id)arg1;
- (id)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2;
- (id)loadRequest:(id)arg1;
@property(nonatomic, setter=_setIconLoadingDelegate:) __weak id <_WKIconLoadingDelegate> _iconLoadingDelegate;
@property(nonatomic) __weak id <WKUIDelegate> UIDelegate;
@property(nonatomic) __weak id <WKNavigationDelegate> navigationDelegate;
@property(readonly, nonatomic) WKBackForwardList *backForwardList;
@property(readonly, copy, nonatomic) WKWebViewConfiguration *configuration;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)_setUpSQLiteDatabaseTrackerClient;
- (void)_initializeWithConfiguration:(id)arg1;
- (_Bool)_mayAutomaticallyShowVideoPictureInPicture;
- (_Bool)_isShowingVideoPictureInPicture;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
@property(readonly, nonatomic) _WKWebViewPrintFormatter *_webViewPrintFormatter;
@property(readonly, nonatomic) NSString *_suggestedFilenameForDisplayedPDF;
@property(readonly, nonatomic) NSData *_dataForDisplayedPDF;
@property(readonly, nonatomic, getter=_isDisplayingPDF) _Bool _displayingPDF;
- (id)_viewForFindUI;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize)arg1 maximumUnobscuredSizeOverride:(struct CGSize)arg2;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize)arg1 minimumLayoutSizeForMinimalUI:(struct CGSize)arg2 maximumUnobscuredSizeOverride:(struct CGSize)arg3;
- (void)_snapshotRect:(struct CGRect)arg1 intoImageOfWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)_resizeWhileHidingContentWithUpdates:(CDUnknownBlockType)arg1;
- (void)_endAnimatedResize;
- (void)_beginAnimatedResizeWithUpdates:(CDUnknownBlockType)arg1;
- (void)_hideContentUntilNextUpdate;
- (void)_endInteractiveObscuredInsetsChange;
- (void)_beginInteractiveObscuredInsetsChange;
@property(nonatomic, setter=_setAllowsViewportShrinkToFit:) _Bool _allowsViewportShrinkToFit;
@property(nonatomic, setter=_setBackgroundExtendsBeyondPage:) _Bool _backgroundExtendsBeyondPage;
- (void)_setMaximumUnobscuredSizeOverride:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize _maximumUnobscuredSizeOverride;
@property(nonatomic, setter=_setInterfaceOrientationOverride:) long long _interfaceOrientationOverride;
@property(nonatomic, setter=_setObscuredInsets:) struct UIEdgeInsets _obscuredInsets;
- (void)_setMinimumLayoutSizeOverride:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize _minimumLayoutSizeOverride;
- (void)_stopMediaCapture;
@property(readonly, nonatomic) _Bool _isInFullscreen;
@property(nonatomic, setter=_setFullscreenDelegate:) id <_WKFullscreenDelegate> _fullscreenDelegate;
@property(readonly, nonatomic) _Bool _webProcessIsResponsive;
@property(nonatomic, getter=_allowsMediaDocumentInlinePlayback, setter=_setAllowsMediaDocumentInlinePlayback:) _Bool _allowsMediaDocumentInlinePlayback;
@property(readonly, nonatomic) NSArray *_scrollPerformanceData;
@property(nonatomic, setter=_setScrollPerformanceDataCollectionEnabled:) _Bool _scrollPerformanceDataCollectionEnabled;
@property(nonatomic, setter=_setViewScale:) double _viewScale;
@property(nonatomic, setter=_setFixedLayoutSize:) struct CGSize _fixedLayoutSize;
@property(nonatomic, setter=_setLayoutMode:) unsigned long long _layoutMode;
@property(readonly, nonatomic, getter=_isShowingNavigationGestureSnapshot) _Bool _showingNavigationGestureSnapshot;
@property(readonly, nonatomic, getter=_isDisplayingStandaloneMediaDocument) _Bool _displayingStandaloneMediaDocument;
@property(readonly, nonatomic, getter=_isDisplayingStandaloneImageDocument) _Bool _displayingStandaloneImageDocument;
@property(nonatomic, setter=_setInputDelegate:) __weak id <_WKInputDelegate> _inputDelegate;
- (void)_saveBackForwardSnapshotForItem:(id)arg1;
- (void)_hideFindUI;
- (void)_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
@property(nonatomic, setter=_setFindDelegate:) __weak id <_WKFindDelegate> _findDelegate;
@property(nonatomic, setter=_setDiagnosticLoggingDelegate:) __weak id <_WKDiagnosticLoggingDelegate> _diagnosticLoggingDelegate;
@property(nonatomic, setter=_setPageZoomFactor:) double _pageZoomFactor;
@property(nonatomic, setter=_setTextZoomFactor:) double _textZoomFactor;
@property(readonly, nonatomic) _Bool _supportsTextZoom;
@property(readonly) unsigned long long _pageCount;
@property(nonatomic, setter=_setPaginationLineGridEnabled:) _Bool _paginationLineGridEnabled;
@property(nonatomic, setter=_setGapBetweenPages:) double _gapBetweenPages;
@property(nonatomic, setter=_setPageLength:) double _pageLength;
@property(nonatomic, setter=_setPaginationBehavesLikeColumns:) _Bool _paginationBehavesLikeColumns;
@property(nonatomic, setter=_setPaginationMode:) long long _paginationMode;
- (void)_getWebArchiveDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getMainResourceDataWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, setter=_setObservedRenderingProgressEvents:) unsigned long long _observedRenderingProgressEvents;
@property(readonly, nonatomic) _Bool _networkRequestsInProgress;
@property(nonatomic, setter=_setAddsVisitedLinks:) _Bool _addsVisitedLinks;
@property(copy, nonatomic, setter=_setRemoteInspectionNameOverride:) NSString *_remoteInspectionNameOverride;
@property(nonatomic, setter=_setAllowsRemoteInspection:) _Bool _allowsRemoteInspection;
- (void)_close;
- (id)_restoreSessionState:(id)arg1 andNavigate:(_Bool)arg2;
- (void)_restoreFromSessionStateData:(id)arg1;
- (id)_sessionStateWithFilter:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _WKSessionState *_sessionState;
@property(readonly, nonatomic) NSData *_sessionStateData;
- (void)_didRelaunchProcess;
- (id)_dataDetectionResults;
- (id)_snapshotLayerContentsForBackForwardListItem:(id)arg1;
- (void)_becomeFirstResponderWithSelectionMovingForward:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_retainActiveFocusedState;
- (void)_killWebContentProcessAndResetState;
- (id)_reloadWithoutContentBlockers;
- (void)_killWebContentProcess;
@property(readonly, nonatomic) int _webProcessIdentifier;
@property(nonatomic, setter=_setUserContentExtensionsEnabled:) _Bool _userContentExtensionsEnabled;
@property(copy, setter=_setCustomUserAgent:) NSString *_customUserAgent;
@property(copy, setter=_setApplicationNameForUserAgent:) NSString *_applicationNameForUserAgent;
@property(readonly, nonatomic) NSString *_userAgent;
@property(readonly, nonatomic) NSString *_MIMEType;
@property(readonly, nonatomic) NSURL *_committedURL;
@property(readonly, nonatomic) NSArray *_certificateChain;
- (id)_loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (void)_loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
@property(readonly, nonatomic) NSURL *_unreachableURL;
@property(nonatomic, setter=_setHistoryDelegate:) __weak id <WKHistoryDelegatePrivate> _historyDelegate;
@property(readonly, nonatomic) WKBrowsingContextHandle *_handle;
@property(readonly, nonatomic) id _remoteObjectRegistry;
@property(nonatomic, getter=_isEditable, setter=_setEditable:) _Bool _editable;
- (void)_disableBackForwardSnapshotVolatilityForTesting;
- (void)_doAfterNextPresentationUpdateWithoutWaitingForPainting:(CDUnknownBlockType)arg1;
- (void)_doAfterNextPresentationUpdate:(CDUnknownBlockType)arg1;
- (double)_pageScale;
- (void)_setPageScale:(double)arg1 withOrigin:(struct CGPoint)arg2;
- (void)_handleActiveNowPlayingSessionInfoResponse:(_Bool)arg1 title:(id)arg2 duration:(double)arg3 elapsedTime:(double)arg4;
- (void)_requestActiveNowPlayingSessionInfo;
- (void)_firePresentationUpdateForPendingStableStatePresentationCallbacks;
- (void)_doAfterNextStablePresentationUpdate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSNumber *_stableStateOverride;
@property(readonly, nonatomic) NSString *_scrollingTreeAsText;
@property(readonly, nonatomic) NSArray *_uiTextSelectionRects;
@property(readonly, nonatomic) struct CGRect _inputViewBounds;
@property(readonly, nonatomic) struct CGRect _uiTextCaretRect;
- (void)_didDismissForcePressPreview;
- (void)_didShowForcePressPreview;
- (void)didEndFormControlInteraction;
- (void)didStartFormControlInteraction;
- (void)selectFormAccessoryPickerRow:(int)arg1;
- (void)dismissFormAccessoryView;
- (void)keyboardAccessoryBarPrevious;
- (void)keyboardAccessoryBarNext;
- (struct CGPoint)_convertPointFromViewToContents:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointFromContentsToView:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGRect _contentVisibleRect;
- (id)_contentsOfUserInterfaceItem:(id)arg1;
@property(readonly, nonatomic) id <_WKWebViewPrintProvider> _printProvider;
- (Class)_printFormatterClass;
@property(readonly, copy, nonatomic) NSArray *certificateChain;
- (void)_setFormDelegate:(id)arg1;
- (id)_formDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

