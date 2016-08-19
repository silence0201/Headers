//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, PUTileReattachmentContext, PUTileTransitionCoordinator, PUTilingDataSourceConverter, PUTilingLayout, PUTilingLayoutInvalidationContext, PUTilingLayoutTransitionContext, PUTilingView;
@protocol NSFastEnumeration;

@protocol PUTilingViewTileTransitionDelegate <NSObject>

@optional
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(PUTilingLayoutInvalidationContext *)arg2;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id <NSFastEnumeration>)arg2 context:(PUTileReattachmentContext *)arg3;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForUpdateWithItems:(NSArray *)arg2;
- (PUTilingDataSourceConverter *)tilingView:(PUTilingView *)arg1 dataSourceConverterForTransitionFromLayout:(PUTilingLayout *)arg2 toLayout:(PUTilingLayout *)arg3;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForTransitionFromLayout:(PUTilingLayout *)arg2 toLayout:(PUTilingLayout *)arg3 withContext:(PUTilingLayoutTransitionContext *)arg4;
@end

