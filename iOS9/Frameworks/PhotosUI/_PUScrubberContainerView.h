//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _PUScrubberContainerView : UIView
{
    UIView *__movieScrubber;
    UIView *__slomoRegionEditor;
}

@property(retain, nonatomic, setter=_setSlomoRegionEditor:) UIView *_slomoRegionEditor; // @synthesize _slomoRegionEditor=__slomoRegionEditor;
@property(retain, nonatomic, setter=_setMovieScrubber:) UIView *_movieScrubber; // @synthesize _movieScrubber=__movieScrubber;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;

@end

