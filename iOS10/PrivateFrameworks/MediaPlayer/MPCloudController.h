//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HSCloudClient, MSVDistributedNotificationObserver;
@protocol HSCloudAvailability, OS_dispatch_queue;

@interface MPCloudController : NSObject
{
    NSObject<HSCloudAvailability> *_cloudAvailabilityController;
    _Bool _isUpdateInProgress;
    int _preferencesChangedNotifyToken;
    _Bool _preferencesChangedNotifyTokenIsValid;
    NSObject<OS_dispatch_queue> *_queue;
    MSVDistributedNotificationObserver *_addToPlaylistBehaviorChangedObserver;
    _Bool _isInitialImport;
    _Bool _isCloudEnabled;
    _Bool _jaliscoGeniusEnabled;
    HSCloudClient *_cloudClient;
}

+ (_Bool)isEnablingCloudLibraryDestructive;
+ (void)migrateCellularDataPreferencesIfNeeded;
+ (_Bool)isMediaApplication;
+ (id)sharedCloudController;
@property(readonly, nonatomic, getter=isJaliscoGeniusEnabled) _Bool jaliscoGeniusEnabled; // @synthesize jaliscoGeniusEnabled=_jaliscoGeniusEnabled;
@property(readonly, nonatomic) HSCloudClient *cloudClient; // @synthesize cloudClient=_cloudClient;
@property(readonly, nonatomic) _Bool isCloudEnabled; // @synthesize isCloudEnabled=_isCloudEnabled;
- (void).cxx_destruct;
- (void)_initializeUpdateInProgressState;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3;
- (void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool enablingJaliscoGeniusRequiresTerms;
- (void)updateJaliscoMediaLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)cloudAddToPlaylistBehavior;
- (void)disableCloudLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isCloudLibraryEnabled;
- (void)resignActive;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isUpdateInProgress; // @synthesize isUpdateInProgress=_isUpdateInProgress;
@property(readonly, nonatomic) _Bool isInitialImport; // @synthesize isInitialImport=_isInitialImport;
@property(readonly, nonatomic) _Bool isGeniusEnabled;
@property(readonly, nonatomic) _Bool hasCloudLockerAccount;
@property(readonly, nonatomic) _Bool hasPurchaseHistoryAccount;
- (void)becomeActiveAndWaitUntilDone:(_Bool)arg1;
- (void)becomeActive;
- (void)deprioritizeArtworkRequestForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4;
- (void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)uploadCloudItemProperties;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadCloudPlaylistProperties;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sdk_createPlaylistWithPersistenID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool canShowCloudVideo;
@property(readonly, nonatomic) _Bool canShowCloudMusic;
@property(readonly, nonatomic) _Bool canDefaultMediaLibraryShowCloudContent;
@property(readonly, nonatomic) _Bool canShowCloudDownloadButtons;
- (_Bool)shouldProhibitActionsForCurrentNetworkConditions;
- (_Bool)isCellularDataRestricted;
- (_Bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForStoreApps;
- (_Bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForVideos;
- (_Bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForMusic;
- (_Bool)hasProperNetworkConditionsToShowCloudMedia;
- (_Bool)hasProperNetworkConditionsToPlayMedia;
- (void)isCellularDataRestrictedDidChangeNotification:(id)arg1;
- (void)hasProperNetworkConditionsToShowCloudMediaDidChangeNotification:(id)arg1;
- (void)canShowCloudTracksDidChangeNotification:(id)arg1;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
