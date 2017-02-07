//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPIdentifierSet : NSObject <NSCopying, NSSecureCoding>
{
    long long _deviceLibraryPersistentID;
    long long _homeSharingLibraryID;
    NSString *_globalPlaylistID;
    long long _storeAdamID;
    unsigned long long _storeCloudID;
    NSString *_storeCloudAlbumID;
    NSString *_storeRecommendationID;
    long long _storePurchasedAdamID;
    long long _storeSubscriptionAdamID;
    NSString *_radioStationStringID;
    NSString *_radioStationHash;
    long long _radioStationID;
    NSString *_contentItemID;
    NSString *_lyricsID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(copy, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property(nonatomic) long long radioStationID; // @synthesize radioStationID=_radioStationID;
@property(copy, nonatomic) NSString *radioStationHash; // @synthesize radioStationHash=_radioStationHash;
@property(copy, nonatomic) NSString *radioStationStringID; // @synthesize radioStationStringID=_radioStationStringID;
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(copy, nonatomic) NSString *storeRecommendationID; // @synthesize storeRecommendationID=_storeRecommendationID;
@property(copy, nonatomic) NSString *storeCloudAlbumID; // @synthesize storeCloudAlbumID=_storeCloudAlbumID;
@property(nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(copy, nonatomic) NSString *globalPlaylistID; // @synthesize globalPlaylistID=_globalPlaylistID;
@property(nonatomic) long long homeSharingLibraryID; // @synthesize homeSharingLibraryID=_homeSharingLibraryID;
@property(nonatomic) long long deviceLibraryPersistentID; // @synthesize deviceLibraryPersistentID=_deviceLibraryPersistentID;
- (void).cxx_destruct;
- (void)appendIdentifiersToDescription:(id)arg1 withIdentifiersPrefix:(id)arg2;
- (_Bool)hasCommonIdentifierWithIdentifierSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

