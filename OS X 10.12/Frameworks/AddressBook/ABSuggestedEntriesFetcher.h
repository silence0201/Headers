//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, NSMutableDictionary, NSString;

@interface ABSuggestedEntriesFetcher : NSObject
{
    NSString *_filterTerms;
    ABAddressBook *_addressBook;
    NSMutableDictionary *_entries;
}

@property(retain) NSMutableDictionary *entries; // @synthesize entries=_entries;
@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(copy) NSString *filterTerms; // @synthesize filterTerms=_filterTerms;
- (id)resultEntriesByUID;
- (id)multiValueWithLabeledValues:(id)arg1;
- (id)multiValueWithPhoneNumbers:(id)arg1;
- (id)personFromContact:(id)arg1;
- (id)entriesByUIDForContacts:(id)arg1;
- (id)fetchSuggestedContacts;
- (void)fetchEntries;
- (void)dealloc;
- (id)init;

@end
