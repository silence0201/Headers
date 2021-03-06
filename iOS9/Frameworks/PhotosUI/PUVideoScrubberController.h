//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, PUScrubberSeekRequest;
@protocol PUVideoScrubberControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoScrubberController : NSObject
{
    id _playerObserver;
    _Bool _needsUpdate;
    _Bool _avPlayerCurrentTimeNeedsUpdate;
    _Bool _avPlayerDurationNeedsUpdate;
    struct {
        _Bool respondsToDidUpdate;
        _Bool respondsToLengthForDuration;
        _Bool respondsToDesiredSeekTime;
    } _videoScrubberDelegateFlags;
    id <PUVideoScrubberControllerDelegate> _delegate;
    AVPlayer *_avPlayer;
    double _estimatedDuration;
    double __playheadTime;
    PUScrubberSeekRequest *__pendingSeekRequest;
    PUScrubberSeekRequest *__activeSeekRequest;
    CDStruct_1b6d18a9 __avPlayerCurrentTime;
    CDStruct_1b6d18a9 __avPlayerDuration;
}

@property(nonatomic, setter=_setAvPlayerDuration:) CDStruct_1b6d18a9 _avPlayerDuration; // @synthesize _avPlayerDuration=__avPlayerDuration;
@property(nonatomic, setter=_setAvPlayerCurrentTime:) CDStruct_1b6d18a9 _avPlayerCurrentTime; // @synthesize _avPlayerCurrentTime=__avPlayerCurrentTime;
@property(retain, nonatomic, setter=_setActiveSeekRequest:) PUScrubberSeekRequest *_activeSeekRequest; // @synthesize _activeSeekRequest=__activeSeekRequest;
@property(retain, nonatomic, setter=_setPendingSeekRequest:) PUScrubberSeekRequest *_pendingSeekRequest; // @synthesize _pendingSeekRequest=__pendingSeekRequest;
@property(nonatomic, setter=_setPlayheadTime:) double _playheadTime; // @synthesize _playheadTime=__playheadTime;
@property(readonly, nonatomic) double estimatedDuration; // @synthesize estimatedDuration=_estimatedDuration;
@property(readonly, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(nonatomic) __weak id <PUVideoScrubberControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateAvPlayerDurationIfNeeded;
- (void)_invalidateAvPlayerDuration;
- (void)_updateAvPlayerCurrentTimeIfNeeded;
- (void)_invalidateAvPlayerCurrentTime;
- (void)_updateIfNeeded;
- (void)_invalidate;
- (double)_lengthForDuration:(double)arg1;
- (double)_progressForTime:(double)arg1;
- (double)_timeForProgress:(double)arg1;
- (double)_duration;
- (void)_playerStatusDidChange;
- (void)_playerItemStatusDidChange;
- (void)_loadedDurationDidChange;
- (void)_playerItemDurationDidChange;
- (void)_playerDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_handleTimeoutCallbackForSeekRequest:(id)arg1;
- (void)_seekRequest:(id)arg1 didFinish:(_Bool)arg2;
- (void)_updateSeeking;
- (void)_seekToTime:(double)arg1;
- (void)_setPlayheadProgress:(double)arg1 andSeekVideoPlayer:(_Bool)arg2;
@property(nonatomic) double playheadProgress;
@property(readonly, nonatomic) double length;
- (void)dealloc;
- (id)initWithAvPlayer:(id)arg1 estimatedDuration:(double)arg2;
- (id)init;

@end

