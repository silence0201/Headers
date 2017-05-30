//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSArray, NSPredicate, VSOptional;

__attribute__((visibility("hidden")))
@interface VSKeychainFetchRequest : NSObject <NSCopying>
{
    _Bool _includesDataValues;
    VSOptional *_itemKind;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _fetchLimit;
}

@property(nonatomic) _Bool includesDataValues; // @synthesize includesDataValues=_includesDataValues;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) VSOptional *itemKind; // @synthesize itemKind=_itemKind;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
