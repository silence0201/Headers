//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SFBrowserStateSQLiteStore : NSObject
{
    NSURL *_databaseURL;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSMutableDictionary *_tabUUIDStrings;
    NSMutableDictionary *_browserWindowDatabaseIDs;
}

- (void).cxx_destruct;
- (void)_vacuum;
- (void)setSecureDeleteEnabled:(_Bool)arg1;
- (void)checkPointWriteAheadLog;
- (_Bool)deleteAllSavedStates;
- (void)removeTabWithTabData:(id)arg1;
- (void)updateTabWithTabStateData:(id)arg1;
- (_Bool)deleteTabStateWithBrowserWindowUUID:(id)arg1 andRemoveWindow:(_Bool)arg2;
- (id)readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (id)_readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (void)updateBrowserWindowStateWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_databaseIDForBrowserWindow:(id)arg1;
- (void)_setDatabaseID:(long long)arg1 browserWindow:(id)arg2;
- (_Bool)_isTabStateCached:(id)arg1;
- (void)_cacheUUIDForTabStateData:(id)arg1;
- (id)_tabUUIDsInWindow:(id)arg1;
- (void)updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2;
- (void)_updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2;
- (void)_updateBrowserWindowStateWithDictionary:(id)arg1;
- (id)_sqliteStatementForTabDeleting;
- (void)_insertTabStateWithData:(id)arg1;
- (_Bool)_updateTabStateWithData:(id)arg1;
- (void)_updateOrInsertTabStateWithData:(id)arg1;
- (long long)_saveBrowserWindowStateWithData:(id)arg1;
- (long long)_saveBrowserWindowStateWithDictionary:(id)arg1;
- (id)tabStatesWithBrowserWindowUUID:(id)arg1;
- (void)_readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveTabStateWithDictionary:(id)arg1;
- (id)browserWindowUUIDs;
- (void)closeDatabase;
- (int)_createFreshDatabaseSchema;
- (int)_migrateToSchemaVersion_2;
- (void)_migrateFromLegacyPlistWithPath:(id)arg1;
- (void)_migrateFromLegacyPlistIfNeeded;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (int)_schemaVersion;
- (_Bool)_isDatabaseOpen;
- (void)_closeDatabase;
- (void)_openDatabaseAndCheckIntegrity:(_Bool)arg1;
- (_Bool)_checkDatabaseIntegrity;
- (void)dealloc;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;

@end

