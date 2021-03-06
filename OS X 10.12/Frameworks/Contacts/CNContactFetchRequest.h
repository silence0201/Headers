//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate;

@interface CNContactFetchRequest : NSObject <NSSecureCoding>
{
    BOOL _rankSort;
    BOOL _mutableObjects;
    BOOL _unifyResults;
    BOOL _onlyMainStore;
    BOOL _allowsBatching;
    NSPredicate *_predicate;
    NSArray *_keysToFetch;
    long long _sortOrder;
}

+ (BOOL)supportsSecureCoding;
@property BOOL allowsBatching; // @synthesize allowsBatching=_allowsBatching;
@property BOOL onlyMainStore; // @synthesize onlyMainStore=_onlyMainStore;
@property long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property BOOL unifyResults; // @synthesize unifyResults=_unifyResults;
@property BOOL mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(copy) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(copy) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property BOOL rankSort; // @synthesize rankSort=_rankSort;
- (id)effectiveKeysToFetch;
- (void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithKeysToFetch:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

