//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, br_pacer;
@protocol BRContainerHelper, NSObject, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRContainerCache : NSObject
{
    id <BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    _Bool _didFetchAllContainers;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id <NSObject> _containerStatusObserver;
}

+ (id)containerCache;
- (void).cxx_destruct;
- (id)_allContainersByIDNoCopy;
- (void)_invalidate;
- (void)_containerListDidChange;
- (void)unsubscribeToContainerStatusUpdate;
- (void)subscribeToContainerStatusUpdate;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (id)allContainersByID;
- (void)_accountWillChange;
- (id)documentContainers;
- (id)allContainers;
- (void)dealloc;
- (id)initWithHelper:(id)arg1;

@end

