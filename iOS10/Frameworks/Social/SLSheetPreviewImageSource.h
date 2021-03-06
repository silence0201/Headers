//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALAssetsLibrary, AVAssetImageGenerator;

__attribute__((visibility("hidden")))
@interface SLSheetPreviewImageSource : NSObject
{
    ALAssetsLibrary *_assetsLibrary;
    AVAssetImageGenerator *_assetImageGenerator;
}

- (void).cxx_destruct;
- (void)cancelVideoPreviewGeneration;
- (void)_generatePreviewImageForVideoFileURL:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)_generatePreviewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_fetchPreviewImageForAssetURL:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)previewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
@property(readonly) ALAssetsLibrary *assetsLibrary;

@end

