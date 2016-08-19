//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISearchControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
}

- (void)willFocusOffscreenViewForController:(id)arg1 withHeading:(unsigned long long)arg2;
- (void)didUnfocusSearchBarForController:(id)arg1;
- (void)didFocusSearchBarForController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

