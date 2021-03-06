//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABAddressBook, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ABMetadataRecordFactory : NSObject
{
    ABAddressBook *_addressBook;
    ABAccount *_account;
    NSMutableDictionary *_recordMapping;
}

- (id)account;
- (id)makeRecordWithClass:(Class)arg1 dictionary:(id)arg2 generateIds:(BOOL)arg3;
- (id)makeInfoWithDictionaryRepresentation:(id)arg1;
- (id)makeSubscriptionWithDictionaryRepresentation:(id)arg1;
- (id)makeSmartGroupWithDictionaryRepresentation:(id)arg1;
- (id)makeGroupWithDictionaryRepresentation:(id)arg1;
- (id)makePersonWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 recordMapping:(id)arg2 account:(id)arg3;
- (id)initWithAddressBook:(id)arg1 recordMapping:(id)arg2;

@end

