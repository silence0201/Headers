//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EKReminderPredicate, NSArray;

@protocol CADReminderInterface
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetProperties:(NSArray *)arg1 forReminders:(NSArray *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADDatabaseGetCountOfRemindersWithPredicate:(EKReminderPredicate *)arg1 reply:(void (^)(int, int))arg2;
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(CDStruct_f683c4ba)arg1;
- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(void (^)(int, struct))arg1;
@end

