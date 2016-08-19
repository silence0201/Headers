//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/ISPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PULazyLoaderDelegate-Protocol.h>

@class NSMutableSet, NSString, PHLivePhoto, PUAudioSessionCategoryToken, PULazyLoader, PUMediaProvider;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUBrowsingIrisPlayer : PUViewModel <PULazyLoaderDelegate, ISPlayerChangeObserver>
{
    _Bool _isPlayerLoadingAllowed;
    _Bool _canPlayVitality;
    _Bool _hasPendingVitalityHint;
    int __livePhotoRequestID;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    PULazyLoader *__playerLoader;
    NSMutableSet *__playerLoadingDisablingReasons;
    long long __currentUnloadRequestId;
    PUAudioSessionCategoryToken *__audioToken;
    PHLivePhoto *__livePhoto;
    long long __livePhotoRequestState;
}

@property(nonatomic, setter=_setLivePhotoRequestID:) int _livePhotoRequestID; // @synthesize _livePhotoRequestID=__livePhotoRequestID;
@property(nonatomic, setter=_setLivePhotoRequestState:) long long _livePhotoRequestState; // @synthesize _livePhotoRequestState=__livePhotoRequestState;
@property(retain, nonatomic, setter=_setLivePhoto:) PHLivePhoto *_livePhoto; // @synthesize _livePhoto=__livePhoto;
@property(retain, nonatomic, setter=_setAudioToken:) PUAudioSessionCategoryToken *_audioToken; // @synthesize _audioToken=__audioToken;
@property(nonatomic, setter=_setCurrentUnloadRequestId:) long long _currentUnloadRequestId; // @synthesize _currentUnloadRequestId=__currentUnloadRequestId;
@property(retain, nonatomic, setter=_setPlayerLoadingDisablingReasons:) NSMutableSet *_playerLoadingDisablingReasons; // @synthesize _playerLoadingDisablingReasons=__playerLoadingDisablingReasons;
@property(retain, nonatomic, setter=_setPlayerLoader:) PULazyLoader *_playerLoader; // @synthesize _playerLoader=__playerLoader;
@property(readonly, nonatomic) _Bool hasPendingVitalityHint; // @synthesize hasPendingVitalityHint=_hasPendingVitalityHint;
@property(nonatomic) _Bool canPlayVitality; // @synthesize canPlayVitality=_canPlayVitality;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) _Bool isPlayerLoadingAllowed; // @synthesize isPlayerLoadingAllowed=_isPlayerLoadingAllowed;
- (void).cxx_destruct;
- (void)player:(id)arg1 didChangePlayerStatus:(long long)arg2;
- (void)player:(id)arg1 didChangePlaybackState:(long long)arg2;
- (void)lazyLoadedDidLoadItem:(id)arg1;
- (void)_configureAudioSession:(id)arg1;
- (void)_updateAudioCategory;
- (_Bool)_isContentLoadingRequestInProgress;
- (void)_installContentInPlayer;
- (void)_cancelAllRequests;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (void)_loadLivePhoto;
- (long long)_contentMode;
- (struct CGSize)_targetSize;
- (void)_playerDidChange;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)currentChange;
- (id)newViewModelChange;
- (void)_handlePlayerUnloadWithRequestId:(long long)arg1;
- (void)_setCanPlayVitality:(_Bool)arg1;
- (void)_updateCanPlayVitality;
- (void)_setPlayerLoadingAllowed:(_Bool)arg1;
- (void)setPlayerLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)didPlayVitalityHint;
- (void)playVitalityHint;
- (void)invalidateExistingPlayer;
- (id)playerCreateIfNeeded:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

