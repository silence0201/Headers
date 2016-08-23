//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

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
    BOOL _unsafeApplyChangesOnly;
}

@property(readonly, copy, nonatomic) NSArray *addedAccounts; // @synthesize addedAccounts=_addedAccounts;
@property(nonatomic) BOOL unsafeApplyChangesOnly; // @synthesize unsafeApplyChangesOnly=_unsafeApplyChangesOnly;
@property(readonly, copy, nonatomic) NSArray *allAccountIdentifierStrings;
- (id)allAccountIdentifiers;
- (id)allContainerIdentifierStrings:(char *)arg1;
- (id)allContainerIdentifiers:(char *)arg1;
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
@property(readonly, copy) NSDictionary *movedContainersByParentContainerIdentifier;
@property(readonly, copy) NSArray *updatedContainers;
@property(readonly, copy) NSArray *deletedContainers;
@property(readonly, copy) NSDictionary *addedAccountContainersByParentContainerIdentifier;
@property(readonly, copy) NSDictionary *addedContainersByParentContainerIdentifier;
@property(readonly, copy) NSDictionary *removedSubgroupsByGroupIdentifier;
@property(readonly, copy) NSDictionary *addedSubgroupsByGroupIdentifier;
@property(readonly, copy) NSDictionary *removedMembersByGroupIdentifier;
@property(readonly, copy) NSDictionary *addedMembersByGroupIdentifier;
@property(readonly, copy) NSArray *deletedGroups;
@property(readonly, copy) NSArray *updatedGroups;
@property(readonly, copy) NSDictionary *addedGroupsByContainerIdentifier;
@property(readonly, copy) NSString *meCardIdentifier;
@property(readonly, copy) NSArray *deletedContacts;
@property(readonly, copy) NSArray *updatedContacts;
@property(readonly, copy) NSDictionary *addedContactsByContainerIdentifier;
- (id)_dictionaryOfArraysFromDictionaryOfDictionaries:(id)arg1;
- (id)flattenedDictionaryForDictionaryOfTuples:(id)arg1;
- (void)removeSubgroup:(id)arg1 fromGroup:(id)arg2;
- (void)addSubgroup:(id)arg1 toGroup:(id)arg2;
- (void)removeMember:(id)arg1 fromGroup:(id)arg2;
- (void)addMember:(id)arg1 toGroup:(id)arg2;
- (void)deleteGroup:(id)arg1;
- (void)updateGroup:(id)arg1;
- (void)addGroup:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (BOOL)isValid:(id *)arg1;
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
