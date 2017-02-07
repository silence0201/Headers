//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSXPCConnection, NSXPCInterface, PKXPCForwarder;
@protocol NSObject, PKXPCServiceDelegate;

@interface PKXPCService : NSObject
{
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    id _exportedObject;
    NSString *_className;
    NSString *_serviceResumedNotificationName;
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
    PKXPCForwarder *_exportedProxy;
    _Bool _suspendCallbacks;
    id <NSObject> _foregroundListener;
    id <NSObject> _backgroundListener;
    int _serviceResumedToken;
    id <PKXPCServiceDelegate> _delegate;
    NSString *_machServiceName;
}

+ (void)setCallbacksSuspendedEvaluator:(CDUnknownBlockType)arg1;
+ (_Bool)areCallbacksSuspended;
@property(readonly, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (void).cxx_destruct;
- (CDUnknownBlockType)_newErrorHandlerWithSemaphore:(id)arg1;
- (CDUnknownBlockType)_newWrappedErrorHandlerForHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool connectionEstablished;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
@property(nonatomic) __weak id <PKXPCServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_unregisterForServiceListenerResumedNotifications;
- (void)_registerForServiceListenerResumedNotifications;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_sendSuspended;
- (void)_sendResumed;
- (void)_createConnectionIfPossible:(_Bool)arg1;
- (void)_invalidateConnectionIfPossible;
- (id)_connection;
- (void)_establishServiceConnection;
- (id)existingSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)existingRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)existingRemoteObjectProxy;
- (id)remoteObjectProxyWithSemaphore:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4;
- (id)init;

@end
