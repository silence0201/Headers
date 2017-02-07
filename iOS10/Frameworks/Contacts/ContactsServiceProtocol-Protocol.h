//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CNChangeHistoryFetchRequest, CNContact, CNContactFetchRequest, CNContainer, CNSaveRequest, NSArray, NSData, NSDictionary, NSNumber, NSPredicate, NSString;
@protocol ProgressiveResultsHandlerProtocol;

@protocol ContactsServiceProtocol
- (void)clearChangeHistoryForClient:(NSString *)arg1 toSequenceNSNumber:(NSNumber *)arg2 withReply:(void (^)(NSNumber *, NSError *))arg3;
- (void)changeHistoryWithFetchRequest:(CNChangeHistoryFetchRequest *)arg1 withReply:(void (^)(CNChangeHistory *, NSError *))arg2;
- (void)unregisterClientForChangeHistory:(NSString *)arg1 withReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)registerClientForChangeHistory:(NSString *)arg1 withReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)writeFavoritesPropertyListData:(NSData *)arg1 toPath:(NSString *)arg2 withReply:(void (^)(_Bool, NSError *))arg3;
- (void)favoritesEntryDictionariesAtPath:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)userActivityForContact:(CNContact *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)contactWithUserActivityUserInfo:(NSDictionary *)arg1 keysToFetch:(NSArray *)arg2 withReply:(void (^)(CNContact *))arg3;
- (void)setBestMeIfNeededForGivenName:(NSString *)arg1 familyName:(NSString *)arg2 email:(NSString *)arg3 withReply:(void (^)(NSNumber *, NSError *))arg4;
- (void)setMeContact:(CNContact *)arg1 forContainer:(CNContainer *)arg2 withReply:(void (^)(NSNumber *, NSError *))arg3;
- (void)setMeContact:(CNContact *)arg1 withReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)defaultContainerIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)subgroupsOfGroupWithIdentifier:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)membersOfGroupWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)groupsMatchingPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)accountsMatchingPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)policyForContainerWithIdentifier:(NSString *)arg1 withReply:(void (^)(CNPolicy *, NSError *))arg2;
- (void)serverSearchContainersMatchingPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)containersMatchingPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)executeSaveRequest:(CNSaveRequest *)arg1 withReply:(void (^)(_Bool, CNSaveResponse *, NSError *))arg2;
- (void)meContactIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)progressiveContactsForFetchRequest:(CNContactFetchRequest *)arg1 progressHandler:(id <ProgressiveResultsHandlerProtocol>)arg2 reply:(void (^)(id <CNCancelable>))arg3;
- (void)contactsForFetchRequest:(CNContactFetchRequest *)arg1 withMatchInfoReply:(void (^)(NSArray *, NSDictionary *, NSArray *, NSError *))arg2;
- (void)unifiedContactCountWithReply:(void (^)(NSNumber *, NSError *))arg1;
- (void)identifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)configureStoreWithOptions:(NSDictionary *)arg1 withReply:(void (^)(void))arg2;
@end

