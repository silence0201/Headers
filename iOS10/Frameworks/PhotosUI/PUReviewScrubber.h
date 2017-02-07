//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString, PUHorizontalCollectionViewLayout, UICollectionView, UIImageView, UITapGestureRecognizer, _UIBackdropView, _UIFeedbackImpactBehavior;
@protocol PUReviewScrubberDataSource, PUReviewScrubberDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewScrubber : UIToolbar <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    _Bool __ignoreScrollViewDidScrollUpdate;
    _Bool __performingInteractiveUpdate;
    id <PUReviewScrubberDataSource> _dataSource;
    id <PUReviewScrubberDelegate> _scrubberDelegate;
    long long _selectedIndex;
    unsigned long long __numberOfPhotos;
    _UIBackdropView *__backdropView;
    UIImageView *__shadowView;
    UIImageView *__arrowImageView;
    PUHorizontalCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    UITapGestureRecognizer *__tapGestureRecognizer;
    _UIFeedbackImpactBehavior *__impactFeedbackBehavior;
    NSIndexPath *__indexPathForPreviousFeedbackQuery;
}

@property(retain, nonatomic, setter=_setIndexPathForPreviousFeedbackQuery:) NSIndexPath *_indexPathForPreviousFeedbackQuery; // @synthesize _indexPathForPreviousFeedbackQuery=__indexPathForPreviousFeedbackQuery;
@property(readonly, nonatomic) _UIFeedbackImpactBehavior *_impactFeedbackBehavior; // @synthesize _impactFeedbackBehavior=__impactFeedbackBehavior;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) _Bool _performingInteractiveUpdate; // @synthesize _performingInteractiveUpdate=__performingInteractiveUpdate;
@property(readonly, nonatomic) _Bool _ignoreScrollViewDidScrollUpdate; // @synthesize _ignoreScrollViewDidScrollUpdate=__ignoreScrollViewDidScrollUpdate;
@property(readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) PUHorizontalCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(readonly, nonatomic) UIImageView *_arrowImageView; // @synthesize _arrowImageView=__arrowImageView;
@property(readonly, nonatomic) UIImageView *_shadowView; // @synthesize _shadowView=__shadowView;
@property(readonly, nonatomic) _UIBackdropView *_backdropView; // @synthesize _backdropView=__backdropView;
@property(readonly, nonatomic) unsigned long long _numberOfPhotos; // @synthesize _numberOfPhotos=__numberOfPhotos;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) id <PUReviewScrubberDelegate> scrubberDelegate; // @synthesize scrubberDelegate=_scrubberDelegate;
@property(nonatomic) id <PUReviewScrubberDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_notifyDelegateOfSelection;
- (void)_notifyDelegateOfScrub;
- (void)_updateToSelectedIndex:(long long)arg1;
- (struct CGPoint)contentOffsetForIndexOfTickMark:(long long)arg1 ofScrollView:(id)arg2;
- (long long)_indexOfCellAtContentOffset:(struct CGPoint)arg1 ofScrollView:(id)arg2;
- (void)_updateContentOffsetForSelectedIndexAnimated:(_Bool)arg1;
- (void)_handleTapOnReviewScrubber:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;
- (void)_endFeedbackInteraction;
- (void)_playFeedbackIfNeeded;
- (void)_beginFeedbackInteraction;
- (void)finishInteractiveUpdate;
- (void)updateWithAbsoluteProgress:(double)arg1;
- (void)beginInteractiveUpdate;
- (void)reloadSelectedIndexAnimated:(_Bool)arg1;
- (void)reloadIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)toggleSelectedIndexAnimated:(_Bool)arg1;
- (void)toggleIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)isMinibar;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPUReviewScrubberInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

