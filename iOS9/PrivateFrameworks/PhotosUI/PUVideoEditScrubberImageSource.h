//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUVideoEditScrubberImageSource : NSObject
{
    AVAssetImageGenerator *_imageGenerator;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_cachedImages;
    NSMutableDictionary *_requestCompletionHandlers;
    NSMutableArray *_pendingTimestampRequests;
    struct CGSize _maximumThumbnailSize;
}

@property(nonatomic) struct CGSize maximumThumbnailSize; // @synthesize maximumThumbnailSize=_maximumThumbnailSize;
- (void).cxx_destruct;
- (void)processPendingThumbnailRequests;
- (void)enqueueThumbnailRequestForTimestamp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)initWithAVAsset:(id)arg1;
- (id)init;

@end

