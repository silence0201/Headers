//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INRestaurant, INRestaurantGuest, INRestaurantOffer, NSDateComponents, NSString;

@protocol INBookRestaurantReservationIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *guestProvidedSpecialRequestText;
@property(copy, nonatomic) INRestaurantOffer *selectedOffer;
@property(copy, nonatomic) INRestaurantGuest *guest;
@property(copy, nonatomic) NSString *bookingIdentifier;
@property(nonatomic) unsigned long long partySize;
@property(copy, nonatomic) NSDateComponents *bookingDateComponents;
@property(copy, nonatomic) INRestaurant *restaurant;
- (id)init;
@end
