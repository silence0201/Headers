//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKStackingViewController, UIViewController;

@protocol MKStackingViewControllerDelegate <NSObject>

@optional
- (void)stackingViewControllerDidEndScroll:(MKStackingViewController *)arg1;
- (void)stackingViewControllerWillBeginScroll:(MKStackingViewController *)arg1;
- (void)stackingViewController:(MKStackingViewController *)arg1 didShowMinimumVisibleSurfacePercentForAnalyticsSelection:(UIViewController *)arg2;
- (double)stackingViewController:(MKStackingViewController *)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(UIViewController *)arg2;
- (double)stackingViewController:(MKStackingViewController *)arg1 heightForSeparatorBetweenUpperViewController:(UIViewController *)arg2 andLowerViewController:(UIViewController *)arg3;
- (_Bool)stackingViewController:(MKStackingViewController *)arg1 showsTitleForViewController:(UIViewController *)arg2;
- (void)stackingViewController:(MKStackingViewController *)arg1 calculatedTransformForHeaderView:(struct CATransform3D)arg2;
- (double)stackingViewControllerHeightForHeaderView:(MKStackingViewController *)arg1;
- (double)stackingViewControllerHeightForTitleView:(MKStackingViewController *)arg1;
@end

