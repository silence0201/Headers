//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSViewServiceViewController.h>

#import <VideoSubscriberAccount/VSViewControllerPresentationStackDelegate-Protocol.h>

@class NSString, VSViewControllerPresentationStack;

__attribute__((visibility("hidden")))
@interface VSViewServiceViewController_tvOS : VSViewServiceViewController <VSViewControllerPresentationStackDelegate>
{
    VSViewControllerPresentationStack *_viewControllerPresentationStack;
}

@property(retain, nonatomic) VSViewControllerPresentationStack *viewControllerPresentationStack; // @synthesize viewControllerPresentationStack=_viewControllerPresentationStack;
- (void).cxx_destruct;
- (void)viewControllerPresentationStack:(id)arg1 rootViewControllerDidAppear:(id)arg2;
- (void)_perfomShowViewControllerRequest:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
