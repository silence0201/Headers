//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXProviderExtensionContext.h>

#import <CallKit/CXProviderHostProtocol-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class NSString;
@protocol CXProviderExtensionVendorContextDelegate;

@interface CXProviderExtensionVendorContext : CXProviderExtensionContext <CXProviderHostProtocol, CXProviderVendorProtocol>
{
    id <CXProviderExtensionVendorContextDelegate> _delegate;
}

@property(nonatomic) __weak id <CXProviderExtensionVendorContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)actionCompleted:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)registerWithConfiguration:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

