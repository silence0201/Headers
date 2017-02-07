//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class CKShareMetadata, NSData, NSError, NSString, NSURL;

@interface CKCompleteParticipantVettingOperation : CKOperation
{
    CDUnknownBlockType _completeParticipantVettingCompletionBlock;
    NSError *_verificationError;
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
    NSURL *_reconstructedShareURL;
    CKShareMetadata *_shareMetadata;
}

@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(copy, nonatomic) NSURL *reconstructedShareURL; // @synthesize reconstructedShareURL=_reconstructedShareURL;
@property(copy, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(copy, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(copy, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(copy, nonatomic) NSString *vettingPhone; // @synthesize vettingPhone=_vettingPhone;
@property(copy, nonatomic) NSString *vettingEmail; // @synthesize vettingEmail=_vettingEmail;
@property(copy, nonatomic) NSString *vettingToken; // @synthesize vettingToken=_vettingToken;
@property(retain, nonatomic) NSError *verificationError; // @synthesize verificationError=_verificationError;
@property(copy, nonatomic) CDUnknownBlockType completeParticipantVettingCompletionBlock; // @synthesize completeParticipantVettingCompletionBlock=_completeParticipantVettingCompletionBlock;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithVettingToken:(id)arg1 vettingRecord:(id)arg2;
- (id)init;

@end

