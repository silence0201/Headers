//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSCFRunLoopObserver : NSObject
{
    unsigned long long _activities;
    NSMutableArray *_modes;
    NSMutableArray *_observers;
    struct __CFRunLoop *_loop;
}

+ (id)observerWithActivities:(unsigned long long)arg1;
+ (id)describeActivity:(unsigned long long)arg1;
- (void)observeMode:(struct __CFString *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithActivities:(unsigned long long)arg1;
- (void)dealloc;

@end

