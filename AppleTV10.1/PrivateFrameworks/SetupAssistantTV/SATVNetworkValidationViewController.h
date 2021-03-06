//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantTV/SATVViewController.h>

#import <SetupAssistantTV/SATVNetworkConfigurationDelegate-Protocol.h>

@class NSObject, NSString, SATVNetworkReachability, TVSEthernetInterface, TVSWiFiInterface, UIActivityIndicatorView, UIView;
@protocol OS_dispatch_source;

@interface SATVNetworkValidationViewController : SATVViewController <SATVNetworkConfigurationDelegate>
{
    _Bool standardNavigation;
    _Bool _observingNetworkInterface;
    _Bool _shouldWaitForPhysicalInterface;
    _Bool _presentingError;
    _Bool _interfaceAvailabilityTimerExpired;
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_activityIndicatorContainerView;
    SATVNetworkReachability *_networkReachability;
    TVSEthernetInterface *_ethernetInterface;
    TVSWiFiInterface *_wiFiInterface;
    NSObject<OS_dispatch_source> *_interfaceAvailabilityTimer;
}

@property(nonatomic) _Bool interfaceAvailabilityTimerExpired; // @synthesize interfaceAvailabilityTimerExpired=_interfaceAvailabilityTimerExpired;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *interfaceAvailabilityTimer; // @synthesize interfaceAvailabilityTimer=_interfaceAvailabilityTimer;
@property(nonatomic, getter=isPresentingError) _Bool presentingError; // @synthesize presentingError=_presentingError;
@property(retain, nonatomic) TVSWiFiInterface *wiFiInterface; // @synthesize wiFiInterface=_wiFiInterface;
@property(retain, nonatomic) TVSEthernetInterface *ethernetInterface; // @synthesize ethernetInterface=_ethernetInterface;
@property(retain, nonatomic) SATVNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool shouldWaitForPhysicalInterface; // @synthesize shouldWaitForPhysicalInterface=_shouldWaitForPhysicalInterface;
@property(nonatomic, getter=isObservingNetworkInterface) _Bool observingNetworkInterface; // @synthesize observingNetworkInterface=_observingNetworkInterface;
@property(nonatomic, getter=isStandardNavigation) _Bool standardNavigation; // @synthesize standardNavigation;
- (void).cxx_destruct;
- (_Bool)_isFactoryActivated;
- (void)_stopObservingPhysicalInterfaceChanges;
- (void)_observePhysicalInterfaceChanges;
- (void)_popToControllerBeforeMe;
- (void)_pushNetworkConfigurationController;
- (void)_pushWiFiController;
- (void)_forgetCurrentWiFiNetwork;
- (void)_wiFiConnectionFailed;
- (void)_ethernetConnectionFailed;
- (void)_connectionSucceeded;
- (void)_presentReachabilityErrorIsWiFi:(_Bool)arg1 withOKAction:(CDUnknownBlockType)arg2;
- (void)_cancelInterfaceAvailabilityTimer;
- (void)_startInterfaceAvailabilityTimerIfNeeded;
- (void)_testReachabilityForWifi;
- (void)_testReachabilityForEthernet;
- (void)_testReachabilityForActiveInterfaceIfPossible;
- (void)_hideActivityIndicator;
- (void)_showActivityIndicator;
- (void)didCompleteNetworkConfiguration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldSkipToNextController;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

