//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCRValueChangeMonitorDelegate;

__attribute__((visibility("hidden")))
@interface SCRValueChangeMonitor : NSObject
{
    int __currentPollCount;
    double __pollDuration;
    id <SCRValueChangeMonitorDelegate> __pollDelegate;
    double __pollInterval;
}

@property(nonatomic, setter=_setCurrentPollCount:) int _currentPollCount; // @synthesize _currentPollCount=__currentPollCount;
@property(readonly, nonatomic) double _pollInterval; // @synthesize _pollInterval=__pollInterval;
@property(nonatomic, setter=_setPollDelegate:) id <SCRValueChangeMonitorDelegate> _pollDelegate; // @synthesize _pollDelegate=__pollDelegate;
@property(readonly, nonatomic) double _pollDuration; // @synthesize _pollDuration=__pollDuration;
- (BOOL)_stopPolling;
- (void)_continuePolling;
- (void)invalidatePollDelegate;
- (void)startPolling;
- (void)dealloc;
- (id)initWithPollDuration:(double)arg1 pollDelegate:(id)arg2;

@end

