//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUVideoPlayerViewDelegate-Protocol.h>

@class AVPlayer, NSString, PUAssetViewModel, PUBrowsingVideoPlayer, PUMediaProvider, PUVideoPlayerView;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUVideoTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUVideoPlayerViewDelegate, PUBrowsingVideoPlayerChangeObserver>
{
    id _playerObserver;
    _Bool _canPlayVideo;
    _Bool __isDisplayingFullQualityImage;
    int __currentImageRequestID;
    PUAssetViewModel *_assetViewModel;
    PUMediaProvider *_mediaProvider;
    PUVideoPlayerView *__playerView;
    id <PUDisplayAsset> _asset;
    PUBrowsingVideoPlayer *__browsingVideoPlayer;
    AVPlayer *__player;
    long long __thumbnailRequestNumber;
    CDUnknownBlockType __readyForDisplayCompletionHandler;
    struct CGSize __targetSize;
}

@property(copy, nonatomic, setter=_setReadyForDisplayCompletionHandler:) CDUnknownBlockType _readyForDisplayCompletionHandler; // @synthesize _readyForDisplayCompletionHandler=__readyForDisplayCompletionHandler;
@property(nonatomic, setter=_setDisplayingFullQualityImage:) _Bool _isDisplayingFullQualityImage; // @synthesize _isDisplayingFullQualityImage=__isDisplayingFullQualityImage;
@property(nonatomic, setter=_setThumbnailRequestNumber:) long long _thumbnailRequestNumber; // @synthesize _thumbnailRequestNumber=__thumbnailRequestNumber;
@property(retain, nonatomic, setter=_setPlayer:) AVPlayer *_player; // @synthesize _player=__player;
@property(retain, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer; // @synthesize _browsingVideoPlayer=__browsingVideoPlayer;
@property(nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property(nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID; // @synthesize _currentImageRequestID=__currentImageRequestID;
@property(retain, nonatomic, setter=_setAsset:) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
@property(retain, nonatomic, setter=_setPlayerView:) PUVideoPlayerView *_playerView; // @synthesize _playerView=__playerView;
@property(nonatomic) _Bool canPlayVideo; // @synthesize canPlayVideo=_canPlayVideo;
@property(retain, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void).cxx_destruct;
- (void)_updateReadyForDisplay;
- (_Bool)adoptAssetTransitionInfo:(id)arg1;
- (id)generateAssetTransitionInfo;
- (void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(_Bool)arg2;
@property(readonly, nonatomic) _Bool _isDisplayingVideo;
- (void)_updateVideo;
- (void)_updateImage;
- (void)dealloc;
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;
- (void)setPreloadedImage:(id)arg1;
- (void)didChangeAnimating;
- (void)becomeReusable;
- (void)applyLayoutInfo:(id)arg1;
- (id)loadView;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

