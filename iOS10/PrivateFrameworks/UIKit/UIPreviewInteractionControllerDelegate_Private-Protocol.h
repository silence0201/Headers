//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPreviewInteractionControllerDelegate-Protocol.h>

@class UIPreviewInteractionController, UIView, UIViewController;
@protocol UIForceTransitioningDelegate;

@protocol UIPreviewInteractionControllerDelegate_Private <UIPreviewInteractionControllerDelegate>

@optional
- (id <UIForceTransitioningDelegate>)previewInteractionController:(UIPreviewInteractionController *)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint)arg2 inView:(UIView *)arg3;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 performCustomCommitForPreviewViewController:(UIViewController *)arg2 completion:(void (^)(void))arg3;
- (_Bool)performsCustomCommitTransitionForPreviewInteractionController:(UIPreviewInteractionController *)arg1;
@end

