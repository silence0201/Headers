//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplay;

@interface CADisplayLink : NSObject
{
    void *_impl;
}

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)invalidate;
@property(nonatomic) long long frameInterval;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem *)arg1;
@property(retain, nonatomic) id userInfo;
@property(readonly, nonatomic) CADisplay *display;

@end

