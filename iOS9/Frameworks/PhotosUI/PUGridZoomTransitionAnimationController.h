//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UICollectionViewControllerLayoutToLayoutTransition.h>

@class PUZoomableGridTransition;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface PUGridZoomTransitionAnimationController : _UICollectionViewControllerLayoutToLayoutTransition
{
    id <UIViewControllerContextTransitioning> _transitionContext;
}

- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
@property(readonly, nonatomic) PUZoomableGridTransition *gridTransitionInfo;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

