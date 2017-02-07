//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class NSCalendar, NSDate, NSSet;

@interface _HKLatestSummariesQuery : HKQuery
{
    NSDate *_summaryDate;
    NSCalendar *_calendar;
    NSSet *_typeFilters;
    CDUnknownBlockType _resultsHandler;
    CDUnknownBlockType _updateHandler;
}

+ (Class)_queryServerDataObjectClass;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
- (void).cxx_destruct;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_validate;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (_Bool)_requiresValidSampleType;
- (_Bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_cleanupAfterDeactivation;
- (void)deliverResetSummaries:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedSummaries:(id)arg1 forQuery:(id)arg2;
- (void)deliverSummaries:(id)arg1 forQuery:(id)arg2;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;

@end
