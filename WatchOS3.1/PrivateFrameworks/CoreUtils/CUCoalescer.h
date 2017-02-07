//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUCoalescer : NSObject
{
    _Bool _invalidateCalled;
    double _startTime;
    NSObject<OS_dispatch_source> *_timer;
    int _triggered;
    CDUnknownBlockType _actionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    double _leeway;
    double _maxDelay;
    double _minDelay;
}

@property(nonatomic) double minDelay; // @synthesize minDelay=_minDelay;
@property(nonatomic) double maxDelay; // @synthesize maxDelay=_maxDelay;
@property(nonatomic) double leeway; // @synthesize leeway=_leeway;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_timerFired;
- (void)_cancel;
- (void)cancel;
- (void)_trigger;
- (void)trigger;
- (void)_invalidate;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
