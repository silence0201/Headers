//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetCache.h>

@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache
{
    AVAssetDownloadCacheInternal *_internal;
}

- (void)dealloc;
- (_Bool)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (id)URL;
- (id)_asset;
- (id)initWithAsset:(id)arg1;

@end

