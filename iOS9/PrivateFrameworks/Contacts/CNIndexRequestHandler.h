//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSIndexExtensionRequestHandler.h>

@class CNContactStore, CSSearchableIndex, NSObject;
@protocol OS_dispatch_queue;

@interface CNIndexRequestHandler : CSIndexExtensionRequestHandler
{
    void *_ab;
    CNContactStore *_store;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    CSSearchableIndex *_index;
}

+ (id)descriptorForRequiredKeysForSearchableItem;
+ (void)setSearchableItemsDomain:(id)arg1;
+ (id)defaultSearchableItemsDomain;
+ (id)searchableItemsDomain;
+ (void)initialize;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)searchableItemForPerson:(void *)arg1;
- (id)contactIdentifierFromPerson:(void *)arg1;
- (id)searchableItemForContactIdentifier:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;
- (id)init;

@end

