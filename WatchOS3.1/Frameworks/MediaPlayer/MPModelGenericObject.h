//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelArtist, MPModelPlaylist, MPModelSong;

@interface MPModelGenericObject : MPModelObject
{
    MPModelSong *_song;
    MPModelAlbum *_album;
    MPModelArtist *_artist;
    MPModelPlaylist *_playlist;
}

+ (id)__MPModelRelationshipGenericPlaylist__PROPERTY;
+ (id)__playlist__KEY;
+ (id)__MPModelRelationshipGenericArtist__PROPERTY;
+ (id)__artist__KEY;
+ (id)__MPModelRelationshipGenericAlbum__PROPERTY;
+ (id)__album__KEY;
+ (id)__MPModelRelationshipGenericSong__PROPERTY;
+ (id)__song__KEY;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) MPModelArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MPModelAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (long long)type;

@end

