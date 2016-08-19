//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNVCardPerson-Protocol.h>

@class CNContact, NSArray, NSData, NSDateComponents, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardWritingAdapter : NSObject <CNVCardPerson>
{
    CNContact *_contact;
}

+ (id)descriptorForAllSupportedKeys;
+ (id)adapterWithContact:(id)arg1;
@property(readonly) NSArray *unknownProperties;
@property(readonly) NSString *phonemeData;
@property(readonly) NSString *uid;
@property(readonly) NSString *cardDAVUID;
@property(readonly) NSArray *namesOfParentGroups;
@property(readonly) NSString *note;
@property(readonly) NSArray *relatedNames;
@property(readonly) NSArray *otherDateComponents;
@property(readonly) NSDateComponents *alternateBirthdayComponents;
@property(readonly) NSDateComponents *birthdayComponents;
- (id)largeImageHashOfType:(id)arg1;
@property(readonly) NSData *imageData;
@property(readonly) NSData *largeImageData;
@property(readonly) NSDictionary *largeImageCropRects;
@property(readonly) NSDictionary *imageCropRects;
@property(readonly) NSArray *imageReferences;
- (id)jpegImageDataOfAllowableKinds:(id)arg1 maximumLength:(unsigned long long)arg2 cropRects:(id *)arg3;
- (id)vCardPropertyItemsForProperty:(id)arg1 valueTransform:(CDUnknownBlockType)arg2;
- (id)vCardPropertyItemsForProperty:(id)arg1;
@property(readonly) NSDictionary *activityAlerts;
@property(readonly) NSArray *calendarURIs;
@property(readonly) NSArray *urls;
@property(readonly) NSArray *instantMessagingAddresses;
@property(readonly) NSArray *socialProfiles;
@property(readonly) NSArray *postalAddresses;
@property(readonly) NSArray *phoneNumbers;
@property(readonly) NSArray *emailAddresses;
@property(readonly) int nameOrder;
@property(readonly) _Bool isCompany;
@property(readonly) _Bool isMe;
@property(readonly) NSString *jobTitle;
@property(readonly) NSString *department;
@property(readonly) NSString *companyName;
@property(readonly) NSString *organization;
@property(readonly) NSString *pronunciationLastName;
@property(readonly) NSString *pronunciationFirstName;
@property(readonly) NSString *phoneticLastName;
@property(readonly) NSString *phoneticMiddleName;
@property(readonly) NSString *phoneticFirstName;
@property(readonly) NSString *maidenName;
@property(readonly) NSString *nickname;
@property(readonly) NSString *suffix;
@property(readonly) NSString *title;
@property(readonly) NSString *middleName;
@property(readonly) NSString *lastName;
@property(readonly) NSString *firstName;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

