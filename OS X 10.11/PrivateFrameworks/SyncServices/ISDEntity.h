//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SyncServices/ISDDataObject.h>

#import <SyncServices/NSCoding-Protocol.h>

@class ISDDataClass, ISDFileReference, NSArray, NSDictionary, NSMutableArray, NSString;

@interface ISDEntity : ISDDataObject <NSCoding>
{
    NSString *_name;
    NSString *_parentName;
    ISDDataClass *_dataClass;
    ISDFileReference *_bundleRef;
    NSArray *_attributes;
    NSArray *_relationships;
    NSMutableArray *_propertyDependencies;
    NSString *_uiHelperClassName;
    BOOL _excludeFromAirbagCount;
    int _idNumber;
    NSDictionary *_propertiesByName;
    int _hasPropertiesWithLastModifiedResolutionPolicy;
    NSMutableArray *_versionInfo;
}

+ (void)initialize;
+ (void)cleanupCyclicReferences:(id)arg1;
+ (void)_cleanUp:(id)arg1;
- (void)setVersionInfo:(id)arg1;
- (id)versionInfo;
- (id)propertyWithName:(id)arg1;
- (void)_buildPropertyNameCache;
- (id)displayName;
- (Class)uiHelperClass;
- (id)bundle;
- (id)newListOfRequiredRelationshipNames;
- (id)requiredPropertyNames;
- (BOOL)hasPropertiesWithLastModifiedResolutionPolicy;
- (id)propertyNames;
- (id)primaryRelationships;
- (id)identityKeysForDictionary:(id)arg1;
- (id)identityKeysForDictionary:(id)arg1 minimumAlternate:(int)arg2;
- (id)hashValueOfIdentityKeyValuesForRecord:(id)arg1;
- (id)identityKeysForRecord:(id)arg1 minimumAlternate:(int)arg2;
- (id)identityKeysForRecord:(id)arg1;
- (id)identityKeysForRecord:(id)arg1 identityComponent:(int *)arg2 minimumAlternate:(int)arg3;
- (id)identityKeys;
- (id)identityKeys:(char *)arg1;
- (id)_identityKeys:(int *)arg1;
- (id)relationshipWithName:(id)arg1;
- (id)attributeWithName:(id)arg1;
- (id)propertyDependenciesForPropertyName:(id)arg1;
- (void)setExcludeFromAirbagCount:(BOOL)arg1;
- (BOOL)excludeFromAirbagCount;
- (void)setUIHelperClassName:(id)arg1;
- (id)conflictUIHelperClassName;
- (id)uiHelperClassName;
- (void)addPropertyDependencySet:(id)arg1;
- (id)propertyDependencies;
- (void)setRelationships:(id)arg1;
- (id)relationships;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (void)setBundleRef:(id)arg1;
- (id)bundleRef;
- (void)setDataClass:(id)arg1;
- (id)dataClass;
- (void)setParentName:(id)arg1;
- (id)parentName;
- (id)name;
- (void)_setIdNumber:(int)arg1;
- (BOOL)morphInToObject:(id)arg1;
- (int)idNumber;
- (BOOL)morphInToObjectExceptingProperties:(id)arg1;
- (void)_updatePropertiesFromEntity:(id)arg1 forKey:(id)arg2 didChange:(char *)arg3;
- (id)anchorChildren;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)_createEntityNamePropertyIfNeeded;
- (id)fastDataclass;
- (id)fastName;

@end
