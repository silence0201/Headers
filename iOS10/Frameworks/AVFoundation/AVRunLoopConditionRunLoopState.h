//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVRunLoopConditionRunLoopState : NSObject
{
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_signalSource;
    _Bool _signaled;
}

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop *)arg1;
@property(nonatomic) _Bool signaled; // @synthesize signaled=_signaled;
@property(nonatomic) struct __CFRunLoopSource *signalSource; // @synthesize signalSource=_signalSource;
@property(readonly, nonatomic) struct __CFRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;

@end

