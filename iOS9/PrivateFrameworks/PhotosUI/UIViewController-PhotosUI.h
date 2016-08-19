//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (PhotosUI)
+ (void)_pu_ensureLocalAssets:(id)arg1 forReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)pu_copyAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)pu_currentViewControllerStack;
+ (_Bool)pu_isSkiingBlackSlope;
- (void)pu_ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pu_copyAssets:(id)arg1;
- (void)_pu_animateBottomBarTransition:(id)arg1 withContext:(id)arg2;
- (void)_pu_performBottomBarsMorphAnimations;
- (void)_pu_setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)_pu_setTabBarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_setToolbarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_setNavigationBarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_updateStatusBarVisibilityWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
- (void)_pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1 isStatusBarHidden:(_Bool)arg2;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
@property(readonly, nonatomic) long long pu_preferredStatusBarUpdateAnimation;
- (void)pu_setupInitialBarsVisibilityOnViewWillAppearAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool pu_wantsTabBarVisible;
@property(readonly, nonatomic) _Bool pu_wantsToolbarVisible;
@property(readonly, nonatomic) _Bool pu_wantsNavigationBarVisible;
- (_Bool)pu_isViewVisible;
@end

