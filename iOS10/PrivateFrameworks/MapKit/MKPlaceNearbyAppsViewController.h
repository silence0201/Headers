//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <MapKit/MKPlaceViewNearbyAppsCellDelegate-Protocol.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse-Protocol.h>

@class NSArray, NSString;
@protocol MKPlaceNearbyAppsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceNearbyAppsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKPlaceViewNearbyAppsCellDelegate>
{
    id <MKPlaceNearbyAppsViewControllerDelegate> _nearbyAppsDelegate;
    NSArray *_storeItems;
}

@property(retain, nonatomic) NSArray *storeItems; // @synthesize storeItems=_storeItems;
@property(nonatomic) __weak id <MKPlaceNearbyAppsViewControllerDelegate> nearbyAppsDelegate; // @synthesize nearbyAppsDelegate=_nearbyAppsDelegate;
- (void).cxx_destruct;
- (void)nearbyAppsCell:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsCell:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) _Bool requiresPreferredContentSizeInStackingView;
- (void)contentSizeDidChange;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
