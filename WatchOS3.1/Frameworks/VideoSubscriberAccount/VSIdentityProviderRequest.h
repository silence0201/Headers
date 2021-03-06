//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSAccount, VSAccountMetadataRequest, VSAccountStore;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderRequest : NSObject
{
    long long _type;
    NSString *_requestingAppDisplayName;
    VSAccount *_account;
    VSAccountStore *_accountStore;
    VSAccountMetadataRequest *_accountMetadataRequest;
}

+ (id)deleteAccountRequestWithAccount:(id)arg1 accountStore:(id)arg2;
+ (id)accountMetadataRequestWithAccount:(id)arg1 accountStore:(id)arg2 accountMetadataRequest:(id)arg3 requestingAppDisplayName:(id)arg4;
+ (id)editAccountRequestWithAccount:(id)arg1 accountStore:(id)arg2;
+ (id)makeAccountRequestWithAccountStore:(id)arg1;
@property(retain, nonatomic) VSAccountMetadataRequest *accountMetadataRequest; // @synthesize accountMetadataRequest=_accountMetadataRequest;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) VSAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool forceAuthentication;
- (id)_initWithRequestType:(long long)arg1 account:(id)arg2 accountStore:(id)arg3;
@property(readonly, nonatomic) _Bool requiresUI;
@property(readonly, nonatomic) _Bool allowsUI;
- (id)init;

@end

