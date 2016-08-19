//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

@interface ABDataCollection : NSObject
{
    void *_addressBook;
    _Bool _runningUnitTests;
    _Bool _isLocalSourceOnly;
    _Bool _isLocalSourceRemaining;
    _Bool _isMeCardSet;
    _Bool _isMeCardHomeAddressSet;
    _Bool _isMeCardWorkAddressSet;
    int _totalContacts;
    int _totalGroups;
    int _totalContactsWithPhotos;
    int _totalContactsWithBirthdays;
    int _totalContactsWithYearOnBirthday;
    int _totalContactsWithAnniversaries;
    NSCountedSet *_sourceTypeScalarKeys;
    NSMutableDictionary *_propertyCountForRecordID;
}

+ (void)logPropertyAdded:(int)arg1 forContact:(void *)arg2;
+ (void)logContactUpdate:(long long)arg1;
+ (void)logContactCreation:(long long)arg1;
+ (_Bool)isEnabled;
@property(retain, nonatomic) NSMutableDictionary *propertyCountForRecordID; // @synthesize propertyCountForRecordID=_propertyCountForRecordID;
@property(nonatomic) int totalContactsWithAnniversaries; // @synthesize totalContactsWithAnniversaries=_totalContactsWithAnniversaries;
@property(nonatomic) int totalContactsWithYearOnBirthday; // @synthesize totalContactsWithYearOnBirthday=_totalContactsWithYearOnBirthday;
@property(nonatomic) int totalContactsWithBirthdays; // @synthesize totalContactsWithBirthdays=_totalContactsWithBirthdays;
@property(nonatomic) int totalContactsWithPhotos; // @synthesize totalContactsWithPhotos=_totalContactsWithPhotos;
@property(nonatomic) _Bool isMeCardWorkAddressSet; // @synthesize isMeCardWorkAddressSet=_isMeCardWorkAddressSet;
@property(nonatomic) _Bool isMeCardHomeAddressSet; // @synthesize isMeCardHomeAddressSet=_isMeCardHomeAddressSet;
@property(nonatomic) _Bool isMeCardSet; // @synthesize isMeCardSet=_isMeCardSet;
@property(nonatomic) _Bool isLocalSourceRemaining; // @synthesize isLocalSourceRemaining=_isLocalSourceRemaining;
@property(nonatomic) _Bool isLocalSourceOnly; // @synthesize isLocalSourceOnly=_isLocalSourceOnly;
@property(retain, nonatomic) NSCountedSet *sourceTypeScalarKeys; // @synthesize sourceTypeScalarKeys=_sourceTypeScalarKeys;
@property(nonatomic) int totalGroups; // @synthesize totalGroups=_totalGroups;
@property(nonatomic) int totalContacts; // @synthesize totalContacts=_totalContacts;
@property(nonatomic) _Bool runningUnitTests; // @synthesize runningUnitTests=_runningUnitTests;
- (void)logTotalContactsWithManualLinks;
- (void)logPropertyCountPerContact;
- (void)logTotalContactsWithYearOnBirthday;
- (void)logTotalContactsWithAnniversary;
- (void)logTotalContactsWithBirthday;
- (void)logTotalContactsWithPhotos;
- (void)logMeCard;
- (void)logSources;
- (id)_sourceTypeAsString:(int)arg1;
- (void)logTotalGroups;
- (void)logTotalContacts;
- (void)logAllData;
- (id)initWithAddressBook:(void *)arg1;

@end

