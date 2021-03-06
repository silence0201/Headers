//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetTrack, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, AVWeakReference, NSArray, NSError, NSString, NSURL;

@interface AVAssetExportSessionInternal : NSObject
{
    AVWeakReference *weakReference;
    struct dispatch_queue_s *readWriteQueue;
    struct OpaqueFigRemaker *remaker;
    long long status;
    NSError *error;
    float progress;
    AVAsset *asset;
    AVAssetTrack *firstVideoTrack;
    NSString *preset;
    NSString *preset16x9;
    NSURL *outputURL;
    NSString *outputFileType;
    NSString *actualOutputFileType;
    NSString *audioTimePitchAlgorithm;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    CDStruct_e83c9415 timeRange;
    CDStruct_1b6d18a9 minVideoFrameDuration;
    BOOL canUseFastFrameRateConversion;
    NSString *videoFrameRateConversionAlgorithm;
    BOOL waitingForFastFrameRateResponse;
    struct dispatch_semaphore_s *canUseFastFrameRateConversionSemaphore;
    long long maxFileSize;
    CDUnknownBlockType handler;
    BOOL optimizeForNetworkUse;
    BOOL useMultiPass;
    NSURL *directoryForTemporaryFiles;
    BOOL outputFileCreatedByRemaker;
    long long compatibleFileTypesDispatchOncePredicate;
    NSArray *compatibleFileTypes;
    struct dispatch_queue_s *remakerNotificationSerializationQueue;
}

@end

