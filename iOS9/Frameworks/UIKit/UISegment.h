//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSArray, NSString, UIView, _UIBadgeView, _UIFloatingContentView, _UISegmentedControlAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView
{
    UIView *_info;
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    _UIFloatingContentView *_floatingContentView;
    double _width;
    struct CGSize _contentOffset;
    long long _barStyle;
    unsigned long long _rightSegmentState;
    NSString *_badgeValue;
    _UIBadgeView *_badgeView;
    id _objectValue;
    struct {
        unsigned int style:3;
        unsigned int size:2;
        unsigned int selected:1;
        unsigned int highlighted:1;
        unsigned int showDivider:1;
        unsigned int hasImage:1;
        unsigned int position:3;
        unsigned int autosizeText:1;
        unsigned int isMomentary:1;
        unsigned int wasSelected:1;
        unsigned int needsBackgroundAndContentViewUpdate:1;
    } _segmentFlags;
    NSArray *_infoConstraints;
    double _requestedScaleFactor;
}

+ (id)_backgroundImageWithStorage:(id)arg1 style:(long long)arg2 mini:(_Bool)arg3 state:(unsigned long long)arg4 position:(unsigned int)arg5 drawMode:(int *)arg6 defaultBlock:(CDUnknownBlockType)arg7;
@property(nonatomic) double requestedScaleFactor; // @synthesize requestedScaleFactor=_requestedScaleFactor;
@property(copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints; // @synthesize _infoConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (double)_idealWidth;
- (struct UIEdgeInsets)_paddingInsets;
- (_Bool)useBlockyMagnificationInClassic;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(_Bool)arg4;
- (id)_floatingContentView;
- (id)_effectiveContentView;
- (id)infoName;
- (void)_forceInfoDisplay;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (void)setContentOffset:(struct CGSize)arg1;
- (id)label;
- (void)setPosition:(unsigned int)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_positionInfoWithoutAnimation;
- (void)_positionInfo;
- (void)updateConstraints;
- (void)_invalidateInfoConstraints;
- (struct CGSize)contentSize;
- (struct CGSize)_maximumTextSize;
- (double)_barHeight;
- (struct CGRect)contentRect;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (void)animateRemoveForWidth:(double)arg1;
- (void)animateAdd:(_Bool)arg1;
- (_Bool)_shouldUsePadMomentaryAppearance;
- (void)setShowDivider:(_Bool)arg1;
- (_Bool)showDivider;
@property int controlSize;
@property(getter=isMomentary) _Bool momentary;
@property(readonly) UIView *badgeView;
@property(copy, nonatomic) NSString *badgeValue;
- (void)tintColorDidChange;
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
@property(getter=isSelected) _Bool selected;
- (void)setEnabled:(_Bool)arg1;
- (void)_setEnabledAppearance:(_Bool)arg1;
- (void)setAutosizeText:(_Bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (id)disabledTextColor;
- (id)_attributedTextForState:(unsigned long long)arg1 selected:(_Bool)arg2;
- (void)_updateTextColors;
- (void)setWasSelected:(_Bool)arg1;
- (void)updateMasking;
- (_Bool)_hasSelectedColor;
- (id)_currentOptionsStyleTextShadowColor;
- (id)_currentOptionsStyleTextColor;
- (void)_updateBackgroundAndContentViews;
- (void)_updateBackgroundAndContentViewsIfNeeded;
- (void)updateDividerViewForChangedSegment:(id)arg1;
- (void)insertDividerView;
- (id)_dividerImage;
- (void)updateForAppearance:(id)arg1 style:(int)arg2;
- (id)_dividerImageIsCustom:(_Bool *)arg1;
- (unsigned long long)_segmentState;
- (_Bool)_isInMiniBar;
- (void)setNeedsBackgroundAndContentViewUpdate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_encodableSubviews;
- (id)_tintColorArchivingKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 style:(long long)arg2 size:(int)arg3 barStyle:(long long)arg4 tintColor:(id)arg5 appearanceStorage:(id)arg6 position:(unsigned int)arg7 autosizeText:(_Bool)arg8;
- (void)_commonSegmentInit;

@end

