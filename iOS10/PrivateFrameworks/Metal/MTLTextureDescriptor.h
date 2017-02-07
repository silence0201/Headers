//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLTextureDescriptor : NSObject <NSCopying>
{
}

+ (id)textureCubeDescriptorWithPixelFormat:(unsigned long long)arg1 size:(unsigned long long)arg2 mipmapped:(_Bool)arg3;
+ (id)texture2DDescriptorWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 mipmapped:(_Bool)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long arrayLength; // @dynamic arrayLength;
@property(nonatomic) unsigned long long cpuCacheMode; // @dynamic cpuCacheMode;
@property(nonatomic) unsigned long long depth; // @dynamic depth;
@property(nonatomic) unsigned long long height; // @dynamic height;
@property(nonatomic) unsigned long long mipmapLevelCount; // @dynamic mipmapLevelCount;
@property(nonatomic) unsigned long long pixelFormat; // @dynamic pixelFormat;
@property(nonatomic) unsigned long long resourceOptions; // @dynamic resourceOptions;
@property(nonatomic) unsigned long long sampleCount; // @dynamic sampleCount;
@property(nonatomic) unsigned long long storageMode; // @dynamic storageMode;
@property(nonatomic) unsigned long long textureType; // @dynamic textureType;
@property(nonatomic) unsigned long long usage; // @dynamic usage;
@property(nonatomic) unsigned long long width; // @dynamic width;

@end

