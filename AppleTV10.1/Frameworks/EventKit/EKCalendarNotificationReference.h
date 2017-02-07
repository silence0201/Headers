//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKCalendarNotification, EKEventStore, NSDate;

__attribute__((visibility("hidden")))
@interface EKCalendarNotificationReference : NSObject
{
    CDStruct_f683c4ba _objectID;
    NSDate *_date;
    EKEventStore *_eventStore;
    EKCalendarNotification *_notification;
    int _type;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2;
@property(readonly, nonatomic) EKCalendarNotification *notification;
- (id)initWithType:(int)arg1 objectID:(CDStruct_f683c4ba)arg2 eventStore:(id)arg3;
- (id)initWithType:(int)arg1 objectID:(CDStruct_f683c4ba)arg2 date:(id)arg3 eventStore:(id)arg4;

@end
