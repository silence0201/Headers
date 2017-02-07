//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCTask.h>

@class NSString;

@interface IMAPTask : MCTask
{
    NSString *_mailboxName;
    long long _reservedNetworkPriority;
}

@property(nonatomic) long long reservedNetworkPriority; // @synthesize reservedNetworkPriority=_reservedNetworkPriority;
@property(readonly, copy, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (void).cxx_destruct;
- (BOOL)mailboxIsUserVisibleUsingDataSource:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithMailboxName:(id)arg1;

@end
