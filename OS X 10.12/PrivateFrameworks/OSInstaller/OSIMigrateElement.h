//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

#import <OSInstaller/MigrationProgressEventsListener-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSString, SMPaths;

@interface OSIMigrateElement : OSIInstallQueueElement <MigrationProgressEventsListener>
{
    NSString *_systemRoot;
    NSString *_archiveRoot;
    NSString *_leftOversPath;
    NSMutableArray *_engineFileWarnings;
    NSError *_engineFatalError;
    NSArray *_ignoredFilesInPreviousSystem;
    BOOL _engineIsRunning;
    BOOL _hasStartedMigration;
    BOOL _isServerDisk;
    SMPaths *_pather;
}

+ (BOOL)setupMigrationWithOptions:(id)arg1 error:(id *)arg2;
@property(retain) SMPaths *pather; // @synthesize pather=_pather;
- (void)migrationRequestCompletedState:(unsigned long long)arg1 advancingTo:(unsigned long long)arg2 withErrorsAndWarnings:(id)arg3;
- (void)engineStartedWithRequestUUID:(id)arg1 migrationType:(unsigned long long)arg2;
- (void)engineMinutesRemaining:(id)arg1 transferRate:(id)arg2;
- (void)enginePercentDone:(id)arg1;
- (void)engineProcessingText:(id)arg1;
- (void)engineStarted;
- (BOOL)_cleanupPath:(id)arg1 preservePaths:(id)arg2 saveAllFiles:(BOOL)arg3 onSystem:(id)arg4 error:(id *)arg5 server:(BOOL)arg6;
- (void)_doCleanupOnArchiveReturningError:(id *)arg1 forServer:(BOOL)arg2 onSystem:(id)arg3;
- (BOOL)_createMacBuddyCookie;
- (BOOL)_deleteRegistrationCookie;
- (void)_mergeInstallHistory;
- (double)estimatedTimeToComplete;
- (id)localizedStatusString;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 isServer:(BOOL)arg2;

@end
