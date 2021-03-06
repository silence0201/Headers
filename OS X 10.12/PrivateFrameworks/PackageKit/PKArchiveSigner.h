//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKArchiveSigner : NSObject
{
    NSString *_algorithmType;
    struct OpaqueSecKeyRef *_privateKeyRef;
    unsigned long long _signing_context;
    struct _CMSEncoder *_encoder;
    struct __CFDictionary *_tsaContext;
    int _signatureSize;
}

- (id)signatureDataBySigningData:(id)arg1;
- (void)setSignatureSize:(int)arg1;
- (int)signatureSize;
- (void)dealloc;
- (id)initWithSigningIdentity:(struct OpaqueSecIdentityRef *)arg1 algorithm:(id)arg2 usingTSAIfSupported:(BOOL)arg3;

@end

