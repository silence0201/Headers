//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKView.h>

@class PagePreviewAnimationController, WKWebsiteDataStore;
@protocol SearchableWKViewPlaybackControlsPresenter;

__attribute__((visibility("hidden")))
@interface SearchableWKView : WKView
{
    struct RefPtr<Safari::SearchableWebContentViewController> _contentViewController;
    BOOL _isInFullscreenMode;
    BOOL _isLockingFirstResponderForImmediateAction;
    BOOL _forPagePreviews;
    BOOL _pagePreviewNeedsReloadOnTabTransition;
    id <SearchableWKViewPlaybackControlsPresenter> _playbackControlsPresenter;
    unsigned long long _browsingMode;
    WKWebsiteDataStore *_websiteDataStore;
    SearchableWKView *_previewParentView;
    PagePreviewAnimationController *_pagePreviewAnimationController;
}

@property(retain, nonatomic) PagePreviewAnimationController *pagePreviewAnimationController; // @synthesize pagePreviewAnimationController=_pagePreviewAnimationController;
@property(nonatomic) BOOL pagePreviewNeedsReloadOnTabTransition; // @synthesize pagePreviewNeedsReloadOnTabTransition=_pagePreviewNeedsReloadOnTabTransition;
@property(nonatomic) __weak SearchableWKView *previewParentView; // @synthesize previewParentView=_previewParentView;
@property(readonly, nonatomic, getter=isForPagePreviews) BOOL forPagePreviews; // @synthesize forPagePreviews=_forPagePreviews;
@property(readonly, nonatomic) WKWebsiteDataStore *websiteDataStore; // @synthesize websiteDataStore=_websiteDataStore;
@property(readonly, nonatomic) unsigned long long browsingMode; // @synthesize browsingMode=_browsingMode;
@property(nonatomic) __weak id <SearchableWKViewPlaybackControlsPresenter> playbackControlsPresenter; // @synthesize playbackControlsPresenter=_playbackControlsPresenter;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_removeMediaPlaybackControlsView;
- (void)_addMediaPlaybackControlsView:(id)arg1;
- (void)_dismissContentRelativeChildWindows;
- (void)_completeImmediateActionAnimation;
- (void)_cancelImmediateActionAnimation;
- (void)_prepareForImmediateActionAnimation;
- (id)_browserWindow;
- (id)_targetWKViewForPresentingBrowserContentViewController;
- (void)_setPreviewOverrideImage:(id)arg1;
- (void)_setPreviewLoading:(BOOL)arg1;
- (void)_setPreviewTitle:(id)arg1;
- (void)_addToReadingListFromPreviewView:(id)arg1 URL:(id)arg2;
- (void)_handleClickInPreviewView:(id)arg1 URL:(id)arg2;
- (void)_finishPreviewingURL:(id)arg1 withPagePreviewViewController:(id)arg2;
- (id)_titleForPreviewOfURL:(id)arg1;
- (id)_viewForPreviewingURL:(id)arg1 initialFrameSize:(struct CGSize)arg2;
- (id)_immediateActionAnimationControllerForHitTestResult:(struct OpaqueWKHitTestResult *)arg1 withType:(unsigned int)arg2 userData:(void *)arg3;
- (void)_addURLToReadingListWithAnimationFromPresentingBrowserContentViewController:(id)arg1;
- (void)didLoadMainDocumentForPreviewWKView:(id)arg1;
- (void)didFirstVisuallyNonEmptyLayoutForPreviewWKView:(id)arg1;
- (struct BrowserContentViewController *)presentingBrowserContentViewController;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)viewDidMoveToSuperview;
- (BOOL)isClosed;
- (void)close;
@property(readonly, nonatomic) struct CGRect visibleBounds;
- (void)pageDidClose;
- (struct SearchableWebContentViewController *)contentViewController;
- (PassRefPtr_6e6851a6)createContentViewController;
- (id)initWithFrame:(struct CGRect)arg1 context:(const struct Context *)arg2 pageGroup:(const struct PageGroup *)arg3 relatedToPage:(const struct Page *)arg4 browsingMode:(unsigned long long)arg5 websiteDataStore:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 context:(const struct Context *)arg2 pageGroup:(const struct PageGroup *)arg3 relatedToPage:(const struct Page *)arg4 browsingMode:(unsigned long long)arg5;

@end
