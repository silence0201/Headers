//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABSpecialGroup.h>

@class NSString;

@interface ABAllGroup : ABSpecialGroup
{
    NSString *_remoteLocation;
}

+ (id)allGroupForRemoteLocation:(id)arg1;
+ (id)allGroup;
+ (id)specialGroupForAddressBook:(id)arg1;
+ (BOOL)_isPublicRecord;
- (id)subscription;
- (BOOL)isSubscribed;
- (id)description;
- (id)remoteLocation;
- (void)markRecordWithGroupSubscription:(id)arg1;
- (id)enclosedSubscriptionGroups;
- (id)icon;
- (id)remoteSubscription;
- (BOOL)isSpecialGroup;
- (BOOL)removeSubgroup:(id)arg1;
- (BOOL)addSubgroup:(id)arg1;
- (id)subgroups;
- (BOOL)removeMember:(id)arg1;
- (BOOL)addMember:(id)arg1;
- (id)members;
- (id)membersAndSubgroups;
- (BOOL)removeValueforProperty:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)sharingUniqueId;
- (void)finalize;
- (void)dealloc;
- (id)initWithRemoteLocation:(id)arg1 addressBook:(id)arg2;
- (id)initWithRemoteLocation:(id)arg1;

@end

