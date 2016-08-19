//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKEventStore, NSArray, NSDate, NSMutableSet, NSTimer, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject
{
    EKEventStore *_eventStore;
    CDUnknownBlockType _eventStoreGetter;
    _Bool _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    _Bool _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    unsigned long long _lastEventCount;
    unsigned long long _lastReminderCount;
    NSArray *_eventNotificationReferences;
    NSArray *_reminderNotificationReferences;
    _Bool _initialCheck;
    _Bool _shouldInstallPersistentTimer;
    _Bool _useSyncIdleTimer;
    _Bool _loadRecentlyRepliedNotifications;
    _Bool _handlesOnlyEvents;
    NSMutableSet *_alertedNotificationsThatFailedToMarkAlerted;
}

- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_killSyncTimer;
- (void)_resetSyncTimer;
- (void)_notifyForUnalertedNotifications:(id)arg1;
- (unsigned long long)_checkForReminderNotifications:(id)arg1;
- (unsigned long long)_checkForEventNotifications:(id)arg1;
- (void)_timerFired;
- (void)_alertPrefChanged;
- (void)_notificationCountChangedExternally;
- (void)_databaseChanged;
- (void)_resetTimer;
- (void)attemptReloadSynchronously:(_Bool)arg1;
- (void)attemptReload;
- (void)adjust;
@property(readonly, nonatomic) NSArray *reminderNotificationReferences;
@property(readonly, nonatomic) NSArray *eventNotificationReferences;
@property(readonly, nonatomic) NSArray *notificationReferences;
@property(readonly, nonatomic) unsigned long long notificationCount;
@property(readonly, nonatomic) unsigned long long eventNotificationCount;
- (void)stop;
- (void)start;
- (void)killTimer;
- (id)_eventStore;
- (void)dealloc;
- (id)init;
- (id)initByHandlingOnlyEvents:(_Bool)arg1 eventStore:(id)arg2;
- (id)initByHandlingOnlyEvents:(_Bool)arg1 bulletinBoardWithEventStoreGetter:(CDUnknownBlockType)arg2;

@end

