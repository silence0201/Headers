//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView
{
    double _date;
    _Bool _indentsForDots;
    _Bool _showWeekNumber;
}

@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
- (void)drawRect:(struct CGRect)arg1;
- (id)_weekNumberFont;
- (id)_normalTextShadowColor;
- (id)_normalTextColor;
- (void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(struct CGRect)arg4;
- (struct CGRect)_rectForOffetTextShadow:(struct CGRect)arg1;
@property(nonatomic) _Bool indentsForDots;
@property(nonatomic) double date;

@end

