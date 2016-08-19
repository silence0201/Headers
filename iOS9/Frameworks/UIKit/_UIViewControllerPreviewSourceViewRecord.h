//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIPreviewInteractionControllerDelegate_Internal-Protocol.h>
#import <UIKit/UIViewControllerPreviewing-Protocol.h>

@class NSString, UIGestureRecognizer, UIPreviewInteractionController, UIView, UIViewController;
@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewControllerPreviewSourceViewRecord : NSObject <UIViewControllerPreviewing, UIPreviewInteractionControllerDelegate_Internal>
{
    id <UIViewControllerPreviewingDelegate> _delegate;
    UIView *_view;
    UIViewController *_viewController;
    UIPreviewInteractionController *_previewInteractionController;
    struct CGRect _sourceRect;
}

@property(readonly, nonatomic) UIPreviewInteractionController *previewInteractionController; // @synthesize previewInteractionController=_previewInteractionController;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) __weak id <UIViewControllerPreviewingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewInteractionController:(id)arg1 didSelectMenuItem:(id)arg2;
- (id)previewInteractionController:(id)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (_Bool)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(_Bool)arg3;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (_Bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (_Bool)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (_Bool)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;
- (id)presentationGestureRecognizer;
@property(readonly, nonatomic) UIView *sourceView;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
- (void)unregister;
- (id)init;
- (id)initWithView:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

