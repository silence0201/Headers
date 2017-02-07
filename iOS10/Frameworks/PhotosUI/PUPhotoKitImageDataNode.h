//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/PUImageDataNode-Protocol.h>
#import <PhotosUI/PUImageInfoNode-Protocol.h>

@class NSArray, NSData, NSString, NSURL, PHAsset;
@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoKitImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode>
{
    int _requestID;
    NSData *_imageData;
    NSURL *_imageDataURL;
    long long _imageExifOrientation;
    long long _version;
    PHAsset *_asset;
}

@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) long long imageExifOrientation; // @synthesize imageExifOrientation=_imageExifOrientation;
@property(readonly, nonatomic) NSURL *imageDataURL; // @synthesize imageDataURL=_imageDataURL;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)arg1 imageOrientation:(long long)arg2 info:(id)arg3;
- (void)run;
- (void)didCancel;
- (id)initWithAsset:(id)arg1 version:(long long)arg2;

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

