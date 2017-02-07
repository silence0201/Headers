//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSURL, SKInvocationQueueProxy, SKRemoteAccountPageViewController, _UIAsyncInvocation;
@protocol SKAccountPageViewControllerDelegate, SKUIServiceAccountPageViewController;

@interface SKAccountPageViewController : UIViewController
{
    NSURL *_accountURL;
    _UIAsyncInvocation *_cancelRequest;
    id <SKAccountPageViewControllerDelegate> _delegate;
    CDUnknownBlockType _prepareBlock;
    SKRemoteAccountPageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> *_serviceProxy;
}

@property(nonatomic) id <SKAccountPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_requestRemoteViewController;
- (void)_addRemoteView;
- (void)_dismissViewController;
- (void)_didPrepareWithResult:(_Bool)arg1 error:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAccountURL:(id)arg1;

@end

