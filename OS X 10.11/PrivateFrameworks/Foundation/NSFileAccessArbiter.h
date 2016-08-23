//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileAccessArbiter-Protocol.h>

@class NSFileAccessNode, NSMutableDictionary, NSString;

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter>
{
    struct dispatch_queue_s *_queue;
    BOOL _isSubarbiter;
    NSMutableDictionary *_accessClaimsByID;
    NSMutableDictionary *_subarbitrationClaimsByID;
    NSMutableDictionary *_reactorsByID;
    NSFileAccessNode *_rootNode;
    struct _xpc_connection_s *_superarbitrationServer;
    struct dispatch_source_s *_debugSignalSource;
}

- (void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)cancelAccessClaimForID:(id)arg1;
- (void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(struct _xpc_connection_s *)arg2;
- (void)revokeAccessClaimForID:(id)arg1;
- (struct dispatch_semaphore_s *)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2;
- (void)_registerForDebugInfoRequests;
- (void)_getDebugInformationIncludingEverything:(BOOL)arg1 withString:(id)arg2 fromPid:(int)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)_handleCanceledClient:(struct _xpc_connection_s *)arg1;
- (void)_handleMessage:(void *)arg1 forSubarbitrationClaim:(id)arg2 server:(struct _xpc_connection_s *)arg3;
- (void)_handleMessage:(void *)arg1 fromClient:(struct _xpc_connection_s *)arg2;
- (BOOL)_handleMessage:(void *)arg1 ofKind:(id)arg2 withParameters:(id)arg3 embeddedServer:(struct _xpc_connection_s *)arg4 fromClient:(struct _xpc_connection_s *)arg5;
- (void)_sendSubarbitersMessageWithKind:(id)arg1 parameters:(id)arg2;
- (id)rootNode;
- (void)stopArbitrating;
- (void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(struct _xpc_connection_s *)arg2;
- (void)_removeReactorForID:(id)arg1;
- (void)_willRemoveReactor:(id)arg1;
- (BOOL)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2;
- (void)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(BOOL)arg3 withLastEventID:(id)arg4;
- (void)_tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)_writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)_cancelAccessClaimForID:(id)arg1;
- (void)_grantSubarbitrationClaim:(id)arg1 withServer:(struct _xpc_connection_s *)arg2;
- (void)_revokeAccessClaimForID:(id)arg1 fromLocal:(BOOL)arg2;
- (void)_grantAccessClaim:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 isSubarbiter:(BOOL)arg2 listener:(struct _xpc_connection_s *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
