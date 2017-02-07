//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

#import <MapKit/UICollectionViewDataSource-Protocol.h>
#import <MapKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UICollectionView, UILabel, _MKNearbyAppsFlowLayout;
@protocol MKPlaceViewNearbyAppsCellDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceViewNearbyAppsCell : MKTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UILabel *_headerLabel;
    UICollectionView *_collectionView;
    _MKNearbyAppsFlowLayout *_flowLayout;
    NSLayoutConstraint *_headerBaselineConstraint;
    NSLayoutConstraint *_collectionHeightConstraint;
    struct CGSize _iconSize;
    NSArray *_storeItems;
    id <MKPlaceViewNearbyAppsCellDelegate> _delegate;
    NSArray *_marginConstraints;
}

+ (double)contentHeight;
+ (id)reuseIdentifier;
+ (double)_headerBaselineOffsetFromTop;
+ (id)_headerLabelFont;
+ (struct CGSize)_iconSize;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(nonatomic) __weak id <MKPlaceViewNearbyAppsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *storeItems; // @synthesize storeItems=_storeItems;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)contentSizeDidChange;
- (void)refreshMarginConstraints;
- (void)layoutMarginsDidChange;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
