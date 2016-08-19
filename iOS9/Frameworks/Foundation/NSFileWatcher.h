//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileWatcherObservations, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    CDUnknownBlockType _observer;
    _Bool _isWatching;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned long long _lastObservedEventID;
    struct __FSEventStream *_eventStream;
    _Bool _eventsAreAboutDirectory;
    _Bool _isUnsettled;
    NSFileWatcherObservations *_itemObservations;
    NSMutableDictionary *_subitemObservationsByEventPath;
    NSURL *_fileReferenceURL;
    NSString *_formerPath;
    NSURL *_formerURL;
}

- (void)stop;
- (void)settle;
- (void)_coalesceSubitemObservations;
- (void)unsettle;
- (void)start;
- (void)setObserver:(CDUnknownBlockType)arg1;
- (void)setLastObservedEventID:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (void)watchItem;
- (void)handleFSEventPath:(id)arg1 flags:(unsigned int)arg2 id:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

