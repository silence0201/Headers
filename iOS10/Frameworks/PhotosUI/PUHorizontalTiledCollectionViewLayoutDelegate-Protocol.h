//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, PUHorizontalTiledCollectionViewLayout, UICollectionView;

@protocol PUHorizontalTiledCollectionViewLayoutDelegate <NSObject>
- (struct CGSize)layout:(PUHorizontalTiledCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)layout:(PUHorizontalTiledCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 referenceIndexPathWithOffsetX:(double *)arg3;
@end
