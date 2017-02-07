//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/CalActivatable-Protocol.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable>
{
    _Bool _internalActive;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_startOfLeaveNowPeriod;
    NSDate *_startOfRunningLatePeriod;
    unsigned long long _internalPeriod;
    CDUnknownBlockType _internalPeriodChangedCallback;
}

+ (id)stringForPeriod:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType internalPeriodChangedCallback; // @synthesize internalPeriodChangedCallback=_internalPeriodChangedCallback;
@property(nonatomic) unsigned long long internalPeriod; // @synthesize internalPeriod=_internalPeriod;
@property(nonatomic) _Bool internalActive; // @synthesize internalActive=_internalActive;
@property(retain, nonatomic) NSDate *startOfRunningLatePeriod; // @synthesize startOfRunningLatePeriod=_startOfRunningLatePeriod;
@property(retain, nonatomic) NSDate *startOfLeaveNowPeriod; // @synthesize startOfLeaveNowPeriod=_startOfLeaveNowPeriod;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_uninstallTimer;
- (void)_refreshOnDate:(id)arg1;
- (void)_refreshTimer;
- (void)_refreshPeriod;
- (void)_refresh;
@property(readonly, nonatomic) unsigned long long period;
@property(copy, nonatomic) CDUnknownBlockType periodChangedCallback;
- (void)updateWithHypothesis:(id)arg1;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic) _Bool active;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

