//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocolPPP.h>

@class NEIdentityKeychainItem, NEKeychainItem, NSData, NSString;

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP
{
    BOOL _machineIdentityDataImported;
    long long _machineAuthenticationMethod;
    NEKeychainItem *_sharedSecretKeychainItem;
    NSString *_localIdentifier;
    NSData *_machineIdentityDataInternal;
    NEIdentityKeychainItem *_machineIdentity;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NEIdentityKeychainItem *machineIdentity; // @synthesize machineIdentity=_machineIdentity;
@property BOOL machineIdentityDataImported; // @synthesize machineIdentityDataImported=_machineIdentityDataImported;
@property(copy) NSData *machineIdentityDataInternal; // @synthesize machineIdentityDataInternal=_machineIdentityDataInternal;
@property(copy) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(copy) NEKeychainItem *sharedSecretKeychainItem; // @synthesize sharedSecretKeychainItem=_sharedSecretKeychainItem;
@property long long machineAuthenticationMethod; // @synthesize machineAuthenticationMethod=_machineAuthenticationMethod;
- (void).cxx_destruct;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;
- (struct __SCNetworkInterface *)createInterface;
- (void)setIPSecSettingsFromLegacyDictionary:(id)arg1;
- (id)copyLegacyIPSecDictionary;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg1;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(_Bool)arg2;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
@property(copy) NSData *machineIdentityReference;
@property(copy) NSData *sharedSecretReference;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
