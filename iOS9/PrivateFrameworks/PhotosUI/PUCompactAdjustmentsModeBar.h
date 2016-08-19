//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAdjustmentsModeBar.h>

#import <PhotosUI/UICollectionViewDataSource-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, PUAdjustmentsModeBadge, PUSlidersCollectionView, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface PUCompactAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource>
{
    UILabel *_titleLabel;
    UIButton *_titleButton;
    PUAdjustmentsModeBadge *_titleBackground;
    NSMutableDictionary *_titleViewsByKey;
    NSMutableDictionary *_titleViewConstraintsByKey;
    UIButton *_expansionButton;
    PUSlidersCollectionView *_modeSlidersCollectionView;
    NSArray *_expansionButtonConstraints;
    NSArray *_modeSlidersCollectionViewConstraints;
    NSArray *__visibleModes;
    NSMutableSet *_expandedSupermodes;
}

- (void).cxx_destruct;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)configurePickerCell:(id)arg1 forMode:(id)arg2;
- (id)newConstraintsForModePickerList:(id)arg1;
- (id)newModePickerListBackgroundView;
- (void)_setExpanded:(_Bool)arg1 forSupermode:(id)arg2 exclusive:(_Bool)arg3 animated:(_Bool)arg4;
- (_Bool)_isExpandedSupermode:(id)arg1;
- (void)_updateVisibleModesAnimated:(_Bool)arg1;
- (void)setListViewExpanded:(_Bool)arg1 explicitly:(_Bool)arg2 animated:(_Bool)arg3;
- (id)visibleSliderAdjustmentModes;
- (void)_modeToggleTapped:(id)arg1;
- (void)_updateTitleViewAnimated:(_Bool)arg1;
- (id)_addOrRemoveViewByKey:(id)arg1 wantsView:(_Bool)arg2 animated:(_Bool)arg3 factory:(CDUnknownBlockType)arg4;
- (void)copyStateFromAdjustmentsModeBar:(id)arg1;
- (void)updateEnabledForCurrentMode;
- (void)reloadData;
- (_Bool)shouldShowModePickerOnFirstDisplay;
- (id)currentSlidersCollectionView;
- (_Bool)wantsToHandleEventAtPoint:(struct CGPoint)arg1;
- (void)setSelectedMode:(id)arg1 animated:(_Bool)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

