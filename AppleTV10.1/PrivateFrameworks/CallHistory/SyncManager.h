//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

#import <CallHistory/SyncManagerProtocol-Protocol.h>

@class CallHistoryDBClientHandle, NSString, TransactionManager;

@interface SyncManager : CHLogger <SyncManagerProtocol>
{
    TransactionManager *_transactionManager;
    CallHistoryDBClientHandle *_dbHandle;
}

@property(readonly, nonatomic) CallHistoryDBClientHandle *dbHandle; // @synthesize dbHandle=_dbHandle;
- (void).cxx_destruct;
- (id)archiveCallObject:(id)arg1;
- (void)resetTimers;
- (double)timerOutgoing;
- (double)timerIncoming;
- (double)timerLifetime;
- (void)addUpdateTransactions:(id)arg1;
- (void)updateAllObjects:(id)arg1;
- (void)updateObjects:(id)arg1;
- (void)deleteObjectsWithLimits:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithLimits:(id)arg1;
- (id)predicateForLimits:(id)arg1;
- (id)predicateForCallKinds:(id)arg1;
- (id)predicateForCallKind:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAllObjects;
- (void)insertRecordsWithoutTransactions:(id)arg1;
- (void)insertWithoutTransaction:(id)arg1;
- (void)insert:(id)arg1;
- (void)initDBHandle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

