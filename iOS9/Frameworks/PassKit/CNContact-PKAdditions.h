//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContact.h>

@class CRRecentContact;

@interface CNContact (PKAdditions)
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 district:(id)arg3 postalAddresses:(id)arg4 emailAddresses:(id)arg5 phoneNumbers:(id)arg6;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 district:(id)arg3 labeledValue:(id)arg4 property:(id)arg5;
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 labeledValue:(id)arg3 property:(id)arg4;
+ (id)contactWithPkDictionary:(id)arg1;
+ (id)pkPassbookRequiredKeys;
- (id)pkFullName;
@property(retain, nonatomic) CRRecentContact *recentContact;
- (id)pkSingleLineFormattedContactAddress;
- (id)pkFormattedContactAddress;
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;
- (id)pkDictionaryForProperty:(id)arg1;
@end

