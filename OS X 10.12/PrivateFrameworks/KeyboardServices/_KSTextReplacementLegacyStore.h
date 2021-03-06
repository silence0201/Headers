//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/NSManagedObjectContextFaultingDelegate-Protocol.h>
#import <KeyboardServices/_KSTextReplacementStoreProtocol-Protocol.h>

@class NSDate, NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface _KSTextReplacementLegacyStore : NSObject <NSManagedObjectContextFaultingDelegate, _KSTextReplacementStoreProtocol>
{
    NSObject<OS_os_transaction> *_uptimeTransaction;
    BOOL _suspendedForAccountChange;
    BOOL _forceMaintenance;
    BOOL _pendingSampleShortcutImport;
    BOOL _minimumUptimeDidExpire;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStore *_persistentStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSDate *_lastMaintenanceDate;
    long long _importedSinceMaintenance;
    NSURL *_baseURL;
    NSDate *_persistentStoreDidLoadTime;
}

+ (id)basePersistentStoreURL;
+ (id)legacyStorePath;
+ (id)legacyImportWordKeyPairsFromFiles:(id)arg1;
+ (id)legacyImportFilePaths;
+ (id)textReplacementEntriesFromManagedObjects:(id)arg1;
@property(retain, nonatomic) NSDate *persistentStoreDidLoadTime; // @synthesize persistentStoreDidLoadTime=_persistentStoreDidLoadTime;
@property(nonatomic) BOOL minimumUptimeDidExpire; // @synthesize minimumUptimeDidExpire=_minimumUptimeDidExpire;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) BOOL pendingSampleShortcutImport; // @synthesize pendingSampleShortcutImport=_pendingSampleShortcutImport;
@property(nonatomic) long long importedSinceMaintenance; // @synthesize importedSinceMaintenance=_importedSinceMaintenance;
@property(retain, nonatomic) NSDate *lastMaintenanceDate; // @synthesize lastMaintenanceDate=_lastMaintenanceDate;
@property(nonatomic) BOOL forceMaintenance; // @synthesize forceMaintenance=_forceMaintenance;
@property(nonatomic) BOOL suspendedForAccountChange; // @synthesize suspendedForAccountChange=_suspendedForAccountChange;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (void).cxx_destruct;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (void)persistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)persistentStoreCoordinatorStoresWillChange:(id)arg1;
- (void)migrateSundanceData;
- (void)migrateTellurideData;
- (void)importLegacyEntries;
- (void)_deleteDuplicatesOfShortcut:(id)arg1 phrase:(id)arg2 count:(long long)arg3 withContext:(id)arg4;
- (BOOL)detectAndCleanDuplicatesWithContext:(id)arg1;
- (void)didMaintenance;
- (void)loadMaintenancePreferencesIfNecessary;
- (BOOL)needsMaintenance;
- (void)performMaintenanceIfNecessary;
- (void)didMergeEntriesForNewUbiquityIdentity:(id)arg1;
- (BOOL)mergeEntriesForUbiquityIdentityChangeIfNecessary;
- (void)didMergeEntriesForOtherLocalPeers:(id)arg1;
- (BOOL)mergeEntriesFromAllStoresIncludeLocalVariations:(BOOL)arg1;
- (id)currentStoreIndentity;
- (BOOL)mergeEntriesForUbiquityIdentityChangeFromURL:(id)arg1 firstDelete:(BOOL)arg2;
- (id)storeURLForMergeAfterUbiquityIdentityChangeFromToken:(id)arg1 toToken:(id)arg2 withLastKnownToken:(id)arg3 shouldDeleteFirst:(char *)arg4;
- (void)retirePersistentStoreAtURL:(id)arg1;
- (BOOL)migrateEntriesFromStoreAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)_mergeShortcut:(id)arg1 phrase:(id)arg2 fromContext:(id)arg3;
- (BOOL)_shouldMergeShortcut:(id)arg1 phrase:(id)arg2 intoContext:(id)arg3;
- (id)mergeShortcutsFromContext:(id)arg1;
- (void)persistentStoreDidImportUbiquitousContentChanges:(id)arg1;
- (id)entriesUsingSortDescriptors:(id)arg1;
- (id)entriesMatchingPredicate:(id)arg1;
- (id)entriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (BOOL)save;
- (void)insertEntryWithValue:(id)arg1;
- (id)entityDescription;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (id)_deleteTransaction:(id)arg1;
- (id)removeEntriesWithPredicate:(id)arg1;
- (void)removeAllEntries;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)runMaintenanceIncludeLocalVariations:(BOOL)arg1;
- (void)prepareForMigration;
- (void)importSampleShortcutsIfNecessary;
- (void)endMinimumUptime;
- (void)requestMinimumUptime;
- (void)loadPersistentStoreIfNecessary;
- (void)cleanup;
- (double)minimumUptimeRemaining;
- (id)init;
- (id)initWithBaseURL:(id)arg1;
- (void)dealloc;
- (id)managedObjectModelURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

