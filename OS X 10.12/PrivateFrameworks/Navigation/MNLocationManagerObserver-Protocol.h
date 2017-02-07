//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNLocationManager, NSError;

@protocol MNLocationManagerObserver <NSObject>
- (void)locationManagerDidResumeLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(MNLocationManager *)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerDidReset:(MNLocationManager *)arg1;
- (void)locationManagerFailedToUpdateLocation:(MNLocationManager *)arg1 withError:(NSError *)arg2;
- (void)locationManagerUpdatedLocation:(MNLocationManager *)arg1;
@end
