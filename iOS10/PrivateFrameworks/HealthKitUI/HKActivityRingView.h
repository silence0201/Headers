//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKActivitySummary, HKRingsView, _HKShapeView;

@interface HKActivityRingView : UIView
{
    HKRingsView *_ringsView;
    _HKShapeView *_maskView;
    _Bool _shouldBypassApplicationStateChecking;
    HKActivitySummary *_activitySummary;
    double _ringInsetPercentage;
}

+ (id)_iconSpriteImage;
@property(nonatomic, getter=_shouldBypassApplicationStateChecking, setter=_setShouldBypassApplicationStateChecking:) _Bool shouldBypassApplicationStateChecking; // @synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking;
@property(nonatomic, getter=_ringInsetPercentage, setter=_setRingInsetPercentage:) double ringInsetPercentage; // @synthesize ringInsetPercentage=_ringInsetPercentage;
@property(retain, nonatomic) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
- (void).cxx_destruct;
- (void)_updateMaskPath;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateRingsViewDiameterLegacy;
- (void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3;
- (void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3;
- (void)_updateRingsViewDiameter;
- (double)_ringDiameter;
- (void)layoutSubviews;
- (void)_setUpRingsView;
- (id)_snapshotImage;
- (void)_setActivitySummary:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_displayIcons;
- (void)_setActivityRingViewBackgroundColor:(id)arg1;
- (void)_setActivityRingViewBackgroundTransparent:(_Bool)arg1;
- (void)setActivitySummary:(id)arg1 animated:(_Bool)arg2;
- (void)_setUpAfterInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

