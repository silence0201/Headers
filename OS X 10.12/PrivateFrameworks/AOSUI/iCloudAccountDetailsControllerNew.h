//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AOSUI/MMWebViewButtonBarDelegate-Protocol.h>
#import <AOSUI/NSTableViewDelegate-Protocol.h>
#import <AOSUI/NSTouchBarProvider-Protocol.h>
#import <AOSUI/iCloudWebViewDelegate-Protocol.h>

@class CastlePlugin, MMWebViewButtonBar, MM_Account, NSAccountDetailsWebTabViewItem, NSMutableDictionary, NSString, NSTouchBar, NSView, NSWindow, iCloudAccountDetailsTabView, iCloudAccountsDetailsGeneral;

@interface iCloudAccountDetailsControllerNew : NSViewController <NSTouchBarProvider, iCloudWebViewDelegate, NSTableViewDelegate, MMWebViewButtonBarDelegate>
{
    NSView *_accountDetailsView;
    iCloudAccountDetailsTabView *_accountDetailsTabView;
    NSAccountDetailsWebTabViewItem *_generalTabViewItem;
    NSAccountDetailsWebTabViewItem *_contactTabViewItem;
    NSAccountDetailsWebTabViewItem *_securityTabViewItem;
    NSAccountDetailsWebTabViewItem *_paymentTabViewItem;
    NSMutableDictionary *_buttonBarDictionaries;
    NSAccountDetailsWebTabViewItem *_devicesTabViewItem;
    MM_Account *_account;
    CastlePlugin *_plugin;
    NSWindow *_parentWindow;
    NSWindow *_sheet;
    MMWebViewButtonBar *buttonBar;
    NSView *_buttonBarView;
    iCloudAccountsDetailsGeneral *_generalController;
}

@property(retain) NSMutableDictionary *buttonBarDictionaries; // @synthesize buttonBarDictionaries=_buttonBarDictionaries;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) MM_Account *account; // @synthesize account=_account;
@property(retain) CastlePlugin *plugin; // @synthesize plugin=_plugin;
- (void)cancelOperation:(id)arg1;
- (void)button3Pressed:(id)arg1;
- (void)button2Pressed:(id)arg1;
- (void)button1Pressed:(id)arg1;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (BOOL)shouldHideCancelButton;
- (void)icaSetButtonBar:(id)arg1 webViewName:(id)arg2;
- (void)sizeChangedFrom:(struct CGSize)arg1 toSize:(struct CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4;
- (void)loadFailed:(id)arg1;
- (void)endWebView:(id)arg1;
- (void)showInWindow:(id)arg1;
- (void)setupTabViews;
- (void)changeTabToSection:(id)arg1;
- (void)changeTabNotification:(id)arg1;
@property(readonly) NSTouchBar *touchBar;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 andPlugin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
