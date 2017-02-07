//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GGLDisplayLink : NSObject
{
    SEL _selector;
    id _target;
    id _retainedTarget;
    struct __CVDisplayLink *_displayLink;
    long long _frameRate;
    double _targetTimestamp;
    double _lastFramestamp;
    BOOL _paused;
}

@property(retain) id retainedTarget; // @synthesize retainedTarget=_retainedTarget;
- (void)setTargetTimestamp:(double)arg1;
- (BOOL)_displayLinkFired:(struct __CVDisplayLink *)arg1;
@property(readonly, nonatomic) double targetTimestamp;
@property(nonatomic) long long frameRate;
@property(nonatomic, getter=isPaused) BOOL paused;
- (void)invalidate;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)target;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
