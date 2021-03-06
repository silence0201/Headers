//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUFeedSectionInfo.h>

__attribute__((visibility("hidden")))
@interface PUFeedAssetsSectionInfo : PUFeedSectionInfo
{
}

- (unsigned long long)assetsCount;
- (id)assets;
- (long long)indexOfItemWithAsset:(id)arg1;
- (_Bool)containsAsset:(id)arg1;
- (_Bool)areAllAssetsLiked;
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (_Bool)hasPlayableAssetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (id)cloudFeedAssetsEntry;
- (long long)sectionType;

@end

