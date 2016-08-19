//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKAuthenticator, UIViewController;

@protocol PKAuthenticatorDelegate <NSObject>

@optional
- (void)dismissPassphraseRemoteViewController;
- (void)presentPassphraseViewController:(UIViewController *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)dismissPasscodeRemoteViewController;
- (void)presentPasscodeViewController:(UIViewController *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)authenticatorDidEncounterMatchMiss:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOff:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOn:(PKAuthenticator *)arg1;
- (void)authenticatorWillRestartEvaluation:(PKAuthenticator *)arg1;
@end
