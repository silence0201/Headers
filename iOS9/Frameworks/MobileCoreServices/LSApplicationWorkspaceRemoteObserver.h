//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSApplicationWorkspaceRemoteObserver : LSApplicationWorkspaceObserver
{
    _Bool _observinglsd;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_progressSubscriptionsQueue;
}

- (void)networkUsageChanged:(_Bool)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)pluginsWillUninstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)setObservinglsd:(_Bool)arg1;
- (_Bool)isObservinglsd;
- (unsigned long long)currentObserverCount;
- (id)localObservers;
- (void)removeLocalObserver:(id)arg1;
- (void)addLocalObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

