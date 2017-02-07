//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNLocation, MNTrafficIncidentAlert, NSTimer;
@protocol MNTrafficIncidentAlertUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTrafficIncidentAlertUpdater : NSObject
{
    id <MNTrafficIncidentAlertUpdaterDelegate> _delegate;
    MNLocation *_lastLocation;
    MNTrafficIncidentAlert *_pendingAlert;
    MNTrafficIncidentAlert *_activeAlert;
    BOOL _isSpeakingAlert;
    int _trafficIncidentStatus;
    NSTimer *_alertRetryTimer;
}

@property(nonatomic) __weak id <MNTrafficIncidentAlertUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_alertRetryTimerFired:(id)arg1;
- (void)_activateAlertForLocation:(id)arg1;
- (void)_updateAlertDistanceAndETA:(id)arg1;
- (void)_removeActiveAlert;
- (void)clearAlerts;
- (void)updateForAlertFromResponse:(id)arg1;
- (void)updateRerouteProposalStatusForRequest:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)dealloc;

@end
