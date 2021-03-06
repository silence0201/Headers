//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSEventQueue : NSObject
{
    NSMutableArray *_events;
    unsigned long long _capacity;
}

- (id)dequeueTimestamp:(double)arg1;
- (id)nextEventEqualToEvent:(id)arg1 dequeue:(BOOL)arg2;
- (void)enqueue:(id)arg1;
- (void)logEventCount;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end

