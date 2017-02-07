//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVFigPlaylistNodeConvertible-Protocol.h>
#import <AVFoundation/AVPlaylistNode-Protocol.h>

@class AVPlaylist, AVPlaylistItemInternal, NSArray, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface AVPlaylistItem : NSObject <AVFigPlaylistNodeConvertible, AVPlaylistNode>
{
    AVPlaylistItemInternal *_ivars;
}

+ (void)initialize;
- (void)setLoudnessInfoForAllAudioTracks:(id)arg1;
- (id)loudnessInfoForAllAudioTracks;
- (void)_setEQPreset:(int)arg1;
- (int)_EQPreset;
- (void)setMediaKind:(id)arg1;
- (id)mediaKind;
- (void)setWillNeverSeekBackwardsHint:(_Bool)arg1;
- (_Bool)willNeverSeekBackwardsHint;
- (id)soundCheckVolumeNormalizationGroupingMetadataKey;
- (float)groupingSoundCheckVolumeNormalization;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (float)soundCheckVolumeNormalization;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (long long)playbackLikelyToKeepUpTrigger;
- (void)setPreferredPeakBitRate:(double)arg1;
- (double)preferredPeakBitRate;
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;
- (void)setInitialCurrentTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)initialCurrentTime;
- (void)applyPendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool appliesChangesImmediately;
@property(readonly, nonatomic) __weak AVPlaylist *parentPlaylist;
@property(nonatomic) _Bool includesAllKnownRepresentations;
@property(copy, nonatomic) NSArray *representations;
@property(readonly, nonatomic, getter=_figPlaylistItem) struct OpaqueFigPlaylistItem *figPlaylistItem;
@property(readonly, nonatomic) CDStruct_2bd8379f *figPlaylistNode;
@property(copy, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) id <NSObject><NSCopying><NSSecureCoding> identifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)finalize;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;
- (id)initWithFigPlaylistItem:(struct OpaqueFigPlaylistItem *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

