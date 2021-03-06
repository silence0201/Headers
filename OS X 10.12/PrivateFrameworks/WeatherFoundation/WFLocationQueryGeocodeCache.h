//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WFLocationQueryGeocodeCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheAge;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    unsigned long long _capacity;
    double _expirationInterval;
}

@property(nonatomic) double expirationInterval; // @synthesize expirationInterval=_expirationInterval;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (BOOL)_shouldEvictObjectWithDate:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

