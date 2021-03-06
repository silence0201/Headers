//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MultipeerConnectivity/MCNearbyServiceBrowserDelegate-Protocol.h>
#import <MultipeerConnectivity/MCSessionPrivateDelegate-Protocol.h>
#import <MultipeerConnectivity/UIAlertViewDelegate-Protocol.h>
#import <MultipeerConnectivity/UINavigationBarDelegate-Protocol.h>
#import <MultipeerConnectivity/UITableViewDataSource-Protocol.h>
#import <MultipeerConnectivity/UITableViewDelegate-Protocol.h>

@class MCNearbyServiceBrowser, MCPeerID, MCSession, NSBundle, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UINavigationBar, UITableView;
@protocol MCBrowserViewControllerDelegate;

@interface MCBrowserViewController : UIViewController <MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UINavigationBarDelegate, MCNearbyServiceBrowserDelegate>
{
    id <MCBrowserViewControllerDelegate> _delegate;
    MCNearbyServiceBrowser *_browser;
    MCSession *_session;
    unsigned long long _minimumNumberOfPeers;
    unsigned long long _maximumNumberOfPeers;
    MCPeerID *_myPeerID;
    UITableView *_tableView;
    NSMutableArray *_nearbyPeersSection;
    NSMutableArray *_invitedPeersSection;
    NSMutableDictionary *_invitedPeersState;
    NSMutableArray *_foundPeers;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    UINavigationBar *_navigationBar;
    NSBundle *_frameworkBundle;
    unsigned long long _declinedPeersCount;
}

@property(nonatomic) unsigned long long declinedPeersCount; // @synthesize declinedPeersCount=_declinedPeersCount;
@property(retain, nonatomic) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSMutableArray *foundPeers; // @synthesize foundPeers=_foundPeers;
@property(retain, nonatomic) NSMutableDictionary *invitedPeersState; // @synthesize invitedPeersState=_invitedPeersState;
@property(retain, nonatomic) NSMutableArray *invitedPeersSection; // @synthesize invitedPeersSection=_invitedPeersSection;
@property(retain, nonatomic) NSMutableArray *nearbyPeersSection; // @synthesize nearbyPeersSection=_nearbyPeersSection;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property(nonatomic) unsigned long long maximumNumberOfPeers; // @synthesize maximumNumberOfPeers=_maximumNumberOfPeers;
@property(nonatomic) unsigned long long minimumNumberOfPeers; // @synthesize minimumNumberOfPeers=_minimumNumberOfPeers;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MCNearbyServiceBrowser *browser; // @synthesize browser=_browser;
- (long long)positionForBar:(id)arg1;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(_Bool *)arg6;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(_Bool *)arg5;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(_Bool *)arg5;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(_Bool *)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(_Bool *)arg4;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)nearbySectionTitle;
@property(readonly, nonatomic) _Bool minimumNumberOfPeersReached;
@property(readonly, nonatomic) _Bool maximumNumberOfPeersReached;
- (void)verifyPeerIsAccountedFor:(id)arg1;
- (id)detailStringForPeerState:(int)arg1;
- (void)cancelTapped:(id)arg1;
- (void)peer:(id)arg1 changedStateTo:(int)arg2;
- (void)peerJoinedSession;
- (void)doneTapped:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak id <MCBrowserViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithServiceType:(id)arg1 session:(id)arg2;
- (id)initWithBrowser:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

