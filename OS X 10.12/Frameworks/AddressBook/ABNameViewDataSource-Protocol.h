//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ABNameViewDataSource <NSObject>
- (NSString *)initials;
- (NSArray *)nameViewKeys;
- (void)setPhoneticLastName:(NSString *)arg1;
- (NSString *)phoneticLastNamePlaceholder;
- (NSString *)phoneticLastName;
- (void)setPhoneticMiddleName:(NSString *)arg1;
- (NSString *)phoneticMiddleNamePlaceholder;
- (NSString *)phoneticMiddleName;
- (void)setPhoneticFirstName:(NSString *)arg1;
- (NSString *)phoneticFirstNamePlaceholder;
- (NSString *)phoneticFirstName;
- (NSString *)phoneticCompleteNamePlaceholder;
- (NSString *)phoneticCompleteName;
- (void)setJobTitle:(NSString *)arg1;
- (NSString *)jobTitlePlaceholder;
- (NSString *)jobTitle;
- (void)setDepartmentName:(NSString *)arg1;
- (NSString *)departmentNamePlaceholder;
- (NSString *)departmentName;
- (void)setPhoneticCompanyName:(NSString *)arg1;
- (NSString *)phoneticCompanyNamePlaceholder;
- (NSString *)phoneticCompanyName;
- (void)setCompanyName:(NSString *)arg1;
- (NSString *)companyNamePlaceholder;
- (NSString *)companyName;
- (void)setNickname:(NSString *)arg1;
- (NSString *)nicknamePlaceholder;
- (NSString *)nickname;
- (void)setNameSuffix:(NSString *)arg1;
- (NSString *)nameSuffixPlaceholder;
- (NSString *)nameSuffix;
- (void)setLastName:(NSString *)arg1;
- (NSString *)lastNamePlaceholder;
- (NSString *)lastName;
- (void)setMiddleName:(NSString *)arg1;
- (NSString *)middleNamePlaceholder;
- (NSString *)middleName;
- (void)setFirstName:(NSString *)arg1;
- (NSString *)firstNamePlaceholder;
- (NSString *)firstName;
- (void)setNameTitle:(NSString *)arg1;
- (NSString *)nameTitlePlaceholder;
- (NSString *)nameTitle;
- (NSString *)completeNamePlaceholder;
- (NSString *)completeName;
- (BOOL)shouldUseUnifiedPlaceholderForKey:(NSString *)arg1;
- (BOOL)shouldOfferPhoneticName;
- (BOOL)allowsPhotoEditing;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)displayStyle;
@end

