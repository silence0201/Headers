//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Social/NSObject-Protocol.h>

@class NSArray, NSError, NSObject;
@protocol SLPlaceDataSource;

@protocol SLPlaceDataSourceDelegate <NSObject>
- (void)placeManager:(NSObject<SLPlaceDataSource> *)arg1 failedWithError:(NSError *)arg2;
- (void)placeManager:(NSObject<SLPlaceDataSource> *)arg1 updatedPlaces:(NSArray *)arg2;
@end
