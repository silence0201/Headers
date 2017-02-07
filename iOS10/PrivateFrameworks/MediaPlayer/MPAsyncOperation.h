//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MPAsyncOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isExecuting;
    _Bool _isFinished;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)finish;
- (void)execute;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (id)init;

@end

