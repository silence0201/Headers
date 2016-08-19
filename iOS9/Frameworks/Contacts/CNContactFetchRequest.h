//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate;

@interface CNContactFetchRequest : NSObject
{
    _Bool rankSort;
    _Bool _mutableObjects;
    _Bool _unifyResults;
    _Bool _onlyMainStore;
    NSPredicate *_predicate;
    NSArray *_keysToFetch;
    long long _sortOrder;
}

@property(nonatomic) _Bool onlyMainStore; // @synthesize onlyMainStore=_onlyMainStore;
@property(nonatomic) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) _Bool unifyResults; // @synthesize unifyResults=_unifyResults;
@property(nonatomic) _Bool mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(copy, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool rankSort; // @synthesize rankSort;
- (id)effectiveKeysToFetch;
- (void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithKeysToFetch:(id)arg1;
- (id)init;

@end

