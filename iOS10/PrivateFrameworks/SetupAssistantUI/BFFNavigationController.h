//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSRootController.h>

@class NSMutableArray;

@interface BFFNavigationController : PSRootController
{
    NSMutableArray *_observers;
    _Bool _animating;
}

@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)removeDelegateObserver:(id)arg1;
- (void)addDelegateObserver:(id)arg1;
- (void)_reapObservers;
- (void)setDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
- (id)backgroundColor;
- (_Bool)_canShowTextServices;
- (_Bool)_usesTransitionController;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;

@end
