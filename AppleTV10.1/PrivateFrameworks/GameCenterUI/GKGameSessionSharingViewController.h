//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUI/GKGameSessionSharingRemoteViewControllerDelegate-Protocol.h>

@class GKGameSession, GKGameSessionSharingRemoteViewController, NSString;
@protocol GKGameSessionSharingViewControllerDelegate;

@interface GKGameSessionSharingViewController : UIViewController <GKGameSessionSharingRemoteViewControllerDelegate>
{
    GKGameSession *_session;
    id <GKGameSessionSharingViewControllerDelegate> _delegate;
    GKGameSessionSharingRemoteViewController *_remoteViewController;
}

@property(retain, nonatomic) GKGameSessionSharingRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <GKGameSessionSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GKGameSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)remoteViewController:(id)arg1 didFinishWithError:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
