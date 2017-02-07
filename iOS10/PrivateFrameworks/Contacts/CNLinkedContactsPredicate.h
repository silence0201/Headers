//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate>
{
    CNContact *_contact;
    NSString *_contactIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

