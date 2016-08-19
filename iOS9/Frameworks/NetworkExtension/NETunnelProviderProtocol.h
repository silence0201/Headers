//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NETunnelProviderProtocol : NEVPNProtocol
{
    int _reassertTimeout;
    NSDictionary *_providerConfiguration;
    NSString *_providerBundleIdentifier;
    NSString *_pluginType;
    NSString *_authenticationPluginType;
    NSDictionary *_vendorInfo;
    long long _authenticationMethod;
}

+ (_Bool)isLegacyPluginType:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property int reassertTimeout; // @synthesize reassertTimeout=_reassertTimeout;
@property long long authenticationMethod; // @synthesize authenticationMethod=_authenticationMethod;
@property(copy) NSDictionary *vendorInfo; // @synthesize vendorInfo=_vendorInfo;
@property(copy) NSString *authenticationPluginType; // @synthesize authenticationPluginType=_authenticationPluginType;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(copy) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property(copy) NSDictionary *providerConfiguration; // @synthesize providerConfiguration=_providerConfiguration;
- (void).cxx_destruct;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(_Bool)arg2;
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;
- (_Bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;
- (_Bool)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;
- (struct __SCNetworkInterface *)createInterface;
- (id)initFromLegacyDictionary:(id)arg1;
- (void)initFromLegacyDictionaryExtra:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (id)init;
- (void)setPluginType:(id)arg1;

@end

