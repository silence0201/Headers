//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;

@interface PreferencesValueCell : EKUIConstrainedFontsTableViewCell
{
    id <EKCellShortener> _shortener;
}

@property(nonatomic) __weak id <EKCellShortener> shortener; // @synthesize shortener=_shortener;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_checkValueWidth;

@end

