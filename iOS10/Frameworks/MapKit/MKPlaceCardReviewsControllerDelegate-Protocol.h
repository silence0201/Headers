//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceReviewsViewController;
@protocol MKMapItemProviderRatingSnippet;

@protocol MKPlaceCardReviewsControllerDelegate <NSObject>

@optional
- (void)placeCardReviewsController:(MKPlaceReviewsViewController *)arg1 didSelectViewReview:(id <MKMapItemProviderRatingSnippet>)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(MKPlaceReviewsViewController *)arg1;
@end

