//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/PUPhotoEditLayoutStaticAdaptable-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSNumberFormatter, NSString, PUAdjustmentsMode, UITableView, _PUSliderPlayheadBaseView, _UIDynamicValueAnimation;
@protocol PUAdjustmentsModeBarDataSource, PUAdjustmentsModeBarDelegate;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsModeBar : UIView <UITableViewDataSource, UITableViewDelegate, PUPhotoEditLayoutStaticAdaptable>
{
    UIView *_adjustmentViewsContainer;
    UITableView *_modePickerTableView;
    UIView *_modePickerTableViewBackground;
    UIView *_playheadView;
    _PUSliderPlayheadBaseView *_playheadBaseView;
    _Bool _didSetInitialModeSlidersOffset;
    _Bool _playheadViewVisible;
    NSLayoutConstraint *_selfSizeConstraint;
    NSArray *_adjustmentViewsContainerConstraints;
    NSArray *_modePickerTableViewConstraints;
    NSArray *_modePickerTableViewHiddenConstraints;
    NSLayoutConstraint *_modePickerTableViewShortSideConstraint;
    NSArray *_playheadViewsConstraints;
    double _expandedShortSideSize;
    _Bool _dataIsValid;
    NSArray *_allAdjustmentModes;
    NSNumberFormatter *_zeroLevelValueFormatter;
    NSNumberFormatter *_nonZeroLevelValueFormatter;
    long long _interactiveTransitionState;
    _UIDynamicValueAnimation *_finishTransitionAnimation;
    _Bool _listViewExpanded;
    _Bool _listViewExpandedExplicitly;
    long long _layoutOrientation;
    id <PUAdjustmentsModeBarDataSource> _dataSource;
    id <PUAdjustmentsModeBarDelegate> _delegate;
    PUAdjustmentsMode *_selectedMode;
    double _shortSideSize;
    double _slidersShortSideLength;
    double _slidersLongContentLength;
    double _playheadSize;
    double _interactiveTransitionProgress;
}

@property(readonly, nonatomic) double interactiveTransitionProgress; // @synthesize interactiveTransitionProgress=_interactiveTransitionProgress;
@property(readonly, nonatomic) long long interactiveTransitionState; // @synthesize interactiveTransitionState=_interactiveTransitionState;
@property(nonatomic) double playheadSize; // @synthesize playheadSize=_playheadSize;
@property(nonatomic) double slidersLongContentLength; // @synthesize slidersLongContentLength=_slidersLongContentLength;
@property(nonatomic) double slidersShortSideLength; // @synthesize slidersShortSideLength=_slidersShortSideLength;
@property(nonatomic) double shortSideSize; // @synthesize shortSideSize=_shortSideSize;
@property(readonly, nonatomic, getter=isListViewExpandedExplicitly) _Bool listViewExpandedExplicitly; // @synthesize listViewExpandedExplicitly=_listViewExpandedExplicitly;
@property(readonly, nonatomic, getter=isListViewExpanded) _Bool listViewExpanded; // @synthesize listViewExpanded=_listViewExpanded;
@property(retain, nonatomic) PUAdjustmentsMode *selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) __weak id <PUAdjustmentsModeBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUAdjustmentsModeBarDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configurePickerCell:(id)arg1 forMode:(id)arg2;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_transitionToInteractiveTransitionState:(long long)arg1;
- (void)finishInteractiveTransitionWithVelocity:(double)arg1;
- (void)_updateInteractiveTransitionProgress:(double)arg1;
- (void)updateInteractiveTransitionProgress:(double)arg1;
- (void)beginInteractiveTransition;
- (_Bool)isInInteractiveTransition;
- (void)_updatePlayheadViewsAnimated:(_Bool)arg1;
- (void)_updateViewsForModePickerExpandedStateAnimated:(_Bool)arg1;
- (void)_updateExpandedShortSideSize;
- (double)modePickerHeightForAllRows;
- (double)modePickerWidthVertical;
- (double)_modePickerRowHeight;
- (id)newConstraintsForModePickerList:(id)arg1;
- (id)newModePickerListBackgroundView;
- (void)_updateModePickerTableView;
- (void)_updateModeSlidersCollectionViewLayout:(id)arg1;
- (void)updateSlidersListScrollOffsetAnimated:(_Bool)arg1;
- (id)currentSlidersCollectionView;
- (id)modeForSliderIndex:(long long)arg1;
- (long long)sliderIndexForMode:(id)arg1;
@property(readonly, nonatomic) _Bool isSlidersListReversed;
- (id)newSlidersCollectionView;
- (_Bool)isModeEnabledInDataSource:(id)arg1;
- (id)_visibleModeLowerThanMode:(id)arg1;
- (id)_visibleModeHigherThanMode:(id)arg1;
- (void)loadDataIfNeeded;
- (void)visibleModesDidChangeWithInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2;
- (void)visibleModesWillChange;
- (void)copyStateFromAdjustmentsModeBar:(id)arg1;
- (void)updateEnabledForCurrentMode;
- (void)reloadData;
- (void)_handleModePickerExpansionButton:(id)arg1;
- (id)_formattedLevelValue:(double)arg1;
- (id)newModePickerExpansionButton;
@property(readonly, nonatomic) _Bool shouldShowModePickerOnFirstDisplay;
- (id)adjustmentViewsContainer;
- (id)visibleSliderAdjustmentModes;
- (id)allAdjustmentModes;
- (_Bool)wantsToHandleEventAtPoint:(struct CGPoint)arg1;
- (void)setPlayheadViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPlayheadViewVisible:(_Bool)arg1;
- (_Bool)isPlayheadViewVisible;
- (void)setListViewExpanded:(_Bool)arg1 explicitly:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setSelectedMode:(id)arg1 animated:(_Bool)arg2;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

