//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKLegacyUIListHeaderCellContentView;

@interface EKLegacyUIListHeaderCell : UIView
{
    EKLegacyUIListHeaderCellContentView *_contentView;
    _Bool _showWeekNumber;
}

@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_backgroundImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(_Bool)arg1;
@property(readonly, nonatomic) _Bool reusable;
@property(nonatomic) _Bool indentsForDots;
@property(nonatomic) double date;
- (id)initWithFrame:(struct CGRect)arg1 date:(double)arg2;

@end

