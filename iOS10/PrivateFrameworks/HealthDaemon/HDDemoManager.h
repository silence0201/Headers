//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _HDDataFaker;

@interface HDDemoManager : NSObject
{
    _HDDataFaker *_faker;
}

- (void).cxx_destruct;
- (_Bool)isProvidingData;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopFakingData;
- (void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;

@end
