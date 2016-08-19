//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell
{
    UIImageView *_shieldImageView;
    UILabel *_systemLabel;
    NSLayoutConstraint *_systemLabelMarginConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_imageColumnCenterConstraint;
    double _unadjustedSeparatorInset;
    _Bool _shouldAdjustSeparatorInsetToMargin;
    double _systemLabelMargin;
}

@property(nonatomic) _Bool shouldAdjustSeparatorInsetToMargin; // @synthesize shouldAdjustSeparatorInsetToMargin=_shouldAdjustSeparatorInsetToMargin;
@property(nonatomic) double systemLabelMargin; // @synthesize systemLabelMargin=_systemLabelMargin;
- (void).cxx_destruct;
- (void)layoutMarginsDidChange;
- (void)setLeftSeparatorInset:(double)arg1;
- (double)_adjustedSeparatorInsetToMargin:(double)arg1;
@property(copy, nonatomic) NSString *systemName;
- (void)setSystemImage:(id)arg1 shouldCenter:(_Bool)arg2 centeringWidth:(double)arg3;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
