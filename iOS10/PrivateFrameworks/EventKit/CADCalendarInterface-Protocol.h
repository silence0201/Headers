//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;

@protocol CADCalendarInterface
- (void)CADDatabaseDeleteCalendar:(CDStruct_f683c4ba)arg1 forEntityType:(int)arg2 error:(void (^)(int))arg3;
- (void)CADCalendar:(CDStruct_f683c4ba)arg1 hasReminders:(void (^)(int, _Bool))arg2;
- (void)CADCalendar:(CDStruct_f683c4ba)arg1 hasEvents:(void (^)(int, _Bool))arg2;
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(NSArray *)arg1 reply:(void (^)(int, NSArray *, NSArray *))arg2;
@end

