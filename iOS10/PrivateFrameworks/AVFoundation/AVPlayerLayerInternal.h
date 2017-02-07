//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVKeyPathDependencyManager, AVNetworkPlaybackPerfHUDLayer, AVPlayer, AVPlayerLayer, CALayer, FigBaseCALayer, FigSubtitleCALayer, FigVideoContainerLayer, NSDictionary, NSSet, NSString;
@protocol AVCallbackCancellation, OS_dispatch_queue;

@interface AVPlayerLayerInternal : NSObject
{
    AVNetworkPlaybackPerfHUDLayer *hudLayer;
    NSObject<OS_dispatch_queue> *serialQueue;
    _Bool isPresentationLayer;
    struct OpaqueFigSimpleMutex *isReadyForDisplayMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    NSString *subtitleGravity;
    AVKeyPathDependencyManager *dependencyManager;
    AVPlayer *player;
    NSString *videoGravity;
    NSDictionary *pixelBufferAttributes;
    _Bool lanczosDownscalingEnabled;
    long long lanczosDownscalingFactor;
    _Bool shouldObservePlayer;
    FigBaseCALayer *maskLayer;
    FigVideoContainerLayer *videoLayer;
    FigSubtitleCALayer *subtitleLayer;
    FigBaseCALayer *closedCaptionLayer;
    AVPlayerLayer *associatedPIPLayer;
    _Bool willManageSublayersAsSwappedLayers;
    _Bool canEnterPIPMode;
    _Bool isReadyForDisplay;
    AVPlayer *playerBeingObserved;
    NSSet *KVOInvokers;
    id <AVCallbackCancellation> playerCurrentItemHasVideoFrameEnqueuedKVOInvoker;
    struct CGSize latestAppliedPresentationSize;
    _Bool preventsChangesToSublayerHierarchy;
    NSDictionary *clientLayers;
    _Bool isPIPModeEnabled;
    CALayer *placeholderContentLayerDuringPIPMode;
}

@end

