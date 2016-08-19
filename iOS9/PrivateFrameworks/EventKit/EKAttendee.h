//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKParticipant.h>

@class NSDate;

@interface EKAttendee : EKParticipant
{
}

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
@property(nonatomic) _Bool statusChanged;
@property(nonatomic) _Bool commentChanged;
- (_Bool)isCurrentUser;
@property(readonly, nonatomic) NSDate *lastModifiedParticipationStatus;
- (void)setParticipantType:(long long)arg1;
- (long long)participantType;
@property(nonatomic) long long pendingStatus;
- (void)setParticipantRole:(long long)arg1;
- (long long)participantRole;
- (void)setParticipantStatus:(long long)arg1;
- (long long)participantStatus;
- (id)_persistentAttendee;
- (id)owner;
- (id)lazyLoadRelationForKey:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

@end

