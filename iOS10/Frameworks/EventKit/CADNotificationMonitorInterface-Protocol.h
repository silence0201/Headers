//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol CADNotificationMonitorInterface
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(CDStruct_f683c4ba)arg2 error:(void (^)(int))arg3;
- (void)CADInviteReplyNotification:(CDStruct_f683c4ba)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADResourceChange:(CDStruct_f683c4ba)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADCalendar:(CDStruct_f683c4ba)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADEvent:(CDStruct_f683c4ba)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADDatabaseGetInboxRepliedSectionItems:(void (^)(int, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetReminderNotificationItems:(void (^)(int, NSArray *, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetEventNotificationItems:(void (^)(int, NSArray *, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetInviteReplyNotifications:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetResourceChanges:(void (^)(int, NSArray *))arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(CDStruct_f683c4ba)arg1 error:(void (^)(int))arg2;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(void (^)(int, NSArray *))arg1;
@end

