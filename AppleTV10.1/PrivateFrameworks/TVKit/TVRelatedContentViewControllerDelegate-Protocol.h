//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/NSObject-Protocol.h>

@class TVRelatedContentViewController;

@protocol TVRelatedContentViewControllerDelegate <NSObject>

@optional
- (void)relatedContentViewController:(TVRelatedContentViewController *)arg1 didTransitionToDisplayMode:(unsigned long long)arg2;
- (void)relatedContentViewController:(TVRelatedContentViewController *)arg1 willTransitionToDisplayMode:(unsigned long long)arg2;
- (void)userInteractionBeganWithRelatedContentViewController:(TVRelatedContentViewController *)arg1;
- (void)didDismissRelatedContentViewController:(TVRelatedContentViewController *)arg1;
@end

