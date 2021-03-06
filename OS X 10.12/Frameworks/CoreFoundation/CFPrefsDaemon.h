//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPrefsDaemon : NSObject
{
    NSObject<OS_xpc_object> *_listener;
    const char *_name;
    int _role;
    struct __CFSet *_sourceCache;
    struct os_unfair_lock_s _sourceCacheLock;
    NSObject<OS_xpc_object> *_agentConnections;
    NSObject<OS_dispatch_queue> *_agentQueue;
    BOOL _testMode;
    // Error parsing type: ^(?={_CFPrefsShmemEntry=AiAI}AQ), name: _shmem
}

- (id)listener;
- (void)sendEachAgent:(id)arg1;
- (void)removeAgentConnectionsWithUserName:(const char *)arg1;
- (void)withAgentDictionaryIfApplicable:(CDUnknownBlockType)arg1;
- (void)checkIn;
- (void)getShmemName:(char *)arg1 bufLen:(unsigned long long)arg2;
- (unsigned int)userID;
-     // Error parsing type: ^(?={_CFPrefsShmemEntry=AiAI}AQ)16@0:8, name: shmem
- (void)_initializeShmemPage:(union **)arg1;
- (BOOL)isInTestMode;
- (int)role;
- (id)initWithRole:(int)arg1 testMode:(BOOL)arg2;
- (void)handleUserDeletedMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleMultiMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleFlushSourceForDomainMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleAgentCheckInMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleFlushManagedMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleError:(id)arg1;
- (void)handleSourceMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 fromPeer:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)logDomainInconsistencyForProcess:(int)arg1 message:(id)arg2 source:(id)arg3;
- (void)flushDomainInAgents:(const char *)arg1;
- (void)withSourceForDomain:(struct __CFString *)arg1 inContainer:(struct __CFString *)arg2 user:(struct __CFString *)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 cloudStoreEntitlement:(id)arg6 cloudConfigurationPath:(struct __CFString *)arg7 perform:(CDUnknownBlockType)arg8;
- (void)withSources:(CDUnknownBlockType)arg1;
- (void)synchronousWithSourceCache:(CDUnknownBlockType)arg1;

@end

