//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface AVFrame : NSObject
{
    _Bool _preserveCompressedImageRepresentation;
    UIImage *_image;
    double _actualTime;
    long long _frameIndex;
}

@property _Bool preserveCompressedImageRepresentation; // @synthesize preserveCompressedImageRepresentation=_preserveCompressedImageRepresentation;
@property(readonly) long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(readonly) double actualTime; // @synthesize actualTime=_actualTime;
@property(readonly) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (unsigned long long)estimatedSizeOfImageInMemory;
- (id)description;
- (id)initWithImage:(id)arg1 actualTime:(double)arg2 frameIndex:(long long)arg3;

@end
