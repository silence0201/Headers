//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNDisplayLink : NSObject
{
    unsigned int _displayID;
    struct _CGLPixelFormatObject *_pixelFormat;
    struct __CVDisplayLink *_cvDisplayLink;
    struct _CGLContextObject *_cglContext;
    id _owner;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
    BOOL _invalidated;
    BOOL _asynchronous;
    double _lastFrameTime;
    float _preferredFrameRate;
    int _queuedFrameCount;
}

- (void)displayIDDidChange:(unsigned int)arg1;
- (BOOL)_isInvalidated;
- (void)setNeedsDisplay;
- (void)invalidate;
- (void)_teardown;
- (void)_resume;
- (void)_pause;
- (void)_callbackWithTime:(double)arg1;
- (int)queuedFrameCount;
@property struct _CGLPixelFormatObject *pixelFormat;
@property struct _CGLContextObject *CGLContext;
@property(nonatomic) float preferredFrameRate;
- (BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
@property(nonatomic, getter=isPaused) BOOL paused;
- (void)dealloc;
- (void)willDie;
- (id)initWithOwner:(id)arg1 context:(struct _CGLContextObject *)arg2 pixelFormat:(struct _CGLPixelFormatObject *)arg3 asynchronous:(BOOL)arg4 displayID:(unsigned int)arg5 queue:(id)arg6 block:(CDUnknownBlockType)arg7;
- (id)init;

@end

