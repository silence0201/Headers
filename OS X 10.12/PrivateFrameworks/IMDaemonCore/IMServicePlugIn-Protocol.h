//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class NSDictionary;
@protocol IMServiceApplication;

@protocol IMServicePlugIn <NSObject>
- (oneway void)logout;
- (oneway void)login;
- (oneway void)updateAccountSettings:(NSDictionary *)arg1;
- (id)initWithServiceApplication:(id <IMServiceApplication>)arg1;
@end
