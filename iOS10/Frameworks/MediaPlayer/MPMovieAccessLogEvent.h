//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class AVPlayerItemAccessLogEvent, NSDate, NSString;

@interface MPMovieAccessLogEvent : NSObject <NSCopying>
{
    AVPlayerItemAccessLogEvent *_event;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfDroppedVideoFrames;
@property(readonly, nonatomic) double indicatedBitrate;
@property(readonly, nonatomic) double observedBitrate;
@property(readonly, nonatomic) long long numberOfBytesTransferred;
@property(readonly, nonatomic) long long numberOfStalls;
@property(readonly, nonatomic) double durationWatched;
@property(readonly, nonatomic) double segmentsDownloadedDuration;
@property(readonly, nonatomic) double playbackStartOffset;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) unsigned long long numberOfServerAddressChanges;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSDate *playbackStartDate;
@property(readonly, nonatomic) unsigned long long numberOfSegmentsDownloaded;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAVItemAccessLogEvent:(id)arg1;

@end

