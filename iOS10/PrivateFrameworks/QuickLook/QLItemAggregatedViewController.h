//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class QLAppearance;
@protocol QLPreviewItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLItemAggregatedViewController : QLItemViewController
{
    _Bool _isVisible;
    _Bool _isAppearing;
    _Bool _isDisappearing;
    _Bool _fullScreen;
    QLAppearance *_appearance;
    id <QLPreviewItemViewControllerDelegate> _delegate;
    QLItemViewController *_currentPreviewViewController;
}

@property(retain, nonatomic) QLItemViewController *currentPreviewViewController; // @synthesize currentPreviewViewController=_currentPreviewViewController;
- (id)delegate;
- (void).cxx_destruct;
- (void)buttonPressedWithIdentifier:(id)arg1;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (id)transitioningView;
- (struct CGSize)preferredContentSize;
- (id)printer;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (id)parallaxView;
- (id)scrollView;
- (_Bool)canShowToolBar;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (id)bottomLayoutGuide;
- (id)topLayoutGuide;
- (_Bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (id)registeredKeyCommands;
- (id)toolbarButtons;
- (id)accessoryView;
- (_Bool)canRotate;
- (_Bool)canEnterFullScreen;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)previewWillFinishAppearing;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)appearance;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)showPreviewViewController:(id)arg1;

@end

