//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface _INPBIntentSlotValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _PayloadCallAudioRoutes;
    CDStruct_95bda58d _PayloadCallCapabilitys;
    CDStruct_95bda58d _PayloadCallDestinationTypes;
    CDStruct_95bda58d _PayloadCallRecordTypes;
    CDStruct_95bda58d _PayloadCarAirCirculationModes;
    CDStruct_95bda58d _PayloadCarAudioSources;
    CDStruct_95bda58d _PayloadCarDefrosters;
    CDStruct_95bda58d _PayloadCarSeats;
    CDStruct_95bda58d _PayloadDeviceTypes;
    CDStruct_95bda58d _PayloadFileEntityTypes;
    CDStruct_95bda58d _PayloadFilePropertyNames;
    CDStruct_95bda58d _PayloadFilePropertyQualifiers;
    CDStruct_95bda58d _PayloadFileSearchScopes;
    CDStruct_95bda58d _PayloadFileShareModes;
    CDStruct_95bda58d _PayloadFileTypes;
    CDStruct_95bda58d _PayloadHomeAttributeTypes;
    CDStruct_95bda58d _PayloadHomeAttributeValueTypes;
    CDStruct_95bda58d _PayloadHomeDeviceTypes;
    CDStruct_95bda58d _PayloadHomeEntityTypes;
    CDStruct_95bda58d _PayloadMessageAttributes;
    CDStruct_95bda58d _PayloadPhotoAttributes;
    CDStruct_95bda58d _PayloadPreferredCallProviders;
    struct {
        _Bool *list;
        unsigned long long count;
        unsigned long long size;
    } _PayloadPrimitiveBools;
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _PayloadPrimitiveDoubles;
    CDStruct_95bda58d _PayloadPrimitiveInts;
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _PayloadPrimitiveLongs;
    CDStruct_95bda58d _PayloadRadioTypes;
    CDStruct_95bda58d _PayloadRelativeReferences;
    CDStruct_95bda58d _PayloadRelativeSettings;
    CDStruct_95bda58d _PayloadWorkoutGoalUnitTypes;
    CDStruct_95bda58d _PayloadWorkoutLocationTypes;
    NSMutableArray *_PayloadContactLists;
    NSMutableArray *_PayloadContactValues;
    NSMutableArray *_PayloadCurrencyAmounts;
    NSMutableArray *_PayloadDataStringLists;
    NSMutableArray *_PayloadDataStrings;
    NSMutableArray *_PayloadDateTimeRangeLists;
    NSMutableArray *_PayloadDateTimeRangeValues;
    NSMutableArray *_PayloadDialingContacts;
    NSMutableArray *_PayloadDoubleLists;
    NSMutableArray *_PayloadDoubleValues;
    NSMutableArray *_PayloadFilePropertyValues;
    NSMutableArray *_PayloadFilePropertys;
    NSMutableArray *_PayloadHomeAttributeValues;
    NSMutableArray *_PayloadHomeAttributes;
    NSMutableArray *_PayloadHomeEntitys;
    NSMutableArray *_PayloadIntegerLists;
    NSMutableArray *_PayloadIntegerValues;
    NSMutableArray *_PayloadLocationLists;
    NSMutableArray *_PayloadLocations;
    NSMutableArray *_PayloadLongLists;
    NSMutableArray *_PayloadLongValues;
    NSMutableArray *_PayloadPaymentMethodLists;
    NSMutableArray *_PayloadPaymentMethodValues;
    NSMutableArray *_PayloadPrimitiveStrings;
    NSMutableArray *_PayloadShareDestinations;
    NSMutableArray *_PayloadStringLists;
    NSMutableArray *_PayloadStringValues;
    NSMutableArray *_PayloadTemperatureLists;
    NSMutableArray *_PayloadTemperatureValues;
    int _type;
    CDStruct_f953fb60 _has;
}

+ (Class)PayloadPrimitiveStringType;
+ (Class)PayloadTemperatureListType;
+ (Class)PayloadPaymentMethodListType;
+ (Class)PayloadLongListType;
+ (Class)PayloadDataStringListType;
+ (Class)PayloadLocationListType;
+ (Class)PayloadDateTimeRangeListType;
+ (Class)PayloadContactListType;
+ (Class)PayloadIntegerListType;
+ (Class)PayloadDoubleListType;
+ (Class)PayloadStringListType;
+ (Class)PayloadTemperatureValueType;
+ (Class)PayloadPaymentMethodValueType;
+ (Class)PayloadLongValueType;
+ (Class)PayloadDataStringType;
+ (Class)PayloadLocationType;
+ (Class)PayloadDateTimeRangeValueType;
+ (Class)PayloadContactValueType;
+ (Class)PayloadIntegerValueType;
+ (Class)PayloadDoubleValueType;
+ (Class)PayloadStringValueType;
+ (Class)PayloadDialingContactType;
+ (Class)PayloadShareDestinationType;
+ (Class)PayloadFilePropertyType;
+ (Class)PayloadFilePropertyValueType;
+ (Class)PayloadHomeAttributeType;
+ (Class)PayloadHomeAttributeValueType;
+ (Class)PayloadHomeEntityType;
+ (Class)PayloadCurrencyAmountType;
@property(retain, nonatomic) NSMutableArray *PayloadPrimitiveStrings; // @synthesize PayloadPrimitiveStrings=_PayloadPrimitiveStrings;
@property(retain, nonatomic) NSMutableArray *PayloadTemperatureLists; // @synthesize PayloadTemperatureLists=_PayloadTemperatureLists;
@property(retain, nonatomic) NSMutableArray *PayloadPaymentMethodLists; // @synthesize PayloadPaymentMethodLists=_PayloadPaymentMethodLists;
@property(retain, nonatomic) NSMutableArray *PayloadLongLists; // @synthesize PayloadLongLists=_PayloadLongLists;
@property(retain, nonatomic) NSMutableArray *PayloadDataStringLists; // @synthesize PayloadDataStringLists=_PayloadDataStringLists;
@property(retain, nonatomic) NSMutableArray *PayloadLocationLists; // @synthesize PayloadLocationLists=_PayloadLocationLists;
@property(retain, nonatomic) NSMutableArray *PayloadDateTimeRangeLists; // @synthesize PayloadDateTimeRangeLists=_PayloadDateTimeRangeLists;
@property(retain, nonatomic) NSMutableArray *PayloadContactLists; // @synthesize PayloadContactLists=_PayloadContactLists;
@property(retain, nonatomic) NSMutableArray *PayloadIntegerLists; // @synthesize PayloadIntegerLists=_PayloadIntegerLists;
@property(retain, nonatomic) NSMutableArray *PayloadDoubleLists; // @synthesize PayloadDoubleLists=_PayloadDoubleLists;
@property(retain, nonatomic) NSMutableArray *PayloadStringLists; // @synthesize PayloadStringLists=_PayloadStringLists;
@property(retain, nonatomic) NSMutableArray *PayloadTemperatureValues; // @synthesize PayloadTemperatureValues=_PayloadTemperatureValues;
@property(retain, nonatomic) NSMutableArray *PayloadPaymentMethodValues; // @synthesize PayloadPaymentMethodValues=_PayloadPaymentMethodValues;
@property(retain, nonatomic) NSMutableArray *PayloadLongValues; // @synthesize PayloadLongValues=_PayloadLongValues;
@property(retain, nonatomic) NSMutableArray *PayloadDataStrings; // @synthesize PayloadDataStrings=_PayloadDataStrings;
@property(retain, nonatomic) NSMutableArray *PayloadLocations; // @synthesize PayloadLocations=_PayloadLocations;
@property(retain, nonatomic) NSMutableArray *PayloadDateTimeRangeValues; // @synthesize PayloadDateTimeRangeValues=_PayloadDateTimeRangeValues;
@property(retain, nonatomic) NSMutableArray *PayloadContactValues; // @synthesize PayloadContactValues=_PayloadContactValues;
@property(retain, nonatomic) NSMutableArray *PayloadIntegerValues; // @synthesize PayloadIntegerValues=_PayloadIntegerValues;
@property(retain, nonatomic) NSMutableArray *PayloadDoubleValues; // @synthesize PayloadDoubleValues=_PayloadDoubleValues;
@property(retain, nonatomic) NSMutableArray *PayloadStringValues; // @synthesize PayloadStringValues=_PayloadStringValues;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)PayloadPrimitiveStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadPrimitiveStringsCount;
- (void)addPayloadPrimitiveString:(id)arg1;
- (void)clearPayloadPrimitiveStrings;
- (void)setPayloadPrimitiveDoubles:(double *)arg1 count:(unsigned long long)arg2;
- (double)PayloadPrimitiveDoubleAtIndex:(unsigned long long)arg1;
- (void)addPayloadPrimitiveDouble:(double)arg1;
- (void)clearPayloadPrimitiveDoubles;
@property(readonly, nonatomic) double *PayloadPrimitiveDoubles;
@property(readonly, nonatomic) unsigned long long PayloadPrimitiveDoublesCount;
- (void)setPayloadPrimitiveLongs:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)PayloadPrimitiveLongAtIndex:(unsigned long long)arg1;
- (void)addPayloadPrimitiveLong:(long long)arg1;
- (void)clearPayloadPrimitiveLongs;
@property(readonly, nonatomic) long long *PayloadPrimitiveLongs;
@property(readonly, nonatomic) unsigned long long PayloadPrimitiveLongsCount;
- (void)setPayloadPrimitiveInts:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadPrimitiveIntAtIndex:(unsigned long long)arg1;
- (void)addPayloadPrimitiveInt:(int)arg1;
- (void)clearPayloadPrimitiveInts;
@property(readonly, nonatomic) int *PayloadPrimitiveInts;
@property(readonly, nonatomic) unsigned long long PayloadPrimitiveIntsCount;
- (void)setPayloadPrimitiveBools:(_Bool *)arg1 count:(unsigned long long)arg2;
- (_Bool)PayloadPrimitiveBoolAtIndex:(unsigned long long)arg1;
- (void)addPayloadPrimitiveBool:(_Bool)arg1;
- (void)clearPayloadPrimitiveBools;
@property(readonly, nonatomic) _Bool *PayloadPrimitiveBools;
@property(readonly, nonatomic) unsigned long long PayloadPrimitiveBoolsCount;
- (id)PayloadTemperatureListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadTemperatureListsCount;
- (void)addPayloadTemperatureList:(id)arg1;
- (void)clearPayloadTemperatureLists;
- (id)PayloadPaymentMethodListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadPaymentMethodListsCount;
- (void)addPayloadPaymentMethodList:(id)arg1;
- (void)clearPayloadPaymentMethodLists;
- (id)PayloadLongListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadLongListsCount;
- (void)addPayloadLongList:(id)arg1;
- (void)clearPayloadLongLists;
- (id)PayloadDataStringListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDataStringListsCount;
- (void)addPayloadDataStringList:(id)arg1;
- (void)clearPayloadDataStringLists;
- (id)PayloadLocationListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadLocationListsCount;
- (void)addPayloadLocationList:(id)arg1;
- (void)clearPayloadLocationLists;
- (id)PayloadDateTimeRangeListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDateTimeRangeListsCount;
- (void)addPayloadDateTimeRangeList:(id)arg1;
- (void)clearPayloadDateTimeRangeLists;
- (id)PayloadContactListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadContactListsCount;
- (void)addPayloadContactList:(id)arg1;
- (void)clearPayloadContactLists;
- (id)PayloadIntegerListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadIntegerListsCount;
- (void)addPayloadIntegerList:(id)arg1;
- (void)clearPayloadIntegerLists;
- (id)PayloadDoubleListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDoubleListsCount;
- (void)addPayloadDoubleList:(id)arg1;
- (void)clearPayloadDoubleLists;
- (id)PayloadStringListAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadStringListsCount;
- (void)addPayloadStringList:(id)arg1;
- (void)clearPayloadStringLists;
- (id)PayloadTemperatureValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadTemperatureValuesCount;
- (void)addPayloadTemperatureValue:(id)arg1;
- (void)clearPayloadTemperatureValues;
- (id)PayloadPaymentMethodValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadPaymentMethodValuesCount;
- (void)addPayloadPaymentMethodValue:(id)arg1;
- (void)clearPayloadPaymentMethodValues;
- (id)PayloadLongValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadLongValuesCount;
- (void)addPayloadLongValue:(id)arg1;
- (void)clearPayloadLongValues;
- (id)PayloadDataStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDataStringsCount;
- (void)addPayloadDataString:(id)arg1;
- (void)clearPayloadDataStrings;
- (id)PayloadLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadLocationsCount;
- (void)addPayloadLocation:(id)arg1;
- (void)clearPayloadLocations;
- (id)PayloadDateTimeRangeValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDateTimeRangeValuesCount;
- (void)addPayloadDateTimeRangeValue:(id)arg1;
- (void)clearPayloadDateTimeRangeValues;
- (id)PayloadContactValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadContactValuesCount;
- (void)addPayloadContactValue:(id)arg1;
- (void)clearPayloadContactValues;
- (id)PayloadIntegerValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadIntegerValuesCount;
- (void)addPayloadIntegerValue:(id)arg1;
- (void)clearPayloadIntegerValues;
- (id)PayloadDoubleValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDoubleValuesCount;
- (void)addPayloadDoubleValue:(id)arg1;
- (void)clearPayloadDoubleValues;
- (id)PayloadStringValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadStringValuesCount;
- (void)addPayloadStringValue:(id)arg1;
- (void)clearPayloadStringValues;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;
- (void)setPayloadPreferredCallProviders:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadPreferredCallProviderAtIndex:(unsigned long long)arg1;
- (void)addPayloadPreferredCallProvider:(int)arg1;
- (void)clearPayloadPreferredCallProviders;
@property(readonly, nonatomic) int *PayloadPreferredCallProviders;
@property(readonly, nonatomic) unsigned long long PayloadPreferredCallProvidersCount;
- (void)setPayloadCallDestinationTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadCallDestinationTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadCallDestinationType:(int)arg1;
- (void)clearPayloadCallDestinationTypes;
@property(readonly, nonatomic) int *PayloadCallDestinationTypes;
@property(readonly, nonatomic) unsigned long long PayloadCallDestinationTypesCount;
- (void)setPayloadCallRecordTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadCallRecordTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadCallRecordType:(int)arg1;
- (void)clearPayloadCallRecordTypes;
@property(readonly, nonatomic) int *PayloadCallRecordTypes;
@property(readonly, nonatomic) unsigned long long PayloadCallRecordTypesCount;
- (void)setPayloadCallCapabilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadCallCapabilityAtIndex:(unsigned long long)arg1;
- (void)addPayloadCallCapability:(int)arg1;
- (void)clearPayloadCallCapabilitys;
@property(readonly, nonatomic) int *PayloadCallCapabilitys;
@property(readonly, nonatomic) unsigned long long PayloadCallCapabilitysCount;
- (void)setPayloadCallAudioRoutes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadCallAudioRouteAtIndex:(unsigned long long)arg1;
- (void)addPayloadCallAudioRoute:(int)arg1;
- (void)clearPayloadCallAudioRoutes;
@property(readonly, nonatomic) int *PayloadCallAudioRoutes;
@property(readonly, nonatomic) unsigned long long PayloadCallAudioRoutesCount;
- (id)PayloadDialingContactAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadDialingContactsCount;
- (void)addPayloadDialingContact:(id)arg1;
- (void)clearPayloadDialingContacts;
@property(retain, nonatomic) NSMutableArray *PayloadDialingContacts;
- (void)setPayloadRelativeReferences:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadRelativeReferenceAtIndex:(unsigned long long)arg1;
- (void)addPayloadRelativeReference:(int)arg1;
- (void)clearPayloadRelativeReferences;
@property(readonly, nonatomic) int *PayloadRelativeReferences;
@property(readonly, nonatomic) unsigned long long PayloadRelativeReferencesCount;
- (void)setPayloadCarSeats:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadCarSeatAtIndex:(unsigned long long)arg1;
- (void)addPayloadCarSeat:(int)arg1;
- (void)clearPayloadCarSeats;
@property(readonly, nonatomic) int *PayloadCarSeats;
@property(readonly, nonatomic) unsigned long long PayloadCarSeatsCount;
- (void)setPayloadCarDefrosters:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadCarDefrosterAtIndex:(unsigned long long)arg1;
- (void)addPayloadCarDefroster:(int)arg1;
- (void)clearPayloadCarDefrosters;
@property(readonly, nonatomic) int *PayloadCarDefrosters;
@property(readonly, nonatomic) unsigned long long PayloadCarDefrostersCount;
- (void)setPayloadRelativeSettings:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadRelativeSettingAtIndex:(unsigned long long)arg1;
- (void)addPayloadRelativeSetting:(int)arg1;
- (void)clearPayloadRelativeSettings;
@property(readonly, nonatomic) int *PayloadRelativeSettings;
@property(readonly, nonatomic) unsigned long long PayloadRelativeSettingsCount;
- (void)setPayloadCarAirCirculationModes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadCarAirCirculationModeAtIndex:(unsigned long long)arg1;
- (void)addPayloadCarAirCirculationMode:(int)arg1;
- (void)clearPayloadCarAirCirculationModes;
@property(readonly, nonatomic) int *PayloadCarAirCirculationModes;
@property(readonly, nonatomic) unsigned long long PayloadCarAirCirculationModesCount;
- (void)setPayloadCarAudioSources:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadCarAudioSourceAtIndex:(unsigned long long)arg1;
- (void)addPayloadCarAudioSource:(int)arg1;
- (void)clearPayloadCarAudioSources;
@property(readonly, nonatomic) int *PayloadCarAudioSources;
@property(readonly, nonatomic) unsigned long long PayloadCarAudioSourcesCount;
- (id)PayloadShareDestinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadShareDestinationsCount;
- (void)addPayloadShareDestination:(id)arg1;
- (void)clearPayloadShareDestinations;
@property(retain, nonatomic) NSMutableArray *PayloadShareDestinations;
- (void)setPayloadDeviceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadDeviceTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadDeviceType:(int)arg1;
- (void)clearPayloadDeviceTypes;
@property(readonly, nonatomic) int *PayloadDeviceTypes;
@property(readonly, nonatomic) unsigned long long PayloadDeviceTypesCount;
- (void)setPayloadFileShareModes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadFileShareModeAtIndex:(unsigned long long)arg1;
- (void)addPayloadFileShareMode:(int)arg1;
- (void)clearPayloadFileShareModes;
@property(readonly, nonatomic) int *PayloadFileShareModes;
@property(readonly, nonatomic) unsigned long long PayloadFileShareModesCount;
- (void)setPayloadFileSearchScopes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadFileSearchScopeAtIndex:(unsigned long long)arg1;
- (void)addPayloadFileSearchScope:(int)arg1;
- (void)clearPayloadFileSearchScopes;
@property(readonly, nonatomic) int *PayloadFileSearchScopes;
@property(readonly, nonatomic) unsigned long long PayloadFileSearchScopesCount;
- (id)PayloadFilePropertyAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadFilePropertysCount;
- (void)addPayloadFileProperty:(id)arg1;
- (void)clearPayloadFilePropertys;
@property(retain, nonatomic) NSMutableArray *PayloadFilePropertys;
- (id)PayloadFilePropertyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadFilePropertyValuesCount;
- (void)addPayloadFilePropertyValue:(id)arg1;
- (void)clearPayloadFilePropertyValues;
@property(retain, nonatomic) NSMutableArray *PayloadFilePropertyValues;
- (void)setPayloadFilePropertyQualifiers:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadFilePropertyQualifierAtIndex:(unsigned long long)arg1;
- (void)addPayloadFilePropertyQualifier:(int)arg1;
- (void)clearPayloadFilePropertyQualifiers;
@property(readonly, nonatomic) int *PayloadFilePropertyQualifiers;
@property(readonly, nonatomic) unsigned long long PayloadFilePropertyQualifiersCount;
- (void)setPayloadFilePropertyNames:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadFilePropertyNameAtIndex:(unsigned long long)arg1;
- (void)addPayloadFilePropertyName:(int)arg1;
- (void)clearPayloadFilePropertyNames;
@property(readonly, nonatomic) int *PayloadFilePropertyNames;
@property(readonly, nonatomic) unsigned long long PayloadFilePropertyNamesCount;
- (void)setPayloadFileTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadFileTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadFileType:(int)arg1;
- (void)clearPayloadFileTypes;
@property(readonly, nonatomic) int *PayloadFileTypes;
@property(readonly, nonatomic) unsigned long long PayloadFileTypesCount;
- (void)setPayloadFileEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadFileEntityTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadFileEntityType:(int)arg1;
- (void)clearPayloadFileEntityTypes;
@property(readonly, nonatomic) int *PayloadFileEntityTypes;
@property(readonly, nonatomic) unsigned long long PayloadFileEntityTypesCount;
- (void)setPayloadWorkoutGoalUnitTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadWorkoutGoalUnitTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadWorkoutGoalUnitType:(int)arg1;
- (void)clearPayloadWorkoutGoalUnitTypes;
@property(readonly, nonatomic) int *PayloadWorkoutGoalUnitTypes;
@property(readonly, nonatomic) unsigned long long PayloadWorkoutGoalUnitTypesCount;
- (void)setPayloadWorkoutLocationTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadWorkoutLocationTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadWorkoutLocationType:(int)arg1;
- (void)clearPayloadWorkoutLocationTypes;
@property(readonly, nonatomic) int *PayloadWorkoutLocationTypes;
@property(readonly, nonatomic) unsigned long long PayloadWorkoutLocationTypesCount;
- (id)PayloadHomeAttributeAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadHomeAttributesCount;
- (void)addPayloadHomeAttribute:(id)arg1;
- (void)clearPayloadHomeAttributes;
@property(retain, nonatomic) NSMutableArray *PayloadHomeAttributes;
- (id)PayloadHomeAttributeValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadHomeAttributeValuesCount;
- (void)addPayloadHomeAttributeValue:(id)arg1;
- (void)clearPayloadHomeAttributeValues;
@property(retain, nonatomic) NSMutableArray *PayloadHomeAttributeValues;
- (void)setPayloadHomeAttributeValueTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadHomeAttributeValueTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadHomeAttributeValueType:(int)arg1;
- (void)clearPayloadHomeAttributeValueTypes;
@property(readonly, nonatomic) int *PayloadHomeAttributeValueTypes;
@property(readonly, nonatomic) unsigned long long PayloadHomeAttributeValueTypesCount;
- (void)setPayloadHomeAttributeTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadHomeAttributeTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadHomeAttributeType:(int)arg1;
- (void)clearPayloadHomeAttributeTypes;
@property(readonly, nonatomic) int *PayloadHomeAttributeTypes;
@property(readonly, nonatomic) unsigned long long PayloadHomeAttributeTypesCount;
- (id)PayloadHomeEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadHomeEntitysCount;
- (void)addPayloadHomeEntity:(id)arg1;
- (void)clearPayloadHomeEntitys;
@property(retain, nonatomic) NSMutableArray *PayloadHomeEntitys;
- (void)setPayloadHomeDeviceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadHomeDeviceTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadHomeDeviceType:(int)arg1;
- (void)clearPayloadHomeDeviceTypes;
@property(readonly, nonatomic) int *PayloadHomeDeviceTypes;
@property(readonly, nonatomic) unsigned long long PayloadHomeDeviceTypesCount;
- (void)setPayloadHomeEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadHomeEntityTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadHomeEntityType:(int)arg1;
- (void)clearPayloadHomeEntityTypes;
@property(readonly, nonatomic) int *PayloadHomeEntityTypes;
@property(readonly, nonatomic) unsigned long long PayloadHomeEntityTypesCount;
- (void)setPayloadRadioTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadRadioTypeAtIndex:(unsigned long long)arg1;
- (void)addPayloadRadioType:(int)arg1;
- (void)clearPayloadRadioTypes;
@property(readonly, nonatomic) int *PayloadRadioTypes;
@property(readonly, nonatomic) unsigned long long PayloadRadioTypesCount;
- (void)setPayloadMessageAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadMessageAttributeAtIndex:(unsigned long long)arg1;
- (void)addPayloadMessageAttribute:(int)arg1;
- (void)clearPayloadMessageAttributes;
@property(readonly, nonatomic) int *PayloadMessageAttributes;
@property(readonly, nonatomic) unsigned long long PayloadMessageAttributesCount;
- (id)PayloadCurrencyAmountAtIndex:(unsigned long long)arg1;
- (unsigned long long)PayloadCurrencyAmountsCount;
- (void)addPayloadCurrencyAmount:(id)arg1;
- (void)clearPayloadCurrencyAmounts;
@property(retain, nonatomic) NSMutableArray *PayloadCurrencyAmounts;
- (void)setPayloadPhotoAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)PayloadPhotoAttributeAtIndex:(unsigned long long)arg1;
- (void)addPayloadPhotoAttribute:(int)arg1;
- (void)clearPayloadPhotoAttributes;
@property(readonly, nonatomic) int *PayloadPhotoAttributes;
@property(readonly, nonatomic) unsigned long long PayloadPhotoAttributesCount;

@end

