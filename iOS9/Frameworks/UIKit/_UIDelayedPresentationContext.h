//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSInvocation;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : NSObject
{
    _Bool _enableUserInteraction;
    long long _reqcnt;
    NSInvocation *_presentInvocation;
    CDUnknownBlockType _cancellationHandler;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(retain, nonatomic) NSInvocation *presentInvocation; // @synthesize presentInvocation=_presentInvocation;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
- (void).cxx_destruct;
- (void)finishDelayedPresentation:(id)arg1;
- (void)beginDelayedPresentation;
- (void)cancelDelayedPresentation:(_Bool)arg1;
- (long long)incrementRequestCount;
- (long long)decrementRequestCount;
- (long long)requestCount;
- (id)delayingController;
- (id)invocationTarget;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(CDUnknownBlockType)arg2;

@end

