//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUIConstrainedFontsTableViewCell
{
    UILabel *_additionalDetailLabel;
    id _source;
}

@property id source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)leftFrame:(struct CGRect)arg1 overlapsRightFrame:(struct CGRect)arg2 difference:(double *)arg3;
- (void)layoutSubviews;
@property(readonly, retain, nonatomic) UILabel *additionalDetailLabel;

@end

