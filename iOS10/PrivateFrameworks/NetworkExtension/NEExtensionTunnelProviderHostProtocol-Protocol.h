//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionProviderHostProtocol-Protocol.h>

@class NETunnelNetworkSettings;

@protocol NEExtensionTunnelProviderHostProtocol <NEExtensionProviderHostProtocol>
- (void)handleIPCDetached;
- (void)setTunnelConfiguration:(NETunnelNetworkSettings *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)didSetReasserting:(_Bool)arg1;
@end

