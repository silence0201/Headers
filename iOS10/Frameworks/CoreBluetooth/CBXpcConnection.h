//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CBXpcConnection : NSObject
{
    id <CBXpcConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_options;
    int _sessionType;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    _Bool _uiAppIsBackgrounded;
}

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification;
- (void)_applicationDidEnterBackgroundNotification;
- (void)_handleConnectionEvent:(id)arg1;
- (void)_handleFinalized;
- (void)_handleInvalid;
- (void)_handleReset;
- (void)_handleMsg:(id)arg1;
- (id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2;
- (id)_nameForMessage:(unsigned short)arg1;
- (void)_sendBarrier;
- (void)_checkOut;
- (void)_checkIn;
- (void)setTargetQueue:(id)arg1;
- (void)disconnect;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;

@end

