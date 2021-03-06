//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVThumbLayerController-Protocol.h>

@class AVPlayer, AVPlayerItem, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerThumbLayerController : NSObject <AVThumbLayerController>
{
    double _lastSeekTime;
    _Bool _playerEnteredIFrameMode;
    _Bool _seeking;
    _Bool _seekPending;
    double _desiredTimeInterval;
    double _toleranceBefore;
    double _toleranceAfter;
    double _actualTimeInterval;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
}

@property(getter=isSeekPending) _Bool seekPending; // @synthesize seekPending=_seekPending;
@property(getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(readonly) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(readonly) AVPlayer *player; // @synthesize player=_player;
@property(readonly) double actualTimeInterval; // @synthesize actualTimeInterval=_actualTimeInterval;
@property(readonly) double toleranceAfter; // @synthesize toleranceAfter=_toleranceAfter;
@property(readonly) double toleranceBefore; // @synthesize toleranceBefore=_toleranceBefore;
@property(nonatomic) double desiredTimeInterval; // @synthesize desiredTimeInterval=_desiredTimeInterval;
- (void).cxx_destruct;
- (void)prefetchForTimes:(id)arg1;
- (void)prefetchForTime:(double)arg1;
- (_Bool)isExact;
- (void)setExactTimeInterval:(double)arg1;
- (void)_seekToDesiredTime;
- (void)setActualTimeInterval:(double)arg1;
- (CDStruct_1b6d18a9)cmtimeToleranceAfter;
- (CDStruct_1b6d18a9)cmtimeToleranceBefore;
- (CDStruct_1b6d18a9)cmtimeDesired;
- (void)playerItemVariantChanged:(id)arg1;
- (void)dealloc;
- (id)initWithPlayerItem:(id)arg1 maximumImageSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

