//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalKit/MDLMeshBufferAllocator-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator>
{
    id <MTLDevice> _device;
}

@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;
- (id)newZone:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

