//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKStarRatingView, NSArray, NSString, UILabel;

@interface MKStarRatingAndLabelView : UIView
{
    MKStarRatingView *_starRatingView;
    UILabel *_reviewsLabel;
    NSString *_sourceName;
    unsigned long long _numberOfReviews;
    _Bool _displaysSourceOfReviews;
    NSArray *_reviewsLabelConstraints;
    NSString *_fontStyleOverride;
}

@property(retain, nonatomic) NSString *fontStyleOverride; // @synthesize fontStyleOverride=_fontStyleOverride;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) unsigned long long numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;
@property(readonly, nonatomic) UILabel *reviewsLabel; // @synthesize reviewsLabel=_reviewsLabel;
@property(readonly, nonatomic) MKStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_updateFonts;
- (void)setDisplaysSourceOfReviews:(_Bool)arg1;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

