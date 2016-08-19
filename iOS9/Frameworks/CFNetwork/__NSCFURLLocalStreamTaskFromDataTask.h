//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/__NSCFURLLocalStreamTask.h>

#import <CFNetwork/SessionConnectionDelegate-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTaskFromDataTask : __NSCFURLLocalStreamTask <SessionConnectionDelegate>
{
    struct __CFReadStream *_myReadToHisWrite;
    _Bool _myReadToHisWriteEOF;
    _Bool _myReadToHisWriteSignaled;
    CDStruct_59046461 _myReadToHisWriteError;
    struct __CFWriteStream *_myWriteToHisRead;
    _Bool _myWriteToHisReadEOF;
    _Bool _myWriteToHisReadSignaled;
    CDStruct_59046461 _myWriteToHisReadError;
    NSMutableArray *_myWriteToHisReadWork;
}

- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(_Bool)arg2;
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg2;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connectionWillFinishLoading:(id)arg1;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(CDUnknownBlockType)arg4;
- (void)_unimp:(const char *)arg1;
- (void)_onqueue_didFinishLoadingWithError:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 inputStream:(id)arg2 ouptutStream:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (id)initWithTask:(id)arg1 remainingInputStream:(id)arg2 remainingOutputStream:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (id)initWithTask:(id)arg1 disavow:(CDUnknownBlockType)arg2;
- (void)_onqueue_stFromDataTaskWriteCallback:(unsigned long long)arg1;
- (void)_onqueue_stFromDataTaskReadCallback:(unsigned long long)arg1;
- (void)_onqueue_ioTickFromDataTaskConversion:(const char *)arg1;
- (void)_onqueue_ioTickFromDataTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

