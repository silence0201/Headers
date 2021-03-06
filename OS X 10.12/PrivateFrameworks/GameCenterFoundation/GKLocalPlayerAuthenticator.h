//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKLocalPlayer, NSDate, NSString, NSWindow;

@interface GKLocalPlayerAuthenticator : NSObject
{
    NSString *_username;
    NSString *_password;
    GKLocalPlayer *_resultantLocalPlayer;
    GKLocalPlayer *_inputLocalPlayer;
    BOOL _authenticated;
    BOOL _authenticating;
    BOOL _forceAuthentication;
    NSDate *_lastAuthDate;
    NSString *_lastAuthPlayerID;
    NSWindow *_hostWindow;
}

+ (void)postURL:(id)arg1 postBody:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 withHostWindow:(id)arg3;
+ (id)authenticatorForExistingPlayer:(id)arg1 withHostWindow:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2;
+ (id)authenticatorForExistingPlayer:(id)arg1;
@property NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain) NSString *lastAuthPlayerID; // @synthesize lastAuthPlayerID=_lastAuthPlayerID;
@property(retain) NSDate *lastAuthDate; // @synthesize lastAuthDate=_lastAuthDate;
@property BOOL forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
@property(getter=isAuthenticating) BOOL authenticating; // @synthesize authenticating=_authenticating;
@property(getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property(retain) GKLocalPlayer *inputLocalPlayer; // @synthesize inputLocalPlayer=_inputLocalPlayer;
@property(retain) GKLocalPlayer *resultantLocalPlayer; // @synthesize resultantLocalPlayer=_resultantLocalPlayer;
- (void)_handleAuthResponse:(id)arg1 error:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)description;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticationDidComplete;
- (void)reset;
- (void)_authenticateUsingAuthUI:(BOOL)arg1 usernameEditable:(BOOL)arg2 authUIDismissHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)arg1 usernameEditable:(BOOL)arg2 dismissHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authenticateExistingUserAuthUIWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authenticateUsingAuthUIWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

