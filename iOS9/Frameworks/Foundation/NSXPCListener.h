//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

@interface NSXPCListener : NSObject
{
    void *_xconnection;
    NSObject<OS_dispatch_queue> *_userQueue;
    void *reserved0;
    id <NSXPCListenerDelegate> _delegate;
    NSString *_serviceName;
    unsigned long long _state;
    id _reserved1;
    id _reserved2;
}

+ (id)_UUID;
+ (void)enableTransactions;
+ (id)anonymousListener;
+ (id)serviceListener;
@property id <NSXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_xpcConnection;
- (id)_queue;
- (void)_setQueue:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
@property(readonly, retain) NSXPCListenerEndpoint *endpoint;
- (id)serviceName;
- (void)invalidate;
- (void)stop;
- (void)resume;
- (void)suspend;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)_initShared;

@end

