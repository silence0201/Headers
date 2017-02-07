//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CNInstantMessageAddress : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_username;
    NSString *_service;
    NSString *_userIdentifier;
    NSString *_teamIdentifier;
    NSArray *_bundleIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (id)instantMessageAddressWithDictionaryRepresentation:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (_Bool)isValid:(id *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 teamIdentifier:(id)arg4 bundleIdentifiers:(id)arg5;
- (id)initWithUsername:(id)arg1 service:(id)arg2;
- (id)dictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

