//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLCachedImage, PLImageLoadingQueue, PLImageSource, PLManagedAsset;

@protocol PLImageLoadingQueueDelegate <NSObject>
- (void)imageLoadingQueue:(PLImageLoadingQueue *)arg1 didLoadImage:(PLCachedImage *)arg2 forAsset:(PLManagedAsset *)arg3 fromSource:(PLImageSource *)arg4;
@end
