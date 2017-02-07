//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessage.h>

@class HMDHomeKitVersion, NSUUID;

@interface HMDRemoteMessage : HMFMessage
{
    _Bool _secure;
    long long _type;
    NSUUID *_transactionIdentifier;
    double _timeout;
    unsigned long long _restriction;
    HMDHomeKitVersion *_sourceVersion;
}

+ (id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
@property(retain, nonatomic) HMDHomeKitVersion *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(readonly, nonatomic) unsigned long long restriction; // @synthesize restriction=_restriction;
@property(nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSUUID *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setResponseHandler:(CDUnknownBlockType)arg1;
- (_Bool)isRemoteSource;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(_Bool)arg6;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(_Bool)arg6 restriction:(unsigned long long)arg7;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;

@end
