//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKTravelRouteEstimationController;

@protocol EKTravelRouteEstimationControllerDelegate <NSObject>

@optional
- (void)routeEstimationControllerDidFinishOriginLocationLookup:(EKTravelRouteEstimationController *)arg1;
- (void)routeEstimationControllerDidBeginOriginLocationLookup:(EKTravelRouteEstimationController *)arg1;
- (void)routeEstimationControllerDidFinishTravelTimeLookup:(EKTravelRouteEstimationController *)arg1;
- (void)routeEstimationControllerDidBeginTravelTimeLookup:(EKTravelRouteEstimationController *)arg1;
@end

