//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)_clientTypeForConnection:(id)arg1;
- (BOOL)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)arg1;
- (BOOL)_connection:(id)arg1 hasEntitlement:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
