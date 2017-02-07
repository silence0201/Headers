//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <UIKit/CALayerDelegate-Protocol.h>

@class CATransformLayer, NSArray, NSString, UIView, _UIStackedImageConfiguration, _UIStackedImageLayerDelegate;
@protocol UINamedLayerStack;

@interface _UIStackedImageContainerLayer : CALayer <CALayerDelegate>
{
    _Bool _animatingToNormalState;
    _Bool _animatingStateChange;
    double _selectionStartTime;
    double _selectionDuration;
    long long _selectionStyle;
    double _idleModeFocusSizeOffset;
    struct CGSize _radiosityImageScale;
    _Bool _radiosityNeedsLayout;
    double _scale;
    NSString *_imageStackContentsGravity;
    double _radiosityRequestTime;
    double _animationDelay;
    double _animationDelayReference;
    double _rotationAmount;
    struct CGPoint _translationOffset;
    double _maximumParallaxDepth;
    id _flatImage;
    NSArray *_parallaxImages;
    NSArray *_parallaxLayerDepths;
    CALayer *_imageLayersContainer;
    NSArray *_imageLayers;
    CALayer *_flatLayer;
    CALayer *_maskLayer;
    CALayer *_radiosityLayer;
    CALayer *_selectedPlaceholderLayer;
    CALayer *_shadowLayer;
    CALayer *_specularLayer;
    CALayer *_cursorLayer;
    CALayer *_cursorLayerContainer;
    CALayer *_focusKeylineStrokeLayer;
    CALayer *_overlayLayer;
    CALayer *_overlayContainerLayer;
    CALayer *_unmaskedOverlayLayer;
    CALayer *_unmaskedOverlayContainerLayer;
    CATransformLayer *_imagePerspectiveTransformLayer;
    CATransformLayer *_imageRotationTransformLayer;
    CATransformLayer *_maskPerspectiveTransformLayer;
    CATransformLayer *_maskRotationTransformLayer;
    CATransformLayer *_cursorRotationTransformLayer;
    CALayer *_frontmostPerspectiveTransformLayer;
    CATransformLayer *_frontmostRotationTransformLayer;
    _UIStackedImageLayerDelegate *_layoutDelegate;
    UIView *_animationView;
    _UIStackedImageConfiguration *_configuration;
    id <UINamedLayerStack> _layerStack;
    unsigned long long _controlState;
    struct CGPoint _focusDirection;
}

+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;
+ (id)_layerStackObservingKeys;
@property(nonatomic) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property(nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property(retain, nonatomic) id <UINamedLayerStack> layerStack; // @synthesize layerStack=_layerStack;
@property(retain, nonatomic) _UIStackedImageConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_updateShadowWithAnimationCoordinator:(id)arg1;
- (void)_updateShadowPositionWithOffset:(struct CGPoint)arg1;
- (void)_updateShadowBounds;
- (double)_getShadowOpacity;
- (double)_unfocusedShadowRadius;
- (double)_focusedShadowRadius;
- (void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1;
- (void)_updateLayerForSelection;
- (void)_updateImageLayerFilterValues;
- (void)_updateImageLayerFilterChains;
- (void)_updateSpecularLayerContentsRect;
- (void)_updateFullBleedImageLayers;
- (void)_updateNormalImageLayers;
- (struct CATransform3D)_fixedFrameTransformForDepth:(double)arg1 fudgeFactor:(double)arg2;
- (void)_updateFocusKeylineStrokeScale;
- (void)_updateFocusKeylineStrokeTranslation:(struct CGPoint)arg1;
- (void)_updateRotationAndTranslation:(id)arg1;
- (void)_updatePerspective;
- (struct CATransform3D)_perspectiveTransformForCurrentState;
- (struct CATransform3D)_rotationTransformForCurrentFocusDirection;
- (struct CATransform3D)_scaleTransformForCurrentState;
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;
- (void)_setParallaxImages:(id)arg1;
- (id)_randomImage;
- (void)_setIdleModeFocusSizeOffset:(double)arg1;
- (void)_setFlatImage:(id)arg1;
- (void)_resetAnimatingToNormalState;
- (unsigned long long)_primaryControlStateForState:(unsigned long long)arg1;
- (_Bool)_isSelected;
- (_Bool)_isNormal;
- (_Bool)_isHighlighted;
- (_Bool)_isFocusedOrFocusedIdle;
- (_Bool)_isFocusedIdle;
- (_Bool)_isFocused;
- (double)_idleModeFocusSizeOffset;
- (void)_deselect;
- (void)_showImageLayers;
- (void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1;
- (void)_applyFocusDirectionTransform;
- (struct CGRect)_positionAndSizeForLayerImage:(id)arg1;
- (struct CGRect)_displayFrameForModelFrame:(struct CGRect)arg1;
- (struct CGPoint)_layerStackToDisplayScaleFactor;
- (_Bool)_radiosityEnabled;
- (id)_TVTraitCollection;
- (double)_focusedScaleFactorForCurrentBounds;
- (void)_setDefaultParallaxLayerDepths;
- (void)_setParallaxLayerDepths:(id)arg1;
- (id)_parallaxLayerDepths;
- (void)_setUnmaskedOverlayLayer:(id)arg1;
- (void)_setOverlayLayer:(id)arg1;
- (void)_setImageStackContentsGravity:(id)arg1;
- (id)_imageStackContentsGravity;
- (void)_setSelectionStyle:(long long)arg1;
- (long long)_selectionStyle;
- (id)_shadowLayer;
- (id)_flatLayer;
- (id)_layerBelowTitles;
- (id)_imageLayersContainer;
- (struct CGSize)_roundedBoundsSize;
- (struct CGSize)_scaledSizeForCurrentState;
- (struct CGSize)_focusCursorInsetSizeForSize:(struct CGSize)arg1;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)_setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateRadiosityFromLayerStack;
- (void)_updateCornerRadiusFromConfig;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_preferredLayoutDelegateForLayer:(id)arg1;
- (struct CGRect)_cursorBounds;
- (void)_setupFrontmostTransformLayers;
- (void)_layoutRadiosityLayer;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;
- (void)removeAllAnimations;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

