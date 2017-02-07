//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NearField/NFSession.h>

#import <NearField/NFAppletCollection-Protocol.h>
#import <NearField/NFSecureElementManagerSessionCallbacks-Protocol.h>

@class NSMutableDictionary, NSString;

@interface NFSecureElementManagerSession : NFSession <NFSecureElementManagerSessionCallbacks, NFAppletCollection>
{
    BOOL _hasApplets;
    NSMutableDictionary *_appletsById;
}

- (id)expressTransitIdentifier;
- (BOOL)expressModesEnabled;
- (id)felicaAppletState:(id)arg1;
- (BOOL)requireAuthorizationForAllAppletsExcept:(id)arg1;
- (BOOL)setExpressModesEnabled:(BOOL)arg1;
- (BOOL)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2;
- (BOOL)setExpressTransitApplet:(id)arg1 authorization:(id)arg2;
- (BOOL)getCryptogram:(id *)arg1 challengeResponse:(id *)arg2;
- (void)didExitRestrictedMode:(id)arg1;
- (unsigned int)validateSEPairings:(id *)arg1;
- (BOOL)refreshSecureElement:(id)arg1;
- (BOOL)runScript:(id)arg1 forSEID:(id)arg2 results:(id *)arg3 lastStatus:(unsigned long long *)arg4;
- (id)transceive:(id)arg1 forSEID:(id)arg2;
- (BOOL)deleteAllApplets:(BOOL)arg1;
- (BOOL)deleteApplets:(id)arg1 queueServerConnection:(BOOL)arg2;
- (id)appletWithIdentifier:(id)arg1;
- (id)allApplets;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id *)arg3;
- (id)signChallenge:(id)arg1 useOSVersion:(BOOL)arg2 signatureInfo:(id *)arg3;
- (id)signChallenge:(id)arg1 certs:(id *)arg2;
- (id)stateInformation;
- (id)_appletsById;
- (void)_setApplets:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
