//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection
{
    CDStruct_fc7baa39 _flags;
    NSArray *_vertexBuiltInArguments;
    NSArray *_vertexArguments;
    NSArray *_fragmentArguments;
    NSDictionary *_performanceStatistics;
}

- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)fragmentArguments;
- (id)vertexArguments;
- (id)vertexBuiltInArguments;
- (CDStruct_fc7baa39)usageFlags;
- (id)performanceStatistics;
- (void)setPerformanceStatistics:(id)arg1;
- (void)dealloc;
- (id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(CDStruct_fc7baa39)arg6;

@end
