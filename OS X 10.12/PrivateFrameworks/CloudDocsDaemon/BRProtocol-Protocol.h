//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/CKXPCShareDaemon-Protocol.h>

@class CKShare, CKShareMetadata, NSArray, NSDictionary, NSFileHandle, NSObject, NSSet, NSString, NSURL;
@protocol BRItemNotificationReceiving, BRNonLocalVersionReceiving, BROperationClient;

@protocol BRProtocol <CKXPCShareDaemon>
- (void)lookupExcludedExtensionsForLogoutWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)lookupExcludedFilenamesForLogoutWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)_t_migrateAllZonesToClouddocsWithReset:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_setFSEventProcessingState:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_resumeSyncDownOfContainer:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_pauseSyncDownOfContainer:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_clearAllBlockedItemsForContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_blockSyncForContainerID:(NSString *)arg1 withPendingUpgradeToOSName:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)_t_blockSyncUpOfItemWithID:(NSString *)arg1 containerID:(NSString *)arg2 withPendingUpgradeToOSName:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)moveBRSecurityBookmarkAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)updatePrivilegesDescriptor;
- (void)currentSyncedRootURLsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)overwriteAccessTimeForItemAtURL:(NSURL *)arg1 atime:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)boostFilePresenterAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)trashItemAtURL:(NSURL *)arg1 reply:(void (^)(NSURL *, NSError *))arg2;
- (void)removeItemFromDisk:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)presentAcceptDialogsForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(NSError *))arg2;
- (void)presentAcceptDialogsForShareURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyShareURLForShare:(CKShare *)arg2 appName:(NSString *)arg3 reply:(void (^)(CKShare *, NSURL *, NSError *))arg4;
- (void)copyBulkShareIDsAtURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyEtagAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyShortTokenAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyParticipantTokenAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toModifyRecordAccessAtURL:(NSURL *)arg2 allowAccess:(BOOL)arg3 reply:(void (^)(NSData *, NSString *, NSError *))arg4;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toLookupShareParticipants:(NSArray *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toUnshareShare:(CKShare *)arg2 forceDelete:(BOOL)arg3 reply:(void (^)(NSError *))arg4;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toSaveSharingInfo:(CKShare *)arg2 reply:(void (^)(CKShare *, NSError *))arg3;
- (void)createSharingInfoForURL:(NSURL *)arg1 reply:(void (^)(CKShare *, NSError *))arg2;
- (void)copyCurrentUserNameAndEmailWithReply:(void (^)(NSPersonNameComponents *, NSString *, NSError *))arg1;
- (void)copyCurrentUserIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toEvictItemAtURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toPrepFolderForSharingAt:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toUploadAllFilesInContainer:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyAvailableQuotaWithReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingAccessToken:(NSURL *)arg2 reply:(void (^)(NSData *, NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingWebAuthTokenForContainerID:(NSString *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingInfoAtURL:(NSURL *)arg2 reply:(void (^)(CKShare *, NSError *))arg3;
- (void)getiWorkNeedsShareMigrateAtURL:(NSURL *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getiWorkPublishingBadgingStatusAtURL:(NSURL *)arg1 reply:(void (^)(int, NSError *))arg2;
- (void)getiWorkPublishingInfoAtURL:(NSURL *)arg1 reply:(void (^)(BOOL, BOOL, NSString *, NSError *))arg2;
- (void)setiWorkPublishingInfoAtURL:(NSURL *)arg1 publish:(BOOL)arg2 readonly:(BOOL)arg3 reply:(void (^)(NSError *))arg4;
- (void)getTheoriticalContainerURLWithID:(NSString *)arg1 forPID:(int)arg2 reply:(void (^)(NSURL *, NSError *))arg3;
- (void)getTheoriticalContainerURLWithID:(NSString *)arg1 reply:(void (^)(NSURL *, NSError *))arg2;
- (void)getIsContainerWithIDOverQuota:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)getContainerLastServerUpdateWithID:(NSString *)arg1 reply:(void (^)(NSDate *, NSError *))arg2;
- (void)getContainerStatusWithID:(NSString *)arg1 reply:(void (^)(unsigned int, NSError *))arg2;
- (void)getLocalizedLastSyncWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)getLastSyncDateWithReply:(void (^)(NSDate *, NSError *))arg1;
- (void)getApplicationStatusWithAuditToken:(CDStruct_4c969caf)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getApplicationStatusWithPID:(int)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getApplicationStatus:(void (^)(BOOL, NSError *))arg1;
- (void)forceConflictForURL:(NSURL *)arg1 bookmarkData:(NSString *)arg2 forcedEtag:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)getPublishedURLForItemAtURL:(NSURL *)arg1 forStreaming:(BOOL)arg2 requestedTTL:(unsigned long long)arg3 reply:(void (^)(NSURL *, NSDate *, NSError *))arg4;
- (void)getBackReferencingURLForURL:(NSURL *)arg1 reply:(void (^)(NSURL *, BRContainer *, NSError *))arg2;
- (void)getBackReferencingContainerIDsForURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)resolveBookmarkDataToURL:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)getBookmarkDataForURL:(NSURL *)arg1 andAllowAccessByBundleID:(NSString *)arg2 reply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)getBookmarkDataForURL:(NSURL *)arg1 reply:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)jetsamCloudDocsAppsWithReply:(void (^)(NSError *))arg1;
- (void)canImportFoldersWithStatsInCurrentAccount:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getMigrationStatusForPrimaryiCloudAccount:(void (^)(BOOL, NSError *))arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(NSString *)arg2 shouldUpdateAccount:(BOOL)arg3 reply:(void (^)(NSError *))arg4;
- (void)getContainersNeedingUpload:(void (^)(NSSet *, NSError *))arg1;
- (void)currentAccountLogoutWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)currentAccountCreateWithID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)resolveConflictWithName:(NSString *)arg1 atURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)bundleDidAccessExternalDocument:(NSFileHandle *)arg1;
- (void)addExternalDocumentReferenceTo:(NSURL *)arg1 forPid:(int)arg2 inContainer:(NSString *)arg3 underParent:(NSURL *)arg4 reply:(void (^)(NSURL *, NSURL *, NSData *, NSURL *, NSData *, NSError *))arg5;
- (void)getLoggedInUserPropertyValuesForKeys:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)didReceiveHandoffRequestForBundleID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)iCloudDesktopSettingsChangedWithAttributes:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictOldDocumentsWithReply:(void (^)(NSError *))arg1;
- (void)getEvictableSpaceWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)setStorageOpimizationEnabled:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
- (void)hasOptimizeStorageWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)getApplicationDocumentUsageInfoForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id <BRNonLocalVersionReceiving>)arg1 documentURL:(NSURL *)arg2 includeCachedVersions:(BOOL)arg3 reply:(void (^)(id <BRNonLocalVersionSending>, NSURL *, NSError *))arg4;
- (void)getItemUpdateSenderWithReceiver:(id <BRItemNotificationReceiving>)arg1 reply:(void (^)(id <BRItemNotificationSending>, NSDictionary *, NSError *))arg2;
- (void)getAttributeValues:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 reply:(void (^)(NSMutableDictionary *, NSError *))arg3;
- (void)getNotificationInfoAtURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)thumbnailChangedForItemAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)startDownloadItemsAtURLs:(NSArray *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)registerInitialSyncBarrierForID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)deleteAllContentsOfContainerID:(NSString *)arg1 onClient:(BOOL)arg2 onServer:(BOOL)arg3 reply:(void (^)(NSError *))arg4;
- (oneway void)updateContainerMetadataForID:(NSString *)arg1;
- (void)getContainerURLForID:(NSString *)arg1 forPid:(int)arg2 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg3;
- (void)getContainerURLForID:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg2;
- (void)presyncContainerWithID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)checkinUbiquityContainers:(NSArray *)arg1 forBundleID:(NSString *)arg2;
- (oneway void)checkinAskClientIfUsingUbiquity:(BOOL)arg1;
- (void)getContainerForURL:(NSURL *)arg1 reply:(void (^)(BRContainer *, NSError *))arg2;
- (void)getContainersByID:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createContainerWithID:(NSString *)arg1 ownerName:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)waitForFileSystemChangeProcessingWithReply:(void (^)(void))arg1;
- (void)joinShareAtURL:(NSURL *)arg1 reply:(void (^)(NSURL *, NSURL *, NSError *))arg2;
- (void)openFileAtURL:(NSURL *)arg1 appURL:(NSURL *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)readerThrottleBackoffForDocumentAtPath:(NSString *)arg1 containerID:(NSString *)arg2 reply:(void (^)(double, NSError *))arg3;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(void (^)(long long))arg2;
- (void)iWorkForceSyncContainerID:(NSString *)arg1 ownedByMe:(BOOL)arg2 reply:(void (^)(NSError *))arg3;
- (void)forceSyncContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)waitUntilIdle:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)forceSyncWithBarrierContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)healthStatusStringForContainer:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)simulateHealthIssueWithContainer:(NSString *)arg1 status:(NSString *)arg2 brokenStructure:(BOOL)arg3 reply:(void (^)(NSError *))arg4;
- (void)gatherInformationForPath:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)printStatus:(NSFileHandle *)arg1 containerID:(NSString *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)performSelfCheck:(NSFileHandle *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)dumpDatabaseTo:(NSFileHandle *)arg1 containerID:(NSString *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)resetBudgets:(NSSet *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setupInstanceWithDict:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
@end
