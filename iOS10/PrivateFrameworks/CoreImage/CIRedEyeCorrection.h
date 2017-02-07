//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIRedEyeCorrection : CIFilter
{
    CIImage *inputImage;
    NSString *inputCameraModel;
    NSDictionary *inputCorrectionInfo;
}

@property(copy, nonatomic) NSDictionary *inputCorrectionInfo; // @synthesize inputCorrectionInfo;
@property(copy, nonatomic) NSString *inputCameraModel; // @synthesize inputCameraModel;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;
- (void)setDefaults;

@end

