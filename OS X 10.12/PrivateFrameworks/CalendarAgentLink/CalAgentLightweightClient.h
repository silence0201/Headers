//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarAgentLink/CalendarAgentClient-Protocol.h>

@interface CalAgentLightweightClient : NSObject <CalendarAgentClient>
{
}

- (void)agentUpdatedCache:(id)arg1;
- (void)calMeCardChanged;
- (void)calPersistanceNotification:(id)arg1 userInfo:(id)arg2;
- (void)calDavSharedUIDChanged:(id)arg1;

@end

