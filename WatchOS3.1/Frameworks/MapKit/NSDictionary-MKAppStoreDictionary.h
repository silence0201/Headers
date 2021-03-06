//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSArray, NSNumber, NSString;

@interface NSDictionary (MKAppStoreDictionary)
@property(readonly, nonatomic) _Bool isInstalled;
@property(readonly, nonatomic) _Bool isOfficialApp;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSArray *transitModeKeys;
- (id)bestImageURLForWidth:(double)arg1;
@property(readonly, nonatomic) NSString *priceFormatted;
- (id)_defaultOffer;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic) unsigned long long ratingCount;
@property(readonly, nonatomic) float averageRating;
@property(readonly, nonatomic) NSNumber *storeID;
- (id)_ratingData;
@property(readonly, nonatomic) NSString *creator;
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, nonatomic) NSString *title;
@end

