//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFMessage, HMFMessageTransport;

@protocol HMFMessageTransportDelegate <NSObject>
- (void)messageTransport:(HMFMessageTransport *)arg1 didReceiveMessage:(HMFMessage *)arg2;
@end
