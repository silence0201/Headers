//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class NSDictionary;

@interface _HKCurrentActivitySummaryQuery : HKQuery
{
    CDUnknownBlockType _updateHandler;
    NSDictionary *_collectionIntervals;
}

+ (Class)_queryServerDataObjectClass;
@property(copy, nonatomic, getter=_collectionIntervals, setter=_setCollectionIntervals:) NSDictionary *collectionIntervals; // @synthesize collectionIntervals=_collectionIntervals;
- (void).cxx_destruct;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (CDUnknownBlockType)_queue_errorHandler;
- (_Bool)_queue_shouldStayAliveAfterInitialResults;
- (_Bool)_requiresValidSampleType;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (void)deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;

@end

