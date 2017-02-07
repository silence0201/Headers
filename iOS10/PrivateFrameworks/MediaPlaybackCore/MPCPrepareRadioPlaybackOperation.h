//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MPCRadioGetTracksOperation, NSLock, RadioRequestContext, RadioStation, RadioStationMatchContext, SSAuthenticateRequest, SSVPlaybackLease;

@interface MPCPrepareRadioPlaybackOperation : NSOperation
{
    SSAuthenticateRequest *_authenticateRequest;
    CDUnknownBlockType _firstTrackBlock;
    MPCRadioGetTracksOperation *_getTracksOperation;
    NSLock *_lock;
    RadioStationMatchContext *_nowPlayingMatchContext;
    SSVPlaybackLease *_playbackLease;
    CDUnknownBlockType _preparedBlock;
    RadioRequestContext *_requestContext;
    RadioStation *_station;
    RadioStationMatchContext *_stationMatchContext;
    _Bool _willContinuePlayback;
}

- (void).cxx_destruct;
- (void)main;
- (void)cancel;
@property _Bool willContinuePlayback;
@property(retain) RadioStationMatchContext *stationMatchContext;
@property(retain) RadioStation *station;
@property(copy) RadioRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy) CDUnknownBlockType preparedBlock;
@property(retain) SSVPlaybackLease *playbackLease;
@property(retain) RadioStationMatchContext *nowPlayingMatchContext;
- (id)init;

@end
