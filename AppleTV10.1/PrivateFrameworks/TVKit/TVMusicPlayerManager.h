//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TVSPlayback;

@interface TVMusicPlayerManager : NSObject
{
    id <TVSPlayback> _player;
    long long _playlistRepeatMode;
}

+ (id)sharedInstance;
@property(nonatomic) long long playlistRepeatMode; // @synthesize playlistRepeatMode=_playlistRepeatMode;
@property(retain, nonatomic) id <TVSPlayback> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_updatePlaylistWithDataItems:(id)arg1 isPlayNext:(_Bool)arg2;
- (_Bool)isSongPlayingWithAdamID:(long long)arg1 persistentID:(long long)arg2;
- (void)updatePlaylistWithDataBaseItem:(id)arg1 mediaItemsQuery:(id)arg2 isPlayNext:(_Bool)arg3;

@end

