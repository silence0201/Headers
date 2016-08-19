//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNAccountsAndGroupsItem, CNContactStore, CNContactStoreFilter, NSArray;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsDataSource : NSObject
{
    CNContactStoreFilter *_filter;
    CNContactStoreFilter *_serverFilter;
    _Bool _hidesSearchableSources;
    CNContactStore *_store;
    NSArray *_sections;
    CNAccountsAndGroupsItem *_rootItem;
}

@property(retain, nonatomic) CNAccountsAndGroupsItem *rootItem; // @synthesize rootItem=_rootItem;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isTrivial) _Bool trivial;
@property(readonly, nonatomic) CNContactStoreFilter *serverFilter;
- (void)setServerFilterForItem:(id)arg1;
@property(copy, nonatomic) CNContactStoreFilter *filter;
- (void)_applyFilter;
- (void)_reloadSections;
- (void)reload;
- (id)initWithStore:(id)arg1;

@end

