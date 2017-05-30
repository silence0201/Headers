//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPContentItem.h>

@class NSDate, NSString;
@protocol MPNowPlayingContentItemDescriptionDataSource, MPNowPlayingContentItemLanguageOptionDataSource, MPNowPlayingContentItemLyricsDataSource;

@interface MPNowPlayingContentItem : MPContentItem
{
    id <MPNowPlayingContentItemLyricsDataSource> _lyricsDataSource;
    id <MPNowPlayingContentItemDescriptionDataSource> _descriptionDataSource;
    id <MPNowPlayingContentItemLanguageOptionDataSource> _languageOptionDataSource;
}

- (void).cxx_destruct;
- (unsigned int)_convertFromEditingStyleFlags:(long long)arg1;
- (long long)_convertToEditingStyleFlags:(unsigned int)arg1;
- (long long)_convertToRadioStationType:(unsigned int)arg1;
- (unsigned int)_convertFromRadioStationType:(long long)arg1;
- (long long)_convertToPlaylistType:(unsigned int)arg1;
- (unsigned int)_convertFromPlaylistType:(long long)arg1;
- (id)languageOptionDataSource;
- (void)setLanguageOptionDataSource:(id)arg1;
- (id)descriptionDataSource;
- (void)setDescriptionDataSource:(id)arg1;
- (id)lyricsDataSource;
- (void)setLyricsDataSource:(id)arg1;
- (void)setSeriesName:(id)arg1;
- (id)seriesName;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)setEditingStyleFlags:(long long)arg1;
- (long long)editingStyleFlags;
- (void)setLyrics:(id)arg1;
- (id)lyrics;
- (void)setSections:(id)arg1;
- (id)sections;
- (void)setCurrentLanguageOptions:(id)arg1;
- (id)currentLanguageOptions;
- (void)setAvailableLanguageOptions:(id)arg1;
- (id)availableLanguageOptions;
- (void)setInfo:(id)arg1;
- (id)info;
@property(nonatomic) unsigned long long numberOfChildren;
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
- (id)initWithIdentifier:(id)arg1;

@end
