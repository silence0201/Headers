//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class NSLayoutConstraint, UIView;

@interface PKPaymentAuthorizationPresentationController : UIPresentationController
{
    UIView *_dimmingView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    struct CGSize _preferredContentSize;
    struct __CFArray *_observers;
}

- (void)_notifyObserversAboutDidAdjustToSize:(struct CGSize)arg1;
- (void)_notifyObserversAboutWillAdjustToSize:(struct CGSize)arg1;
- (void)removePresentationObserver:(id)arg1;
- (void)addPresentationObserver:(id)arg1;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) struct CGSize maximumContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (_Bool)shouldRemovePresentersView;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

