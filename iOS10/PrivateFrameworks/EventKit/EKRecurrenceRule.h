//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class EKCalendarItem, EKRecurrenceEnd, NSArray, NSDate, NSString;

@interface EKRecurrenceRule : EKObject <NSCopying>
{
    _Bool _usesEndDate;
    EKRecurrenceEnd *_cachedEnd;
}

+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(_Bool)arg2 isFloating:(_Bool)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;
+ (id)iCalendarValueFromRecurrenceType:(long long)arg1;
+ (id)recurrenceRuleWithType:(long long)arg1 interval:(unsigned long long)arg2 end:(id)arg3;
@property(readonly) _Bool usesEndDate; // @synthesize usesEndDate=_usesEndDate;
@property(retain, nonatomic) EKRecurrenceEnd *cachedEnd; // @synthesize cachedEnd=_cachedEnd;
- (void).cxx_destruct;
- (id)stringValueAsDateOnly:(_Bool)arg1 isFloating:(_Bool)arg2;
- (_Bool)isSimpleRule;
- (_Bool)isAnyDayRule;
- (_Bool)isWeekendRule;
- (_Bool)isWeekdayRule;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;
- (_Bool)mayOccurAfterDate:(id)arg1;
@property(readonly, nonatomic) _Bool dirtyStateMayAffectExceptionDates;
- (void)reset;
- (void)setSetPositions:(id)arg1;
@property(readonly, nonatomic) NSArray *setPositions;
- (void)setMonthsOfTheYear:(id)arg1;
@property(readonly, nonatomic) NSArray *monthsOfTheYear;
- (void)setWeeksOfTheYear:(id)arg1;
@property(readonly, nonatomic) NSArray *weeksOfTheYear;
- (void)setDaysOfTheYear:(id)arg1;
@property(readonly, nonatomic) NSArray *daysOfTheYear;
- (void)setDaysOfTheMonth:(id)arg1;
@property(readonly, nonatomic) NSArray *daysOfTheMonth;
- (void)setDaysOfTheWeek:(id)arg1;
@property(readonly, nonatomic) NSArray *daysOfTheWeek;
- (void)setFirstDayOfTheWeek:(unsigned long long)arg1;
@property(readonly, nonatomic) long long firstDayOfTheWeek;
@property(readonly, nonatomic) NSDate *cachedEndDate;
@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;
- (void)setInterval:(unsigned long long)arg1;
@property(readonly, nonatomic) long long interval;
- (void)setFrequency:(long long)arg1;
@property(readonly, nonatomic) long long frequency;
@property(readonly, nonatomic) NSString *calendarIdentifier;
@property(retain, nonatomic) EKCalendarItem *owner; // @dynamic owner;
- (id)lazyLoadRelationForKey:(id)arg1;
@property(readonly, nonatomic) CDStruct_6e43267c gregorianUnits;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool shouldPinMonthDays;
@property(readonly, nonatomic) NSString *UUID;
- (id)_persistentRule;
- (id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3;
- (id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)init;

@end

