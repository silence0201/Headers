//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCTask.h>

#import <Mail/MFEWSPersistFolderHierarchyTaskOperationDelegate-Protocol.h>
#import <Mail/MFEWSSyncFolderHierarchyTaskOperationDelegate-Protocol.h>

@class MFEWSPersistFolderHierarchyTaskOperation, MFEWSPruneFolderHierarchyTaskOperation, MFEWSSyncFolderHierarchyTaskOperation, NSMutableArray, NSMutableSet, NSString;

@interface MFEWSFolderHierarchyReconcileTask : MCTask <MFEWSSyncFolderHierarchyTaskOperationDelegate, MFEWSPersistFolderHierarchyTaskOperationDelegate>
{
    MFEWSSyncFolderHierarchyTaskOperation *_syncFolderHierarchyTaskOperation;
    MFEWSPersistFolderHierarchyTaskOperation *_persistFolderHierarchyTaskOperation;
    NSMutableArray *_pendingBatchesToPersist;
    NSMutableSet *_foundFolderIdStrings;
    NSString *_syncStateToReconcile;
    MFEWSPruneFolderHierarchyTaskOperation *_pruneFolderHierarchyTaskOperation;
}

@property(retain, nonatomic) MFEWSPruneFolderHierarchyTaskOperation *pruneFolderHierarchyTaskOperation; // @synthesize pruneFolderHierarchyTaskOperation=_pruneFolderHierarchyTaskOperation;
@property(copy, nonatomic) NSString *syncStateToReconcile; // @synthesize syncStateToReconcile=_syncStateToReconcile;
- (void).cxx_destruct;
- (void)recalculatePriorities;
- (void)operationFinished:(id)arg1;
- (void)persistFolderHierarchyOperation:(id)arg1 completedBatch:(id)arg2;
- (void)syncFolderHierarchyTaskOperation:(id)arg1 completedBatch:(id)arg2;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
@property(retain, nonatomic) MFEWSPersistFolderHierarchyTaskOperation *persistFolderHierarchyTaskOperation;
@property(retain, nonatomic) MFEWSSyncFolderHierarchyTaskOperation *syncFolderHierarchyTaskOperation;
- (id)init;
- (id)initWithInitialSyncState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

