//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/WKUIDelegate-Protocol.h>

@class NSArray, NSDictionary, NSURL, UIScrollView, UIViewController, WKSecurityOrigin, WKWebView, _WKActivatedElementInfo, _WKFrameHandle;

@protocol WKUIDelegatePrivate <WKUIDelegate>

@optional
- (UIViewController *)_presentingViewControllerForWebView:(WKWebView *)arg1;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForAnimatedImageAtURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4 imageSize:(struct CGSize)arg5;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (struct UIEdgeInsets)_webView:(WKWebView *)arg1 finalObscuredInsetsForScrollView:(UIScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (unsigned long long)_webView:(WKWebView *)arg1 indexIntoAttachmentListForElement:(_WKActivatedElementInfo *)arg2;
- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1 sourceIsManaged:(_Bool *)arg2;
- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 alternateActionForURL:(NSURL *)arg2;
- (_Bool)_webView:(WKWebView *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(_Bool)arg3;
- (void)_webView:(WKWebView *)arg1 commitPreviewedImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 willPreviewImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (_Bool)_webView:(WKWebView *)arg1 shouldRequestGeolocationAuthorizationForURL:(NSURL *)arg2 isMainFrame:(_Bool)arg3 mainFrameURL:(NSURL *)arg4;
- (void)_webView:(WKWebView *)arg1 didNotHandleTapAsClickAtPoint:(struct CGPoint)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 actionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (_Bool)_webView:(WKWebView *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (void)_webViewDidEndCaptureSession:(WKWebView *)arg1;
- (void)_webViewDidBeginCaptureSession:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 checkUserMediaPermissionForURL:(NSURL *)arg2 mainFrameURL:(NSURL *)arg3 frameIdentifier:(unsigned long long)arg4 decisionHandler:(void (^)(NSString *, _Bool))arg5;
- (void)_webView:(WKWebView *)arg1 requestUserMediaAuthorizationForMicrophone:(_Bool)arg2 camera:(_Bool)arg3 url:(NSURL *)arg4 mainFrameURL:(NSURL *)arg5 decisionHandler:(void (^)(_Bool, _Bool))arg6;
- (NSDictionary *)_dataDetectionContextForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 imageOrMediaDocumentSizeChanged:(struct CGSize)arg2;
- (void)_webViewDidLosePointerLock:(WKWebView *)arg1;
- (void)_webViewRequestPointerLock:(WKWebView *)arg1;
- (void)_webViewDidExitFullscreen:(WKWebView *)arg1;
- (void)_webViewDidEnterFullscreen:(WKWebView *)arg1;
- (void)_webViewFullscreenMayReturnToInline:(WKWebView *)arg1;
- (void)_webViewClose:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (void)_webView:(WKWebView *)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(unsigned long long)arg3 totalBytesNeeded:(unsigned long long)arg4 decisionHandler:(void (^)(unsigned long long))arg5;
- (void)_webView:(WKWebView *)arg1 decideDatabaseQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(unsigned long long)arg3 currentOriginUsage:(unsigned long long)arg4 currentDatabaseUsage:(unsigned long long)arg5 expectedUsage:(unsigned long long)arg6 decisionHandler:(void (^)(unsigned long long))arg7;
@end
