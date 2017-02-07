//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGaussianBlurXY : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSigmaX;
    NSNumber *inputSigmaY;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputSigmaY; // @synthesize inputSigmaY;
@property(retain, nonatomic) NSNumber *inputSigmaX; // @synthesize inputSigmaX;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;

@end
