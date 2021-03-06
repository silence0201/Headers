//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol MPCPlaybackIntentDataSource, NSSecureCoding;

@interface MPCPlaybackIntent : NSObject
{
    id <MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
    long long _kind;
    NSString *_title;
    long long _tracklistSource;
    id <NSSecureCoding> _tracklistToken;
    long long _artworkSource;
    id <NSSecureCoding> _artworkToken;
    long long _shuffleMode;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
}

+ (id)tracklistDataSourceForSource:(long long)arg1;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(nonatomic) long long shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(retain, nonatomic) id <NSSecureCoding> artworkToken; // @synthesize artworkToken=_artworkToken;
@property(nonatomic) long long artworkSource; // @synthesize artworkSource=_artworkSource;
@property(retain, nonatomic) id <NSSecureCoding> tracklistToken; // @synthesize tracklistToken=_tracklistToken;
@property(nonatomic) long long tracklistSource; // @synthesize tracklistSource=_tracklistSource;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
- (id)_legacyRepresentationForPlayer:(id)arg1;
- (void)populateItemsForContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)artworkCatalog;
@property(readonly, nonatomic) id <MPCPlaybackIntentDataSource> tracklistDataSource;
- (id)description;

@end

