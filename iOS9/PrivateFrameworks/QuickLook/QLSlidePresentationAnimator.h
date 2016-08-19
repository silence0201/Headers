//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLPreviewTransitionAnimator.h>

#import <QuickLook/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString, QLDismissGestureRecognizer, QLPreviewController, UIView;

__attribute__((visibility("hidden")))
@interface QLSlidePresentationAnimator : QLPreviewTransitionAnimator <UIViewControllerInteractiveTransitioning>
{
    QLDismissGestureRecognizer *_gestureRecognizer;
    QLPreviewController *_previewController;
    UIView *_backgroundColorView;
}

@property(readonly) QLDismissGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)updateSlideProgress;
- (void)finishAnimatingDismissalWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareForTransition;
- (void)finishTransition:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

