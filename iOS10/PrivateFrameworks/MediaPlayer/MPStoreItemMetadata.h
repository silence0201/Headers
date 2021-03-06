//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPStoreArtworkRequestToken, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_downloadAssetDictionary;
    NSDictionary *_downloadMetadataDictionary;
    _Bool _hasOverrideChildStorePlatformDictionaries;
    NSArray *_overrideChildStorePlatformDictionaries;
    NSDictionary *_storePlatformDictionary;
    MPStoreItemMetadata *_parentStoreItemMetadata;
}

+ (id)storeServerCalendar;
+ (id)artworkRequestTokenForStorePlatformArtworkValue:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) MPStoreItemMetadata *parentStoreItemMetadata; // @synthesize parentStoreItemMetadata=_parentStoreItemMetadata;
- (void).cxx_destruct;
- (id)_storePlatformLastModifiedDateFormatter;
- (id)_storePlatformReleaseDateFormatter;
- (id)metadataWithParentMetadata:(id)arg1;
- (id)metadataWithChildStorePlatformDictionaries:(id)arg1;
- (id)metadataByAppendingMetadata:(id)arg1;
- (id)brickEditorialArtworkRequestToken;
- (id)flowcaseEditorialArtworkRequestToken;
- (id)movieArtworkRequestToken;
- (id)tvShowArtworkRequestToken;
- (id)tvEpisodeArtworkRequestToken;
- (id)editorNotesWithStyle:(id)arg1;
- (id)descriptionTextWithStyle:(id)arg1;
- (id)childStorePlatformDictionaryForStoreID:(id)arg1;
- (id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1;
- (id)artworkRequestTokenForStorePlatformDictionary:(id)arg1;
- (id)avatarArtworkRequestToken;
- (id)artworkRequestTokenForUberArtworkKind:(id)arg1;
- (id)artworkRequestTokenForScreenshotArtwork;
- (id)artworkRequestTokenForEditorialArtworkKind:(id)arg1;
@property(readonly, copy, nonatomic) NSString *nameForDisplay;
@property(readonly, copy, nonatomic) NSString *handle;
@property(readonly, copy, nonatomic) NSString *workName;
@property(readonly, copy, nonatomic) NSString *videoSubtype;
@property(readonly, copy, nonatomic) NSString *versionHash;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSURL *shortURL;
@property(readonly, nonatomic) long long seasonNumber;
@property(readonly, nonatomic) long long episodeCount;
@property(readonly, nonatomic) long long trackNumber;
@property(readonly, nonatomic) long long trackCount;
@property(readonly, copy, nonatomic) id pumpkinProfileID;
@property(readonly, copy, nonatomic) id storeID;
@property(readonly, nonatomic) _Bool showComposer;
@property(readonly, copy, nonatomic) NSNumber *shouldBookmarkPlayPosition;
@property(readonly, copy, nonatomic) NSString *shortName;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSNumber *popularity;
@property(readonly, copy, nonatomic) NSArray *playlistIdentifiers;
@property(readonly, copy, nonatomic) NSArray *offers;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSArray *movieClips;
@property(readonly, nonatomic) long long movieClipsCount;
@property(readonly, nonatomic) long long movementNumber;
@property(readonly, copy, nonatomic) NSString *movementName;
@property(readonly, nonatomic) long long movementCount;
@property(readonly, nonatomic) MPStoreArtworkRequestToken *latestAlbumArtworkRequestToken;
@property(readonly, copy, nonatomic) NSString *iTunesBrandType;
@property(readonly, copy, nonatomic) NSString *itemKind;
@property(readonly, nonatomic) _Bool isPreorder;
- (_Bool)isMasteredForITunes;
@property(readonly, nonatomic, getter=isCompilation) _Bool compilation;
@property(readonly, nonatomic) long long explicitRating;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, copy, nonatomic) NSArray *genreNames;
@property(readonly, nonatomic) _Bool hasSocialPosts;
@property(readonly, nonatomic) _Bool hasLyrics;
@property(readonly, nonatomic) _Bool hasArtistBiography;
@property(readonly, copy, nonatomic) NSDictionary *effectiveStorePlatformDictionary;
@property(readonly, copy, nonatomic) NSString *shortEditorNotes;
@property(readonly, copy, nonatomic) NSString *editorNotes;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long discNumber;
@property(readonly, nonatomic) long long discCount;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) id curatorID;
@property(readonly, copy, nonatomic) NSString *curatorName;
@property(readonly, copy, nonatomic) NSString *copyrightText;
@property(readonly, copy, nonatomic) NSString *composerName;
@property(readonly, copy, nonatomic) id collectionStoreID;
@property(readonly, copy, nonatomic) NSString *collectionName;
@property(readonly, copy, nonatomic) NSArray *childStoreItemMetadatas;
@property(readonly, copy, nonatomic) NSArray *childrenStoreIDs;
@property(readonly, nonatomic, getter=isBeats1) _Bool beats1;
@property(readonly, copy, nonatomic) NSArray *artworkTrackIDs;
@property(readonly, nonatomic) MPStoreArtworkRequestToken *artworkRequestToken;
@property(readonly, copy, nonatomic) NSString *artistUploadedContentType;
@property(readonly, copy, nonatomic) id artistStoreID;
@property(readonly, copy, nonatomic) NSString *artistName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2;
- (id)initWithStorePlatformDictionary:(id)arg1;
- (id)initWithDownloadAssetDictionary:(id)arg1;

@end

