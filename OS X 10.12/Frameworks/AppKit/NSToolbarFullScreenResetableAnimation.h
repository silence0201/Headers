//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface NSToolbarFullScreenResetableAnimation : NSObject
{
    NSTimer *timer;
    CDUnknownBlockType handler;
    double startTime;
    double endTime;
}

- (void)dealloc;
- (void)invalidate;
- (void)resetWithDuration:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)timerFired:(id)arg1;
- (void)completeImmediately;
- (void)runForTime:(double)arg1;
- (id)initWithDuration:(double)arg1 handler:(CDUnknownBlockType)arg2;

@end
