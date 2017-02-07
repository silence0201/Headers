//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContact.h>

@class NSData;

@interface CNContact (ABCompatibility)
+ (int)propertyIDForProperty:(id)arg1;
+ (id)propertyForPropertyID:(int)arg1;
+ (id)propertiesFromPropertyIDs:(id)arg1;
+ (id)contactWithUserActivityUserInfo:(id)arg1 addressBook:(void *)arg2;
+ (id)contactWithStateRestorationCoder:(id)arg1 addressBook:(void *)arg2;
+ (id)contactWithRecordID:(int)arg1 addressBook:(void *)arg2;
+ (id)contactWithRecord:(void *)arg1 unify:(_Bool)arg2;
+ (id)contactWithRecord:(void *)arg1;
@property(readonly) long long nameOrder;
- (id)userActivityUserInfo;
@property(nonatomic) void *addressBook;
@property(readonly) int recordID;
- (void *)recordFromAddressBook:(void *)arg1;
@property(readonly) void *record;
- (id)largestAvailablePhotoAndCropRect:(struct CGRect *)arg1;
@property(readonly, nonatomic) NSData *largestAvailablePhoto;
@property(readonly, nonatomic) NSData *photoThumbnail;
@property(readonly, nonatomic) CNContact *preferredContactForPhoto;
@property(readonly, nonatomic, getter=isReadonly) _Bool readonly;
@property(nonatomic, getter=isPreferredForPhoto) _Bool preferredForPhoto;
- (id)initWithRecord:(void *)arg1;
@end

