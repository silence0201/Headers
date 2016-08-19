//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlayer/MPAVRoutingTableViewCellDelegate-Protocol.h>
#import <MediaPlayer/UITableViewDataSource-Protocol.h>
#import <MediaPlayer/UITableViewDelegate-Protocol.h>

@class MPAVRoutingController, MPWeakTimer, NSArray, NSString, UIColor, UITableView;
@protocol MPAVRoutingViewControllerDelegate;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSArray *_cachedRoutes;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    _Bool _cachedShowAirPlayDebugButton;
    _Bool _hasCachedAirPlayDebugButtonStatus;
    _Bool _needsDisplayedRoutesUpdate;
    _Bool _suspendedDiscoveryModeDueToApplicationState;
    long long _discoveryModeBeforeEnteringBackground;
    _Bool _allowMirroring;
    unsigned long long _style;
    id <MPAVRoutingViewControllerDelegate> _delegate;
    unsigned long long _avItemType;
}

@property(nonatomic) _Bool allowMirroring; // @synthesize allowMirroring=_allowMirroring;
@property(nonatomic, setter=setAVItemType:) unsigned long long avItemType; // @synthesize avItemType=_avItemType;
@property(nonatomic) __weak id <MPAVRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (double)_tableViewFooterViewHeight;
- (double)_tableViewHeaderViewHeight;
- (unsigned long long)_tableViewNumberOfRows;
- (void)_showAirPlayDebug;
- (_Bool)_shouldShowAirPlayDebugButton;
- (_Bool)_shouldShowMirroringCellForRoute:(id)arg1;
- (void)_pickRoute:(id)arg1;
- (void)_updateDisplayedRoutes;
- (void)_setNeedsDisplayedRoutesUpdate;
- (void)_setupUpdateTimerIfNecessary;
- (unsigned long long)_routeIndexForTableViewIndex:(unsigned long long)arg1;
- (unsigned long long)_tableViewIndexForRouteIndex:(unsigned long long)arg1;
- (unsigned long long)_debugButtonTableViewIndex;
- (id)_routesWhereMirroringIsPreferred;
- (id)_displayedRoutes;
- (void)_endRouteDiscovery;
- (void)_beginRouteDiscovery;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1;
- (double)_tableViewHeightAccordingToDataSource;
- (void)_setTableCellsContentColor:(id)arg1;
- (void)_setTableCellsBackgroundColor:(id)arg1;
- (id)_tableCellsContentColor;
- (id)_tableCellsBackgroundColor;
- (double)_expandedCellHeight;
- (double)_normalCellHeight;
- (id)_tableView;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(_Bool)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

