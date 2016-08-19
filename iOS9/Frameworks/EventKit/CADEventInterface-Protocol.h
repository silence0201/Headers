//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDate, NSString, NSTimeZone;

@protocol CADEventInterface
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(NSString *)arg1 inCalendars:(NSArray *)arg2 responseToken:(int)arg3 reply:(void (^)(int))arg4;
- (void)CADOccurrenceCacheSearchWithTerm:(NSString *)arg1 inCalendars:(NSArray *)arg2 responseToken:(int)arg3 reply:(void (^)(int))arg4;
- (void)CADOccurrenceCacheDoEvents:(NSArray *)arg1 haveOccurrencesAfterDate:(NSDate *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(NSDate *)arg2 reply:(void (^)(int, NSDate *))arg3;
- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(NSArray *)arg1 onDay:(NSDate *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(NSArray *)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(void (^)(int, _Bool))arg1;
- (void)CADDatabaseGetBirthdayContactIdentifierForEvent:(CDStruct_f683c4ba)arg1 reply:(void (^)(int, NSString *))arg2;
- (void)CADDatabaseActOnSuggestedEvent:(CDStruct_f683c4ba)arg1 action:(int)arg2 reply:(void (^)(_Bool))arg3;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(void (^)(int))arg1;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(void (^)(int))arg1;
- (void)CADDatabaseCanModifySuggestedEventCalendar:(void (^)(int, _Bool))arg1;
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(void (^)(int, struct))arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1;
- (void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 reply:(void (^)(int, NSDate *))arg3;
- (void)CADDatabaseGetCountOfNotifiableEvents:(void (^)(int, int))arg1;
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(void (^)(int, int))arg1;
- (void)CADDatabaseGetEventWithUniqueID:(NSString *)arg1 reply:(void (^)(int, struct))arg2;
- (void)CADDatabaseGetEventWithEventIdentifier:(NSString *)arg1 reply:(void (^)(int, struct))arg2;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(CDStruct_f683c4ba)arg1;
- (void)CADDatabaseGetDefaultCalendarForNewEventsWithReply:(void (^)(int, struct))arg1;
- (void)CADDatabaseExportEventAsICS:(CDStruct_f683c4ba)arg1 reply:(void (^)(int, NSData *))arg2;
@end

