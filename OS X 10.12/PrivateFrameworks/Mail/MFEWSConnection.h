//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCConnection.h>

@class EWSExchangeServiceBinding, MFEWSAccount;

@interface MFEWSConnection : MCConnection
{
    EWSExchangeServiceBinding *_binding;
}

+ (id)log;
@property(retain) EWSExchangeServiceBinding *binding; // @synthesize binding=_binding;
- (void).cxx_destruct;
- (void)disconnectWithError:(id)arg1;
- (id)sendMessage:(id)arg1 error:(id *)arg2;
- (void)_handleServerBusyError:(id)arg1;
- (id)sendMessage:(id)arg1 forRequest:(id)arg2;
- (void)disconnect;
- (void)quit;
- (BOOL)isValidAllowNetworking:(BOOL)arg1;
- (void)_setupConnectionErrorForMonitorWithPort:(long long)arg1 usingSSL:(BOOL)arg2 serverTrust:(struct __SecTrust *)arg3;
- (id)_fetchRootFolderId:(id *)arg1;
- (id)_connectAndAuthenticateDiscoveringBestSettings:(BOOL)arg1;
- (BOOL)connectAndAuthenticate;
- (BOOL)authenticate;
- (BOOL)connectDiscoveringBestSettings:(BOOL)arg1;
@property __weak MFEWSAccount *account;
- (void)dealloc;

@end

