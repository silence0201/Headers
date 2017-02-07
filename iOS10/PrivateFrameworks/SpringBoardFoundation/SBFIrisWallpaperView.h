//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

#import <SpringBoardFoundation/ISPlayerViewDelegatePrivate-Protocol.h>
#import <SpringBoardFoundation/SBFIrisWallpaperView-Protocol.h>

@class ISAVPlayer, ISPlayerView, NSString, NSURL, UIGestureRecognizer, UIImageView;
@protocol SBFIrisWallpaperViewDelegate;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView>
{
    id <SBFIrisWallpaperViewDelegate> _irisDelegate;
    long long _currentMode;
    UIImageView *_imageView;
    NSURL *_videoFileURL;
    double _stillTimeInVideo;
    _Bool _useRewindPlaybackStyle;
    ISAVPlayer *_prewiredAVPlayer;
    struct CGSize _prewiredSize;
    ISPlayerView *_playerView;
    long long _playerState;
    long long _playbackState;
    _Bool _isInteracting;
    UIGestureRecognizer *_playerGestureRecognizer;
}

+ (void)initialize;
@property(readonly, nonatomic) long long currentIrisMode; // @synthesize currentIrisMode=_currentMode;
@property(nonatomic) __weak id <SBFIrisWallpaperViewDelegate> irisDelegate; // @synthesize irisDelegate=_irisDelegate;
- (void).cxx_destruct;
- (id)videoPlayerForPlayerView:(id)arg1;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)playerViewGestureRecognizerDidChange:(id)arg1;
- (void)_populateContentView;
- (_Bool)_setupContentViewForMode:(long long)arg1;
- (void)_resetPrewiredAVPlayer;
- (void)_setPlayerGestureRecognizer:(id)arg1;
- (void)_setupContentView;
- (void)_setImage:(id)arg1;
- (id)irisGestureRecognizer;
@property(readonly, nonatomic) _Bool isIrisInteracting;
@property(readonly, nonatomic) long long irisPlaybackState;
- (void)switchToIrisMode:(long long)arg1;
- (long long)wallpaperType;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3;
@property(readonly, nonatomic) double stillTimeInVideo;
@property(readonly, copy, nonatomic) NSURL *videoFileURL;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 wallpaperVideoURL:(id)arg4 stillTimeInVideo:(double)arg5 staticImageOptions:(unsigned long long)arg6 variant:(long long)arg7 prewireMemory:(_Bool)arg8 useRewindPlaybackStyle:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
