//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSError, NSUUID, VSViewServiceRemoteViewController, VSViewServiceResponse;

@protocol VSViewServiceRemoteViewControllerDelegate <NSObject>
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didCancelRequest:(NSUUID *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didChooseAdditionalProvidersForRequest:(NSUUID *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 request:(NSUUID *)arg2 didFailWithError:(NSError *)arg3;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 request:(NSUUID *)arg2 didFinishWithResponse:(VSViewServiceResponse *)arg3;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)dismissViewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1;
- (void)presentViewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1;
@end
