//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <iAd/ADPrivacyRemoteViewControllerDelegate-Protocol.h>

@class ADPrivacyRemoteViewController, NSDictionary, NSString, _UIAsyncInvocation;
@protocol ADPrivacyViewControllerDelegate, ADPrivacyViewControllerInternalDelegate, ADSPrivacyViewController_RPC><NSObject;

@interface ADPrivacyViewController : UIViewController <ADPrivacyRemoteViewControllerDelegate>
{
    id <ADPrivacyViewControllerDelegate> _delegate;
    id <ADPrivacyViewControllerInternalDelegate> _internalDelegate;
    ADPrivacyRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_remoteRequest;
    NSString *_transparencyDetails;
    NSDictionary *_transparencyDetailsDictionary;
}

@property(retain, nonatomic) NSDictionary *transparencyDetailsDictionary; // @synthesize transparencyDetailsDictionary=_transparencyDetailsDictionary;
@property(copy, nonatomic) NSString *transparencyDetails; // @synthesize transparencyDetails=_transparencyDetails;
@property(retain, nonatomic) _UIAsyncInvocation *remoteRequest; // @synthesize remoteRequest=_remoteRequest;
@property(retain, nonatomic) ADPrivacyRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)adPrivacyRemoteViewControllerDidLinkOut;
- (void)adPrivacyRemoteViewControllerDidRenderTransparency;
- (void)adPrivacyRemoteViewControllerDidAppear;
- (void)remoteViewControllerDidLoad;
- (void)adPrivacyRemoteViewControllerDidTerminateWithError:(id)arg1;
- (void)adPrivacyRemoteViewControllerClientRequestsDismisal;
@property(readonly, nonatomic) id <ADSPrivacyViewController_RPC><NSObject> servicePrivacyViewController;
- (void)_forwardErrorToDelegate:(id)arg1;
- (void)_dismissAndReset;
- (void)_clientApplicationDidEnterBackground;
- (void)_connectionWithAdSheetWasLost;
- (void)_resetRemoteViewController;
- (void)_dismissPrivacyViewController;
- (void)_requestPrivacyRemoteViewController;
- (void)_addRemoteView;
- (void)loadView;
- (void)dealloc;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
@property(nonatomic) __weak id <ADPrivacyViewControllerDelegate> delegate;
- (void)_commonInit;
- (id)initWithTransparencyDetailsDictionary:(id)arg1;
- (id)initWithTransparencyDetails:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
