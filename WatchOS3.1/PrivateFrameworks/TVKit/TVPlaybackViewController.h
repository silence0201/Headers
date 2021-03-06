//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVPlaybackViewControllerDelegate-Protocol.h>
#import <TVKit/TVVideoPlayerViewControllerDelegate-Protocol.h>

@class NSObject, NSString, NSTimer;
@protocol TVPlaybackViewControllerDelegate, TVSPlayback;

@interface TVPlaybackViewController : UIViewController <TVVideoPlayerViewControllerDelegate, TVPlaybackViewControllerDelegate>
{
    _Bool _showsTitleWhileLoading;
    _Bool _isRadioPlayback;
    _Bool _isIdleScreen;
    _Bool _allowDefaultMenuButtonBehavior;
    _Bool _isMusicPlaylist;
    _Bool _invalidatePlayerWhenDone;
    _Bool _startedPlaying;
    _Bool _hasBeenRemovedFromParentViewController;
    NSObject<TVSPlayback> *_player;
    long long _resumeMenuOption;
    double _startTime;
    id <TVPlaybackViewControllerDelegate> _playbackDelegate;
    long long _initialPlaybackType;
    NSTimer *_playbackLimitTimer;
}

@property(nonatomic) _Bool hasBeenRemovedFromParentViewController; // @synthesize hasBeenRemovedFromParentViewController=_hasBeenRemovedFromParentViewController;
@property(retain, nonatomic) NSTimer *playbackLimitTimer; // @synthesize playbackLimitTimer=_playbackLimitTimer;
@property(nonatomic, getter=hasStartedPlaying) _Bool startedPlaying; // @synthesize startedPlaying=_startedPlaying;
@property(nonatomic) long long initialPlaybackType; // @synthesize initialPlaybackType=_initialPlaybackType;
@property(nonatomic) _Bool invalidatePlayerWhenDone; // @synthesize invalidatePlayerWhenDone=_invalidatePlayerWhenDone;
@property(nonatomic) _Bool isMusicPlaylist; // @synthesize isMusicPlaylist=_isMusicPlaylist;
@property(nonatomic) _Bool allowDefaultMenuButtonBehavior; // @synthesize allowDefaultMenuButtonBehavior=_allowDefaultMenuButtonBehavior;
@property(nonatomic) _Bool isIdleScreen; // @synthesize isIdleScreen=_isIdleScreen;
@property(nonatomic) __weak id <TVPlaybackViewControllerDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property(nonatomic) _Bool isRadioPlayback; // @synthesize isRadioPlayback=_isRadioPlayback;
@property(nonatomic) _Bool showsTitleWhileLoading; // @synthesize showsTitleWhileLoading=_showsTitleWhileLoading;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long resumeMenuOption; // @synthesize resumeMenuOption=_resumeMenuOption;
@property(retain, nonatomic) NSObject<TVSPlayback> *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_playbackLimitTimerFired:(id)arg1;
- (void)_startPlaybackLimitTimerWithLimit:(double)arg1;
- (void)_clearPlaybackLimitTimer;
- (void)_playerStateChanged:(id)arg1;
- (void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)playbackViewControllerProvidesCustomControls:(id)arg1;
- (void)contextMenuForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateChildViewControllerForCurrentMediaItem;
- (void)_currentMediaItemDidChange:(id)arg1;
- (void)_useNowPlayingVideoViewController:(id)arg1;
- (void)videoPlayerViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_currentChildViewControllerDidChangeFrom:(id)arg1;
- (void)_currentChildViewControllerWillChangeTo:(id)arg1;
- (void)loadCurrentMediaItem;
- (void)insertOverlayViewController:(id)arg1;
- (void)insertOverlaySubview:(id)arg1;
- (void)dismissWithErrorText:(id)arg1;
@property(nonatomic) _Bool presentsNowPlayingVideoWithoutAnimations;
@property(nonatomic) _Bool allowsVideoPlaybackWithoutVisuals;
- (id)currentChildViewController;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 invalidateWhenDone:(_Bool)arg2 initialPlaybackType:(long long)arg3;
- (id)initWithPlayer:(id)arg1 invalidateWhenDone:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

