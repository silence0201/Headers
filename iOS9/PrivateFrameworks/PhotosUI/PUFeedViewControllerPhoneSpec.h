//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUFeedViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec
{
}

- (_Bool)shouldUseFullscreenLayout;
- (long long)promptStyle;
- (id)photosPickerSpec;
- (id)gridSpec;
- (id)photoBrowserSpec;
- (_Bool)shouldHideBarsInLandscape;
- (double)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(_Bool)arg4 collectionViewType:(long long)arg5;
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureImageCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(long long)arg2;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;
- (_Bool)shouldShowSeeAllInSectionFootersInCollectionViewType:(long long)arg1;
- (_Bool)shouldShowLikeButtonForCollectionViewType:(long long)arg1;
- (_Bool)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(long long)arg1;
- (struct CGSize)thumbnailSize;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2;
- (long long)largeNumberOfSubjectsForLikes;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (struct CGSize)minimumVideoTileSize;
- (struct UIEdgeInsets)contentInsetsForSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3 contentInset:(struct UIEdgeInsets)arg4;
- (_Bool)canUseSimplePreheatManager;

@end

