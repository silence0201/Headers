//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, UICollectionView, UICollectionViewLayout;

__attribute__((visibility("hidden")))
@interface UICollectionViewData : NSObject
{
    UICollectionView *_collectionView;
    UICollectionViewLayout *_layout;
    NSMapTable *_screenPageMap;
    NSMutableIndexSet *_globalIndexesOfItemsAwaitingValidation;
    id *_globalItems;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    struct CGRect _validLayoutRect;
    long long _numItems;
    long long _numSections;
    long long *_sectionItemCounts;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    struct CGSize _contentSize;
    NSMutableArray *_clonedCellAttributes;
    NSMutableArray *_clonedSupplementaryAttributes;
    NSMutableArray *_clonedDecorationAttributes;
    struct {
        unsigned int contentSizeIsValid:1;
        unsigned int itemCountsAreValid:1;
        unsigned int layoutIsPrepared:1;
        unsigned int layoutLocked:1;
    } _collectionViewDataFlags;
}

+ (void)initialize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) NSArray *clonedDecorationAttributes; // @synthesize clonedDecorationAttributes=_clonedDecorationAttributes;
@property(readonly, nonatomic) NSArray *clonedSupplementaryAttributes; // @synthesize clonedSupplementaryAttributes=_clonedSupplementaryAttributes;
@property(readonly, nonatomic) NSArray *clonedCellAttributes; // @synthesize clonedCellAttributes=_clonedCellAttributes;
- (void).cxx_destruct;
@property(nonatomic, getter=isLayoutLocked) _Bool layoutLocked;
@property(readonly, nonatomic) _Bool layoutIsPrepared;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)knownDecorationElementKinds;
- (id)knownSupplementaryElementKinds;
- (id)existingSupplementaryLayoutAttributes;
- (id)existingSupplementaryLayoutAttributesInSection:(long long)arg1;
- (id)layoutAttributesForCellsInRect:(struct CGRect)arg1 validateLayout:(_Bool)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInSection:(long long)arg1;
- (id)layoutAttributesForGlobalItemIndex:(long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGRect)rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)rectForGlobalItemIndex:(long long)arg1;
- (struct CGRect)collectionViewContentRect;
- (struct CGRect)rectForItemAtIndexPath:(id)arg1;
- (_Bool)isGlobalIndexValid:(long long)arg1;
- (id)indexPathForItemAtGlobalIndex:(long long)arg1;
- (long long)globalIndexForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (void)validateLayoutInRect:(struct CGRect)arg1;
- (void)_loadEverything;
- (void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2;
- (id)_screenPageForPoint:(struct CGPoint)arg1;
- (void)_prepareToLoadData;
- (void)_validateContentSize;
- (void)_validateItemCounts;
- (void)_updateItemCounts;
- (void)invalidate:(_Bool)arg1;
- (void)validateDecorationViews;
- (void)validateSupplementaryViews;
- (void)invalidateDecorationIndexPaths:(id)arg1;
- (void)invalidateSupplementaryIndexPaths:(id)arg1;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 layout:(id)arg2;

@end

