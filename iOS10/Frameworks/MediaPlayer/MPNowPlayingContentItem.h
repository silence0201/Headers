//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPContentItem.h>

@class NSDate, NSString;

@interface MPNowPlayingContentItem : MPContentItem
{
}

- (long long)_convertToRadioStationType:(int)arg1;
- (int)_convertFromRadioStationType:(long long)arg1;
- (long long)_convertToPlaylistType:(unsigned int)arg1;
- (unsigned int)_convertFromPlaylistType:(long long)arg1;
@property(copy, nonatomic) NSString *profileIdentifier;
@property(copy, nonatomic) NSString *collectionIdentifier;
@property(nonatomic, getter=isExplicitItem) _Bool explicitItem;
@property(copy, nonatomic) NSString *localizedContentRating;
@property(nonatomic) double duration;
@property(nonatomic) long long playCount;
- (void)setRadioStationType:(long long)arg1;
- (long long)radioStationType;
- (void)setPlaylistType:(long long)arg1;
- (long long)playlistType;
@property(copy, nonatomic) NSDate *releaseDate;
@property(nonatomic) long long episodeNumber;
@property(nonatomic) long long seasonNumber;
@property(copy, nonatomic) NSString *directorName;
@property(copy, nonatomic) NSString *albumArtistName;
@property(copy, nonatomic) NSString *trackArtistName;
@property(copy, nonatomic) NSString *albumName;

@end

