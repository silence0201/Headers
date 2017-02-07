//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/_MTLCommandQueue.h>

@class MTLIOAccelDevice;
@protocol MTLDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue
{
    struct __IOAccelCommandQueue *_commandQueue;
    MTLIOAccelDevice<MTLDevice> *_device;
    struct IOAccelCommandQueueSetPriorityAndBackgroundArgs _PriorityArgs;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (void)submitCommandBuffers:(id *)arg1 count:(unsigned long long)arg2;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)arg1;
- (BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (BOOL)setGPUPriority:(unsigned long long)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;

@end
