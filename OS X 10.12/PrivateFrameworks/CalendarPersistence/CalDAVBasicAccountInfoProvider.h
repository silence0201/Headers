//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/CoreDAVAccountInfoProvider-Protocol.h>
#import <CalendarPersistence/CoreDAVClientCertificateInfoProvider-Protocol.h>
#import <CalendarPersistence/CoreDAVLogDelegate-Protocol.h>
#import <CalendarPersistence/CoreDAVOAuthInfoProvider-Protocol.h>

@class ACAccount, NSData, NSManagedObjectID, NSSet, NSString, NSURL;

@interface CalDAVBasicAccountInfoProvider : NSObject <CoreDAVAccountInfoProvider, CoreDAVClientCertificateInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate>
{
    NSString *_scheme;
    NSString *_host;
    long long _port;
    NSString *_serverRoot;
    NSString *_user;
    NSString *_principalPath;
    NSString *_password;
    NSData *_identityPersist;
    NSURL *_principalURL;
    NSString *_accountID;
    NSSet *_serverComplianceClasses;
    NSManagedObjectID *_objectID;
    BOOL _shouldFailAllTasks;
    ACAccount *acAccount;
    ACAccount *_acAccount;
}

+ (void)initialize;
@property(retain) ACAccount *acAccount; // @synthesize acAccount=_acAccount;
@property(retain) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property BOOL shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
@property(retain) NSSet *serverComplianceClasses; // @synthesize serverComplianceClasses=_serverComplianceClasses;
@property(retain) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(retain) NSData *identityPersist; // @synthesize identityPersist=_identityPersist;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property(retain) NSString *user; // @synthesize user=_user;
@property(retain) NSString *serverRoot; // @synthesize serverRoot=_serverRoot;
@property long long port; // @synthesize port=_port;
@property(retain) NSString *host; // @synthesize host=_host;
@property(retain) NSString *scheme; // @synthesize scheme=_scheme;
- (void)coreDAVTransmittedDataFinished;
- (void)coreDAVLogResponseBody:(id)arg1;
- (void)coreDAVLogRequestBody:(id)arg1;
- (void)coreDAVLogTransmittedDataPartial:(id)arg1;
- (BOOL)shouldLogTransmittedData;
- (void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
- (long long)coreDAVOutputLevel;
- (long long)coreDAVLogLevel;
- (id)secCertificates;
- (struct OpaqueSecIdentityRef *)copySecIdentity;
- (id)userAgentHeader;
- (BOOL)renewCredential;
- (BOOL)shouldTryRenewingCredential;
- (BOOL)shouldCompressRequests;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
- (void)notePrincipalPathChange:(id)arg1;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (unsigned long long)oauthVariant;
- (id)oauth2Token;
- (id)oauthToken;
- (id)oauthInfoProvider;
- (id)clientCertificateInfoProvider;
- (BOOL)handleCertificateError:(id)arg1;
- (BOOL)handleTrustChallenge:(id)arg1;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleShouldUseCredentialStorage;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(retain) NSString *accountID;
- (void)setFullPrincipalAddress:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 principalURL:(id)arg3 accountID:(id)arg4 acAccount:(id)arg5 objectID:(id)arg6;
- (id)initWithUser:(id)arg1 password:(id)arg2 principalURL:(id)arg3 objectID:(id)arg4;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

