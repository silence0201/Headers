//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISCertificate : NSObject
{
    struct __SecTrust *_trust;
}

- (void)_invalidate;
- (void)setCertificateData:(id)arg1;
- (BOOL)isValid;
- (BOOL)checkData:(id)arg1 againstAppleSignature:(id)arg2;
- (BOOL)checkData:(id)arg1 againstSignature:(id)arg2;
- (void)dealloc;

@end

