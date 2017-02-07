//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAsset, PHAssetCollection;

@protocol PLNavigableAssetContainerViewController <NSObject>
- (void)navigateToBottomAnimated:(_Bool)arg1;
- (void)navigateToRevealPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(_Bool)arg3;
- (void)navigateToPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 refetchIfNeeded:(_Bool)arg3 animated:(_Bool)arg4;
- (void)navigateToPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(_Bool)arg3;
@end
