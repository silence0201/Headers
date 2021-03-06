//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface HMDRemoteMessageNotifications : NSObject
{
    NSMapTable *_sessionNotificationPayloads;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)messageExpectsNotificationResponse:(id)arg1;
+ (id)messagesWithNotificationResponses;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSMapTable *sessionNotificationPayloads; // @synthesize sessionNotificationPayloads=_sessionNotificationPayloads;
- (void).cxx_destruct;
- (id)description;
- (void)clearNotificationsForDevice:(id)arg1;
- (id)notificationPayloadWithIdentifier:(id)arg1 device:(id)arg2;
- (void)removeNotificationPayloadWithIdentifier:(id)arg1 device:(id)arg2;
- (void)addNotificationPayload:(id)arg1 identifier:(id)arg2 device:(id)arg3;
- (id)_notificationPayloadsForDevice:(id)arg1;
- (id)init;

@end

