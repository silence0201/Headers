//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSLayoutConstraint, _MKUILabel;

@interface MKPlaceHoursMultiDayRow : MKPlaceSectionRowView
{
    _MKUILabel *_daysLabel;
    NSArray *_hoursLabels;
    NSLayoutConstraint *_baselineToTop;
    NSArray *_baselineToBaseline;
    NSLayoutConstraint *_baselineToBottom;
    BOOL _hasMultipleHours;
    double _baselineToBottomConstant;
}

@property(nonatomic) BOOL hasMultipleHours; // @synthesize hasMultipleHours=_hasMultipleHours;
@property(nonatomic) double baselineToBottomConstant; // @synthesize baselineToBottomConstant=_baselineToBottomConstant;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)setDays:(id)arg1 hours:(id)arg2;
- (id)_standardLabel;
- (BOOL)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1;

@end

