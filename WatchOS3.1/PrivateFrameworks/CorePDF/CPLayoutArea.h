//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion
{
    _Bool isFirstLayout;
}

- (id)description;
- (id)properties;
- (double)selectionBottom;
- (struct CGRect)layoutAreaBounds;
- (_Bool)isShapeRegion;
- (_Bool)isImageRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isRowRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isBoxRegion;
- (void)addColumnBreaks;
- (void)setIsFirstLayout:(_Bool)arg1;
- (_Bool)isFirstLayout;
- (_Bool)isSimilarTo:(id)arg1;
- (void)accept:(id)arg1;
- (id)init;

@end

