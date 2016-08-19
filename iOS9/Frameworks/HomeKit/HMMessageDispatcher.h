//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol HMMessageTransport, OS_dispatch_queue;

@interface HMMessageDispatcher : NSObject
{
    _Bool _remoteSource;
    id <HMMessageTransport> _transport;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_notificationHandlers;
}

@property(nonatomic, getter=isRemoteSource) _Bool remoteSource; // @synthesize remoteSource=_remoteSource;
@property(retain, nonatomic) NSMutableDictionary *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <HMMessageTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)_deregisterForMessage:(id)arg1 receiver:(id)arg2 token:(id)arg3;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (id)initWithTransport:(id)arg1;

@end

