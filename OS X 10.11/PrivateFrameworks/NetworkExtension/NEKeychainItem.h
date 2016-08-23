//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding>
{
    NSString *_password;
    NSString *_identifier;
    NSData *_persistentReference;
    BOOL _legacy;
    long long _domain;
    NSString *_accessGroup;
    NEKeychainItem *_oldItem;
}

+ (BOOL)setDomain:(int)arg1 outOldDomain:(int *)arg2;
+ (int)getPreferencesDomainForItemDomain:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly) BOOL legacy; // @synthesize legacy=_legacy;
@property(copy) NEKeychainItem *oldItem; // @synthesize oldItem=_oldItem;
@property(readonly) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property long long domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)migrateFromPreferences:(struct __SCPreferences *)arg1;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;
- (void)remove;
- (BOOL)addOrUpdateWithConfiguration:(id)arg1 passwordType:(long long)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4;
- (id)copyKindForPasswordType:(long long)arg1;
- (id)copyPassword;
- (BOOL)copyDataFromKeychainItem:(void *)arg1 outPassword:(id *)arg2 outIdentifier:(id *)arg3 outPersistentReference:(id *)arg4;
- (BOOL)copyKeychainItem:(struct OpaqueSecKeychainItemRef **)arg1;
- (id)copyQueryWithReturnTypes:(id)arg1;
@property(copy) NSString *password;
@property(copy) NSData *persistentReference;
- (void)setIdentifierInternal:(id)arg1;
@property(copy) NSString *identifier;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2;
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2;

@end
