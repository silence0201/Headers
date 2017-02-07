//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableSet, NSRecursiveLock;
@protocol SSInputEventConsumer;

@interface SSInputEventSourceCoordinator : NSObject
{
    NSObject<SSInputEventConsumer> *mActiveConsumer;
    NSMutableSet *mEventSources;
    NSMutableSet *mRegisteredConsumers;
    NSLock *mLock;
    NSRecursiveLock *_activeConsumerLock;
}

+ (id)sharedCoordinator;
@property(retain) NSRecursiveLock *activeConsumerLock; // @synthesize activeConsumerLock=_activeConsumerLock;
@property NSObject<SSInputEventConsumer> *activeConsumer;
- (void)deactivateConsumer:(id)arg1;
- (void)unregisterConsumer:(id)arg1;
- (void)registerConsumer:(id)arg1;
- (void)removeSource:(id)arg1;
- (void)addSource:(id)arg1;
- (void)dealloc;
- (id)init;

@end
