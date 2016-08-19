//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

#import <CFNetwork/NSStreamDelegate-Protocol.h>

@class NSFileHandle, NSInputStream, NSObject, NSString;
@protocol OS_dispatch_io, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate>
{
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSFileHandle *_readHandle;
    NSObject<OS_dispatch_io> *_pipeIO;
    unsigned long long _bytesRead;
    NSObject<OS_dispatch_semaphore> *_streamOpenedSema;
    _Bool _finishedOpen;
    _Bool _openedStreamDuringNeedNewBodyStream;
    _Bool _streamBased;
    CDUnknownBlockType _streamWriteCompletion;
}

@property(copy) CDUnknownBlockType streamWriteCompletion; // @synthesize streamWriteCompletion=_streamWriteCompletion;
@property(readonly, getter=isStreamBased) _Bool streamBased; // @synthesize streamBased=_streamBased;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_onqueue_finishStream:(_Bool)arg1;
- (void)readFromStream;
- (void)_onqueue_invokeStreamWriteCompletion;
- (void)_onqueue_didReceiveData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)_onqueue_willBeRetried;
- (void)_onqueue_needNewBodyStream:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_captureStream:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_openStream;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

