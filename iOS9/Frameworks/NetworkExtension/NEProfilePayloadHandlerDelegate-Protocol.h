//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;
@protocol NEProfilePayloadBaseDelegate;

@protocol NEProfilePayloadHandlerDelegate
- (_Bool)setAppLayerVPNRuleSettings:(NSDictionary *)arg1 withAppIdentifier:(NSString *)arg2;
- (_Bool)setAppLayerVPNUUID:(NSString *)arg1 andSafariDomains:(NSArray *)arg2;
- (_Bool)setProfileInfo:(NSDictionary *)arg1;
- (_Bool)setPayloadInfoCommon:(NSString *)arg1 payloadOrganization:(NSString *)arg2;
- (_Bool)setPayloadInfoIdentity:(id <NEProfilePayloadBaseDelegate>)arg1;
- (NSArray *)getCertificates;
- (_Bool)setCertificates:(NSDictionary *)arg1;
- (NSDictionary *)getPendingCertificateInfo:(id <NEProfilePayloadBaseDelegate>)arg1;
- (NSDictionary *)getPendingCertificateUUIDs:(id <NEProfilePayloadBaseDelegate>)arg1;
- (NSString *)getConfigurationIdentifier;
@end

