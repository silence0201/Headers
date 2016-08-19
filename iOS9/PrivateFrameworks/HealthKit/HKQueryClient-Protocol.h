//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKQueryAnchor, HKSample, HKStatistics, NSArray, NSDictionary, NSError, NSNumber, NSSet, NSUUID;

@protocol HKQueryClient <NSObject>
- (void)deliverSampleBatch:(NSArray *)arg1 deletedBatch:(NSArray *)arg2 final:(_Bool)arg3 anchor:(HKQueryAnchor *)arg4 forQuery:(NSUUID *)arg5;
- (void)deliverError:(NSError *)arg1 forQuery:(NSUUID *)arg2;

@optional
- (void)deliverActivitySummaries:(NSArray *)arg1 queryUUID:(NSUUID *)arg2;
- (void)deliverDateRangeDictionary:(NSDictionary *)arg1 forQuery:(NSUUID *)arg2;
- (void)deliverSample:(HKSample *)arg1 forQuery:(NSUUID *)arg2;
- (void)deliverActivityStatisticsObjects:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
- (void)deliverStatistics:(HKStatistics *)arg1 forQuery:(NSUUID *)arg2;
- (void)deliverResetStatisticsObjects:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
- (void)deliverUpdatedStatistics:(HKStatistics *)arg1 anchor:(NSNumber *)arg2 forQuery:(NSUUID *)arg3;
- (void)deliverInitialStatisticsObjects:(NSArray *)arg1 anchor:(NSNumber *)arg2 forQuery:(NSUUID *)arg3;
- (void)deliverResetValuesByType:(NSDictionary *)arg1 forQuery:(NSUUID *)arg2;
- (void)deliverUpdatedValuesByType:(NSDictionary *)arg1 forQuery:(NSUUID *)arg2;
- (void)deliverValuesByType:(NSDictionary *)arg1 forQuery:(NSUUID *)arg2;
- (void)deliverUpdatedSources:(NSSet *)arg1 added:(NSSet *)arg2 forQuery:(NSUUID *)arg3;
- (void)deliverSources:(NSSet *)arg1 forQuery:(NSUUID *)arg2;
- (void)dataUpdatedInDatabaseWithAnchor:(NSNumber *)arg1 query:(NSUUID *)arg2;
- (void)deliverResultsResetWithAnchor:(HKQueryAnchor *)arg1 final:(_Bool)arg2 forQuery:(NSUUID *)arg3;
- (void)deliverSampleObjects:(NSArray *)arg1 deletedObjects:(NSArray *)arg2 withAnchor:(HKQueryAnchor *)arg3 forQuery:(NSUUID *)arg4;
@end

