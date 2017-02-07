//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIImage, UILayoutGuide, UITraitCollection, _UIStackedImageContainerView;

@interface UIImageView : UIView
{
    id _storage;
    struct UIEdgeInsets _cachedEdgeInsetsForEffects;
    UITraitCollection *_lastResolvedTraitCollection;
    long long _lastResolvedLayoutDirectionTrait;
    _Bool _templateSettingsAreInvalid;
    _Bool _edgeInsetsForEffectsAreValid;
    _Bool _adjustsImageWhenAncestorFocused;
    _Bool __animatesContents;
    UILayoutGuide *_focusedFrameGuide;
}

@property(nonatomic, setter=_setAnimatesContents:) _Bool _animatesContents; // @synthesize _animatesContents=__animatesContents;
@property(readonly) UILayoutGuide *focusedFrameGuide; // @synthesize focusedFrameGuide=_focusedFrameGuide;
@property(nonatomic) _Bool adjustsImageWhenAncestorFocused; // @synthesize adjustsImageWhenAncestorFocused=_adjustsImageWhenAncestorFocused;
@property(nonatomic, setter=_setEdgeInsetsForEffectsAreValid:) _Bool _edgeInsetsForEffectsAreValid; // @synthesize _edgeInsetsForEffectsAreValid;
@property(readonly, nonatomic) _Bool _templateSettingsAreInvalid; // @synthesize _templateSettingsAreInvalid;
- (void).cxx_destruct;
- (void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2;
@property(nonatomic, setter=_setLayeredImageCornerRadius:) double _layeredImageCornerRadius;
@property(readonly, nonatomic) _UIStackedImageContainerView *_layeredImageContainer;
- (void)_setLayeredImageContainer:(id)arg1;
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_teardownLayeredImage;
- (void)_configureForLayeredImage:(id)arg1;
- (_Bool)_displayImageAsLayered:(id)arg1;
- (void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2;
- (void)_resolveImageForTrait:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_currentHighlightedImage;
- (id)_currentImage;
- (id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(_Bool *)arg4;
- (id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(_Bool *)arg2;
- (id)_checkImageForAdaptation:(id)arg1 hasAdapted:(_Bool *)arg2;
- (id)_decompressingImageForType:(unsigned long long)arg1;
- (void)_setDecompressingImage:(id)arg1 forType:(unsigned long long)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setAnimating:(_Bool)arg1;
- (struct CGImage *)imageRef;
- (void)setCGImageRef:(struct CGImage *)arg1;
@property(nonatomic) int drawMode;
- (void)_drawImageEffectsForImage:(id)arg1 inRect:(struct CGRect)arg2;
- (_Bool)_getDrawModeCompositeOperation:(int *)arg1 color:(id *)arg2 andAlpha:(double *)arg3;
- (_Bool)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(_Bool)arg2;
- (_Bool)_needsImageEffectsForImage:(id)arg1;
- (void)tintColorDidChange;
- (id)_effectiveTintColorWithImage:(id)arg1;
@property(nonatomic, setter=_setMasksTemplateImages:) _Bool _masksTemplateImages;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
@property(nonatomic, setter=_setTemplateImageRenderingEffects:) unsigned long long _templateImageRenderingEffects;
@property(nonatomic, setter=_setDefaultRenderingMode:) long long _defaultRenderingMode;
@property(readonly, nonatomic) struct UIEdgeInsets _edgeInsetsForEffects;
- (void)_updateTemplateProperties;
- (void)_templateSettingsDidChange;
- (void)_invalidateTemplateSettings;
- (void)_updateMasking;
- (_Bool)_shouldTreatImageAsTemplate:(id)arg1;
- (id)_activeImage;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)_generateBackdropMaskImage;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) long long animationRepeatCount;
@property(nonatomic) double animationDuration;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (void)stopAnimating;
- (id)_currentAnimationKeyframeImage;
- (void)startAnimating;
@property(copy, nonatomic) NSArray *highlightedAnimationImages;
@property(copy, nonatomic) NSArray *animationImages;
- (void)drawRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_setViewGeometry:(struct CGRect)arg1 forMetric:(int)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(retain, nonatomic) UIImage *highlightedImage;
@property(retain, nonatomic) UIImage *image;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateState;
- (_Bool)_setImageViewContents:(id)arg1;
- (_Bool)_canDrawContent;
- (_Bool)_shouldDrawImage:(id)arg1;
- (_Bool)useBlockyMagnificationInClassic;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (unsigned long long)defaultAccessibilityTraits;
- (_Bool)isAccessibilityElementByDefault;
- (void)_applySettingsForLegibilityStyle:(long long)arg1;
- (id)_cachedPretiledImageForImage:(id)arg1;
- (void)_clearPretiledImageCacheForImage:(id)arg1;
- (void)_updatePretiledImageCacheForImage:(id)arg1;
- (_Bool)_recomputePretilingState;

// Remaining properties
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @dynamic userInteractionEnabled;

@end

