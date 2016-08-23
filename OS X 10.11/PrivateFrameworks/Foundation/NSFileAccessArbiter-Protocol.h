//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSFileAccessClaim, NSFileSubarbitrationClaim, NSString, NSURL;

@protocol NSFileAccessArbiter <NSObject>
- (void)tiePresenterForID:(id)arg1 toItemAtURL:(NSURL *)arg2;
- (void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(NSString *)arg2 toItemAtURL:(NSURL *)arg3 withClientID:(NSString *)arg4 name:(NSString *)arg5;
- (void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(NSURL *)arg2;
- (void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(NSURL *)arg2;
- (void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(NSURL *)arg2;
- (void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(NSURL *)arg2;
- (void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(NSURL *)arg2;
- (void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)cancelAccessClaimForID:(id)arg1;
- (void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)grantSubarbitrationClaim:(NSFileSubarbitrationClaim *)arg1 withServer:(struct _xpc_connection_s *)arg2;
- (void)revokeAccessClaimForID:(id)arg1;
- (struct dispatch_semaphore_s *)grantAccessClaim:(NSFileAccessClaim *)arg1 synchronouslyIfPossible:(BOOL)arg2;
@end
