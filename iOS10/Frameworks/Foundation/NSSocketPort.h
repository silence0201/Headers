//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSPort.h>

@class NSData;

@interface NSSocketPort : NSPort
{
    void *_receiver;
    id _connectors;
    void *_loops;
    void *_data;
    id _signature;
    id _delegate;
    id _lock;
    unsigned long long _maxSize;
    unsigned long long _useCount;
    unsigned long long _reserved;
}

+ (_Bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;
+ (void)_fixNSSocketPortLeak;
+ (void)initialize;
- (void)_handleMessage:(struct __CFData *)arg1 from:(struct __CFData *)arg2 socket:(struct __CFSocket *)arg3;
- (void)handlePortMessage:(id)arg1;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (_Bool)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (struct __CFSocket *)_sendingSocketForPort:(id)arg1 beforeTime:(double)arg2;
- (id)description;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 socket:(int)arg4;
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;
- (id)initRemoteWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;
- (id)_initRemoteWithSignature:(id)arg1;
- (id)initRemoteWithTCPPort:(unsigned short)arg1 host:(id)arg2;
- (id)initWithTCPPort:(unsigned short)arg1;
- (id)init;
- (id)_initWithRetainedCFSocket:(struct __CFSocket *)arg1 protocolFamily:(int)arg2 socketType:(int)arg3 protocol:(int)arg4;
@property(readonly, copy) NSData *address;
@property(readonly) int socket;
@property(readonly) int protocol;
@property(readonly) int socketType;
@property(readonly) int protocolFamily;
- (id)signature;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)handleConnDeath:(id)arg1;
- (void)invalidate;
- (void)_incrementUseCount;
- (_Bool)isValid;

@end

