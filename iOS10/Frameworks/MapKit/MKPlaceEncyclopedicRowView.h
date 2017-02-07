//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSMutableArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView
{
    NSMutableArray *_labels;
    NSMutableArray *_values;
    UILayoutGuide *_insetMetricGuide;
    UILayoutGuide *_leftMetricGuide;
    UILayoutGuide *_rightMetricGuide;
    unsigned long long _columnCount;
    NSArray *_items;
    NSMutableArray *_labelConstraints;
}

@property(retain, nonatomic) NSMutableArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)refreshContent:(_Bool)arg1;
- (void)addWidthAndSideSpacingConstraintsForLabels;
- (void)addConstraintsForKeyView:(id)arg1 andMatchingValueLabel:(id)arg2;
- (id)_valueLabelWithString:(id)arg1;
- (id)_keyLabelWithString:(id)arg1;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)_contentSizeDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

