//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionItemView.h>

__attribute__((visibility("hidden")))
@interface MKPlaceSectionRowView : MKPlaceSectionItemView
{
    _Bool _selected;
    _Bool _highlighted;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)_updateBackgroundColor:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

