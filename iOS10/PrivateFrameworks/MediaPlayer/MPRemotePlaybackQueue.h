//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MPRemotePlaybackQueue : NSObject
{
    struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;
    NSDictionary *_userInfo;
}

+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (_Bool)verifyWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool shouldOverrideManuallyCuratedQueue;
@property(readonly, nonatomic, getter=isRequestingImmediatePlayback) _Bool requestingImmediatePlayback;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

