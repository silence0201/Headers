//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVShelfViewLayout.h>

__attribute__((visibility("hidden")))
@interface _TVMLShelfViewLayout : _TVShelfViewLayout
{
    struct TVCellMetrics _cellMetrics;
}

@property(nonatomic) struct TVCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)contentRowMetrics;
- (double)expectedLineSpacing;

@end
