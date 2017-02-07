//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>

@class BRCALRowID, BRCAccountSession, BRCClientZone, BRCFSEventsMonitor, BRCPQLConnection, BRCPrivateAppLibrary, BRCRelativePath, BRCSharedAppLibrary, BRCSyncContext, BRCZoneRowID, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL, brc_task_tracker;
@protocol BRCAppLibraryDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAppLibrary : NSObject <BRCForegroundClient>
{
    // Error parsing type: AQ, name: _activeQueries
    // Error parsing type: AQ, name: _activeRecursiveQueries
    // Error parsing type: AQ, name: _activeAliasQueries
    long long _maxLostStamp;
    NSNumber *_deepScanStamp;
    NSMutableDictionary *_pendingFileCoordinators;
    NSMutableSet *_XPCClientsUsingUbiquity;
    NSString *_mangledID;
    BRCAccountSession *_session;
    BRCClientZone *_clientZone;
    NSMutableSet *_targetAppLibraries;
    NSObject<OS_dispatch_queue> *_targetAppLibraryQueue;
    NSMutableSet *_foregroundClients;
    BOOL _needsSave;
    unsigned int _state;
    brc_task_tracker *_tracker;
    id <BRCAppLibraryDelegate> _delegate;
    BRCPQLConnection *_db;
    BRCALRowID *_dbRowID;
    BRCZoneRowID *_zoneRowID;
    NSString *_appLibraryID;
    NSString *_appLibraryIDAndOwner;
    NSString *_ownerName;
    NSNumber *_fileID;
    NSNumber *_generationID;
}

@property(nonatomic) __weak BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(retain, nonatomic) NSNumber *deepScanStamp; // @synthesize deepScanStamp=_deepScanStamp;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) NSString *mangledID; // @synthesize mangledID=_mangledID;
@property(readonly, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, nonatomic) NSString *appLibraryIDAndOwner; // @synthesize appLibraryIDAndOwner=_appLibraryIDAndOwner;
@property(readonly, nonatomic) NSString *appLibraryID; // @synthesize appLibraryID=_appLibraryID;
@property(retain, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;
@property(retain, nonatomic) BRCALRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) id <BRCAppLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxLostStamp; // @synthesize maxLostStamp=_maxLostStamp;
@property(readonly, nonatomic) brc_task_tracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (struct PQLResultSet *)liveAliasesEnumeratorTargetingThisAppLibrary;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (void)_removedAliasItemForTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibraryForAliasItem:(id)arg1;
- (void)_removeAlltargetAppLibraries;
- (void)_resolvetargetAppLibraries;
- (BOOL)isStillTargetingAppLibrary:(id)arg1;
- (id)_aliasAppLibraryTargetSQLPrefix;
- (struct PQLResultSet *)_targetAppLibrariesEnumerator;
@property(readonly, nonatomic) NSString *identifier;
- (void)didReceiveHandoffRequest;
@property(readonly, nonatomic) BRCSyncContext *syncContext;
@property(readonly, nonatomic) BRCSyncContext *syncContextIfExists;
- (void)recomputeShouldEvictState;
@property(readonly, nonatomic) BOOL shouldEvictUploadedItems;
@property(readonly, nonatomic) BOOL isForeground;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (unsigned long long)documentCount;
- (unsigned long long)documentEvictableSizeUsageWithAccessTimeDelta:(double)arg1;
- (unsigned long long)documentEvictableSizeUsage;
- (unsigned long long)documentSizeUsage;
- (BOOL)hasLocalChanges;
- (BOOL)hasUbiquitousDocuments;
- (BOOL)hasDocumentsOrDirectory;
- (BOOL)hasInitialFaultsEverLive;
- (BOOL)hasInitialFaultsLive;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)didCreateDataScopedItem;
- (void)didCreateDocumentScopedItem;
- (void)didFindLostItem:(id)arg1 oldAppLibrary:(id)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)scheduleDeepScan;
- (BOOL)markChildrenLostForItemID:(id)arg1 fileID:(id)arg2;
- (void)continueMarkingChildrenLost;
- (BOOL)markChildrenLostForItemID:(id)arg1 fileID:(id)arg2 startingFromRow:(unsigned long long)arg3 hasMoreWork:(char *)arg4;
- (unsigned long long)allocateLostStampAddingBackoff:(BOOL)arg1;
- (BOOL)isCoordinationPendingForItem:(id)arg1;
- (void)freeFileCoordinationSlotsAfterDelayForRead:(BOOL)arg1;
- (id)coordinatorForItem:(id)arg1 forRead:(BOOL)arg2;
- (void)cancelWriteCoordinatorForItem:(id)arg1;
- (struct PQLResultSet *)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4;
- (struct PQLResultSet *)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeOnlyFolders:(BOOL)arg5 shouldIncludeDocumentsScope:(BOOL)arg6 shouldIncludeDataScope:(BOOL)arg7 shouldIncludeExternalScope:(BOOL)arg8 shouldIncludeTrashScope:(BOOL)arg9 count:(unsigned long long)arg10;
- (id)descriptionWithContext:(id)arg1;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isGreedy;
- (BOOL)hasUbiquityClientsConnected;
- (void)clearStateBits:(unsigned int)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)activate;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)addClientUsingUbiquity:(id)arg1;
- (id)rootItemIDWithoutEnclosures;
- (id)fetchRootItemWithoutEnclosures;
- (id)fetchRootItemWithoutEnclosuresInDB:(id)arg1;
- (void)cancelDeepScan;
- (void)cancelFileProviders;
- (void)cancelFileCoordinators;
- (void)close;
@property(readonly, nonatomic) NSMutableDictionary *plist;
- (void)associateWithClientZone:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (id)initWithName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 zoneRowID:(id)arg4 db:(id)arg5 plist:(id)arg6 session:(id)arg7 initialCreation:(BOOL)arg8 createdRootOnDisk:(BOOL)arg9 createdCZMMoved:(BOOL)arg10 rootFileID:(id)arg11;
- (id)init;
- (void)unregisterQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
- (void)registerQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2;
@property(readonly) BOOL hasActiveAliasQueries;
@property(readonly) BOOL hasActiveRecursiveQueries;
@property(readonly) BOOL hasActiveQueries;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) BRCFSEventsMonitor *fsEventsMonitor;
@property(readonly, nonatomic) BRCRelativePath *root;
@property(readonly, nonatomic) NSString *pathRelativeToRoot;
@property(readonly, nonatomic) NSString *absolutePath;
- (BOOL)includesDataScope;
@property(readonly, nonatomic) unsigned long long syncedFolderType;
@property(readonly, nonatomic) BOOL isiCloudDesktopAppLibrary;
- (BOOL)isDocumentsAppLibrary;
- (BOOL)isDesktopAppLibrary;
@property(readonly, nonatomic) BOOL isCloudDocsAppLibrary;
@property(readonly, nonatomic) BOOL isSharedAppLibrary;
@property(readonly, nonatomic) BOOL isPrivateAppLibrary;
@property(readonly, nonatomic) NSString *logName;
@property(readonly, nonatomic) BRCSharedAppLibrary *asSharedAppLibrary;
@property(readonly, nonatomic) BRCPrivateAppLibrary *asPrivateAppLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
