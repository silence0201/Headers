//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LAClient, NSData, NSNumber, NSString;
@protocol LAPrearmContextXPC, LAUIDelegate;

@interface LAContext : NSObject
{
    LAClient *_client;
    id <LAPrearmContextXPC> _prearmContext;
    BOOL _cancelButtonVisible;
    BOOL _fallbackButtonVisible;
    NSNumber *_maxBiometryFailures;
    NSData *_evaluatedPolicyDomainState;
    NSData *_externalizedContext;
}

@property(nonatomic, getter=isFallbackButtonVisible) BOOL fallbackButtonVisible; // @synthesize fallbackButtonVisible=_fallbackButtonVisible;
@property(nonatomic, getter=isCancelButtonVisible) BOOL cancelButtonVisible; // @synthesize cancelButtonVisible=_cancelButtonVisible;
@property(retain, nonatomic) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(retain, nonatomic) NSData *evaluatedPolicyDomainState; // @synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState;
@property(retain, nonatomic) NSNumber *maxBiometryFailures; // @synthesize maxBiometryFailures=_maxBiometryFailures;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) __weak id <LAUIDelegate> uiDelegate;
@property(nonatomic) double touchIDAuthenticationAllowableReuseDuration;
@property(retain, nonatomic) NSNumber *touchIDAuthenticationRetryLimit;
@property(copy, nonatomic) NSString *localizedCancelTitle;
@property(copy, nonatomic) NSString *localizedFallbackTitle;
- (void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2;
- (id)_serverPropertyValueForOption:(long long)arg1;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)prearmTouchIDWithReply:(CDUnknownBlockType)arg1;
- (void)optionsForInternalOperation:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)isCredentialSet:(long long)arg1;
- (BOOL)setCredential:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (BOOL)setCredential:(id)arg1 type:(long long)arg2;
- (void)evaluateAccessControl:(struct OpaqueSecAccessControl *)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluateAccessControl:(struct OpaqueSecAccessControl *)arg1 operation:(long long)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)enterPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)canEvaluatePolicy:(long long)arg1 error:(id *)arg2;
- (id)evaluationMechanismsForPolicy:(long long)arg1 error:(id *)arg2;
- (void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_publicErrorFromInternalError:(id)arg1;
- (id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_hashWithBundleIdentifier:(id)arg1;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;
- (id)initWithUIDelegate:(id)arg1;
- (id)initWithExternalizedContext:(id)arg1;
- (id)init;

@end
