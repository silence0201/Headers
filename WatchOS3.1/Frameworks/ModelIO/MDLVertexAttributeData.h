//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject
{
    MDLMeshBufferMap *_map;
    void *_dataStart;
    unsigned long long _stride;
    unsigned long long _format;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) unsigned long long format;
@property(nonatomic) unsigned long long stride;
@property(nonatomic) void *dataStart;
@property(retain, nonatomic) MDLMeshBufferMap *map;

@end
