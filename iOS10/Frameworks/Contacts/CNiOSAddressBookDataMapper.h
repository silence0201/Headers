//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class CNiOSAddressBook, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper>
{
    CNiOSAddressBook *_addressBook;
}

+ (void)initialize;
@property(readonly, nonatomic) CNiOSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (_Bool)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (_Bool)registerClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)batchEnumeratorForFetchRequest:(id)arg1;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)groupsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)_containersMatchingPredicate:(id)arg1 remote:(_Bool)arg2 error:(id *)arg3;
- (id)defaultContainerIdentifierForAddressBook:(void *)arg1;
- (id)defaultContainerIdentifier;
- (void)_postProcessGroupsFromSaveContext:(id)arg1;
- (_Bool)_processSubgroupMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processContactMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processGroupsFromSaveContext:(id)arg1 error:(id *)arg2;
- (void)_postProcessContactsFromSaveContext:(id)arg1;
- (_Bool)_processContactChangeRequestsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processContactsFromSaveContext:(id)arg1 error:(id *)arg2;
- (void)_postProcessContainersFromSaveContext:(id)arg1;
- (_Bool)_processContainersFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processAccountsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchGroupsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchContactsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchContainersInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchAccountsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fechAllRecordsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)canExecuteSaveRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifierWithError:(id *)arg1;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)contactsWithIdentifiers:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 error:(id *)arg3;
- (id)contactsForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)identifierWithError:(id *)arg1;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

