//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FI_TBrowserContainerController, FI_TBrowserViewContainerController, NSDictionary, NSToolbarItem;

@protocol BrowserContainerDelegate
- (FI_TBrowserViewContainerController *)browserViewContainerControllerForContainer:(FI_TBrowserContainerController *)arg1;
- (_Bool)containerValidateToolbarItem:(NSToolbarItem *)arg1;
- (void)containerConnectBackupDelegate:(FI_TBrowserContainerController *)arg1;
- (void)containerCloseContainer:(FI_TBrowserContainerController *)arg1;
- (void)containerWindowDidChange:(FI_TBrowserContainerController *)arg1;
- (void)containerContentChanged:(FI_TBrowserContainerController *)arg1;
- (void)containerSelectionChanged:(FI_TBrowserContainerController *)arg1;
- (_Bool)containerInBrowseMode:(FI_TBrowserContainerController *)arg1;
- (NSDictionary *)containerWindowState:(FI_TBrowserContainerController *)arg1;
@end
