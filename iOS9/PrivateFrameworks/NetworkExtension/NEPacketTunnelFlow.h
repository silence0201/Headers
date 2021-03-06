//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;
@protocol OS_dispatch_queue;

@interface NEPacketTunnelFlow : NSObject
{
    _Bool _handlerSetup;
    long long _interfaceType;
    struct NEVirtualInterface_s *_interface;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileHandle *_socket;
    CDUnknownBlockType _packetHandler;
}

@property(copy) CDUnknownBlockType packetHandler; // @synthesize packetHandler=_packetHandler;
@property(retain) NSFileHandle *socket; // @synthesize socket=_socket;
@property _Bool handlerSetup; // @synthesize handlerSetup=_handlerSetup;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) struct NEVirtualInterface_s *interface; // @synthesize interface=_interface;
@property(readonly) long long interfaceType; // @synthesize interfaceType=_interfaceType;
- (void).cxx_destruct;
- (_Bool)writePackets:(id)arg1 withProtocols:(id)arg2;
- (void)readPacketsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeVirtualInterface;
- (void)resetReadHandler;
- (_Bool)setVirtualInterfaceSocket:(id)arg1;
- (void)dealloc;
- (id)initWithVirtualInterfaceType:(long long)arg1;

@end

