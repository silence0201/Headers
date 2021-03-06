//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/MarkupViewControllerDelegate-Protocol.h>

@class NSString, QLMUViewController;

__attribute__((visibility("hidden")))
@interface QLPDFItemViewController : QLItemViewController <MarkupViewControllerDelegate>
{
    _Bool _isFullScreen;
    long long _lastSavedEditNumber;
    _Bool _showingSignatureView;
    _Bool _showingSignatureManagerView;
    QLMUViewController *_markupViewController;
    _Bool _hasChangesToUndo;
    double _topInset;
}

@property(nonatomic) _Bool hasChangesToUndo; // @synthesize hasChangesToUndo=_hasChangesToUndo;
@property double topInset; // @synthesize topInset=_topInset;
- (void).cxx_destruct;
- (_Bool)canShowToolBar;
- (_Bool)canRotate;
- (_Bool)canEnterFullScreen;
- (void)showingSignatureView:(_Bool)arg1;
- (void)showingSignatureManagerView:(_Bool)arg1;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (_Bool)canSwipeToDismiss;
- (_Bool)canPinchToDismiss;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (id)scrollView;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (id)transitioningView;
- (id)toolbarButtons;
- (void)_updatePeekSize;
- (void)viewDidLayoutSubviews;
- (void)buttonPressedWithIdentifier:(id)arg1;
- (void)_updateToolbarVisibilityAnimated:(_Bool)arg1;
- (void)_enableMarkupMode:(_Bool)arg1;
- (struct UIEdgeInsets)customSketchOverlayInsets;
- (struct UIEdgeInsets)customEdgeInsets;
- (_Bool)controller:(id)arg1 shouldOpenLinkAtURL:(id)arg2;
- (void)_saveChanges;
- (_Bool)_needToSaveChanges;
- (void)previewWillAppear:(_Bool)arg1;
- (void)_updateThumbnailViewWithTraitCollection:(id)arg1;
- (void)_updateThumbnailView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

