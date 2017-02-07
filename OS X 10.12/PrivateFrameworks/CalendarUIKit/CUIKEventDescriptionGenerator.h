//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDataDetector, NSDateFormatter, NSNumberFormatter;

@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator
{
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
    NSDataDetector *_addressDetector;
}

+ (id)sharedGenerator;
- (void).cxx_destruct;
- (void)meCardChanged:(id)arg1;
- (long long)_notReallyRandomNumberBetween1AndN:(int)arg1;
- (id)_addressDetector;
- (id)_locationStringForEvent:(id)arg1;
- (BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (id)_timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4;
- (BOOL)_eventIsAlreadyLate:(id)arg1;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (BOOL)_doesEventStartEarly:(id)arg1;
- (id)_noonDateForEvents:(id)arg1;
- (BOOL)_arrayHasAfternoonEvents:(id)arg1;
- (BOOL)_arrayHasMorningEvents:(id)arg1;
- (BOOL)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(BOOL)arg2;
- (BOOL)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1;
- (BOOL)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1;
- (BOOL)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1;
- (BOOL)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1;
- (id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2;
- (id)_naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(BOOL)arg2;
- (id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(BOOL)arg2;
- (id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1;
- (void)dealloc;
- (id)_sharedNumberFormatter;
- (id)_sharedDateFormatter;
- (id)init;

@end
