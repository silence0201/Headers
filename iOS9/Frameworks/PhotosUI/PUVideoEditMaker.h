//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, NSString, NSTimer, PFVideoAdjustments, PHAsset, PUVideoEditMakerOptions, PUVideoEditModel;

__attribute__((visibility("hidden")))
@interface PUVideoEditMaker : NSObject
{
    _Bool _isExportInProgress;
    PHAsset *__videoAsset;
    PUVideoEditModel *__videoEditModel;
    PFVideoAdjustments *__videoAdjustments;
    AVAssetExportSession *__trimExportSession;
    NSTimer *__exportProgressTimer;
    NSString *__outputFilePath;
    CDUnknownBlockType __exportProgressBlock;
    CDUnknownBlockType __exportCompletionBlock;
    PUVideoEditMakerOptions *__makerOptions;
}

+ (_Bool)canTrimAssetInPlace:(id)arg1;
@property(copy, nonatomic, setter=_setMakerOptions:) PUVideoEditMakerOptions *_makerOptions; // @synthesize _makerOptions=__makerOptions;
@property(copy, nonatomic, setter=_setExportCompletionBlock:) CDUnknownBlockType _exportCompletionBlock; // @synthesize _exportCompletionBlock=__exportCompletionBlock;
@property(copy, nonatomic, setter=_setExportProgressBlock:) CDUnknownBlockType _exportProgressBlock; // @synthesize _exportProgressBlock=__exportProgressBlock;
@property(retain, nonatomic, setter=_setOutputFilePath:) NSString *_outputFilePath; // @synthesize _outputFilePath=__outputFilePath;
@property(retain, nonatomic, setter=_setExportProgressTimer:) NSTimer *_exportProgressTimer; // @synthesize _exportProgressTimer=__exportProgressTimer;
@property(retain, nonatomic, setter=_setTrimExportSession:) AVAssetExportSession *_trimExportSession; // @synthesize _trimExportSession=__trimExportSession;
@property(retain, nonatomic, setter=_setVideoAdjustments:) PFVideoAdjustments *_videoAdjustments; // @synthesize _videoAdjustments=__videoAdjustments;
@property(readonly, nonatomic) PUVideoEditModel *_videoEditModel; // @synthesize _videoEditModel=__videoEditModel;
@property(readonly, nonatomic) PHAsset *_videoAsset; // @synthesize _videoAsset=__videoAsset;
- (void).cxx_destruct;
- (void)_endSessionWithSuccess:(_Bool)arg1 duplicateAsset:(id)arg2;
- (void)_callProgressBlockWithProgress:(float)arg1 shouldDestroyBlock:(_Bool)arg2;
- (void)_saveSlomoForVideo;
- (void)_replaceOriginalAfterTrim;
- (void)_newAssetAfterTrim;
- (void)_updateExportProgressTimer;
- (void)_runTrimExportSession;
- (void)_trimVideo;
- (void)exportVideowithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAsset:(id)arg1 videoEditModel:(id)arg2;
- (id)init;

@end

