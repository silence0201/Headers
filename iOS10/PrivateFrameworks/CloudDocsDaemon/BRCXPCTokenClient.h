//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCXPCClient.h>

#import <CloudDocsDaemon/BRTokenProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>
{
}

- (void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)prepareFileProvidersWithReply:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
