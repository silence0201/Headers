//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFComposeHeaderView.h>

@class UISegmentedControl;

@interface MFComposeImageSizeView : MFComposeHeaderView
{
    UISegmentedControl *_segmentedControl;
}

- (void)segmentedControlChanged;
- (void)setScale:(unsigned long long)arg1;
- (void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2;
- (unsigned long long)_segmentIndexForScale:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

