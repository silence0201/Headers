//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PKTrust : NSObject
{
    struct __SecTrust *_trustRef;
    struct OpaqueSecPolicyRef *_policyRef;
    unsigned int _trustResult;
    int _trustLevel;
    NSDate *_signingDate;
    BOOL _signingDateIsTrusted;
    BOOL _appleRootMode;
    BOOL _allowExpiredCertificates;
    BOOL _allowExpiredRoots;
}

+ (id)stringForTrustLevel:(int)arg1;
- (void)setAllowExpiredRoots:(BOOL)arg1;
- (void)setAllowExpiredCertificates:(BOOL)arg1;
- (BOOL)_isTrustedAsRootCertificate:(struct OpaqueSecCertificateRef *)arg1 inDomain:(unsigned int)arg2;
- (struct OpaqueSecCertificateRef *)_anchorCertificateFromEvaluation;
- (BOOL)_evaluateTrustAtLevel:(int)arg1 isDevelopmentSigned:(char *)arg2;
- (BOOL)_setCurrentPolicyWithOID:(struct cssm_data)arg1;
- (BOOL)_restoreCurrentDateMode;
- (BOOL)_enterDateSignedMode;
- (BOOL)_restoreSystemTrustMode;
- (void)_enterAppleRootMode;
- (id)certificateChain;
- (BOOL)evaluateTrustReturningError:(id *)arg1;
- (int)trustLevel;
- (unsigned int)trustResult;
- (struct __SecTrust *)trustRef;
- (void)dealloc;
- (id)initWithSecTrust:(struct __SecTrust *)arg1 usingAppleRoot:(BOOL)arg2 signatureDate:(id)arg3;
- (id)initWithCertificates:(id)arg1 usingAppleRoot:(BOOL)arg2 signatureDate:(id)arg3;

@end
