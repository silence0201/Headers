//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface _MKNearbyAppsFlowLayout : UICollectionViewFlowLayout
{
    _Bool _snapsToItemBoundaries;
    _Bool _snapsToItemCenters;
}

+ (double)snapToBoundariesDecelerationRate;
@property(nonatomic) _Bool snapsToItemCenters; // @synthesize snapsToItemCenters=_snapsToItemCenters;
@property(nonatomic) _Bool snapsToItemBoundaries; // @synthesize snapsToItemBoundaries=_snapsToItemBoundaries;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)init;

@end

