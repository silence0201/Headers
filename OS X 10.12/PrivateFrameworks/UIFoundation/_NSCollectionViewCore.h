//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBox, NSCollectionView, NSCollectionViewData, NSCollectionViewLayout, NSCollectionViewLayoutAttributes, NSCollectionViewUpdate, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSView;
@protocol NSCollectionViewCoreDelegate, NSCollectionViewDataSource;

@interface _NSCollectionViewCore : NSObject
{
    NSCollectionViewLayout *_layout;
    id <NSCollectionViewCoreDelegate> _delegate;
    id <NSCollectionViewDataSource> _dataSource;
    NSCollectionView *_publicCollectionView;
    NSBox *_backgroundColorFillView;
    NSView *_backgroundView;
    NSMutableSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSMutableSet *_indexPathsForHighlightedItems;
    long long _reloadingSuspendedCount;
    long long _updateAnimationCount;
    NSView *_newContentView;
    long long _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_visibleItemsDict;
    NSMutableDictionary *_visibleCellsDict;
    NSMutableDictionary *_visibleSupplementaryViewsDict;
    NSMutableDictionary *_visibleDecorationViewsDict;
    NSMutableDictionary *_clonedCellsDict;
    NSMutableDictionary *_clonedSupplementaryViewsDict;
    NSMutableDictionary *_clonedDecorationViewsDict;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    NSCollectionViewData *_collectionViewData;
    NSCollectionViewUpdate *_currentUpdate;
    struct CGRect _visibleBounds;
    struct CGRect _preRotationBounds;
    struct CGPoint _rotationBoundsOffset;
    long long _rotationAnimationCount;
    long long _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    id _updateCompletionHandler;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    NSCollectionViewLayoutAttributes *_transitionLayoutAttributes;
    BOOL _isInInteractiveTransition;
    BOOL _shouldAccumulateTrackedLayoutValues;
    NSMutableDictionary *_interactiveTransitionInfos;
    CDUnknownBlockType _interactiveCompletionHandler;
    double _currentInteractiveTransitionTimeStamp;
    double _previousInteractiveTransitionTimeStamp;
    double _startTimeStamp;
    struct CGPoint _currentCenterOffset;
    struct CGPoint _previousCenterOffset;
    double _currentInteractiveTransitionProgress;
    double _previousInteractiveTransitionProgress;
    NSCollectionViewLayout *_nextLayoutForInteractiveTranstion;
    NSMutableDictionary *_interactiveTransitionValueTrackingDict;
    NSMutableArray *_trackedValuesKeys;
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableSet *_invalidatedItemIndexPathsToAnimate;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    CDUnknownBlockType _invalidationBlock;
    NSMutableArray *_reorderedItems;
    struct CGPoint _reorderingTargetPosition;
    NSTimer *_autoscrollTimer;
    long long _focusedViewType;
    struct {
        unsigned int delegateShouldHighlightItemAtIndexPath:1;
        unsigned int delegateDidHighlightItemAtIndexPath:1;
        unsigned int delegateDidUnhighlightItemAtIndexPath:1;
        unsigned int delegateShouldSelectItemAtIndexPath:1;
        unsigned int delegateShouldDeselectItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidDeselectItemAtIndexPath:1;
        unsigned int delegateSupportsMenus:1;
        unsigned int delegateWillDisplayCell:1;
        unsigned int delegateWillDisplaySupplementaryView:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateDidEndDisplayingSupplementaryView:1;
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition:1;
        unsigned int delegateOverrideForTransitionOffsetSize:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffset:1;
        unsigned int delegateTargetIndexPathForMove:1;
        unsigned int delegateCanFocusItemAtIndexPath_deprecated:1;
        unsigned int delegateDidFocusItemAtIndexPath_deprecated:1;
        unsigned int delegateCanFocusItemAtIndexPath:1;
        unsigned int delegateDidFocusItemAtIndexPath:1;
        unsigned int delegateDidUnfocusItemAtIndexPath:1;
        unsigned int delegateShouldChangeFocusedItem:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceViewForSupplementaryElement:1;
        unsigned int dataSourceCanMoveItemAtIndexPath:1;
        unsigned int dataSourceMoveItemAtIndexPath:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellLayoutAttributes:1;
        unsigned int allowsSelection:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int fadeCellsForBoundsChange:1;
        unsigned int updatingLayout:1;
        unsigned int needsReload:1;
        unsigned int reloading:1;
        unsigned int skipLayoutDuringSnapshotting:1;
        unsigned int layoutInvalidatedSinceLastCellUpdate:1;
        unsigned int doneFirstLayout:1;
        unsigned int loadingOffscreenViews:1;
        unsigned int updating:1;
        unsigned int updatingVisibleCells:1;
        unsigned int preRotationBoundsSet:1;
        unsigned int allowsFocus:1;
        unsigned int updateFocusAfterItemAnimations:1;
        unsigned int visMode:1;
        unsigned int invokingDelegateDidEndDisplayingItem:1;
    } _collectionViewFlags;
    struct CGPoint _lastLayoutOffset;
    struct CGRect _bounds;
    struct NSEdgeInsets _contentInset;
    CDUnknownBlockType _navigationCompletion;
    NSIndexPath *_dropTargetIndexPath;
}

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
@property struct NSEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic, getter=_navigationCompletion, setter=_setNavigationCompletion:) CDUnknownBlockType navigationCompletion; // @synthesize navigationCompletion=_navigationCompletion;
@property(retain, nonatomic) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) id <NSCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_layout;
@property(getter=_dropTargetIndexPath, setter=_setDropTargetIndexPath:) NSIndexPath *dropTargetIndexPath;
- (void)_getOriginalReorderingIndexPaths:(id *)arg1 targetIndexPaths:(id *)arg2;
- (void)_stopAutoscrollTimer;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (id)_indexPathsForHighlightedItems;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateWithBlock:(CDUnknownBlockType)arg1;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(BOOL)arg4;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 invalidationContext:(id)arg3;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_endUpdatesWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_beginUpdates;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateWithItems:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (id)_viewAnimationsForCurrentUpdate;
- (void)_prepareLayoutForUpdates;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1;
- (void)_setupCellAnimations;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
@property(readonly, nonatomic, getter=_currentUpdate) NSCollectionViewUpdate *currentUpdate;
- (void)_reuseSupplementaryView:(id)arg1;
- (void)_reuseAllViews;
- (void)_reuseAllSupplementaryOrDecorationViews:(id)arg1;
- (void)_reuseAllItems;
- (void)_reuseCell:(id)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableItemWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4;
- (id)_registeredCellNibsByReuseIdentifier;
- (id)_registeredCellClassesByReuseIdentifier;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (id)indexPathsForVisibleSupplementaryElementsOfKind:(id)arg1;
- (id)visibleSupplementaryViewsOfKind:(id)arg1;
- (id)supplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)_visibleSupplementaryViews;
- (id)indexPathsForVisibleItems;
- (id)visibleItems;
- (id)itemAtIndexPath:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_visible;
- (void)_layoutItems;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
@property struct CGRect bounds;
- (id)_subviewAtIndex:(unsigned long long)arg1;
- (void)addSubview:(id)arg1;
@property __weak NSCollectionView *publicCollectionView;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (id)_visibleViewForLayoutAttributes:(id)arg1;
- (id)_visibleCellForIndexPath:(id)arg1;
- (id)_visibleItemForIndexPath:(id)arg1;
- (void)_updateBackgroundView;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(CDUnknownBlockType)arg6 animationCompletion:(CDUnknownBlockType)arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned long long)arg9;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
@property(readonly, nonatomic, getter=_reorderingTargetPosition) struct CGPoint reorderingTargetPosition;
@property(readonly, nonatomic, getter=_reorderedItems) NSArray *reorderedItems;
- (id)_reorderedItemForView:(id)arg1;
- (BOOL)_viewIsReorderedCell:(id)arg1;
- (BOOL)_itemIndexPathIsReordered:(id)arg1;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (struct CGSize)contentSize;
- (void)setContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffset;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(BOOL)arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3;
- (struct CGRect)_visibleBounds;
- (struct CGRect)visibleBounds;
- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2;
- (void)_invalidateLayoutIfNecessary;
- (void)reloadData;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withLayoutAttributes:(BOOL)arg2;
- (void)_resumeReloads;
- (void)_suspendReloads;
@property(nonatomic) BOOL allowsMultipleSelection;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(BOOL)arg4;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL allowsSelection;
- (id)_deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (id)_selectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
@property(readonly, nonatomic, getter=_visibleViews) NSArray *visibleViews;
@property(readonly, nonatomic, getter=_collectionViewData) NSCollectionViewData *collectionViewData;
- (id)indexPathsForSelectedItems;
- (BOOL)_dataSourceImplementsNumberOfSections;
- (void)_reloadDataIfNeeded;
@property(nonatomic) id <NSCollectionViewCoreDelegate> delegate;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(BOOL)arg3;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)_publicCollectionViewDebugDescription;
@property(getter=_debugModeEnabled, setter=_setDebugModeEnabled:) BOOL debugModeEnabled;

@end

