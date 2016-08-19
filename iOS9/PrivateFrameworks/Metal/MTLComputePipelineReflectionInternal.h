//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLComputePipelineReflection.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection
{
    NSArray *_arguments;
    NSArray *_builtInArguments;
    NSDictionary *_performanceStatistics;
    CDStruct_596dc0d1 _flags;
}

- (id)description;
- (id)builtInArguments;
- (id)arguments;
- (void)setPerformanceStatistics:(id)arg1;
- (id)performanceStatistics;
- (void)dealloc;
- (id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(CDStruct_596dc0d1)arg4;

@end

