//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSXPCProxyCreating-Protocol.h>

@class NSString, NSXPCInterface, NSXPCListenerEndpoint;
@protocol NSObject, OS_dispatch_queue;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating>
{
    void *_xconnection;
    id _repliesExpected;
    NSObject<OS_dispatch_queue> *_userQueue;
    unsigned int _state;
    unsigned int _state2;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    id _exportInfo;
    id _repliesRequested;
    id _importInfo;
    id <NSObject> _otherInfo;
    id _reserved1;
    id _lock;
    NSXPCInterface *_remoteObjectInterface;
    NSString *_serviceName;
    NSXPCListenerEndpoint *_endpoint;
    id _eCache;
    id _dCache;
}

+ (void)endTransaction;
+ (void)beginTransaction;
+ (id)_currentBoost;
+ (id)currentConnection;
@property(retain) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
- (void)_decodeProgressMessageWithData:(id)arg1;
- (void)_resumeProgress:(unsigned long long)arg1;
- (void)_pauseProgress:(unsigned long long)arg1;
- (void)_cancelProgress:(unsigned long long)arg1;
- (void)_sendProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;
- (id)_xpcConnection;
- (void)_killConnection:(int)arg1;
- (void)_setTargetUserIdentifier:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
@property(readonly) unsigned int effectiveGroupIdentifier;
@property(readonly) unsigned int effectiveUserIdentifier;
@property(readonly) int processIdentifier;
@property(readonly) int auditSessionIdentifier;
- (void)_removeImportedProxy:(id)arg1;
- (void)_addImportedProxy:(id)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_unboostingRemoteObjectProxy;
@property(readonly, retain) id remoteObjectProxy;
@property(retain) NSXPCInterface *exportedInterface;
@property(retain) id exportedObject;
- (void)_addClassToDecodeCache:(Class)arg1;
- (_Bool)_decodeCacheContainsClass:(Class)arg1;
- (void)_addClassToEncodeCache:(Class)arg1;
- (_Bool)_encodeCacheContainsClass:(Class)arg1;
- (id)description;
- (id)_errorDescription;
- (id)_queue;
- (void)_setQueue:(id)arg1;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (unsigned long long)_generationCount;
- (id)valueForEntitlement:(id)arg1;
- (CDStruct_6ad76789)auditToken;
- (void)setOptions:(unsigned long long)arg1;
- (id)_exportTable;
@property(readonly, retain) NSXPCListenerEndpoint *endpoint;
@property(readonly, copy) NSString *serviceName;
@property(copy) CDUnknownBlockType invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(CDUnknownBlockType)arg4 timeout:(double)arg5 userInfo:(id)arg6;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(CDUnknownBlockType)arg4 timeout:(double)arg5;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(CDUnknownBlockType)arg4;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3;
- (void)_sendDesistForProxy:(id)arg1;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)stop;
- (void)start;
- (void)resume;
- (void)suspend;
- (void)finalize;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3;
- (id)init;
- (void)_decodeAndInvokeMessageWithData:(id)arg1;
- (void)_decodeAndInvokeReplyBlockWithData:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3;

@end

