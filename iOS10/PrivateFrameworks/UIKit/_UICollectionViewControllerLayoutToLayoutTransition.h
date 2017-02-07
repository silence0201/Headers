//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UICollectionViewLayout, UIPercentDrivenInteractiveTransition;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _crossFadeNavigationBar;
    _Bool _crossFadeBottomBars;
    _Bool _interactionAborted;
    UICollectionViewLayout *_toLayout;
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _operation;
}

+ (id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property(nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) _Bool crossFadeBottomBars; // @synthesize crossFadeBottomBars=_crossFadeBottomBars;
@property(nonatomic) _Bool crossFadeNavigationBar; // @synthesize crossFadeNavigationBar=_crossFadeNavigationBar;
@property(retain, nonatomic) UICollectionViewLayout *toLayout; // @synthesize toLayout=_toLayout;
- (void).cxx_destruct;
- (_Bool)_shouldCrossFadeBottomBars;
- (_Bool)_shouldCrossFadeNavigationBar;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

