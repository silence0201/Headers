//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSNumber;

@protocol INSetSeatSettingsInCarIntentExport <NSObject, JSExport>
@property(nonatomic) long long relativeLevelSetting;
@property(copy, nonatomic) NSNumber *level;
@property(nonatomic) long long seat;
@property(copy, nonatomic) NSNumber *enableMassage;
@property(copy, nonatomic) NSNumber *enableCooling;
@property(copy, nonatomic) NSNumber *enableHeating;
- (id)init;
@end

