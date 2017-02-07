//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAudioSessionParticipant-Protocol.h>

@class AVAudioSession, AVPlayerInternal, NSArray, NSError, NSString;

@interface AVPlayer : NSObject <AVAudioSessionParticipant>
{
    AVPlayerInternal *_player;
}

+ (_Bool)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (_Bool)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (_Bool)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (_Bool)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (_Bool)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (_Bool)automaticallyNotifiesObserversOfVibrationPattern;
+ (_Bool)automaticallyNotifiesObserversOfUserVolume;
+ (_Bool)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;
+ (_Bool)automaticallyNotifiesObserversOfRate;
+ (int)_createFigPlayerWithType:(long long)arg1 player:(struct OpaqueFigPlayer **)arg2;
+ (_Bool)automaticallyNotifiesObserversOfCurrentItem;
+ (id)playerWithFigPlayer:(struct OpaqueFigPlayer *)arg1;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (void)initialize;
+ (_Bool)isIAPDExtendedModeActive;
+ (_Bool)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
- (_Bool)_limitsBandwidthForCellularAccess;
- (void)_setLimitsBandwidthForCellularAccess:(_Bool)arg1;
- (_Bool)_dynamicallyChoosesInitialVariant;
- (void)_setDynamicallyChoosesInitialVariant:(_Bool)arg1;
- (void)_logPerformanceDataForCurrentItem;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (_Bool)_shouldLogPerformanceData;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (id)_fpNotificationNames;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (id)externalPlaybackVideoGravity;
- (void)_playerLayer:(id)arg1 replaceVideoLayer:(id)arg2 with:(id)arg3;
- (void)_pixelBufferAttributesDidChangeForLayer:(id)arg1;
- (void)_addLayer:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_detachClosedCaptionLayersFromFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_detachVideoLayersFromFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (void)_attachVideoLayersToFigPlayer;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_evaluateDisplaySizeOfAllAttachedLayers;
- (struct CGSize)_maximumAVPlayerLayerDisplaySize;
- (void)_updateClosedCaptionLayerBounds:(id)arg1;
- (id)_avPlayerLayers;
- (id)_videoLayers;
- (id)_closedCaptionLayers;
- (id)_subtitleLayers;
- (id)_pixelBufferAttributeMediator;
- (void)_removeAllLayers;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)pause;
- (void)play;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(_Bool)arg1;
- (_Bool)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (_Bool)isAirPlayVideoActive;
- (_Bool)_airPlayVideoActive;
- (void)setAllowsAirPlayVideo:(_Bool)arg1;
- (_Bool)allowsAirPlayVideo;
- (void)setOutputContext:(id)arg1;
- (id)outputContext;
- (void)setUsesAudioOnlyModeForExternalPlayback:(_Bool)arg1;
- (_Bool)usesAudioOnlyModeForExternalPlayback;
- (_Bool)_usesAudioOnlyModeForExternalPlayback;
- (long long)externalPlaybackType;
- (_Bool)isExternalPlaybackActive;
- (_Bool)_externalPlaybackActive;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(_Bool)arg1;
- (_Bool)usesExternalPlaybackWhileExternalScreenIsActive;
- (_Bool)_usesExternalPlaybackWhileExternalScreenIsActive;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (_Bool)allowsExternalPlayback;
- (_Bool)_allowsExternalPlayback;
- (void)setShouldReduceResourceUsage:(_Bool)arg1;
- (_Bool)shouldReduceResourceUsage;
- (_Bool)isDisplayingClosedCaptions;
- (_Bool)_isDisplayingClosedCaptions;
- (void)setClosedCaptionDisplayEnabled:(_Bool)arg1;
- (_Bool)isClosedCaptionDisplayEnabled;
- (_Bool)_isClosedCaptionDisplayEnabled;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(_Bool)arg2;
- (long long)actionAtItemEnd;
- (long long)_actionAtItemEnd;
- (long long)_defaultActionAtItemEnd;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (_Bool)_isMuted;
- (void)setVolume:(float)arg1;
- (float)volume;
- (float)_playerVolume;
- (void)setVibrationPattern:(id)arg1;
- (id)vibrationPattern;
- (void)_setUserVolume:(float)arg1;
- (float)_userVolume;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (struct OpaqueCMClock *)masterClock;
- (void)prerollOperationDidComplete:(_Bool)arg1 notificationPayload:(struct __CFDictionary *)arg2;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_createPrerollID;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToDate:(id)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (_Bool)_usesLegacyAutomaticWaitingBehavior;
- (void)_setUsesLegacyAutomaticWaitingBehavior:(_Bool)arg1;
- (void)setAutomaticallyWaitsToMinimizeStalling:(_Bool)arg1;
- (_Bool)automaticallyWaitsToMinimizeStalling;
- (id)reasonForWaitingToPlay;
- (id)_reasonForWaitingToPlay;
- (long long)timeControlStatus;
- (long long)_timeControlStatus;
- (long long)_timeControlStatusAndWaitingReason:(id *)arg1;
- (long long)_inferredTimeControlStatusAndWaitingReason:(id *)arg1 forRate:(float)arg2;
- (long long)_timeControlStatusAndWaitingReason:(id *)arg1 forPlaybackState:(int)arg2;
- (void)playImmediatelyAtRate:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2;
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2 playImmediately:(_Bool)arg3;
- (float)rate;
- (float)_rate;
- (void)_removeAllItems;
- (id)_items;
- (id)_items_invokeOnIvarAccessQueue;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)_removeItem:(id)arg1;
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)arg1;
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)arg1;
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(CDUnknownBlockType)arg1;
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)arg1 afterItem:(id)arg2;
- (id)_ancillaryPerformanceInformationForDisplay;
- (void)_setAncillaryPerformanceInformationForDisplay:(id)arg1;
- (void)setExpectedAssetTypes:(id)arg1;
- (id)expectedAssetTypes;
- (void)_createAndConfigureFigPlayerWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setPendingFigPlayerProperty:(id)arg1 forKey:(id)arg2;
- (id)_pendingFigPlayerPropertyForKey:(id)arg1;
- (id)_pendingFigPlayerProperties;
- (void)_insertItem:(id)arg1 afterItem:(id)arg2;
- (void)prepareItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_advanceToNextItem;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_itemIsReadyToPlay:(id)arg1;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)arg1;
- (_Bool)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
- (void)_noteNewPresentationSizeForPlayerItem:(id)arg1;
- (struct CGSize)_cachedPresentationSizeOfCurrentItem;
- (void)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(CDUnknownBlockType)arg1 modificationBlock:(CDUnknownBlockType)arg2;
- (void)_updateProxyTimebaseFromNewCurrentItem;
- (id)_synchronizeWithNewCurrentItem;
- (void)_setCurrentItem:(id)arg1;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (id)currentItem;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer *)arg2;
- (void)_changeStatusToFailedWithError:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)valueForKeyForKVO:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (_Bool)_isChangingValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)_didChangeValueForTimeControlStatusAndReason;
- (void)_willChangeValueForTimeControlStatusAndReason;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)_cachedValueForKey:(id)arg1;
- (id)_propertyStorage;
- (struct OpaqueFigPlayer *)_copyFigPlayer;
- (id)_stateDispatchQueue;
- (id)dispatchQueue;
- (id)_weakReference;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (_Bool)outputObscuredDueToInsufficientExternalProtection;
- (_Bool)_outputObscuredDueToInsufficientExternalProtectionPerformingCodeVerification:(_Bool)arg1;
@property(readonly, nonatomic) long long _externalProtectionStatus;
- (long long)_extractFPExternalProtectionStatus:(id)arg1 withCodeVerification:(_Bool)arg2;
- (long long)_externalProtectionStatusWithCodeVerification:(_Bool)arg1;
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;
- (id)_playbackDisplaysForFigPlayer;
@property(readonly, nonatomic, getter=_cachedValueForPIPModePossible) _Bool cachedValueForPIPModePossible;
- (_Bool)isPIPModePossible;
@property(readonly, nonatomic, getter=_isPIPModePossible) _Bool PIPModePossible;
@property(nonatomic) float maxRateForAudioPlayback;
@property(nonatomic) float minRateForAudioPlayback;
@property(readonly, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) _Bool audioPlaybackEnabledAtAllRates;
- (void)removeAudioPlaybackRateLimits;
- (void)_willEnterForeground:(id)arg1;
- (void)_didFinishSuspension:(id)arg1;
- (_Bool)_shouldDetachVideoLayersFromFigPlayer;
- (long long)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (_Bool)_carplayIsActive;
- (_Bool)_isIAPDExtendedModeActive;
- (_Bool)_hasAssociatedOnscreenAVPlayerLayer;
- (_Bool)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (_Bool)_hasAssociatedAVPlayerLayerInPIPMode;
- (_Bool)_resumePlayback:(double)arg1 error:(id *)arg2;
- (void)_setPreferredLanguageList:(id)arg1;
- (_Bool)_CALayerDestinationIsTVOut;
- (void)_setCALayerDestinationIsTVOut:(_Bool)arg1;
- (void)_setClientPriority:(long long)arg1;
- (long long)_clientPriority;
- (void)_setClientName:(id)arg1;
- (id)_clientName;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(_Bool)arg1;
- (id)playerAVAudioSession;
@property(nonatomic) _Bool allowsPixelBufferPoolSharing;
- (_Bool)_allowsPixelBufferPoolSharing;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(_Bool)arg1;
- (_Bool)disallowsHardwareAcceleratedVideoDecoder;
- (_Bool)_disallowsHardwareAcceleratedVideoDecoder;
@property(nonatomic) _Bool disallowsAMRAudio;
- (_Bool)_disallowsAMRAudio;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
@property(nonatomic) _Bool appliesMediaSelectionCriteriaAutomatically;
- (_Bool)_appliesMediaSelectionCriteriaAutomatically;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)setPreparesItemsForPlaybackAsynchronously:(_Bool)arg1;
- (_Bool)preparesItemsForPlaybackAsynchronously;
- (void)setAutoSwitchStreamVariants:(_Bool)arg1;
- (_Bool)autoSwitchStreamVariants;
@property(copy, nonatomic) NSString *audioOutputDeviceUniqueID;
- (id)_audioOutputDeviceUniqueID;
@property(nonatomic) _Bool allowsOutOfBandTextTrackRendering;
@property(copy, nonatomic) NSString *multichannelAudioStrategy;
- (id)_multichannelAudioStrategy;
@property(retain) AVAudioSession *audioSession;

@end

