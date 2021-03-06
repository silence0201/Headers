//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;
- (id)queue;
- (_Bool)isQueueCurrent;
- (void)assertQueueIsNotCurrent;
- (void)assertQueueIsCurrent;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithName:(char *)arg1 contextKey:(void *)arg2;
- (id)init;

@end

