//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSLayoutConstraint, UIButton, _MKUILabel;
@protocol MKPlaceAttributionCellDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionCell : MKPlaceSectionRowView
{
    NSArray *_visibleConstraints;
    NSLayoutConstraint *_collapsedConstraint;
    _MKUILabel *_label;
    UIButton *_labelButton;
    NSLayoutConstraint *_labelBaselineToTop;
    NSLayoutConstraint *_labelLastBaselineToBottom;
    id <MKPlaceAttributionCellDelegate> _cellDelegate;
}

+ (id)fontForLabel;
@property(nonatomic) __weak id <MKPlaceAttributionCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) NSLayoutConstraint *labelLastBaselineToBottom; // @synthesize labelLastBaselineToBottom=_labelLastBaselineToBottom;
@property(retain, nonatomic) NSLayoutConstraint *labelBaselineToTop; // @synthesize labelBaselineToTop=_labelBaselineToTop;
@property(retain, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
@property(retain, nonatomic) _MKUILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setAttributionString:(id)arg1;
- (void)attributionClicked;
- (void)_contentSizeDidChange;
- (void)updateConstraints;
- (void)createConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

