//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelArtist, MPModelPlaylist, MPModelRadioStation, NSDate;

@interface MPModelPlayEvent : MPModelObject
{
    NSDate *_datePlayed;
    MPModelAlbum *_album;
    MPModelArtist *_artist;
    MPModelPlaylist *_playlist;
    MPModelRadioStation *_radioStation;
}

+ (id)__MPModelRelationshipPlayEventRadioStation__PROPERTY;
+ (id)__radioStation__KEY;
+ (id)__MPModelRelationshipPlayEventPlaylist__PROPERTY;
+ (id)__playlist__KEY;
+ (id)__MPModelRelationshipPlayEventArtist__PROPERTY;
+ (id)__artist__KEY;
+ (id)__MPModelRelationshipPlayEventAlbum__PROPERTY;
+ (id)__album__KEY;
+ (id)__MPModelPropertyPlayEventDatePlayed__PROPERTY;
+ (id)__datePlayed__KEY;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @synthesize radioStation=_radioStation;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) MPModelArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MPModelAlbum *album; // @synthesize album=_album;
@property(copy, nonatomic) NSDate *datePlayed; // @synthesize datePlayed=_datePlayed;
- (void).cxx_destruct;
- (long long)itemType;

@end

