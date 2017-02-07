//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSOperation : NSObject
{
    id _private;
    int _private1;
    int _private1b;
}

+ (id)currentOperation;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)_activity;
- (id)__;
- (id)description;
- (void)start;
- (void)main;
@property(readonly, copy) NSArray *dependencies;
- (void)removeDependency:(id)arg1;
- (void)addDependency:(id)arg1;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (void)waitUntilFinished;
@property long long qualityOfService;
@property(copy) NSString *name;
@property(copy) CDUnknownBlockType completionBlock;
- (CDUnknownBlockType)_copyCompletionBlock;
@property double threadPriority;
@property long long queuePriority;
@property(readonly, getter=isReady) _Bool ready;
@property(readonly, getter=isAsynchronous) _Bool asynchronous;
@property(readonly, getter=isConcurrent) _Bool concurrent;
@property(readonly, getter=isFinished) _Bool finished;
@property(readonly, getter=isExecuting) _Bool executing;
- (void)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (void)dealloc;
- (id)init;
- (void)setObservationInfo:(void *)arg1;
- (void *)observationInfo;
- (id)_implicitObservationInfo;
- (long long)_effQoS;

@end

