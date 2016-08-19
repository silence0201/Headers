//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSString;

@interface EKPersistentSharee : EKPersistentObject <NSCopying>
{
}

+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (id)description;
- (id)owner;
- (void)setOwner:(id)arg1;
@property(nonatomic) unsigned long long shareeAccessLevel;
@property(nonatomic) unsigned long long shareeStatus;
@property(copy, nonatomic) NSString *externalID;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *emailAddress;
@property(copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *UUID;
- (unsigned long long)hash;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)init;

@end

