//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMHomeInvitation.h>

@class HMThreadSafeMutableArrayCollection, HMUser, NSArray;

@interface HMOutgoingHomeInvitation : HMHomeInvitation
{
    HMThreadSafeMutableArrayCollection *_accessoryInvitations;
    HMUser *_invitee;
}

+ (_Bool)supportsSecureCoding;
+ (id)homeInvitationsFromData:(id)arg1 home:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2;
@property(readonly, nonatomic) HMUser *invitee; // @synthesize invitee=_invitee;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (void)_cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *accessoryInvitations;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;

@end

