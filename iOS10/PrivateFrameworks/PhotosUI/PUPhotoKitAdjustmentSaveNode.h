//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

@class PUImageDataRenderNode, PUPhotoEditIrisModel, PUPhotoKitImageDataNode;
@protocol PUVideoURLNode;

__attribute__((visibility("hidden")))
@interface PUPhotoKitAdjustmentSaveNode : PXRunNode
{
    _Bool _success;
    PUPhotoKitImageDataNode *_imageDataNode;
    PUImageDataRenderNode *_imageRenderNode;
    id <PUVideoURLNode> _videoNode;
    PUPhotoEditIrisModel *_livePhotoModel;
}

@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, copy, nonatomic) PUPhotoEditIrisModel *livePhotoModel; // @synthesize livePhotoModel=_livePhotoModel;
@property(readonly, nonatomic) id <PUVideoURLNode> videoNode; // @synthesize videoNode=_videoNode;
@property(readonly, nonatomic) PUImageDataRenderNode *imageRenderNode; // @synthesize imageRenderNode=_imageRenderNode;
@property(readonly, nonatomic) PUPhotoKitImageDataNode *imageDataNode; // @synthesize imageDataNode=_imageDataNode;
- (void).cxx_destruct;
- (void)_handleDidCompleteChangeWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)run;
- (id)_exportProperties;
- (long long)_adjustmentBaseVersion;
- (double)_baseDuration;
- (long long)_baseExifOrientation;
- (id)initWithImageDataNode:(id)arg1 imageRenderNode:(id)arg2 videoNode:(id)arg3 livePhotoModel:(id)arg4;

@end

