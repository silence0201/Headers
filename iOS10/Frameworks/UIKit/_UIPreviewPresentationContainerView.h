//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIPreviewPresentationEffectView;

@interface _UIPreviewPresentationContainerView : UIView
{
    _Bool _shouldLayoutForCommitPhase;
    UIView *_contentView;
    double _cornerRadius;
    _UIPreviewPresentationEffectView *_platterClippingView;
    UIView *_platterShadowView;
    UIView *_contentTransformView;
    _UIPreviewPresentationEffectView *_platterView;
    struct CGSize _preferredContentSize;
}

@property(retain, nonatomic) _UIPreviewPresentationEffectView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) UIView *contentTransformView; // @synthesize contentTransformView=_contentTransformView;
@property(retain, nonatomic) UIView *platterShadowView; // @synthesize platterShadowView=_platterShadowView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *platterClippingView; // @synthesize platterClippingView=_platterClippingView;
@property(nonatomic) _Bool shouldLayoutForCommitPhase; // @synthesize shouldLayoutForCommitPhase=_shouldLayoutForCommitPhase;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (struct CGSize)_standardPreferredContentSize;
- (void)initPlatterViewsIfNeeded;
- (_Bool)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool shouldRasterizeForTransition; // @dynamic shouldRasterizeForTransition;
@property(nonatomic) double blurRadius; // @dynamic blurRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end

