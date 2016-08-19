//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface CNSaveRequest : NSObject <CNObjectValidation>
{
    NSMutableDictionary *_addedContactsByIdentifier;
    NSMutableDictionary *_updatedContactsByIdentifier;
    NSMutableDictionary *_deletedContactsByIdentifier;
    NSString *_meCardIdentifier;
    NSMutableDictionary *_addedGroupsByIdentifier;
    NSMutableDictionary *_updatedGroupsByIdentifier;
    NSMutableDictionary *_deletedGroupsByIdentifier;
    NSMutableDictionary *_addedMembersByGroupIdentifier;
    NSMutableDictionary *_removedMembersByGroupIdentifier;
    NSMutableDictionary *_addedSubgroupsByGroupIdentifier;
    NSMutableDictionary *_removedSubgroupsByGroupIdentifier;
    NSMutableDictionary *_addedContainersByIdentifier;
    NSMutableDictionary *_updatedContainersByIdentifier;
    NSMutableDictionary *_deletedContainersByIdentifier;
    NSMutableDictionary *_movedContainersByIdentifier;
    NSMutableDictionary *_addedAccountContainersByIdentifier;
    NSMutableArray *_contactChangeRequests;
    NSMutableArray *_addedAccounts;
    _Bool _unsafeApplyChangesOnly;
}

@property(readonly, copy, nonatomic) NSArray *addedAccounts; // @synthesize addedAccounts=_addedAccounts;
@property(nonatomic) _Bool unsafeApplyChangesOnly; // @synthesize unsafeApplyChangesOnly=_unsafeApplyChangesOnly;
@property(readonly, copy, nonatomic) NSArray *allAccountIdentifierStrings;
- (id)allAccountIdentifiers;
- (id)allContainerIdentifierStrings:(_Bool *)arg1;
- (id)allContainerIdentifiers:(_Bool *)arg1;
@property(readonly, copy, nonatomic) NSArray *allContainers;
@property(readonly, copy, nonatomic) NSArray *allContactIdentifiers;
@property(readonly, copy, nonatomic) NSArray *allContacts;
@property(readonly, copy, nonatomic) NSArray *allGroupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *allGroups;
- (id)groupWithRemovedSubgroupForGroupIdentifier:(id)arg1;
- (id)groupWithAddedSubgroupForGroupIdentifier:(id)arg1;
- (id)groupWithRemovedMemberForGroupIdentifier:(id)arg1;
- (id)groupWithAddedMemberForGroupIdentifier:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)preferLinkedContactForImage:(id)arg1 inUnifiedContact:(id)arg2;
- (void)preferLinkedContactForName:(id)arg1 inUnifiedContact:(id)arg2;
- (void)unlinkContact:(id)arg1;
- (void)linkContact:(id)arg1 toContact:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *contactChangeRequests;
- (void)updateContainer:(id)arg1;
- (void)deleteContainer:(id)arg1;
- (void)moveContainer:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)addContainer:(id)arg1 toAccountWithIdentifier:(id)arg2;
- (void)addContainer:(id)arg1 toContainerWithIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *movedContainersByParentContainerIdentifier;
@property(readonly, copy, nonatomic) NSArray *updatedContainers;
@property(readonly, copy, nonatomic) NSArray *deletedContainers;
@property(readonly, copy, nonatomic) NSDictionary *addedAccountContainersByParentContainerIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *addedContainersByParentContainerIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *removedSubgroupsByGroupIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *addedSubgroupsByGroupIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *removedMembersByGroupIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *addedMembersByGroupIdentifier;
@property(readonly, copy, nonatomic) NSArray *deletedGroups;
@property(readonly, copy, nonatomic) NSArray *updatedGroups;
@property(readonly, copy, nonatomic) NSDictionary *addedGroupsByContainerIdentifier;
@property(readonly, copy, nonatomic) NSString *meCardIdentifier;
@property(readonly, copy, nonatomic) NSArray *deletedContacts;
@property(readonly, copy, nonatomic) NSArray *updatedContacts;
@property(readonly, copy, nonatomic) NSDictionary *addedContactsByContainerIdentifier;
- (id)_dictionaryOfArraysFromDictionaryOfDictionaries:(id)arg1;
- (id)flattenedDictionaryForDictionaryOfTuples:(id)arg1;
- (void)removeSubgroup:(id)arg1 fromGroup:(id)arg2;
- (void)addSubgroup:(id)arg1 toGroup:(id)arg2;
- (void)removeMember:(id)arg1 fromGroup:(id)arg2;
- (void)addMember:(id)arg1 toGroup:(id)arg2;
- (void)deleteGroup:(id)arg1;
- (void)updateGroup:(id)arg1;
- (void)addGroup:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (_Bool)isValid:(id *)arg1;
- (void)setMeCardIdentifier:(id)arg1;
- (void)deleteContact:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)addContact:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)_insertContact:(id)arg1 intoDictionary:(id)arg2 complementDictionary:(id)arg3;
@property(readonly, copy, nonatomic) NSString *storeIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

