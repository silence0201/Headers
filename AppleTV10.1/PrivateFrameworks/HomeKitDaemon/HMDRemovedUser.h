//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDUser, NSDate;

@interface HMDRemovedUser : NSObject <NSSecureCoding>
{
    HMDUser *_user;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)removedUserWithUser:(id)arg1;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToUser:(id)arg1;
- (_Bool)isEqualToUserID:(id)arg1;
- (_Bool)isExpired;
- (id)description;
- (id)initWithUser:(id)arg1 expiration:(id)arg2;

@end

