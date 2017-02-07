//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>

@class NSArray, NSDisplayLink, NSMutableArray, NSRunLoop;
@protocol NSAnimationDelegate;

@interface NSAnimation : NSObject <NSCopying, NSCoding>
{
    double _duration;
    float _currentProgress;
    float _framesPerSecond;
    id _delegate;
    NSDisplayLink *_displayLink;
    double _startTime;
    NSMutableArray *_progressMarks;
    NSAnimation *_startAnimation;
    NSAnimation *_stopAnimation;
    int _nextProgressMark;
    struct __aFlags {
        unsigned int delegateAnimationShouldStart:1;
        unsigned int delegateAnimationDidStop:1;
        unsigned int delegateAnimationDidEnd:1;
        unsigned int delegateAnimationValueForProgress:1;
        unsigned int delegateAnimationDidReachProgressMark:1;
        unsigned int animating:1;
        unsigned int blocking:1;
        unsigned int sendProgressAllTheTime:1;
        unsigned int hasHandler:1;
        unsigned int reserved:23;
    } _aFlags;
    struct __aSettings {
        unsigned int animationCurve:8;
        unsigned int animationBlockingMode:2;
        unsigned int reserved:22;
    } _aSettings;
    NSRunLoop *_scheduledRunLoop;
}

+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSArray *runLoopModesForAnimating;
- (void)clearStopAnimation;
- (void)clearStartAnimation;
- (void)stopWhenAnimation:(id)arg1 reachesProgress:(float)arg2;
- (void)startWhenAnimation:(id)arg1 reachesProgress:(float)arg2;
- (void)removeProgressMark:(float)arg1;
- (void)addProgressMark:(float)arg1;
@property(copy) NSArray *progressMarks;
@property id <NSAnimationDelegate> delegate;
@property(readonly) float currentValue;
@property unsigned long long animationCurve;
@property float frameRate;
@property unsigned long long animationBlockingMode;
@property double duration;
@property float currentProgress;
- (void)_callHandlerWithProgress:(float)arg1 didStop:(BOOL)arg2 didFinish:(BOOL)arg3;
@property(readonly, getter=isAnimating) BOOL animating;
- (void)stopAnimation;
- (void)startAnimation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)dealloc;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2;
- (id)init;
- (void)_clearAllTargetAnimations;
- (double)_progressForAnimation:(id)arg1 start:(BOOL)arg2;
- (void)_removeTargetAnimation:(id)arg1 start:(BOOL)arg2;
- (void)_addTargetAnimation:(id)arg1 start:(BOOL)arg2 atProgress:(float)arg3;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (void)_stopAnimation:(int)arg1;
- (void)_startAnimation;
- (void)_animationThread;
- (void)_advanceTimeWithDisplayLink:(id)arg1;
- (double)_instantProgress;
- (void)_runInNewThread;
- (void)_startRunningNonBlocking;
- (void)_runBlocking;
- (void)_createDisplayLink:(BOOL)arg1;
- (id)_screen;
- (void)_setSendProgressAllTheTime:(BOOL)arg1;
@property(getter=_progressHandler, setter=_setProgressHandler:) CDUnknownBlockType _progressHandler;

@end
