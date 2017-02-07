//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIBarPositioning-Protocol.h>
#import <UIKit/_UIBarPositioningInternal-Protocol.h>
#import <UIKit/_UIShadowedView-Protocol.h>

@class NSArray, NSString, UIColor, _UIBarBackground;
@protocol UIToolbarDelegate;

@interface UIToolbar : UIView <_UIShadowedView, _UIBarPositioningInternal, UIBarPositioning>
{
    id <UIToolbarDelegate> _delegate;
    NSArray *_items;
    UIColor *_barTintColor;
    struct {
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int isLocked:1;
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder:1;
    } _toolbarFlags;
    double _extraEdgeInsets;
    id _appearanceStorage;
    _UIBarBackground *_barBackgroundView;
    UIView *_customBackgroundView;
    _Bool __wantsLetterpressContent;
    _Bool _centerTextButtons;
    UIView *_shadowView;
    long long _barPosition;
}

+ (double)defaultHeightForBarSize:(int)arg1;
+ (double)defaultSelectionModeHeight;
+ (Class)defaultTextButtonClass;
+ (Class)defaultButtonClass;
+ (double)defaultHeight;
+ (id)defaultButtonFont;
@property(nonatomic) _Bool centerTextButtons; // @synthesize centerTextButtons=_centerTextButtons;
@property(nonatomic, setter=_setWantsLetterpressContent:) _Bool _wantsLetterpressContent; // @synthesize _wantsLetterpressContent=__wantsLetterpressContent;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property(retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // @synthesize _shadowView;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void).cxx_destruct;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setForceTopBarAppearance:(_Bool)arg1;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)setOnStateForButton:(_Bool)arg1 forButton:(int)arg2;
- (_Bool)onStateForButton:(int)arg1;
- (void)setBadgeAnimated:(_Bool)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)getVisibleButtonTags:(int *)arg1 count:(unsigned int *)arg2 maxItems:(unsigned int)arg3;
- (int)currentButtonGroup;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)registerButtonGroup:(int)arg1 withButtons:(int *)arg2 withCount:(int)arg3;
- (void)showButtons:(int *)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (void)_buttonBarFinishedAnimating;
- (void)positionButtons:(id)arg1 tags:(int *)arg2 count:(int)arg3 group:(int)arg4;
- (id)createButtonWithDescription:(id)arg1;
- (void)animateToolbarItemIndex:(unsigned long long)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)initInView:(id)arg1 withFrame:(struct CGRect)arg2 withItemList:(id)arg3;
- (int)mode;
- (void)setMode:(int)arg1;
- (double)extraEdgeInsets;
- (void)setExtraEdgeInsets:(double)arg1;
- (void)_setAdaptiveToolbarDisabled:(_Bool)arg1;
- (_Bool)_isAdaptiveToolbarDisabled;
- (double)_edgeMarginForBorderedItem:(_Bool)arg1 isText:(_Bool)arg2;
- (void)_updateItemsForNewFrame:(id)arg1;
- (_Bool)_isInNavigationBar;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(_Bool)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(_Bool)arg3 actuallyRepositionButtons:(_Bool)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id *)arg2 withHitRects:(id *)arg3 buttonIndexes:(id *)arg4 textButtonIndexes:(id *)arg5;
- (void)_updateBackgroundView;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(_Bool *)arg1;
@property(nonatomic, getter=_isLocked, setter=_setLocked:) _Bool _locked;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (struct CGRect)_frameOfBarButtonItem:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_frameOrCenterChanged;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(_Bool)arg1 wasMinibar:(_Bool)arg2;
- (_Bool)_subclassImplementsDrawRect;
@property(nonatomic, setter=_setHidesShadow:) _Bool _hidesShadow;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)layoutSubviews;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
@property(readonly, nonatomic, getter=isMinibar) _Bool minibar;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
@property(retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *_backdropViewLayerGroupName;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (id)_effectiveBarTintColor;
@property(nonatomic) __weak id <UIToolbarDelegate> delegate;
@property(nonatomic) long long barStyle;
- (void)_updateBarForStyle;
- (void)_updateOpacity;
- (_Bool)_isTopBar_legacy;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (_Bool)_hasCustomAutolayoutNeighborSpacing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

