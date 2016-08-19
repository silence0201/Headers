//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol CBPairingAgentDelegate, CBPairingAgentParentDelegate;

@interface CBPairingAgent : NSObject
{
    id <CBPairingAgentParentDelegate> _parentManager;
    _Bool _useOOBMode;
    id <CBPairingAgentDelegate> _delegate;
}

@property(nonatomic) _Bool useOOBMode; // @synthesize useOOBMode=_useOOBMode;
@property(nonatomic) id <CBPairingAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2;
- (void)handleUnpaired:(id)arg1;
- (void)handlePairingCompleted:(id)arg1;
- (void)handlePairingRequested:(id)arg1;
- (void)setOOBPairingEnabled:(_Bool)arg1 forPeer:(id)arg2;
- (id)retrieveOOBDataForPeer:(id)arg1;
- (void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(_Bool)arg3 data:(id)arg4;
- (void)unpairPeer:(id)arg1;
- (void)pairPeer:(id)arg1;
- (id)retrievePairedPeers;
- (_Bool)isPeerCloudPaired:(id)arg1;
- (_Bool)isPeerPaired:(id)arg1;
- (void)updateRegistration;
- (void)setOrphan;
- (id)initWithParentManager:(id)arg1;

@end

