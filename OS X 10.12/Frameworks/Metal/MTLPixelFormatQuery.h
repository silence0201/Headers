//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLPixelFormatQuery : NSObject
{
    id <MTLDevice> _device;
    long long _iFeatureSet;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (BOOL)isDepth24Stencil8PixelFormatSupported;
- (BOOL)isASTCPixelFormatsSupported;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (id)initWithFeatureSet:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;

@end

