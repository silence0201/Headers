//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HAPMetadata, NSArray, NSDictionary, NSNumber;

@interface HMDHAPMetadata : NSObject <NSSecureCoding>
{
    _Bool _incomplete;
    NSNumber *_version;
    NSNumber *_schemaVersion;
    HAPMetadata *_hapMetadata;
    NSArray *_hapValueUnits;
    NSArray *_hapProperties;
    NSArray *_hapCharacteristics;
    NSArray *_hapServices;
    NSArray *_hapSupportsAuthDataTuples;
    NSArray *_hmRequiresDeviceUnlockTuples;
    NSArray *_hmAccessoryCategories;
    NSArray *_hmBlacklistedServices;
    NSArray *_hmBlacklistedCharacteristics;
    NSArray *_hmServicesBlacklistedFromApp;
    NSArray *_hmCharacteristicsBlacklistedFromApp;
    NSArray *_hmNotificationAutoEnabledTuples;
    NSArray *_hmBulletinBoardEnabledTuples;
    NSDictionary *_assistantServices;
    NSArray *_assistantCharacteristics;
    NSDictionary *_assistantUnits;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)setSharedInstance:(id)arg1;
+ (id)getSharedInstance;
+ (id)getBuiltinInstance;
+ (id)initWithURL:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSDictionary *assistantUnits; // @synthesize assistantUnits=_assistantUnits;
@property(retain, nonatomic) NSArray *assistantCharacteristics; // @synthesize assistantCharacteristics=_assistantCharacteristics;
@property(retain, nonatomic) NSDictionary *assistantServices; // @synthesize assistantServices=_assistantServices;
@property(retain, nonatomic) NSArray *hmBulletinBoardEnabledTuples; // @synthesize hmBulletinBoardEnabledTuples=_hmBulletinBoardEnabledTuples;
@property(retain, nonatomic) NSArray *hmNotificationAutoEnabledTuples; // @synthesize hmNotificationAutoEnabledTuples=_hmNotificationAutoEnabledTuples;
@property(retain, nonatomic) NSArray *hmCharacteristicsBlacklistedFromApp; // @synthesize hmCharacteristicsBlacklistedFromApp=_hmCharacteristicsBlacklistedFromApp;
@property(retain, nonatomic) NSArray *hmServicesBlacklistedFromApp; // @synthesize hmServicesBlacklistedFromApp=_hmServicesBlacklistedFromApp;
@property(retain, nonatomic) NSArray *hmBlacklistedCharacteristics; // @synthesize hmBlacklistedCharacteristics=_hmBlacklistedCharacteristics;
@property(retain, nonatomic) NSArray *hmBlacklistedServices; // @synthesize hmBlacklistedServices=_hmBlacklistedServices;
@property(retain, nonatomic) NSArray *hmAccessoryCategories; // @synthesize hmAccessoryCategories=_hmAccessoryCategories;
@property(retain, nonatomic) NSArray *hmRequiresDeviceUnlockTuples; // @synthesize hmRequiresDeviceUnlockTuples=_hmRequiresDeviceUnlockTuples;
@property(retain, nonatomic) NSArray *hapSupportsAuthDataTuples; // @synthesize hapSupportsAuthDataTuples=_hapSupportsAuthDataTuples;
@property(retain, nonatomic) NSArray *hapServices; // @synthesize hapServices=_hapServices;
@property(retain, nonatomic) NSArray *hapCharacteristics; // @synthesize hapCharacteristics=_hapCharacteristics;
@property(retain, nonatomic) NSArray *hapProperties; // @synthesize hapProperties=_hapProperties;
@property(retain, nonatomic) NSArray *hapValueUnits; // @synthesize hapValueUnits=_hapValueUnits;
@property(retain, nonatomic) HAPMetadata *hapMetadata; // @synthesize hapMetadata=_hapMetadata;
@property(nonatomic) _Bool incomplete; // @synthesize incomplete=_incomplete;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)shouldHomeAppShowTileForServiceType:(id)arg1;
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 getActionType:(_Bool)arg3;
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;
- (id)mapFromAssistantUnitName:(id)arg1;
- (id)mapToAssistantUnitName:(id)arg1;
- (id)mapCharacteristicValueType:(id)arg1;
- (id)characteristicValueUnit:(id)arg1;
- (id)getCharacteristicTypeAlias:(id)arg1;
- (id)getAliasedCharacteristicType:(id)arg1;
- (id)getServiceTypeAlias:(id)arg1;
- (id)getAliasedServiceType:(id)arg1;
- (id)mapWriteCharacteristicFromAssistantName:(id)arg1;
- (id)mapReadCharacteristicFromAssistantName:(id)arg1;
- (id)_characteristicTypeFromUTI:(id)arg1;
- (id)mapToAssistantCharacteristicName:(id)arg1;
- (id)mapFromAssistantServiceName:(id)arg1;
- (id)mapToAssistantServiceName:(id)arg1;
- (_Bool)supportsLocalization:(id)arg1;
- (id)descriptionForCharacteristicType:(id)arg1;
- (id)descriptionForServiceType:(id)arg1;
- (_Bool)shouldAllowHomeNotificationForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (_Bool)isStandardServiceType:(id)arg1;
- (_Bool)isStandardCharacteristicType:(id)arg1;
- (_Bool)shouldAutoEnableNotificationForCharacteristic:(id)arg1 ofService:(id)arg2;
- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;
- (_Bool)shouldFilterCharacteristicOfTypeFromApp:(id)arg1;
- (_Bool)shouldFilterServiceOfTypeFromApp:(id)arg1;
- (_Bool)shouldFilterCharacteristicOfType:(id)arg1;
- (_Bool)shouldFilterServiceOfType:(id)arg1;
- (id)categoryForIdentifier:(id)arg1;
- (id)categoryForOther;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createHAPMetadata:(id)arg1;
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;
- (_Bool)supportsAuthorizationData:(id)arg1 forService:(id)arg2;
- (_Bool)requiresTimedWrite:(id)arg1 forService:(id)arg2;
- (_Bool)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;
- (id)generateDictionary;
- (id)generateAssistantDictionary;
- (id)generateHMDictionary;
- (id)generateBlacklistedCharacteristics:(id)arg1;
- (id)generateBlacklistedServices:(id)arg1;
- (id)generateCategoriesDictionary:(id)arg1;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (_Bool)checkTuples:(id)arg1 forService:(id)arg2;
- (_Bool)checkTuples:(id)arg1 forCharacteristic:(id)arg2 service:(id)arg3;
- (id)generateHMDHAPMetadataTupleArrayFromDict:(id)arg1;
- (_Bool)parseAssistantMetadata:(id)arg1;
- (id)parseAssistantCharacteristics:(id)arg1;
- (id)parseAssistantUnits:(id)arg1;
- (id)parseHAPAssistantServices:(id)arg1;
- (_Bool)parseHMMetadata:(id)arg1;
- (_Bool)parseBlacklistedServices:(id)arg1 fromApplication:(_Bool)arg2;
- (_Bool)parseCategories:(id)arg1;
- (_Bool)parseNotificationMetadata:(id)arg1;
- (_Bool)parseRequiresDeviceUnlockMetadata:(id)arg1;
- (void)createHMDContainersForHAPMetadata;
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;
- (void)augmentMissingInformation:(id)arg1;
- (id)aliasedHAPServiceTypes;
- (id)aliasedHAPCharacteristicTypes;

@end

