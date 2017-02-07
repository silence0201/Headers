//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSData, NSDictionary, NSError, NSMutableArray, NSObject, NSString, NSURLRequest, NSURLResponse, __NSURLSessionLocal;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTask : NSURLSessionTask
{
    NSObject<OS_dispatch_queue> *_workQueue;
    struct BaseSocketStreamClient *_socketStreamClient;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    NSMutableArray *_pendingWork;
    NSMutableArray *_extraWork;
    _Bool _doingWorkOnThisQueue;
    NSData *_readBuffer;
    _Bool _readSignaled;
    _Bool _readEOF;
    CDStruct_59046461 _readError;
    NSData *_writeBuffer;
    _Bool _writeSignaled;
    _Bool _writeEOF;
    _Bool _deliveredConnectionEstablished;
    CDStruct_59046461 _writeError;
    long long _writeBufferAlreadyWrittenForNextWrite;
    NSMutableArray *_finalizationQueue;
    int _connectionState;
    NSMutableArray *_afterConnectQueue;
    __NSURLSessionLocal *_session;
    unsigned long long _taskIdentifier;
    long long _state;
    NSString *_taskDescription;
    NSError *_error;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    _Bool _goneSecure;
    NSObject<OS_dispatch_source> *_tickerTimeoutTimer;
    CDUnknownBlockType _disavow;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    long long _expectedWorkload;
    double _timeWindowDelay;
    double _timeWindowDuration;
    double startTime;
    NSString *_ledBellyServiceIdentifier;
    long long _priorityValue;
    double _loadingPriorityValue;
    NSString *_boundInterfaceIdentifier;
    _Bool _disallowCellular;
    int _networkServiceType;
    NSDictionary *_legacySocketStreamProperties;
    _Bool _betterRouteDiscovered;
    NSData *__TCPConnectionMetadata;
    _Bool _didIssueCancel;
}

@property(copy) NSData *_TCPConnectionMetadata; // @synthesize _TCPConnectionMetadata=__TCPConnectionMetadata;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property(copy) NSURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(copy) NSError *error; // @synthesize error=_error;
@property long long state; // @synthesize state=_state;
@property(readonly) _Bool _goneSecure; // @synthesize _goneSecure;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (id)_ledBellyServiceIdentifier;
- (id)_legacySocketStreamProperties;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (int)_networkServiceType;
- (void)set_networkServiceType:(int)arg1;
- (_Bool)_disallowCellular;
- (void)set_disallowCellular:(_Bool)arg1;
- (id)_boundInterfaceIdentifier;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (double)_timeWindowDuration;
- (void)set_timeWindowDuration:(double)arg1;
- (double)_timeWindowDelay;
- (void)set_timeWindowDelay:(double)arg1;
- (long long)_expectedWorkload;
- (void)set_expectedWorkload:(long long)arg1;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didFinish;
- (void)_reportTimingDataToAWD;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_addBlockOpAtHead:(CDUnknownBlockType)arg1 description:(const char *)arg2;
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2;
- (void)_onqueue_unscheduleStreams;
- (void)_onqueue_scheduleStreams;
- (void)_onqueue_readStream:(struct __CFReadStream *)arg1 writeStreamAvailable:(struct __CFWriteStream *)arg2;
- (void)_onqueue_writeStreamEvent:(unsigned long long)arg1;
- (void)_onqueue_ioTick;
- (_Bool)_onqueue_shufflePendingFor:(Class)arg1;
- (_Bool)_onqueue_processWriteWork:(id)arg1;
- (_Bool)_onqueue_processReadWork:(id)arg1;
- (void)_onqueue_readStreamEvent:(unsigned long long)arg1;
- (void)_onqueue_postConnectConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_needClientCert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_needServerTrust:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_preConnectionConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_stopSecureConnection;
- (void)_onqueue_startSecureConnection;
- (void)_onqueue_closeReadOp;
- (void)_onqueue_closeWriteOp;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_captureStreams;
- (void)_onqueue_writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stopSecureConnection;
- (void)startSecureConnection;
- (void)closeRead;
- (void)closeWrite;
- (void)captureStreams;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_onqueue_readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_onqueue_cancel;
- (void)cancel;
- (void)_onqueue_resume;
- (void)resume;
- (void)suspend;
- (id)_onqueue_errorOrCancelError;
- (id)description;
- (id)describePending:(id)arg1;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary *)arg1;
- (long long)computeAdjustedPoolPriority;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithNetService:(id)arg1 session:(id)arg2 disavow:(CDUnknownBlockType)arg3;
- (id)initWithHost:(id)arg1 port:(long long)arg2 session:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (id)_initWithExistingTask:(id)arg1 disavow:(CDUnknownBlockType)arg2;
- (id)_initWithSession:(id)arg1 disavow:(CDUnknownBlockType)arg2;
- (id)_initCommonWithSession:(id)arg1 disavow:(CDUnknownBlockType)arg2;
- (void)_init_setupTimeoutTimer;

@end

