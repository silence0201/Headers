//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKRecordZoneID, NSData, NSString;

@interface CKRecordZone : NSObject <NSSecureCoding, NSCopying>
{
    int _deviceCount;
    CKRecordZoneID *_zoneID;
    unsigned long long _capabilities;
    NSData *_currentServerContinuationToken;
    NSData *_clientChangeToken;
    NSData *_protectionData;
    NSString *_protectionEtag;
    NSString *_previousProtectionEtag;
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
    CKContainerID *_containerID;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultRecordZone;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(nonatomic) long long metadataQuotaUsage; // @synthesize metadataQuotaUsage=_metadataQuotaUsage;
@property(nonatomic) long long assetQuotaUsage; // @synthesize assetQuotaUsage=_assetQuotaUsage;
@property(retain, nonatomic) NSString *previousProtectionEtag; // @synthesize previousProtectionEtag=_previousProtectionEtag;
@property(retain, nonatomic) NSString *protectionEtag; // @synthesize protectionEtag=_protectionEtag;
@property(retain, nonatomic) NSData *protectionData; // @synthesize protectionData=_protectionData;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSData *currentServerContinuationToken; // @synthesize currentServerContinuationToken=_currentServerContinuationToken;
@property(nonatomic) int deviceCount; // @synthesize deviceCount=_deviceCount;
@property(nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1;
- (id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2;

@end

