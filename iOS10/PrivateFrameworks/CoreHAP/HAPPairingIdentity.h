//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/NSSecureCoding-Protocol.h>

@class HAPPairingKey, NSString;

@interface HAPPairingIdentity : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    HAPPairingKey *_publicKey;
    HAPPairingKey *_privateKey;
    unsigned long long _permissions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long permissions; // @synthesize permissions=_permissions;
@property(readonly, nonatomic) HAPPairingKey *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) HAPPairingKey *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4;
- (id)init;

@end
