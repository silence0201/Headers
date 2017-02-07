//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMNatalimeterInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    _Bool fStartedUpdates;
    _Bool fResendActivityOverrideOnInterrupt;
    long long fActivityOverride;
    CDUnknownBlockType fHandler;
}

- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (unsigned long long)_promptsNeeded;
- (void)_stopAbsoluteNatalimetryDataUpdates;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_setSession:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

