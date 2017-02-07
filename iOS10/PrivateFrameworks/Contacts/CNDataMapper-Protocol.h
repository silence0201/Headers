//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class CNChangeHistory, CNChangeHistoryFetchRequest, CNContact, CNContactFetchRequest, CNContactStore, CNContactsEnvironment, CNContainer, CNPolicy, CNSaveRequest, NSArray, NSDictionary, NSNumber, NSPredicate, NSString, NSURL;
@protocol CNBatchFetchEnumerator, CNCancelable, CNKeyDescriptor;

@protocol CNDataMapper <NSObject>
- (NSString *)defaultContainerIdentifier;
- (NSArray *)subgroupsOfGroupWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)membersOfGroupWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 error:(id *)arg3;
- (NSArray *)groupsMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)accountsMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (CNPolicy *)policyForContainerWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)serverSearchContainersMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)containersMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(CNSaveRequest *)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)executeSaveRequest:(CNSaveRequest *)arg1 error:(id *)arg2;
- (NSString *)meContactIdentifierWithError:(id *)arg1;
- (NSArray *)contactsForFetchRequest:(CNContactFetchRequest *)arg1 matchInfos:(id *)arg2 error:(id *)arg3;
- (NSArray *)contactsForFetchRequest:(CNContactFetchRequest *)arg1 error:(id *)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (id)initWithContactsEnvironment:(CNContactsEnvironment *)arg1;

@optional
- (NSArray *)_smartGroupsMatchingPredicate:(NSPredicate *)arg1 contactStore:(CNContactStore *)arg2;
- (NSArray *)_smartGroupsForAccountsWithIdentifiers:(NSArray *)arg1 contactStore:(CNContactStore *)arg2;
- (_Bool)_saveCustomPropertyValuesForRemoteRecords:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)_saveAddedCustomProperties:(NSArray *)arg1 deletedCustomProperties:(NSArray *)arg2 error:(id *)arg3;
- (NSURL *)_persistentStoreURLForRecordWithIdentifier:(NSString *)arg1;
- (NSArray *)_infosForAccountsWithIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)_groupsMatchingCoreDataPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)_customPropertyValuesForRecordWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (id)_createInfo;
- (NSArray *)_allCustomProperties;
- (_Bool)clearChangeHistoryForClient:(NSString *)arg1 toSequenceNumber:(long long)arg2 error:(id *)arg3;
- (CNChangeHistory *)changeHistoryWithFetchRequest:(CNChangeHistoryFetchRequest *)arg1 error:(id *)arg2;
- (_Bool)unregisterClientForChangeHistory:(NSString *)arg1 error:(id *)arg2;
- (_Bool)registerClientForChangeHistory:(NSString *)arg1 error:(id *)arg2;
- (NSString *)contactIdentifierWithMatchingDictionary:(NSDictionary *)arg1;
- (NSDictionary *)matchingDictionaryForContact:(CNContact *)arg1;
- (id <CNKeyDescriptor>)descriptorForRequiredKeysForMatchingDictionary;
- (NSDictionary *)userActivityUserInfoForContact:(CNContact *)arg1;
- (CNContact *)contactWithUserActivityUserInfo:(NSDictionary *)arg1 keysToFetch:(NSArray *)arg2;
- (NSArray *)usedLabelsForPropertyWithKey:(NSString *)arg1 error:(id *)arg2;
- (id <CNCancelable>)executeFetchRequest:(CNContactFetchRequest *)arg1 progressiveResults:(void (^)(NSArray *, NSDictionary *))arg2 completion:(void (^)(NSError *))arg3;
- (_Bool)setBestMeIfNeededForGivenName:(NSString *)arg1 familyName:(NSString *)arg2 email:(NSString *)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(CNContact *)arg1 forContainer:(CNContainer *)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(CNContact *)arg1 error:(id *)arg2;
- (NSArray *)groupsWithIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)contactsWithIdentifiers:(NSArray *)arg1 keysToFetch:(NSArray *)arg2 error:(id *)arg3;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2 error:(id *)arg3;
- (NSArray *)contactIdentifiersForFetchRequest:(CNContactFetchRequest *)arg1 error:(id *)arg2;
- (id <CNBatchFetchEnumerator>)batchEnumeratorForFetchRequest:(CNContactFetchRequest *)arg1;
- (void)setNotificationSource:(id)arg1;
- (NSNumber *)unifiedContactCountWithError:(id *)arg1;
- (NSString *)identifierWithError:(id *)arg1;
@end

