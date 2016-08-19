//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CFPrefsSynchronizer : NSObject
{
    NSObject<OS_dispatch_source> *_synchTimer;
    struct __CFSet *_dirtySources;
    struct _opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
    _Bool _active;
}

+ (id)sharedInstance;
- (void)clear;
- (void)clear_alreadyLocked;
- (void)synchronize;
- (void)synchronizeAndWait;
- (const struct __CFSet *)copyDirtySourcesSnapshotAndClear;
- (void)noteDirtySource:(id)arg1;
- (void)disableTimer_alreadyLocked;
- (void)enableTimer_alreadyLocked;
- (id)init;

@end

