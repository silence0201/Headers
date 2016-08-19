//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AddressBookUI/NSCopying-Protocol.h>

@class NSArray, NSData, NSString;

@interface ABUIPerson : NSObject <NSCopying>
{
    void *_record;
    void *_addressBook;
    void *_source;
    NSArray *_linkedPeople;
}

+ (id)personInAddressBook:(void *)arg1;
+ (id)personInSource:(void *)arg1;
+ (id)person;
+ (id)personWithABRecordID:(int)arg1 fromAddressBook:(void *)arg2;
+ (id)personWithABPerson:(void *)arg1;
+ (void)setAccountStore:(id)arg1;
@property(readonly) void *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly) void *source; // @synthesize source=_source;
@property(readonly) void *record; // @synthesize record=_record;
@property(readonly) _Bool isFromFacebook;
@property(readonly) NSString *secondarySourceName;
@property(readonly) NSString *primarySourceName;
@property(readonly) int kind;
- (void)removePropertyValue:(int)arg1;
- (void)setValue:(void *)arg1 forProperty:(int)arg2;
- (void *)copyPropertyValue:(int)arg1;
- (id)valueForProperty:(int)arg1;
@property(readonly) _Bool hasPreferredPhoto;
@property(readonly) _Bool hasPhoto;
- (void)setAsPreferredPersonForPhoto;
@property(readonly) ABUIPerson *preferredPersonForPhoto;
@property(readonly) NSData *preferredPhotoThumbnail;
@property(readonly) NSData *photoThumbnail;
- (void)setAsPreferredPersonForName;
@property(readonly) ABUIPerson *preferredPersonForName;
@property(readonly) NSString *preferredName;
- (id)nameIgnoringOrganization:(_Bool)arg1;
@property(readonly) NSString *phoneticName;
@property(readonly) NSString *name;
- (id)policiesForAllLinkedPeople;
@property(readonly) void *policy;
- (void)mergeProperties:(id)arg1 fromRecord:(void *)arg2;
- (void)mergeValuesFromRecord:(void *)arg1;
- (_Bool)allowsCustomLabelsForProperty:(int)arg1;
@property(readonly) _Bool isRemote;
@property(readonly) _Bool areAllLinkedPeopleReadonly;
@property(readonly) _Bool isReadonly;
- (_Bool)linkToPerson:(id)arg1;
@property(readonly) unsigned long long linkedPeopleCount;
@property(readonly) NSArray *linkedPeople;
@property(readonly) _Bool hasLinkedPeople;
@property(readonly) _Bool isMeCard;
- (id)reloadFromDB;
@property(readonly) _Bool hasValidRecordID;
@property(readonly) _Bool recordWasDeleted;
- (_Bool)updateNewPersonKindFromName;
- (_Bool)updatePersonKindFromName;
- (_Bool)_updatePersonKindFromNamePreserveOrganizationKind:(_Bool)arg1;
- (void)setNamePropertiesFromPerson:(id)arg1;
- (_Bool)addToGroup:(void *)arg1;
- (_Bool)addToAddressBook:(void *)arg1;
@property(readonly) unsigned int recordType;
@property(readonly) int recordID;
- (id)description;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithABRecordID:(int)arg1 fromAddressBook:(void *)arg2;
- (id)initWithABPerson:(void *)arg1;

@end

