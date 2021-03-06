//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface MPPumpkinProfileMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_pumpkinProfileDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)artworkRequestToken;
@property(readonly, copy, nonatomic) id storeID;
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) _Bool isFollowable;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *biography;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *handle;
@property(readonly, copy, nonatomic) NSDictionary *owner;
@property(readonly, nonatomic) _Bool isOwnerFollowedByCurrentUser;
@property(readonly, nonatomic) _Bool hasOwnerRequestedToFollowCurrentUser;
@property(readonly, nonatomic) _Bool hasCurrentUserRequestedToFollowOwner;
@property(readonly, nonatomic) long long numberOfFollowers;
@property(readonly, nonatomic) long long numberOfFollowees;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPumpkinProfileDictionary:(id)arg1;

@end

