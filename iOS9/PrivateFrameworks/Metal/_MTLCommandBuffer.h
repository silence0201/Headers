//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MTLError, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, _MTLCommandQueue;
@protocol MTLCommandBuffer, MTLCommandEncoder, MTLCommandQueue;

@interface _MTLCommandBuffer : NSObject
{
    id <MTLCommandEncoder> _currentCommandEncoder;
    _MTLCommandQueue<MTLCommandQueue> *_queue;
    struct MTLDispatch *_scheduledDispatchList;
    struct MTLDispatch *_completedDispatchList;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    unsigned long long _creationTime;
    unsigned long long _enqueueTime;
    unsigned long long _commitTime;
    unsigned long long _submitToKernelTime;
    unsigned long long _kernelScheduledTime;
    unsigned long long _submitToHardwareTime;
    unsigned long long _completionInterruptTime;
    unsigned long long _kernelCompleteTime;
    unsigned long long _completionHandlerEnqueueTime;
    unsigned long long _completionHandlerExecutionTime;
    unsigned long long _status;
    MTLError *_error;
    NSString *_label;
    _Bool _skipRender;
    _Bool _profilingEnabled;
    _Bool _scheduledCallbacksDone;
    _Bool _completedCallbacksDone;
    _Bool _strongObjectReferences;
    NSDictionary *_profilingResults;
    _Bool _retainedReferences;
    _Bool _synchronousDebugMode;
    NSMutableDictionary *_userDictionary;
    unsigned long long _numRequestedCounters;
    unsigned long long _numInternalSampleCounters;
    unsigned long long _numEncoders;
    unsigned long long _numThisCommandBuffer;
    _MTLCommandBuffer<MTLCommandBuffer> *_statCommandBuffer;
    int _sampleLock;
    _Bool _StatEnabled;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _samplesPerStorageBlock;
    unsigned long long _totalNumStatSamples;
    NSMutableArray *_sampleStorage;
    struct MTLStatSampleRec *_samples;
    struct MTLStatSampleRec *_currentSample;
    CDUnknownBlockType _perfSampleHandlerBlock;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
}

+ (void)initialize;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations; // @synthesize StatLocations=_StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions; // @synthesize StatOptions=_StatOptions;
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled; // @synthesize StatEnabled=_StatEnabled;
@property(nonatomic) unsigned long long numEncoders; // @synthesize numEncoders=_numEncoders;
@property(nonatomic) unsigned long long numThisCommandBuffer; // @synthesize numThisCommandBuffer=_numThisCommandBuffer;
@property(retain, nonatomic) _MTLCommandBuffer<MTLCommandBuffer> *statCommandBuffer; // @synthesize statCommandBuffer=_statCommandBuffer;
@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(readonly) unsigned long long status; // @synthesize status=_status;
@property(readonly) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_queue;
@property(readonly) _Bool synchronousDebugMode; // @synthesize synchronousDebugMode=_synchronousDebugMode;
@property(readonly) _Bool retainedReferences; // @synthesize retainedReferences=_retainedReferences;
@property(copy) NSString *label; // @synthesize label=_label;
- (unsigned long long)getAndIncrementNumEncoders;
- (void)postProcessSamples:(struct MTLStatSampleRec *)arg1 toUserDst:(unsigned long long *)arg2 numSamples:(unsigned long long)arg3;
- (void)postProcessCommandbuffer;
- (struct MTLStatSampleRec *)newSample;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) NSError *error;
- (void)setCurrentCommandEncoder:(id)arg1;
- (_Bool)skipRender;
- (void)kernelSubmitTime;
- (void)didComplete:(unsigned long long)arg1 error:(unsigned int)arg2;
- (void)didCompletePreDealloc:(unsigned long long)arg1 error:(unsigned int)arg2;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
- (void)didSchedule:(unsigned long long)arg1 error:(unsigned int)arg2;
- (void)setCommitted:(_Bool)arg1;
- (_Bool)isCommitted;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (void)commitAndReset;
- (void)commitAndHold;
- (void)commit;
- (void)enqueue;
- (id)description;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2 synchronousDebugMode:(_Bool)arg3;

@end

