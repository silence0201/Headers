//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableSet;

__attribute__((visibility("hidden")))
@interface QLImageAnimationTimer : NSObject
{
    NSMutableSet *_observers;
    CADisplayLink *_displayLink;
}

+ (id)sharedTimer;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)animationTimerFired:(id)arg1;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)addAnimationTimerObserver:(id)arg1;
- (id)init;

@end

