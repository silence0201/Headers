//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

#import <AppStoreDaemon/ASDJobManagerClient-Protocol.h>
#import <AppStoreDaemon/NSXPCListenerDelegate-Protocol.h>

@class ASDJobManagerClientConnection, ASDJobManagerOptions, NSArray, NSHashTable, NSMutableSet, NSObject, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ASDJobManager : ASDBaseClient <NSXPCListenerDelegate, ASDJobManagerClient>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSArray *_jobs;
    int _launchNotificationToken;
    NSXPCListener *_listener;
    ASDJobManagerClientConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    ASDJobManagerOptions *_options;
    NSMutableSet *_removedJobs;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

- (void).cxx_destruct;
- (void)_willFinishJobs:(id)arg1;
- (_Bool)_shouldAutomaticallyReconnect;
- (void)_setupConnection;
- (void)_sendStatesUpdated:(id)arg1;
- (void)_sendProgressUpdated:(id)arg1;
- (void)_sendJobsCompleted:(id)arg1;
- (void)_sendJobsChanged:(id)arg1;
- (void)_registerManagerWithOptions:(id)arg1;
- (void)_invalidate;
- (void)_handleInvalidatedConnection:(id)arg1;
- (void)_handleInterruptedConnection:(id)arg1;
- (void)_getJobsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_getJobsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_finishJobsWithIDs:(id)arg1;
- (void)_connectToDaemon;
- (void)_applyUpdates:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)didUpdateStates:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (void)didCompleteJobs:(id)arg1 finalPhases:(id)arg2;
- (void)didCompleteJobs:(id)arg1;
- (void)didChangeJobs:(id)arg1;
- (void)resumeJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)pauseJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)getJobsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getJobsUsingBlock:(CDUnknownBlockType)arg1;
- (void)finishJobs:(id)arg1;
- (void)cancelJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
