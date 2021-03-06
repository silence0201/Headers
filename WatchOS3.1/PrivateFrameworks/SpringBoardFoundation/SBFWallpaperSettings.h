//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

@interface SBFWallpaperSettings : _UISettings
{
    _Bool _replaceBlurs;
    unsigned long long _colorBoxSize;
    long long _blurReplacementMode;
    double _mediumBlurRadius;
    double _mediumGrayscaleTintLevel;
    double _mediumGrayscaleTintAlpha;
    double _mediumSaturationDeltaFactor;
}

+ (id)settingsControllerModule;
@property(nonatomic) double mediumSaturationDeltaFactor; // @synthesize mediumSaturationDeltaFactor=_mediumSaturationDeltaFactor;
@property(nonatomic) double mediumGrayscaleTintAlpha; // @synthesize mediumGrayscaleTintAlpha=_mediumGrayscaleTintAlpha;
@property(nonatomic) double mediumGrayscaleTintLevel; // @synthesize mediumGrayscaleTintLevel=_mediumGrayscaleTintLevel;
@property(nonatomic) double mediumBlurRadius; // @synthesize mediumBlurRadius=_mediumBlurRadius;
@property(nonatomic) long long blurReplacementMode; // @synthesize blurReplacementMode=_blurReplacementMode;
@property(nonatomic) _Bool replaceBlurs; // @synthesize replaceBlurs=_replaceBlurs;
@property(nonatomic) unsigned long long colorBoxSize; // @synthesize colorBoxSize=_colorBoxSize;
- (void)setDefaultValues;

@end

