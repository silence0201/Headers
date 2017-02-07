//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/EKProtocolOccurrence-Protocol.h>

@class NSDate, NSDateComponents, NSString, NSTimeZone;
@protocol EKProtocolEventOccurrence, EKProtocolStructuredLocation;

@protocol EKProtocolEventOccurrence <EKProtocolOccurrence>
@property(readonly, copy, nonatomic) NSDate *proposedEndDateUnadjustedFromUTCForMe;
@property(readonly, copy, nonatomic) NSDate *proposedStartDateUnadjustedFromUTCForMe;
@property(readonly, nonatomic) BOOL isYearlessLeapMonthBirthday;
@property(readonly, nonatomic) BOOL isYearlessBirthday;
@property(readonly, nonatomic) NSString *nameForBirthday;
@property(readonly, copy, nonatomic) NSString *birthdayTitle;
@property(readonly, nonatomic) NSString *suggestionInfoUniqueKey;
@property(readonly, nonatomic) NSDate *suggestionInfoTimestamp;
@property(readonly, nonatomic) NSString *suggestionInfoOpaqueKey;
@property(readonly, nonatomic) unsigned long long suggestionInfoChangedFields;
@property(nonatomic) BOOL suggestionInfoAcknowledged;
@property(readonly, copy, nonatomic) NSString *sliceParentID;
@property(readonly, nonatomic) BOOL dontSendNotificationForChanges;
@property(readonly, copy, nonatomic) NSString *responseComment;
@property(readonly, nonatomic) unsigned long long participantsStatus;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredEndLocation;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredStartLocation;
@property(readonly, copy, nonatomic) NSString *travelAdvisoryBehaviorString;
@property(readonly, nonatomic) BOOL needsGeocoding;
@property(readonly, nonatomic) double travelDuration;
@property(readonly, nonatomic) int availabilityEnum;
@property(readonly, copy, nonatomic) NSString *statusString;
@property(readonly, copy, nonatomic) NSString *privacyLevelString;
@property(readonly, copy, nonatomic) NSTimeZone *endTimeZoneObject;
@property(readonly, copy, nonatomic) NSDate *endDateUnadjustedFromUTC;
@property(readonly, nonatomic) NSString *lunarCalendarString;
- (NSDateComponents *)durationComponents;
- (NSDate *)sliceDate;
- (BOOL)isPhantom;
- (BOOL)isDetached;

@optional
- (BOOL)isSignificantlyDetachedIgnoringParticipation;
- (BOOL)isSignificantlyDetached;
- (id <EKProtocolEventOccurrence>)masterEventOccurrence;
@end
