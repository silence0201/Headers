//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

@class MPMediaPlaybackItemMetadata, MPStorePlayWhileDownloadSession, MPStreamingDownloadSession, NSDictionary, NSNumber, NSObject, NSString, SBCPlaybackPositionDomain, SBCPlaybackPositionEntity, SBCPlaybackPositionValueService;
@protocol OS_dispatch_queue;

@interface MPStoreAVItem : MPAVItem
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _assetQuality;
    _Bool _didDeferLeaseStart;
    _Bool _hasEverPrioritizedPlayerItem;
    _Bool _hasPrioritizedPlayWhileDownloadSession;
    _Bool _hasPrioritizedStreamingDownloadSession;
    _Bool _hasValidAssetQuality;
    _Bool _isActivePlayerItem;
    NSNumber *_bookmarkTime;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    SBCPlaybackPositionEntity *_playbackPositionEntity;
    long long _playbackPositionEntityRevision;
    SBCPlaybackPositionValueService *_playbackPositionService;
    MPStorePlayWhileDownloadSession *_playWhileDownloadSession;
    unsigned long long _preferredAssetQuality;
    MPStreamingDownloadSession *_streamingDownloadSession;
    unsigned long long _options;
    MPMediaPlaybackItemMetadata *_playbackItemMetadata;
    unsigned long long _streamType;
    NSString *_assetSourceStoreFrontID;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    long long _equivalencySourceAdamID;
    NSDictionary *_alternativeConfigurationOptions;
}

+ (unsigned long long)_currentPreferredAssetQualityForPlaybackItemMetadata:(id)arg1;
+ (id)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(id)arg1 withMinimumAssetQuality:(unsigned long long)arg2 assetOptions:(id)arg3 returningProtectionType:(unsigned long long *)arg4 assetQuality:(unsigned long long *)arg5 usesPurchaseBundle:(_Bool *)arg6;
+ (_Bool)shouldIncrementPlayCountForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
+ (double)nominalHasBeenPlayedThresholdForDuration:(double)arg1;
+ (_Bool)hasNominalAmountBeenPlayedForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
+ (_Bool)isPlaybackItemMetadataValidForAssetCreation:(id)arg1;
+ (_Bool)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg1 returningProtectionType:(unsigned long long *)arg2;
@property(readonly, copy, nonatomic) NSDictionary *alternativeConfigurationOptions; // @synthesize alternativeConfigurationOptions=_alternativeConfigurationOptions;
@property(nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property(copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(copy, nonatomic) NSString *assetSourceStoreFrontID; // @synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID;
@property(readonly, nonatomic) unsigned long long streamType; // @synthesize streamType=_streamType;
@property(readonly, nonatomic) MPMediaPlaybackItemMetadata *playbackItemMetadata; // @synthesize playbackItemMetadata=_playbackItemMetadata;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (double)_expectedStopTimeWithPlaybackInfo:(id)arg1;
- (double)_expectedStartTimeWithPlaybackInfo:(id)arg1;
- (id)_playbackPositionEntityWithLoadedStoreUbiquitousIdentifier:(id)arg1;
- (id)_playbackPositionDomain;
- (id)_playbackPositionService;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(_Bool)arg2;
- (id)_storeUbiquitousIdentifier;
- (_Bool)_shouldRememberBookmarkTime;
- (void)_prioritizeDownloadSessionsIfNeeded;
- (id)_playbackPositionEntity;
- (id)_newTimeMarkersForChapterType:(long long)arg1;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(_Bool)arg2;
- (_Bool)_getAssetURL:(id *)arg1 playWhileDownloadSession:(id *)arg2 assetQuality:(unsigned long long *)arg3 error:(id *)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(_Bool)arg7;
- (id)_chapterTitleForTime:(double)arg1;
- (id)_bookmarkTime;
- (void)_applyLoudnessInfo;
- (void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1;
- (void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(_Bool)arg1;
- (id)mpcReporting_requestingBundleVersion;
- (id)mpcReporting_requestingBundleIdentifier;
- (long long)mpcReporting_equivalencySourceAdamID;
- (_Bool)usesSubscriptionLease;
- (id)storeDownload;
- (_Bool)isStreamingLowQualityAsset;
- (_Bool)didDeferLeaseStart;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (void)_willResignActivePlayerItem;
- (void)_willBecomeActivePlayerItem;
- (long long)_persistedLikedState;
- (void)_loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (id)playbackInfo;
- (_Bool)allowsExternalPlayback;
- (_Bool)allowsAirPlayFromCloud;
- (float)userRating;
- (id)urlTimeMarkers;
- (_Bool)useEmbeddedChapterData;
- (long long)type;
- (id)titlesForTime:(double)arg1;
- (_Bool)supportsRewindAndFastForward15Seconds;
- (_Bool)supportsLikedState;
- (long long)storeSubscriptionAdamID;
- (long long)storeItemInt64ID;
- (void)setRating:(float)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)reevaluateType;
- (void)prepareForRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)persistentID;
- (void)notePlaybackFinishedByHittingEnd;
- (id)modelObject;
- (id)modelSong;
- (id)mediaItem;
- (id)mainTitle;
- (void)loadAssetAndPlayerItem;
- (_Bool)isLikedStateEnabled;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;
- (_Bool)isStreamable;
- (_Bool)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (_Bool)isExplicitTrack;
- (_Bool)isCloudItem;
- (_Bool)isAssetURLValid;
- (_Bool)hasAlternatesForTypes:(unsigned long long)arg1;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(_Bool)arg2;
- (id)genre;
- (id)externalContentIdentifier;
- (double)durationFromExternalMetadata;
- (id)displayableText;
- (unsigned long long)discNumber;
- (unsigned long long)discCount;
- (long long)customAVEQPreset;
- (id)copyrightText;
- (id)composer;
- (id)chapterTimeMarkers;
- (_Bool)canSeedGenius;
- (id)artworkTimeMarkers;
- (id)artist;
- (_Bool)allowsEQ;
- (unsigned long long)albumTrackNumber;
- (unsigned long long)albumTrackCount;
- (long long)artistStoreID;
- (long long)albumStoreID;
- (id)albumArtist;
- (id)album;
- (long long)storePlaybackEndpointType;
- (id)description;
- (void)dealloc;
- (id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

