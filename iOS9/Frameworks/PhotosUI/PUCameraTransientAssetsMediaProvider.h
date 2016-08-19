//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUMediaProvider.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, PUTransientImageManager;

@interface PUCameraTransientAssetsMediaProvider : PUMediaProvider
{
    int _latestRequestId;
    CDUnknownBlockType _supplementaryLivePhotoImageSource;
    id <PUTransientImageManager> __transientImageManager;
    NSMutableDictionary *__livePhotoRequestsByRequestID;
    NSObject<OS_dispatch_queue> *__livePhotoRequestQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_livePhotoRequestQueue; // @synthesize _livePhotoRequestQueue=__livePhotoRequestQueue;
@property(readonly, nonatomic) NSMutableDictionary *_livePhotoRequestsByRequestID; // @synthesize _livePhotoRequestsByRequestID=__livePhotoRequestsByRequestID;
@property(readonly, nonatomic) id <PUTransientImageManager> _transientImageManager; // @synthesize _transientImageManager=__transientImageManager;
@property(copy, nonatomic) CDUnknownBlockType supplementaryLivePhotoImageSource; // @synthesize supplementaryLivePhotoImageSource=_supplementaryLivePhotoImageSource;
- (void).cxx_destruct;
- (void)cancelImageRequest:(int)arg1;
- (id)_playerItemForVideoURL:(id)arg1;
- (id)_imageForTransientAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)_removeLivePhotoRequestWithID:(int)arg1;
- (void)_setLivePhotoRequest:(id)arg1 forRequestID:(int)arg2;
- (id)_livePhotoRequestWithID:(int)arg1;
- (void)_updateResultForLivePhotoRequestID:(int)arg1;
- (void)_handleLivePhotoPairedVideoRequestResultURL:(id)arg1 stillDisplayTime:(CDStruct_1b6d18a9)arg2 error:(id)arg3 requestID:(int)arg4;
- (void)_handleDelegateImageRequestResultWithImage:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (int)_requestLivePhotoForTransientAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (_Bool)_requestLivePhotoWithSupplementaryImageSourceIfPossibleWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)_nextRequestId;
- (id)initWithTransientImageManager:(id)arg1 supplementaryLivePhotoImageSource:(CDUnknownBlockType)arg2;
- (id)init;

@end

