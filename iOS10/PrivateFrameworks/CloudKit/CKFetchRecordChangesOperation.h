//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray, NSData, NSMutableDictionary;

@interface CKFetchRecordChangesOperation : CKDatabaseOperation
{
    _Bool _shouldFetchAssetContents;
    _Bool _fetchAllChanges;
    CKRecordZoneID *_recordZoneID;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _fetchRecordChangesCompletionBlock;
    CKServerChangeToken *_resultServerChangeToken;
    NSData *_resultClientChangeTokenData;
    long long _status;
    NSMutableDictionary *_recordErrors;
    CDUnknownBlockType _serverChangeTokenFetchedBlock;
    CDUnknownBlockType _changeTokensUpdatedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType changeTokensUpdatedBlock; // @synthesize changeTokensUpdatedBlock=_changeTokensUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenFetchedBlock; // @synthesize serverChangeTokenFetchedBlock=_serverChangeTokenFetchedBlock;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordChangesCompletionBlock; // @synthesize fetchRecordChangesCompletionBlock=_fetchRecordChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock; // @synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (long long)changeTypesFromSetCallbacks;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (Class)operationInfoClass;
@property(readonly, nonatomic) _Bool moreComing;
- (id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2;
- (id)init;

@end

