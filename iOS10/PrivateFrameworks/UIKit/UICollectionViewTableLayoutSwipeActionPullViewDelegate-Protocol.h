//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UICollectionViewTableLayoutSwipeAction, UICollectionViewTableLayoutSwipeActionPullView, UIView;

@protocol UICollectionViewTableLayoutSwipeActionPullViewDelegate <NSObject>
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(UICollectionViewTableLayoutSwipeActionPullView *)arg1;
- (void)swipeActionPullView:(UICollectionViewTableLayoutSwipeActionPullView *)arg1 tappedAction:(UICollectionViewTableLayoutSwipeAction *)arg2 view:(UIView *)arg3;
@end
