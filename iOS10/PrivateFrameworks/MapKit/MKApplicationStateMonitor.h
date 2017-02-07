//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject
{
    BKSApplicationStateMonitor *_appStateMonitor;
    _Bool _inBackground;
    _Bool _active;
    _Bool _lastOccludedState;
    unsigned long long _observerCount;
    _Bool _forceBackboardServicesMonitoring;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool forceBackboardServicesMonitoring; // @synthesize forceBackboardServicesMonitoring=_forceBackboardServicesMonitoring;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic, getter=isInBackground) _Bool inBackground; // @synthesize inBackground=_inBackground;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)startObserving;
- (void)_sceneOcclusionChanged:(id)arg1;
- (void)_resignActive;
- (void)_becomeActive;
- (void)_exitBackground;
- (void)_enterBackground;
- (void)dealloc;

@end

