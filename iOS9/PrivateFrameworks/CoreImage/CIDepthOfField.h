//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDepthOfField : CIFilter
{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    NSNumber *inputSaturation;
    NSNumber *inputUnsharpMaskRadius;
    NSNumber *inputUnsharpMaskIntensity;
    NSNumber *inputRadius;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CIAlphaNormalize;
- (id)_DistanceColored;
- (id)_CITiltShift;

@end

