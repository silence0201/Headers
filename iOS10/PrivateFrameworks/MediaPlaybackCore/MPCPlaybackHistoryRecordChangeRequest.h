//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class MPModelPlayEvent, MPModelSong;

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying>
{
    _Bool _allowsStoreContainerImport;
    MPModelPlayEvent *_playEvent;
    MPModelSong *_song;
    long long _repeatType;
}

@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
@property(retain, nonatomic) MPModelPlayEvent *playEvent; // @synthesize playEvent=_playEvent;
@property(nonatomic) _Bool allowsStoreContainerImport; // @synthesize allowsStoreContainerImport=_allowsStoreContainerImport;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
