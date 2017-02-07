//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKCalendar, NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItem : EKObject
{
    _Bool _haveCachedActionsState;
    unsigned long long _actionsStateCachedValue;
}

- (void)_updateModifiedAlarmByAcknowledging;
- (void)updateWithAppLink:(id)arg1 usedSelectedText:(_Bool *)arg2;
- (void)moveToCalendar:(id)arg1;
- (id)originalItem;
- (void)_moveToCalendarInternal:(id)arg1;
- (void)rebaseWithOldPCI:(id)arg1 newPCI:(id)arg2;
- (_Bool)rebase;
- (_Bool)validate:(id *)arg1;
- (_Bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (_Bool)canMoveToCalendar:(id)arg1 error:(id *)arg2;
- (void)setContactIdentifiers:(id)arg1;
- (id)contactIdentifiers;
- (id)attachments;
- (id)_attachmentsRelation;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (id)sharedItemModifiedTimeZone;
- (void)setSharedItemModifiedDate:(id)arg1;
- (id)sharedItemModifiedDate;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (id)sharedItemModifiedByLastName;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (id)sharedItemModifiedByFirstName;
- (void)setSharedItemModifiedByEmailAddress:(id)arg1;
- (id)sharedItemModifiedByEmailAddress;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (id)sharedItemModifiedByDisplayName;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (id)sharedItemCreatedTimeZone;
- (void)setSharedItemCreatedDate:(id)arg1;
- (id)sharedItemCreatedDate;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (id)sharedItemCreatedByLastName;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (id)sharedItemCreatedByFirstName;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (id)sharedItemCreatedByEmailAddress;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (void)setOrganizer:(id)arg1;
- (id)organizer;
- (id)_organizerRelation;
- (id)participantMatchingContact:(id)arg1;
- (long long)selfParticipantStatus;
- (id)attendeeForMe;
- (id)selfAttendee;
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
- (_Bool)isOnlyAlarmAcknowledgedPropertyDirty;
- (_Bool)isAlarmAcknowledgedPropertyDirty;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
- (id)allAlarms;
- (void)setAllAlarms:(id)arg1;
- (_Bool)_excludeAlarmDueToConnectionTrigger:(id)arg1;
- (long long)indexForAlarm:(id)arg1;
- (id)sortedAlarms;
@property(copy, nonatomic) NSArray *alarms;
@property(readonly, nonatomic) _Bool hasAlarms;
- (id)_alarmsRelation;
- (unsigned long long)actionsState;
- (_Bool)allowsAttendeesModifications;
- (_Bool)allowsAlarmModifications;
- (_Bool)allowsRecurrenceModifications;
- (_Bool)allowsCalendarModifications;
- (_Bool)isOrganizedBySharedCalendarOwner;
- (_Bool)isExternallyOrganizedInvitation;
- (_Bool)isSelfOrganizedInvitation;
- (_Bool)isSelfOrganized;
- (_Bool)isFloating;
- (_Bool)isEditable;
- (_Bool)allowsSpansOtherThanThisEvent;
- (_Bool)requiresDetach;
- (id)externalURI;
- (id)exportToICS;
- (int)sequenceNumber;
- (void)setModifiedProperties:(unsigned int)arg1;
- (unsigned int)modifiedProperties;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setDefaultAlarmWasDeleted:(_Bool)arg1;
- (_Bool)defaultAlarmWasDeleted;
- (void)setEndTimeZone:(id)arg1;
- (id)endTimeZone;
- (void)setStartTimeZone:(id)arg1;
- (id)startTimeZone;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) EKCalendar *calendar;
@property(copy, nonatomic) NSURL *URL;
- (void)setAppLink:(id)arg1;
- (id)appLink;
- (void)setAction:(id)arg1;
- (id)action;
- (void)setPriority:(unsigned long long)arg1;
- (unsigned long long)priority;
- (void)setCalendarScale:(id)arg1;
- (id)calendarScale;
- (void)setAllDay:(_Bool)arg1;
- (_Bool)isAllDay;
- (void)setCreationDate:(id)arg1;
@property(readonly, nonatomic) NSDate *creationDate;
- (void)setLastModifiedDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (id)travelStartLocation;
- (void)setTravelStartLocation:(id)arg1;
- (id)preferredLocation;
- (id)clientLocation;
- (void)setClientLocation:(id)arg1;
- (id)structuredLocation;
- (void)setStructuredLocation:(id)arg1;
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

