//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreBluetooth/NSObject-Protocol.h>

@class CBPeer, NSDictionary;

@protocol CBPairingAgentParentDelegate <NSObject>
- (NSDictionary *)sendSyncMsg:(int)arg1 args:(NSDictionary *)arg2;
- (_Bool)sendMsg:(int)arg1 args:(NSDictionary *)arg2;
- (CBPeer *)peerWithInfo:(NSDictionary *)arg1;
@end

