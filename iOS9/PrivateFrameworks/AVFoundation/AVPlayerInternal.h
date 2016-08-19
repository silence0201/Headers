//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioSessionMediaPlayerOnly, AVOutputContext, AVPixelBufferAttributeMediator, AVPlayerItem, AVPropertyStorage, AVWeakReference, NSArray, NSDictionary, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol AVCallbackCancellation, OS_dispatch_queue;

@interface AVPlayerInternal : NSObject
{
    AVWeakReference *weakReference;
    id <AVCallbackCancellation> currentItemSuppressesVideoLayersCallbackInvoker;
    id <AVCallbackCancellation> currentItemPreferredPixelBufferAttributesCallbackInvoker;
    AVPropertyStorage *propertyStorage;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *currentItemPropertyUpdateQueue;
    NSObject<OS_dispatch_queue> *layersQ;
    struct OpaqueCMTimebase *proxyTimebase;
    _Bool logPerformanceData;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    struct OpaqueFigSimpleMutex *prerollIDMutex;
    AVPlayerItem *currentItem;
    AVPlayerItem *lastItem;
    NSMutableSet *items;
    NSArray *queueModifications;
    _Bool iapdExtendedModeIsActive;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVOutputContext *outputContext;
    struct __CFDictionary *videoLayers;
    NSMutableArray *subtitleLayers;
    NSMutableArray *closedCaptionLayers;
    NSHashTable *avPlayerLayers;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;
    CDUnknownBlockType prerollCompletionHandler;
    struct OpaqueFigPlayer *figPlayer;
    long long status;
    NSError *error;
    struct OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;
    _Bool needsToCreateFigPlayer;
    NSString *externalPlaybackVideoGravity;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    NSArray *itemsInFigPlayQueue;
    NSArray *expectedAssetTypes;
    _Bool reevaluateBackgroundPlayback;
    _Bool hostApplicationInForeground;
    _Bool hadAssociatedOnscreenPlayerLayerWhenSuspended;
    NSDictionary *vibrationPattern;
    struct OpaqueCMClock *figMasterClock;
    _Bool autoSwitchStreamVariants;
    _Bool preparesItemsForPlaybackAsynchronously;
    _Bool allowsOutOfBandTextTrackRendering;
    struct CGSize cachedDisplaySize;
    _Bool shouldReduceResourceUsage;
    NSString *multichannelAudioStrategy;
    NSArray *displaysUsedForPlayback;
}

@end

