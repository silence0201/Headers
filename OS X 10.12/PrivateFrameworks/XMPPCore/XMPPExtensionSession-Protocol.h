//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSSet, NSString, XMPPCapabilityManager, XMPPConnection, XMPPLocationManager, XMPPStreamManager;

@protocol XMPPExtensionSession
- (XMPPStreamManager *)streamManager;
- (XMPPLocationManager *)locationManager;
- (XMPPCapabilityManager *)capabilityManager;
- (XMPPConnection *)connection;
- (NSString *)bestJIDforJID:(NSString *)arg1;
- (NSSet *)namespacesForJID:(NSString *)arg1;
- (NSString *)loginID;
- (NSDictionary *)accountDefaults;
- (NSString *)accountID;
- (void)sendMyPresence;
@end
