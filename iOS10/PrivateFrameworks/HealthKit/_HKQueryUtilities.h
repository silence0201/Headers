//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKQueryUtilities : NSObject
{
}

+ (id)coalesceTotalDurations:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3;
+ (_Bool)shouldUseDailyAverageWithDateComponents:(id)arg1 sampleType:(id)arg2;
+ (id)averageSumFromStatistics:(id)arg1 unit:(id)arg2;
+ (id)countStatisticsQueryWithSampleType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 predicate:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)calculateCountStatisticsWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4;
+ (double)totalDurationFromCoalescedDateIntervals:(id)arg1;
+ (id)arrayByCoalescingObjects:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 combiningBlock:(CDUnknownBlockType)arg5;
+ (void)_organizeSampleByStartDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)calculateIncludedValuesWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4;
+ (id)calculateTotalDurationsWithTimePeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 floorToYesterdayAtNoon:(_Bool)arg5;
+ (id)coalesceTimePeriodsFromSamples:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3;
+ (id)coalesceTimePeriods:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3;
+ (id)sleepQueryWithStartDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 healthStore:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)_processSleepQueryResults:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 sourceOrder:(id)arg4 calendar:(id)arg5;
+ (id)sleepDateIntervalForThePastWeekWithCalendar:(id)arg1;

@end
