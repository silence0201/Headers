//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIImageProcessorInOut.h>

#import <CoreImage/CIImageProcessorInput-Protocol.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>
{
    _Bool _forCPU;
}

@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) const void *baseAddress;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 bounds:(struct CGRect)arg3 context:(struct Context *)arg4 forCPU:(_Bool)arg5;

// Remaining properties
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) struct CGRect region;

@end

