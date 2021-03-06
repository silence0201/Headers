//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreFoundation/ISURLOperation.h>

@class ISAuthenticationContext, NSNumber, NSString;
@protocol ISStoreURLOperationDelegate><ISURLOperationDelegate><ISOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation
{
    ISAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedDSID;
    int _bagType;
    BOOL _needsAuthentication;
    BOOL _sendToken;
    NSString *_urlBagKey;
    BOOL _urlKnownToBeTrusted;
    BOOL _useDSIDSpecificBag;
    BOOL _adiActionInResponse;
    long long _adiSilentActionRetryCount;
    BOOL _shouldRetryOnSilentADIAction;
    CDUnknownBlockType _authenticationCompletedHandler;
    CDUnknownBlockType _requestMutationHandler;
    NSString *_strongToken;
}

+ (void)addStandardQueryParametersForURL:(id)arg1 request:(id *)arg2 serviceProxy:(id)arg3;
+ (id)cacheBusterString;
+ (id)propertyListOperationWithURLBagKey:(id)arg1 storeClient:(id)arg2;
+ (id)pingOperationWithUrl:(id)arg1 storeClient:(id)arg2;
+ (void)addITunesStoreHeadersToRequest:(id)arg1 withStoreClient:(id)arg2 storeAccount:(id)arg3;
+ (id)acceptLanguageHeaderString;
@property(copy, nonatomic) NSString *strongToken; // @synthesize strongToken=_strongToken;
@property BOOL shouldRetryOnSilentADIAction; // @synthesize shouldRetryOnSilentADIAction=_shouldRetryOnSilentADIAction;
@property(copy) CDUnknownBlockType requestMutationHandler; // @synthesize requestMutationHandler=_requestMutationHandler;
@property(copy) CDUnknownBlockType authenticationCompletedHandler; // @synthesize authenticationCompletedHandler=_authenticationCompletedHandler;
@property BOOL useDSIDSpecificBag; // @synthesize useDSIDSpecificBag=_useDSIDSpecificBag;
@property BOOL urlKnownToBeTrusted; // @synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted;
@property(retain) NSString *urlBagKey; // @synthesize urlBagKey=_urlBagKey;
@property BOOL sendToken; // @synthesize sendToken=_sendToken;
@property BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(retain) NSNumber *authenticatedDSID; // @synthesize authenticatedDSID=_authenticatedDSID;
@property(retain) ISAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void).cxx_destruct;
- (void)_runURLOperation;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (BOOL)_authenticateReturningError:(id *)arg1;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id *)arg2;
- (void)run;
- (BOOL)_dataProviderDidProcessDialog;
- (id)newRequestWithURL:(id)arg1;
- (void)handleResponse:(id)arg1;
- (BOOL)handleRedirectFromDataProvider:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)description;
- (id)init;

// Remaining properties
@property __weak id <ISStoreURLOperationDelegate><ISURLOperationDelegate><ISOperationDelegate> delegate; // @dynamic delegate;

@end

