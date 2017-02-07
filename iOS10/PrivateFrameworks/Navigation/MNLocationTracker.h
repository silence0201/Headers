//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNLocation, MNNavigationSession;
@protocol MNLocationTrackerDelegate;

__attribute__((visibility("hidden")))
@interface MNLocationTracker : NSObject
{
    id <MNLocationTrackerDelegate> _delegate;
    int _state;
    MNLocation *_lastMatchedLocation;
    MNNavigationSession *_navigationSession;
}

@property(readonly, nonatomic) MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation; // @synthesize lastMatchedLocation=_lastMatchedLocation;
@property(nonatomic, setter=_setState:) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <MNLocationTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_checkArrivalForLocation:(id)arg1;
- (void)_updateMatchedLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)updateForTracePaused;
- (_Bool)paused;
- (void)resume;
- (void)pause;
- (_Bool)shouldAllowPause;
- (void)updateVehicleHeading:(double)arg1 timestamp:(id)arg2;
- (void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2;
- (void)updateLocation:(id)arg1;
- (void)_switchedToStepAtIndex:(unsigned long long)arg1;
- (id)matchedLocationForLocation:(id)arg1;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (void)updateDestination:(id)arg1 finishedHandler:(CDUnknownBlockType)arg2;
- (void)stopTracking;
- (void)startTracking;
@property(readonly, nonatomic) _Bool shouldProjectAlongRoute;
- (void)startTrackingWithGuidanceEnabled:(_Bool)arg1 midRoute:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasArrived;
@property(readonly, nonatomic) int transportType;
- (id)initWithNavigationSession:(id)arg1;
- (void)traceForcedActiveTransportTypeChange:(int)arg1;
- (void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (id)routeRepresentation;
- (_Bool)repeatCurrentTrafficAlert;
- (_Bool)repeatCurrentGuidance;
- (void)setVoiceGuidanceEnabled:(_Bool)arg1;
@property(nonatomic) _Bool guidancePromptsEnabled;

@end
