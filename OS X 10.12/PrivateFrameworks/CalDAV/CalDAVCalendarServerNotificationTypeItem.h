//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *resourceChanged; // @synthesize resourceChanged=_resourceChanged;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteReply; // @synthesize inviteReply=_inviteReply;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteNotification; // @synthesize inviteNotification=_inviteNotification;
- (void).cxx_destruct;
- (BOOL)notificationNameIn:(id)arg1;
- (BOOL)notificationNameMatches:(id)arg1;
@property(readonly, nonatomic) BOOL isResourceChanged;
@property(readonly, nonatomic) BOOL isInviteReply;
@property(readonly, nonatomic) BOOL isInviteNotification;
- (id)description;
- (id)copyParseRules;

@end

