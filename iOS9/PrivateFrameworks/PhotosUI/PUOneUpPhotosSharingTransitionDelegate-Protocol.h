//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class PUAssetReference, PUOneUpPhotosSharingTransition, UICollectionViewLayout, UIView;

@protocol PUOneUpPhotosSharingTransitionDelegate
- (void)photosSharingTransitionWillAnimateDismissal:(PUOneUpPhotosSharingTransition *)arg1;
- (void)photosSharingTransitionWillAnimatePresentation:(PUOneUpPhotosSharingTransition *)arg1;
- (UIView *)photosSharingTransitionTransitioningView:(PUOneUpPhotosSharingTransition *)arg1;
- (void)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 setVisibility:(_Bool)arg2 forAssetReference:(PUAssetReference *)arg3;
- (struct CGPoint)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 contentOffsetForAssetReference:(PUAssetReference *)arg2;
- (UICollectionViewLayout *)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 layoutForAssetReference:(PUAssetReference *)arg2;
@end
