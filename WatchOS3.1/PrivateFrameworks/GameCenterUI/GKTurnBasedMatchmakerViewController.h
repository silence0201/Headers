//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>
#import <GameCenterUI/GKLocalPlayerListener-Protocol.h>
#import <GameCenterUI/GKTurnBasedEventListener-Protocol.h>

@class GKMatchRequest, GKTurnBasedMatchmakerHostViewController, NSString, UIAlertController;
@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol>
{
    _Bool _showExistingMatches;
    id <GKTurnBasedMatchmakerViewControllerDelegate> _turnBasedMatchmakerDelegateWeak;
    GKTurnBasedMatchmakerHostViewController *_remoteViewController;
    GKMatchRequest *_matchRequest;
    UIAlertController *_alertController;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(nonatomic) _Bool showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(retain, nonatomic) GKTurnBasedMatchmakerHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)authenticationChanged:(id)arg1;
- (void)playerQuitMatch:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)cancel;
@property(nonatomic) id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate; // @synthesize turnBasedMatchmakerDelegate=_turnBasedMatchmakerDelegateWeak;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldShowQuitForTurnBasedMatch;
- (_Bool)shouldShowPlayForTurnBasedMatch;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)_setupRemoteViewController;
- (void)_setupChildViewController;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(_Bool)arg3;
- (id)initWithMatchRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
