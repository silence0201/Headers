//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLConnectionManager.h>

@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager
{
    NSMutableArray *_availableConnections;
    NSArray *_allConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    int _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _connectionsAreLocal;
}

- (void)scheduleConnectionsBarrier:(CDUnknownBlockType)arg1;
- (void)scheduleBarrierBlock:(CDUnknownBlockType)arg1;
- (BOOL)handleStoreRequest:(id)arg1;
- (void)_checkinConnection:(id)arg1;
- (id)_checkoutConnectionOfType:(unsigned long long)arg1;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)disconnectAllConnections;
- (void)dealloc;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (void)_initializeConnectionsWithSeed:(id)arg1;

@end

