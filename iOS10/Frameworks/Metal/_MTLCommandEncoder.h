//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLDevice;

@interface _MTLCommandEncoder : NSObject
{
    id <MTLDevice> _device;
    NSString *_label;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    unsigned long long _numThisEncoder;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
}

@property(nonatomic) unsigned long long numThisEncoder; // @synthesize numThisEncoder=_numThisEncoder;
@property(nonatomic, getter=globalTraceObjectID) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic, getter=getType) unsigned long long type;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
- (id)commandBuffer;
@property(readonly, nonatomic) id <MTLDevice> device;
- (id)description;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;

@end

