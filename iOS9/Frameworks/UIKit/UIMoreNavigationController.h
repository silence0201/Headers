//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSArray, UIMoreListController, UIViewController;

@interface UIMoreNavigationController : UINavigationController
{
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

+ (Class)_moreListControllerClass;
@property(readonly, nonatomic) UIViewController *moreListController; // @synthesize moreListController=_moreListController;
- (void).cxx_destruct;
@property(nonatomic) _Bool moreViewControllersChanged;
@property(nonatomic) _Bool allowsCustomizing;
@property(retain, nonatomic) NSArray *moreViewControllers;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_redisplayMoreTableView;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_ensureChildrenHaveParentViewController;
- (id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long *)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) UIViewController *displayedViewController;
- (void)_restoreOriginalNavigationController;
- (void)restoreOriginalNavigationController:(id)arg1;
- (id)_preparedViewController:(id)arg1;
- (id)init;

@end

