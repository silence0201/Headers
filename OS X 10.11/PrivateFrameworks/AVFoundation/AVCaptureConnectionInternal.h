//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSArray, NSMutableArray;

@interface AVCaptureConnectionInternal : NSObject
{
    NSMutableArray *inputPorts;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    BOOL active;
    BOOL enabled;
    NSMutableArray *audioChannels;
    NSMutableArray *enabledAudioChannels;
    NSArray *audioChannelPeakLevels;
    long long lastGetAudioPeakLevelsTime;
    NSArray *audioChannelAvgLevels;
    long long lastGetAudioAvgLevelsTime;
    BOOL automaticallyAdjustsVideoMirroring;
    BOOL videoMirrored;
    long long videoOrientation;
    double maxVideoScaleAndCropFactor;
    double videoScaleAndCropFactor;
    long long videoFieldMode;
    CDStruct_1b6d18a9 videoMinFrameDuration;
    CDStruct_1b6d18a9 videoMaxFrameDuration;
    struct OpaqueCMIOGraph *graph;
    int node;
    unsigned int element;
    unsigned int scope;
    CDStruct_da23731b *extendedNodeInfo;
    unsigned int writerElement;
    long long _clientSequenceID;
    struct __CFString *_clientSequenceIDCF;
    void *_mostRecentlySeenClientSequenceID;
}

@end
