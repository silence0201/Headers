//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIGestureRecognizer, UIInteractionProgress, UIPreviewInteractionController, UIView, UIViewController;

@protocol UIPreviewInteractionControllerDelegate <NSObject>
- (_Bool)performsViewControllerCommitTransitionForPreviewInteractionController:(UIPreviewInteractionController *)arg1;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 performCommitForPreviewViewController:(UIViewController *)arg2 committedViewController:(UIViewController *)arg3;
- (UIViewController *)previewInteractionController:(UIPreviewInteractionController *)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(UIView *)arg3 presentingViewController:(id *)arg4;

@optional
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 interactionProgress:(UIInteractionProgress *)arg2 forRevealAtPosition:(struct CGPoint)arg3 inSourceView:(UIView *)arg4;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 interactionProgress:(UIInteractionProgress *)arg2 forRevealAtLocation:(struct CGPoint)arg3 inSourceView:(UIView *)arg4 containerView:(UIView *)arg5;
- (_Bool)previewInteractionController:(UIPreviewInteractionController *)arg1 shouldUseStandardRevealTransformForPreviewingAtPosition:(struct CGPoint)arg2 inView:(UIView *)arg3;
- (_Bool)previewInteractionController:(UIPreviewInteractionController *)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint)arg2 inView:(UIView *)arg3;
- (_Bool)previewInteractionController:(UIPreviewInteractionController *)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (UIViewController *)previewInteractionController:(UIPreviewInteractionController *)arg1 committedViewControllerForPreviewViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 didDismissViewController:(UIViewController *)arg2 committing:(_Bool)arg3;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(UIView *)arg4;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 performCommitToViewController:(UIViewController *)arg2;
@end

