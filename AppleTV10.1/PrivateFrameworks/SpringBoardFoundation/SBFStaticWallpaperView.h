//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSString, SBFColorBoxes, UIImage;

@interface SBFStaticWallpaperView : SBFWallpaperView
{
    UIImage *_image;
    UIImage *_displayedImage;
    double _overallContrast;
    SBFColorBoxes *_colorBoxes;
    NSString *_cacheGroup;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_allowsParallax;
+ (id)_imageByApplyingLegibilityDarkeningToImage:(id)arg1;
+ (_Bool)_canDownscaleSampleImage;
+ (_Bool)_canCacheImages;
@property(retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage; // @synthesize displayedImage=_displayedImage;
- (void).cxx_destruct;
- (void)_disableLegibilityDarkening;
- (void)_enableLegibilityDarkening;
- (void)_toggleLegibilityDarkeningIfNecessary;
- (_Bool)_shouldApplyLegibilityDarkeningForVariant:(long long)arg1;
@property(retain, nonatomic) SBFColorBoxes *colorBoxes;
- (id)_createColorBoxes;
- (id)_wallpaperImageForAnalysis;
- (void)_resetColorBoxes;
- (struct CGSize)_imageSize;
- (float)_zoomScale;
- (id)_mappedImageKeyForParameters:(CDStruct_83077358)arg1 includingTint:(_Bool)arg2 andLegibilityDarkening:(_Bool)arg3;
- (void)_setImage:(id)arg1;
- (id)_variantCacheIdentifier;
- (void)setVariantsThatDarkenContentsToEnsureLegibility:(long long)arg1;
- (void)_addLegibilityDarkeningFilterToStaticImageContentView:(id)arg1;
- (void)_setUpStaticImageContentView:(id)arg1;
- (void)_setupContentView;
- (void)setContentView:(id)arg1;
- (void)_handleVariantChange;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (double)cropZoomScale;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrastInRect:(struct CGRect)arg1;
- (_Bool)contrastRequiresTreatments;
- (void)setContentsRect:(struct CGRect)arg1;
- (_Bool)hasContentOutsideVisibleBounds;
- (id)_fallbackImageWithOriginalSize:(struct CGSize)arg1;
- (_Bool)_needsFallbackImageForImage:(id)arg1;
- (id)_imageForBackdropParameters:(CDStruct_83077358)arg1 includeTint:(_Bool)arg2;
- (id)_blurredImage;
- (id)snapshotImage;
- (id)_computeAverageColor;
- (id)wallpaperImage;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 options:(unsigned long long)arg5;
- (void)_setupWallpaperImage:(id)arg1 options:(unsigned long long)arg2;
- (id)_imageByApplyingLegibilityDarkeningToImage:(id)arg1;
- (id)_imageByDarkeningHighlightsInImage:(id)arg1;
- (id)_repeatingGradientImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_setSampleImage:(id)arg1;
- (long long)wallpaperType;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3;

@end
