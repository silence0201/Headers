//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface HAPWACScanFilter : NSObject
{
    NSDictionary *_identifiersForDiscoveredAccessories;
    NSDictionary *_lastSeenTracking;
    double _ageOutTimePeriod;
    unsigned long long _filterMethod;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(nonatomic) unsigned long long filterMethod; // @synthesize filterMethod=_filterMethod;
- (void).cxx_destruct;
- (id)removedAccessories;
- (id)filterScanResult:(id)arg1;
@property(nonatomic) double ageOutTimePeriod; // @synthesize ageOutTimePeriod=_ageOutTimePeriod;
@property(retain, nonatomic) NSDictionary *lastSeenTracking; // @synthesize lastSeenTracking=_lastSeenTracking;
@property(retain, nonatomic) NSDictionary *identifiersForDiscoveredAccessories; // @synthesize identifiersForDiscoveredAccessories=_identifiersForDiscoveredAccessories;
- (void)dealloc;
- (id)initWithFilterMethod:(unsigned long long)arg1;

@end

