//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKHealthStore;

@interface HKSeriesBuilder : NSObject <NSSecureCoding>
{
    HKHealthStore *_store;
    int _state;
    long long _count;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(setter=_setState:) unsigned long long state;
- (void)_discardWithHandler:(CDUnknownBlockType)arg1;
- (void)discard;
@property(readonly) HKHealthStore *store;
@property(setter=_setCount:) long long count;
- (id)_initWithHealthStore:(id)arg1;
- (id)init;

@end

