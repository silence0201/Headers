//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/MTLParallelRenderCommandEncoder-Protocol.h>

@class MTLRenderPassDescriptor, NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface _MTLParallelRenderCommandEncoder : NSObject <MTLParallelRenderCommandEncoder>
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _queue;
    NSString *_label;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _commandBuffersSize;
    unsigned long long _commandBuffersCount;
    id *_commandBuffers;
    _Bool _retainedReferences;
    unsigned long long _type;
    unsigned long long _numRequestedCounters;
    unsigned long long _numThisEncoder;
    unsigned long long _numCommands;
    _Bool _StatEnabled;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
}

@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)renderCommandEncoder;
- (id)_renderCommandEncoderCommon;
- (id)commandBuffer;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

