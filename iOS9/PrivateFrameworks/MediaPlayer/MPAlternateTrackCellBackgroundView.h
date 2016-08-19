//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIBezierPath;

@interface MPAlternateTrackCellBackgroundView : UIView
{
    int _sectionLocation;
    UIBezierPath *_fillPath;
    UIBezierPath *_strokePath;
}

@property(nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)_createBezierPathWithCornerRadius:(double)arg1 bottomRadius:(double)arg2 animating:(_Bool)arg3;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)_invalidatePaths;
- (id)initWithFrame:(struct CGRect)arg1;

@end

