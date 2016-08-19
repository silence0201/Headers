//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKQueryClient-Protocol.h>

@class HKObjectType, HKSampleType, NSMutableArray, NSPredicate, NSString, NSUUID, _HKFilter;
@protocol HKQueryDelegate, NSXPCProxyCreating, OS_dispatch_queue;

@interface HKQuery : NSObject <HKQueryClient>
{
    NSPredicate *_predicate;
    NSObject<OS_dispatch_queue> *_activationQueue;
    id <HKQueryDelegate> _delegate;
    NSMutableArray *_sampleObjects;
    NSMutableArray *_deletedObjects;
    _Bool _receivedInitialResults;
    _Bool _hasBeenExecuted;
    HKObjectType *_objectType;
    NSUUID *_activationUUID;
    _HKFilter *_filter;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <NSXPCProxyCreating> _serverProxy;
}

+ (void)_configureClientInterface:(id)arg1;
+ (Class)_queryServerDataObjectClass;
+ (id)_serverInterfaceProtocol;
+ (id)_clientInterfaceProtocol;
+ (id)serverInterface;
+ (id)clientInterface;
+ (id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForActivitySummaryWithDateComponents:(id)arg1;
+ (id)_predicateForSamplesSyncedFromOtherDevice;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalDistance:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalEnergyBurned:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 duration:(double)arg2;
+ (id)predicateForWorkoutsWithWorkoutActivityType:(unsigned long long)arg1;
+ (id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2;
+ (id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2;
+ (id)predicateForObjectsFromWorkout:(id)arg1;
+ (id)predicateForObjectsWithNoCorrelation;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)_predicateForObjectsFromAppleWatches;
+ (id)predicateForObjectsWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsFromDevices:(id)arg1;
+ (id)predicateForObjectsFromSourceRevisions:(id)arg1;
+ (id)predicateForObjectsFromSources:(id)arg1;
+ (id)predicateForObjectsFromSource:(id)arg1;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForActivityCachesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
@property(retain, nonatomic) id <NSXPCProxyCreating> serverProxy; // @synthesize serverProxy=_serverProxy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) _Bool hasBeenExecuted; // @synthesize hasBeenExecuted=_hasBeenExecuted;
@property(retain, nonatomic, getter=_filter) _HKFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic, getter=_hasReceivedInitialResults) _Bool receivedInitialResults; // @synthesize receivedInitialResults=_receivedInitialResults;
@property(readonly, nonatomic) NSUUID *activationUUID; // @synthesize activationUUID=_activationUUID;
@property(readonly) HKObjectType *objectType; // @synthesize objectType=_objectType;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <HKQueryDelegate> delegate;
@property(readonly) NSPredicate *predicate;
@property(readonly) HKSampleType *sampleType;
- (void)deliverActivityStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (void)deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverResetValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (void)deliverSources:(id)arg1 forQuery:(id)arg2;
- (void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
- (void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4;
- (void)deliverResultsResetWithAnchor:(id)arg1 final:(_Bool)arg2 forQuery:(id)arg3;
- (void)deliverError:(id)arg1 forQuery:(id)arg2;
- (void)deliverSampleBatch:(id)arg1 deletedBatch:(id)arg2 final:(_Bool)arg3 anchor:(id)arg4 forQuery:(id)arg5;
- (CDUnknownBlockType)_queue_errorHandler;
- (_Bool)_shouldStayAliveAfterInitialResults;
- (_Bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)_queue_deactivate;
- (void)_queue_deliverErrorAndDeactivate:(id)arg1;
- (void)_queue_activateWithConnection:(id)arg1 isReactivation:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)_requiresValidSampleType;
- (id)_predicateFilterClasses;
- (void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1;
- (void)_client_receivedInitialResults;
- (void)_dispatchAsyncToResourceQueue:(CDUnknownBlockType)arg1;
- (void)_dispatchSyncToResourceQueue:(CDUnknownBlockType)arg1;
- (void)_dispatchToClientForUUID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)deactivate;
- (void)reactivateWithConnection:(id)arg1;
- (void)activateWithClientQueue:(id)arg1 connection:(id)arg2 delegate:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_initWithDataType:(id)arg1 predicate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

