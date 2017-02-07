//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface NSFileCoordinator : NSObject
{
    id _accessArbiter;
    id _fileReactor;
    id _purposeID;
    NSURL *_recentFilePresenterURL;
    id _accessClaimIDOrIDs;
    _Bool _isCancelled;
    NSMutableDictionary *_movedItems;
}

+ (id)_canonicalURLForURL:(id)arg1;
+ (id)filePresenters;
+ (void)removeFilePresenter:(id)arg1;
+ (void)addFilePresenter:(id)arg1;
+ (void)_getDebugInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_printDebugInfo;
+ (id)_currentFileCoordinator;
+ (id)_fileProviders;
+ (void)_removeFileProvider:(id)arg1;
+ (void)_addFileProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_addFileProvider:(id)arg1;
+ (void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didChangeWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didDisappearWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didChangeUbiquityWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didReconnectWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didDisconnectWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3;
+ (_Bool)_skipCoordinationWork;
+ (void)_performBarrierAsync:(CDUnknownBlockType)arg1;
+ (void)_performBarrier;
+ (id)_createConnectionToProgressRegistrar;
+ (id)_createConnectionToFileAccessArbiterForQueue:(id)arg1;
+ (void)_stopInProcessFileCoordinationAndProgressServers;
+ (void)_startInProcessFileCoordinationAndProgressServers;
+ (id)_fileAccessArbiterInterface;
+ (void)_setReadingOptions:(unsigned long long)arg1;
+ (void)_removeProcessIdentifierForID:(id)arg1;
+ (void)_addProcessIdentifier:(int)arg1 forID:(id)arg2;
+ (void)_accessProcessIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
+ (unsigned long long)_readingOptions;
+ (_Bool)_provideRecursively;
+ (int)_processIdentifierForID:(id)arg1;
+ (unsigned long long)_responsesForPresenter:(id)arg1;
- (void)cancel;
- (void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)itemAtURL:(id)arg1 willMoveToURL:(id)arg2;
- (void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;
- (void)coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;
- (void)_invokeAccessor:(CDUnknownBlockType)arg1 thenCompletionHandler:(CDUnknownBlockType)arg2;
@property(copy) NSString *purposeIdentifier;
- (void)dealloc;
- (id)initWithFilePresenter:(id)arg1;
- (id)init;
- (void)releaseAccess:(id)arg1;
- (id)retainAccess;
- (void)_setPurposeIdentifier:(id)arg1;
- (_Bool)_purposeIdentifierLockedDown;
- (void)_lockdownPurposeIdentifier;
- (void)_setFileProvider:(id)arg1;
- (void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 byAccessor:(CDUnknownBlockType)arg5;
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(CDUnknownBlockType)arg6;
- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(CDUnknownBlockType)arg6;
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(CDUnknownBlockType)arg4;
- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(CDUnknownBlockType)arg4;
- (void)_itemDidChangeAtURL:(id)arg1;
- (void)_itemDidDisappearAtURL:(id)arg1;
- (void)_ubiquityDidChangeForItemAtURL:(id)arg1;
- (void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)_itemAtURL:(id)arg1 willMoveToURL:(id)arg2;
- (void)_coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;
- (void)_withAccessArbiter:(id)arg1 invokeAccessor:(CDUnknownBlockType)arg2 orDont:(_Bool)arg3 andRelinquishAccessClaim:(id)arg4;
- (void)_didEndWrite:(id)arg1;
- (id)_willStartWriteWithIntents:(id)arg1 async:(_Bool)arg2;
- (void)_blockOnAccessClaim:(id)arg1 withAccessArbiter:(id)arg2;
- (void)_forgetAccessClaimForID:(id)arg1;
- (void)_requestAccessClaim:(id)arg1 withProcedure:(CDUnknownBlockType)arg2;

@end

