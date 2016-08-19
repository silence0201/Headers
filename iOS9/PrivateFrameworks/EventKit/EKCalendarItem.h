//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKAttendee, EKCalendar, EKOrganizer, EKStructuredLocation, NSArray, NSDate, NSString, NSTimeZone, NSURL, NSUserActivity;

@interface EKCalendarItem : EKObject
{
    _Bool _haveCachedActionsState;
    unsigned long long _actionsStateCachedValue;
}

- (void)updateWithAppLink:(id)arg1 usedSelectedText:(_Bool *)arg2;
- (void)moveToCalendar:(id)arg1;
@property(readonly, retain, nonatomic) EKCalendarItem *originalItem;
- (void)_moveToCalendarInternal:(id)arg1;
- (_Bool)rebase;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updatePersistentObject;
- (_Bool)validate:(id *)arg1;
- (_Bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (id)suggestionInfo;
@property(readonly, nonatomic) NSArray *attachments;
- (id)_attachmentsRelation;
@property(copy, nonatomic) NSTimeZone *sharedItemModifiedTimeZone;
@property(copy, nonatomic) NSDate *sharedItemModifiedDate;
@property(copy, nonatomic) NSString *sharedItemModifiedByLastName;
@property(copy, nonatomic) NSString *sharedItemModifiedByFirstName;
@property(copy, nonatomic) NSString *sharedItemModifiedByEmailAddress;
@property(copy, nonatomic) NSString *sharedItemModifiedByDisplayName;
@property(copy, nonatomic) NSTimeZone *sharedItemCreatedTimeZone;
@property(copy, nonatomic) NSDate *sharedItemCreatedDate;
@property(copy, nonatomic) NSString *sharedItemCreatedByLastName;
@property(copy, nonatomic) NSString *sharedItemCreatedByFirstName;
- (void)setSharedItemCreatedByAddress:(id)arg1;
@property(copy, nonatomic) NSString *sharedItemCreatedByEmailAddress; // @dynamic sharedItemCreatedByEmailAddress;
@property(copy, nonatomic) NSString *sharedItemCreatedByDisplayName;
@property(retain, nonatomic) EKOrganizer *organizer;
- (id)_organizerRelation;
@property(readonly, nonatomic) long long selfParticipantStatus;
@property(retain, nonatomic) EKAttendee *selfAttendee; // @dynamic selfAttendee;
- (void)removeAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)setAttendees:(id)arg1;
@property(readonly, nonatomic) NSArray *attendees;
@property(readonly, nonatomic) _Bool hasAttendees;
- (id)_selfAttendeeRelation;
- (id)_attendeesRelation;
- (id)startDateForRecurrence;
- (void)removeRecurrenceRule:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
@property(copy, nonatomic) NSArray *recurrenceRules;
@property(readonly, nonatomic) _Bool hasRecurrenceRules;
- (id)_recurrencesRelation;
- (void)removeAllSnoozedAlarms;
- (void)removeAcknowledgedSnoozedAlarms;
- (_Bool)isAlarmAcknowledgedPropertyDirty;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *allAlarms;
- (_Bool)_excludeAlarmDueToConnectionTrigger:(id)arg1;
- (long long)indexForAlarm:(id)arg1;
- (id)sortedAlarms;
@property(copy, nonatomic) NSArray *alarms;
@property(readonly, nonatomic) _Bool hasAlarms;
- (id)_alarmsRelation;
@property(readonly, nonatomic) unsigned long long actionsState;
@property(readonly, nonatomic) _Bool allowsAttendeeModifications;
@property(readonly, nonatomic) _Bool allowsAlarmModifications;
@property(readonly, nonatomic) _Bool allowsRecurrenceModifications;
@property(readonly, nonatomic) _Bool allowsCalendarModifications;
@property(readonly, nonatomic) _Bool isOrganizedBySharedCalendarOwner;
@property(readonly, nonatomic) _Bool isExternallyOrganizedInvitation;
@property(readonly, nonatomic) _Bool isSelfOrganizedInvitation;
@property(readonly, nonatomic) _Bool isSelfOrganized;
@property(readonly, nonatomic) _Bool isFloating;
@property(readonly, nonatomic) _Bool isEditable;
- (_Bool)allowsSpansOtherThanThisEvent;
@property(readonly, nonatomic) _Bool requiresDetach;
@property(readonly, nonatomic) NSURL *externalURI;
- (int)sequenceNumber;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSString *externalID;
@property(nonatomic, getter=isDefaultAlarmRemoved) _Bool defaultAlarmRemoved;
@property(copy, nonatomic) NSTimeZone *endTimeZone;
@property(copy, nonatomic) NSTimeZone *startTimeZone;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) EKCalendar *calendar;
@property(copy, nonatomic) NSURL *URL;
@property(retain, nonatomic) NSUserActivity *appLink;
@property(copy, nonatomic) NSURL *action;
@property(nonatomic) unsigned long long priority;
@property(nonatomic) NSString *calendarScale;
@property(nonatomic, getter=isAllDay) _Bool allDay;
- (void)setCreationDate:(id)arg1;
@property(readonly, nonatomic) NSDate *creationDate;
- (void)setLastModifiedDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) EKStructuredLocation *startLocation;
@property(readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property(copy, nonatomic) EKStructuredLocation *clientLocation;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
@property(copy, nonatomic) NSString *location;
- (id)_startLocationRelation;
- (id)_clientLocationRelation;
- (id)_locationRelation;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasNotes;
@property(copy, nonatomic) NSString *notes;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSString *calendarItemExternalIdentifier;
@property(readonly, nonatomic) NSString *calendarItemIdentifier;
- (id)_persistentItem;
- (id)description;
- (id)lazyLoadRelationForKey:(id)arg1;

@end

