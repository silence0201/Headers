//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISyncChange : NSObject
{
}

+ (id)changeWithType:(int)arg1 recordIdentifier:(id)arg2 changes:(id)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)changes;
- (id)record;
- (id)entityName;
- (id)recordIdentifier;
- (int)type;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChangeType:(int)arg1 recordIdentifier:(id)arg2 changes:(id)arg3;

@end
