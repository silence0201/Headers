//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentEvent, NSDate, NSString;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject
{
}

+ (id)relations;
+ (id)suggestedEventInfoWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;
@property(nonatomic) EKPersistentEvent *owner;
@property(copy, nonatomic) NSDate *timestamp;
@property(nonatomic) _Bool changesAcknowledged;
@property(nonatomic) unsigned long long changedFields;
@property(copy, nonatomic) NSString *uniqueKey;
@property(copy, nonatomic) NSString *opaqueKey;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

