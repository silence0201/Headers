//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_source;

@interface _HKExpiringCompletionTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
    double _expirationTime;
    double _timeoutInterval;
    _Bool _invalidated;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
}

@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)_invalidateAndInvokeCompletion:(_Bool)arg1 error:(id)arg2;
- (void)invalidateAndInvokeCompletionWithError:(id)arg1;
- (void)invalidate;
- (void)startWithTimeoutInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)_cancelTimer;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

