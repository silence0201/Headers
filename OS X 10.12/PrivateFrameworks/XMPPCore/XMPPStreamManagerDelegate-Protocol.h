//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, XMPPConnection, XMPPIQNode, XMPPStreamManager, XMPPStreamSession;

@protocol XMPPStreamManagerDelegate
- (NSString *)streamManagerNodeOrigin:(XMPPIQNode *)arg1;
- (NSArray *)streamManager:(XMPPStreamManager *)arg1 hostsWithCategory:(NSString *)arg2 type:(NSString *)arg3;
- (XMPPConnection *)streamManagerConnection:(XMPPStreamManager *)arg1;
- (BOOL)streamManager:(XMPPStreamManager *)arg1 handleIncomingSession:(XMPPStreamSession *)arg2;
- (NSString *)streamManagerUserID:(XMPPStreamManager *)arg1;
@end
