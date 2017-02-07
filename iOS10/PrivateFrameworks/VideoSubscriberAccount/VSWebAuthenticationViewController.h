//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccount/UIWebViewDelegate-Protocol.h>
#import <VideoSubscriberAccount/UIWebViewPrivateDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSMessageQueueDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSWebAuthenticationViewController-Protocol.h>

@class NSString, VSViewModel, VSWebAuthenticationViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate, VSMessageQueueDelegate, VSWebAuthenticationViewController>
{
    _Bool _cancellationAllowed;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSWebAuthenticationViewModel *_viewModel;
}

@property(readonly, nonatomic) VSViewModel *viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (id)_canonicalRequestForRequest:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_sendMessages:(id)arg1;
- (void)_retrieveMessages;
- (void)_sendMessage:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (id)webView;
- (void)setViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
@property(readonly) Class superclass;

@end
