//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TVTertiaryView : UIView
{
    NSArray *_tertiaryViews;
    double _viewSpacing;
}

+ (id)defaultSeperator;
@property(nonatomic) double viewSpacing; // @synthesize viewSpacing=_viewSpacing;
@property(retain, nonatomic) NSArray *tertiaryViews; // @synthesize tertiaryViews=_tertiaryViews;
- (void).cxx_destruct;
- (void)updateSubviewHighlights;
- (void)setHighlightProgress:(double)arg1;
@property(readonly, nonatomic) double labelHeight;
@property(readonly, nonatomic) double maximumLabelBasedY;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
