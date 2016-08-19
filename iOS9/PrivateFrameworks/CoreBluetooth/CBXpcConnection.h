//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_dispatch_semaphore, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CBXpcConnection : NSObject
{
    id <CBXpcConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_options;
    int _type;
    _Bool _appIsBackgrounded;
    NSObject<OS_dispatch_semaphore> *_xpcSendBarrier;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    _Bool _xpcIsFinalizing;
}

- (void).cxx_destruct;
- (void)applicationWillEnterForegroundNotification;
- (void)applicationDidEnterBackgroundNotification;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleFinalized;
- (void)handleInvalid;
- (void)handleReset;
- (CDUnknownBlockType)replyBlockWithXpcReply:(id)arg1;
- (void)handleMsg:(id)arg1;
- (void)sendBarrier;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (void)sendAsyncMsg:(unsigned short)arg1 args:(id)arg2;
- (id)allocXpcMsg:(unsigned short)arg1 args:(id)arg2;
- (void)checkOut;
- (void)checkIn;
- (id)nameForMessage:(unsigned short)arg1;
@property(readonly, nonatomic, getter=isSetupOnUIThread) _Bool setupOnUIThread;
- (void)setTargetQueue:(id)arg1;
- (void)disconnect;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;

@end

