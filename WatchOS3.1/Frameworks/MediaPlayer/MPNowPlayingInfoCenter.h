//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPNowPlayingPlaybackQueueCache, NSDate, NSDictionary;
@protocol MPNowPlayingPlaybackQueueDataSource, OS_dispatch_queue;

@interface MPNowPlayingInfoCenter : NSObject
{
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDictionary *_convertedNowPlayingInfo;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_queue;
    MPNowPlayingPlaybackQueueCache *_playbackQueueCache;
    id <MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
    unsigned long long _playbackState;
}

+ (id)defaultCenter;
@property unsigned long long playbackState; // @synthesize playbackState=_playbackState;
- (void).cxx_destruct;
- (void)_registerCallbacks;
- (void)invalidatePlaybackQueue;
- (id)playbackQueueDataSource;
@property(copy) NSDictionary *nowPlayingInfo;
- (void)_pushNowPlayingInfoAndRetry:(_Bool)arg1;
- (void)setPlaybackQueueDataSource:(id)arg1;
- (id)init;
- (id)_init;

@end
