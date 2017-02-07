//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GameCenterUI/GKDialogControllerSizing-Protocol.h>
#import <GameCenterUI/GKRemoteViewControllerDelegate-Protocol.h>
#import <GameCenterUI/GKRestrictedViewController-Protocol.h>
#import <GameCenterUI/GKViewController-Protocol.h>

@class GKRemoteViewController, NSMutableDictionary, NSString;
@protocol GKFriendRequestComposeViewControllerDelegate;

@interface GKFriendRequestComposeViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKRestrictedViewController, GKViewController>
{
    id _remoteViewController;
    id <GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;
    id _initialState;
    BOOL _internalFlag;
}

+ (unsigned long long)maxNumberOfRecipients;
@property BOOL didRequestRemoteViewController; // @synthesize didRequestRemoteViewController=_internalFlag;
@property(retain) NSMutableDictionary *initialState; // @synthesize initialState=_initialState;
@property(retain) GKRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(CDUnknownBlockType)arg1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)setMessage:(id)arg1;
@property(nonatomic) id <GKFriendRequestComposeViewControllerDelegate> composeViewDelegate; // @synthesize composeViewDelegate=_composeViewDelegateWeak;
- (struct CGSize)_gkSizeForDialogController;
- (void)viewDidDisappear;
- (void)requestRemoteViewController;
- (void)loadView;
- (id)view;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
