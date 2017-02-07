//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeKit/HMUserManagementRemoteHost-Protocol.h>

@class HMHome, HMUserListRemoteViewController, _UIAsyncInvocation;

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost>
{
    _Bool _shouldPresentWhenLoaded;
    HMHome *_home;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _loadHandler;
    _UIAsyncInvocation *_cancelServiceInvocation;
    HMUserListRemoteViewController *_remoteViewController;
}

@property(retain, nonatomic) HMUserListRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation; // @synthesize cancelServiceInvocation=_cancelServiceInvocation;
@property(copy, nonatomic) CDUnknownBlockType loadHandler; // @synthesize loadHandler=_loadHandler;
@property(nonatomic) _Bool shouldPresentWhenLoaded; // @synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)_presentAsTopmostViewController;
- (void)userManagementDidFinishWithError:(id)arg1;
- (void)userManagementDidLoad;
- (void)_finishSetupWithError:(id)arg1;
- (void)_configureAndAddRemoteViewController;
- (void)_requestRemoteViewController;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)presentWhenLoaded;
- (id)initWithHome:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;

@end

