//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, NSMutableDictionary, NSString;
@protocol BRCAccountHandlerDelegate, OS_dispatch_queue;

@interface BRCAccountHandler : NSObject
{
    BRCAccountSession *_session;
    NSString *_currentAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableDictionary *_syncPolicyByFolderType;
    id <BRCAccountHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_pushQueue;
}

+ (BOOL)destroyCurrentAccountSynchronously;
+ (id)primaryiCloudAccountID;
+ (id)primaryiCloudAccount;
+ (id)icloudDriveAccountID;
+ (void)_migrateAccountIfNecessaryForAccountID:(id)arg1;
+ (id)mobileDocsAccountID;
+ (id)dbAccountID;
+ (id)accountIDPath;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *pushQueue; // @synthesize pushQueue=_pushQueue;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <BRCAccountHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)arg1;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)arg1;
- (void)reloadSyncedFolderPolicies;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id *)arg2;
- (void)markMigrationCompletedForDSID:(id)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id *)arg2;
- (void)destroyCurrentSessionSynchronously;
- (void)_updateAccountToAccountID:(id)arg1;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id *)arg2;
- (BOOL)_loadCurrentOnDiskAccountSessionWithError:(id *)arg1;
- (void)_destroyCurrentSessionSynchronously;
- (void)__destroySessionWithIntents:(id)arg1;
- (void)jetsamCloudDocsApps;
- (void)startAndLoadCurrentAccountSynchronously;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (BOOL)setDBAccountID:(id)arg1;
- (void)dealloc;
- (id)init;

@end
