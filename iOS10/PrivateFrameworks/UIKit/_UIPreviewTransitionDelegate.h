//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIForceTransitioningDelegate-Protocol.h>

@class NSString, UIInteractionProgress, _UIFeedbackStatesBehavior;

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate>
{
    UIInteractionProgress *interactionProgressForPresentation;
    _UIFeedbackStatesBehavior *_feedbackBehavior;
}

@property(retain, nonatomic) _UIFeedbackStatesBehavior *feedbackBehavior; // @synthesize feedbackBehavior=_feedbackBehavior;
@property(retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // @synthesize interactionProgressForPresentation;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

