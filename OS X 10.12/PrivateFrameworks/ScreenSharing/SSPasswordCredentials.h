//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenSharing/SSCredentials.h>

@class NSString;

@interface SSPasswordCredentials : SSCredentials
{
    NSString *mPassword;
    void *mReservedForInstanceVariablesPassword;
}

+ (id)vncAuthenticationCredentialsWithPassword:(id)arg1;
@property(readonly) NSString *password; // @synthesize password=mPassword;
- (void)dealloc;
- (id)initWithAuthenticationType:(id)arg1 withPassword:(id)arg2;

@end

