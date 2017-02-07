//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MKTransitInfoLabelView, NSLayoutConstraint, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKNearestStationCell : UITableViewCell
{
    _MKUILabel *_stationTitleLabel;
    MKTransitInfoLabelView *_stationInfoLabel;
    UIImageView *_stationImageView;
    NSLayoutConstraint *_stationLabelToImageViewConstraint;
    NSLayoutConstraint *_stationLabelToLeadingEdgeConstraint;
    NSLayoutConstraint *_stationLabelToTopConstraint;
}

- (void).cxx_destruct;
- (void)configureWithNearestStation:(id)arg1;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

