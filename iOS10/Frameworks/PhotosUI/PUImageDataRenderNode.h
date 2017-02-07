//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/PUImageDataRenderNode-Protocol.h>

@class NSArray, NSData, NSString, PLPhotoEditModel;
@protocol PUImageInfoNode, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUImageDataRenderNode : PXRunNode <PUImageDataRenderNode>
{
    NSData *_imageData;
    id <PUImageInfoNode> _imageDataNode;
    PLPhotoEditModel *_photoEditModel;
    double _jpegCompression;
    struct CGSize _baseImageSize;
    struct CGSize _renderedImageSize;
}

@property(readonly, nonatomic) double jpegCompression; // @synthesize jpegCompression=_jpegCompression;
@property(readonly, copy, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(readonly, nonatomic) id <PUImageInfoNode> imageDataNode; // @synthesize imageDataNode=_imageDataNode;
@property(readonly, nonatomic) struct CGSize renderedImageSize; // @synthesize renderedImageSize=_renderedImageSize;
@property(readonly, nonatomic) struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)_handleRenderCompletedWithJpegData:(id)arg1 editedSize:(struct CGSize)arg2;
- (void)run;
- (id)_initializeImageWithError:(id *)arg1;
- (_Bool)_isInputValid;
- (id)initWithImageInfoNode:(id)arg1 photoEditModel:(id)arg2 jpegCompression:(double)arg3;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

