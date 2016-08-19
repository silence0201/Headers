//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerItem, AVWeakReference, NSError;

@interface AVPlayerConnection : NSObject
{
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
    AVPlayerItem *_previousPlayerItem;
}

- (id)error;
@property(readonly, nonatomic) long long status;
- (void)removeItemFromPlayQueue;
- (_Bool)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1;
- (id)playerItem;
- (id)player;
- (id)description;
- (void)dealloc;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2;

@end

