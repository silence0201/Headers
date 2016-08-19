//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUBrowsingVideoPlayerChange : PUViewModelChange
{
    _Bool _playStateDidChange;
    _Bool _desiredPlayStateDidChange;
    _Bool _isPlayingAllowedDidChange;
    _Bool _isActivatedDidChange;
    _Bool _isPlayerLoadingAllowedDidChange;
    _Bool _avPlayerDidChange;
    _Bool _playerItemDidChange;
    _Bool _isAtBeginningDidChange;
    _Bool _isAtEndDidChange;
    _Bool _isStalledDidChange;
    _Bool _shouldRespectMuteSwitchDidChange;
    _Bool _isPlayableDidChange;
}

- (void)_setPlayableDidChange:(_Bool)arg1;
@property(nonatomic) _Bool isPlayableDidChange; // @synthesize isPlayableDidChange=_isPlayableDidChange;
- (void)_setShouldRespectMuteSwitchDidChange:(_Bool)arg1;
@property(nonatomic) _Bool shouldRespectMuteSwitchDidChange; // @synthesize shouldRespectMuteSwitchDidChange=_shouldRespectMuteSwitchDidChange;
- (void)_setStalledDidChange:(_Bool)arg1;
@property(nonatomic) _Bool isStalledDidChange; // @synthesize isStalledDidChange=_isStalledDidChange;
- (void)_setAtEndDidChange:(_Bool)arg1;
@property(nonatomic) _Bool isAtEndDidChange; // @synthesize isAtEndDidChange=_isAtEndDidChange;
- (void)_setAtBeginningDidChange:(_Bool)arg1;
@property(nonatomic) _Bool isAtBeginningDidChange; // @synthesize isAtBeginningDidChange=_isAtBeginningDidChange;
- (void)_setPlayerItemDidChange:(_Bool)arg1;
@property(nonatomic) _Bool playerItemDidChange; // @synthesize playerItemDidChange=_playerItemDidChange;
- (void)_setAVPlayerDidChange:(_Bool)arg1;
@property(nonatomic) _Bool avPlayerDidChange; // @synthesize avPlayerDidChange=_avPlayerDidChange;
- (void)_setPlayerLoadingAllowedDidChange:(_Bool)arg1;
@property(nonatomic) _Bool isPlayerLoadingAllowedDidChange; // @synthesize isPlayerLoadingAllowedDidChange=_isPlayerLoadingAllowedDidChange;
- (void)_setActivatedDidChange:(_Bool)arg1;
@property(nonatomic) _Bool isActivatedDidChange; // @synthesize isActivatedDidChange=_isActivatedDidChange;
- (void)_setPlayingAllowedDidChange:(_Bool)arg1;
@property(nonatomic) _Bool isPlayingAllowedDidChange; // @synthesize isPlayingAllowedDidChange=_isPlayingAllowedDidChange;
- (void)_setDesiredPlayStateDidChange:(_Bool)arg1;
@property(nonatomic) _Bool desiredPlayStateDidChange; // @synthesize desiredPlayStateDidChange=_desiredPlayStateDidChange;
- (void)_setPlayStateDidChange:(_Bool)arg1;
@property(nonatomic) _Bool playStateDidChange; // @synthesize playStateDidChange=_playStateDidChange;
- (_Bool)hasChanges;

@end

