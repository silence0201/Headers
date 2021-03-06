//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, NSIndexSet;

@interface SiriTVUITemplateTabularDataLayout : UICollectionViewLayout
{
    NSDictionary *_itemLayoutAttributesByIndexPath;
    NSDictionary *_dividerLayoutAttributesByRow;
    struct CGSize _currentContentSize;
    _Bool _hasTitleColumn;
    _Bool _adjustLayoutForWidthChanges;
    double _columnSpacing;
    double _minimumColumnWidth;
    double _minimumRowHeight;
    NSIndexSet *_highlightedRowIndices;
    struct UIEdgeInsets _horizontalKeylineInsets;
    struct UIEdgeInsets _horizontalContentInsets;
}

@property(copy, nonatomic) NSIndexSet *highlightedRowIndices; // @synthesize highlightedRowIndices=_highlightedRowIndices;
@property(nonatomic) _Bool adjustLayoutForWidthChanges; // @synthesize adjustLayoutForWidthChanges=_adjustLayoutForWidthChanges;
@property(nonatomic) _Bool hasTitleColumn; // @synthesize hasTitleColumn=_hasTitleColumn;
@property(nonatomic) struct UIEdgeInsets horizontalContentInsets; // @synthesize horizontalContentInsets=_horizontalContentInsets;
@property(nonatomic) struct UIEdgeInsets horizontalKeylineInsets; // @synthesize horizontalKeylineInsets=_horizontalKeylineInsets;
@property(nonatomic) double minimumRowHeight; // @synthesize minimumRowHeight=_minimumRowHeight;
@property(nonatomic) double minimumColumnWidth; // @synthesize minimumColumnWidth=_minimumColumnWidth;
@property(nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)_recalculateLayout;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)init;

@end

