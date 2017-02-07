//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/MPSwipableViewDelegate-Protocol.h>
#import <MediaPlayer/MPTransportControlsTarget-Protocol.h>
#import <MediaPlayer/MPVideoOverlayDelegate-Protocol.h>
#import <MediaPlayer/MPVolumeControllerDelegate-Protocol.h>

@class MPAVItem, MPInlineVideoController, MPSwipableView, MPVideoPlaybackOverlayView, MPVolumeController, MPWeakTimer, NSString, UIActivityIndicatorView, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget>
{
    _Bool _disableTaps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPWeakTimer *_idleTimer;
    _Bool _isAnimatingOverlay;
    MPAVItem *_item;
    UIActivityIndicatorView *_loadingIndicator;
    MPInlineVideoController *_masterController;
    MPVideoPlaybackOverlayView *_overlayView;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    _Bool _shouldForwardRotationEvents;
    MPSwipableView *_swipableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _activeOverlayUserEvents;
    _Bool _statusBarWasHidden;
    MPVolumeController *_volumeController;
}

@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) __weak MPInlineVideoController *masterController; // @synthesize masterController=_masterController;
- (void).cxx_destruct;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)_showOverlayDidEnd;
- (void)_overlayIdleTimerFired;
- (void)_hideOverlayDidEnd;
- (void)_hideOverlayAnimated:(_Bool)arg1;
- (void)updateOverlayView;
- (void)showOverlayAnimated:(_Bool)arg1;
- (void)showLoadingIndicator;
- (void)showAlternateTracks;
- (void)resetOverlayIdleTimer;
- (void)prepareForTransitionFromFullscreen;
- (void)hideLoadingIndicator;
- (void)cancelOverlayIdleTimer;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2;
- (_Bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
