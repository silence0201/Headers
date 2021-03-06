//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, NSMutableDictionary, NSString;

@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor
{
    NSArray *_storeIDs;
    NSMutableDictionary *_storeFronts;
    NSString *_startItemID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *startItemID; // @synthesize startItemID=_startItemID;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
- (void).cxx_destruct;
- (id)assetStoreFronts;
- (id)playbackContext;
- (void)setSourceStorefront:(id)arg1 forItemWithStoreID:(id)arg2;
- (void)setEndTime:(double)arg1 forItemWithStoreID:(id)arg2;
- (void)setStartTime:(double)arg1 forItemWithStoreID:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIDs:(id)arg1;

@end

