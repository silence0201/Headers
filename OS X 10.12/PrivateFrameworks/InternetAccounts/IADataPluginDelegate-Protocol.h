//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InternetAccounts/NSObject-Protocol.h>

@class IAAccountSetupInput, IAAccountSetupResult, IADataPlugin, NSError, NSString;

@protocol IADataPluginDelegate <NSObject>
- (BOOL)plugin:(IADataPlugin *)arg1 handleCertificateError:(NSError *)arg2;
- (void)plugin:(IADataPlugin *)arg1 didChangeAccountUID:(NSString *)arg2;
- (void)plugin:(IADataPlugin *)arg1 didDeleteAccountUID:(NSString *)arg2;
- (void)plugin:(IADataPlugin *)arg1 didCreateAccountUID:(NSString *)arg2;
- (void)plugin:(IADataPlugin *)arg1 accountSetupDidFinish:(IAAccountSetupInput *)arg2 withResult:(IAAccountSetupResult *)arg3;
- (void)plugin:(IADataPlugin *)arg1 accountSetupDidFail:(IAAccountSetupInput *)arg2 withError:(NSError *)arg3;
- (void)plugin:(IADataPlugin *)arg1 accountSetupUpdate:(IAAccountSetupInput *)arg2 withStatus:(long long)arg3;

@optional
- (void)plugin:(IADataPlugin *)arg1 aosAccountMigrationFinished:(NSString *)arg2;
@end

