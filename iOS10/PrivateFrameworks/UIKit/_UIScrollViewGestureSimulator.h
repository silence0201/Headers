//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray, NSThread, NSTimer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewGestureSimulator : NSObject
{
    struct __CFRunLoopSource *_mainThreadRunLoopSource;
    NSMutableArray *_simulatedGestures;
    NSThread *_workThread;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    _Bool _hasSimulatedGestures;
    double _lastWakeUpTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_update;
- (void)_setHasSimulatedGestures:(id)arg1;
- (void)_signalMainThreadIfNecessary;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_threadMain;
- (void)simulateGestureWithDuration:(double)arg1 begin:(CDUnknownBlockType)arg2 update:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end
