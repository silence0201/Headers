//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ACAccount, ACUICertificatePanelManager, NSArray, NSTextField;

@interface ACUIViewController : NSViewController
{
    BOOL _disableAutoReload;
    NSTextField *_passwordField;
    NSTextField *_errorMessageLabel;
    ACAccount *_account;
    ACUICertificatePanelManager *_certPanelMgr;
    NSArray *_uiDataclasses;
}

@property(retain) NSArray *uiDataclasses; // @synthesize uiDataclasses=_uiDataclasses;
@property(retain) ACUICertificatePanelManager *certPanelMgr; // @synthesize certPanelMgr=_certPanelMgr;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) BOOL disableAutoReload; // @synthesize disableAutoReload=_disableAutoReload;
@property(retain) NSTextField *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
- (void).cxx_destruct;
- (id)nibBundle;
- (void)digestSaveError:(id)arg1 inWindow:(id)arg2;
- (BOOL)handleInsecureConnectionForAccount:(id)arg1 withSaveError:(id)arg2 inWindow:(id)arg3;
- (void)saveAccountFailedWithError:(id)arg1;
- (void)saveAccountSucceeded;
- (BOOL)willPersistVerifiedAccount;
- (BOOL)willSaveAccount;
- (void)saveAccountWithVerificationOptions:(id)arg1 dataclassActions:(id)arg2;
- (void)saveAccount:(id)arg1;
- (void)persistVerifiedAccountWithActions:(id)arg1;
- (void)accountWillChangeTo:(id)arg1;
- (void)accountDidChangeFrom:(id)arg1;
- (void)_reloadAccountIfNeeded:(id)arg1;
- (void)refreshDataclassesUI;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
