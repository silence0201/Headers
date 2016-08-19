//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKRecordID, CKShareID, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CKRecord : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_values;
    NSMutableDictionary *_originalValues;
    NSMutableSet *_changedKeysSet;
    _Bool _hasUpdatedShareID;
    _Bool _trackChanges;
    _Bool _knownToServer;
    _Bool _wasCached;
    _Bool _serializeProtectionData;
    _Bool _useLightweightPCS;
    NSString *_recordType;
    CKRecordID *_recordID;
    CKRecordID *_creatorUserRecordID;
    NSDate *_creationDate;
    CKRecordID *_lastModifiedUserRecordID;
    NSDate *_modificationDate;
    NSString *_modifiedByDevice;
    NSString *_etag;
    NSArray *_conflictLoserEtags;
    NSData *_protectionData;
    NSString *_previousProtectionEtag;
    NSString *_protectionEtag;
    NSString *_zoneProtectionEtag;
    NSString *_shareProtectionEtag;
    CKShareID *_shareID;
    CKShareID *_fakeShareID;
    CKShareID *_previousShareID;
    long long _permission;
    NSDictionary *_pluginFields;
    CKContainerID *_containerID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)accessInstanceVariablesDirectly;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(copy, nonatomic) NSDictionary *pluginFields; // @synthesize pluginFields=_pluginFields;
@property long long permission; // @synthesize permission=_permission;
@property(retain, nonatomic) CKShareID *previousShareID; // @synthesize previousShareID=_previousShareID;
@property(retain, nonatomic) CKShareID *fakeShareID; // @synthesize fakeShareID=_fakeShareID;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(nonatomic) _Bool useLightweightPCS; // @synthesize useLightweightPCS=_useLightweightPCS;
@property(retain, nonatomic) NSString *shareProtectionEtag; // @synthesize shareProtectionEtag=_shareProtectionEtag;
@property(retain, nonatomic) NSString *zoneProtectionEtag; // @synthesize zoneProtectionEtag=_zoneProtectionEtag;
@property(retain, nonatomic) NSString *protectionEtag; // @synthesize protectionEtag=_protectionEtag;
@property(retain, nonatomic) NSString *previousProtectionEtag; // @synthesize previousProtectionEtag=_previousProtectionEtag;
@property(retain, nonatomic) NSData *protectionData; // @synthesize protectionData=_protectionData;
@property(nonatomic) _Bool serializeProtectionData; // @synthesize serializeProtectionData=_serializeProtectionData;
@property(nonatomic) _Bool wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic, getter=isKnownToServer) _Bool knownToServer; // @synthesize knownToServer=_knownToServer;
@property(retain, nonatomic) NSSet *changedKeysSet; // @synthesize changedKeysSet=_changedKeysSet;
@property(retain, nonatomic) NSArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(copy, nonatomic) NSString *modifiedByDevice; // @synthesize modifiedByDevice=_modifiedByDevice;
@property(nonatomic) _Bool trackChanges; // @synthesize trackChanges=_trackChanges;
@property(retain, nonatomic) NSDictionary *originalValues; // @synthesize originalValues=_originalValues;
@property(retain, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) CKRecordID *lastModifiedUserRecordID; // @synthesize lastModifiedUserRecordID=_lastModifiedUserRecordID;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) CKRecordID *creatorUserRecordID; // @synthesize creatorUserRecordID=_creatorUserRecordID;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) _Bool hasUpdatedShareID; // @synthesize hasUpdatedShareID=_hasUpdatedShareID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (void)CKAssignToContainerWithID:(id)arg1;
@property(readonly, nonatomic) _Bool hasModifiedEncryptedData;
@property(readonly, nonatomic) _Bool hasEncryptedData;
@property(readonly, nonatomic) _Bool hasModifiedPropertiesRequiringEncryption;
@property(readonly, nonatomic) _Bool hasPropertiesRequiringEncryption;
@property(readonly, nonatomic) _Bool containsAssetValues;
- (_Bool)_checkProperties:(_Bool)arg1 withValueCheckBlock:(CDUnknownBlockType)arg2;
- (id)allTokens;
- (id)_allStrings;
- (id)allKeys;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)_validateRecordValue:(id)arg1;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateRecordName:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, copy, nonatomic) NSString *recordChangeTag;
- (void)resetChangedKeys;
- (id)changedKeys;
@property(readonly, nonatomic) unsigned long long size;
- (unsigned long long)_sizeOfRecordValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_sizeOfRecordID:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)debugDescription;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)init;

@end

