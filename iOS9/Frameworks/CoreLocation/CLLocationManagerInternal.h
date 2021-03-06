//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerInternal : NSObject
{
    struct __CLClient *fClient;
    id <CLLocationManagerDelegate> fDelegate;
    double fDistanceFilter;
    double fDesiredAccuracy;
    _Bool fUpdatingLocation;
    CDStruct_0aa5cb5c fLocation;
    NSString *fLocationEventType;
    _Bool fRequestingLocation;
    struct __CFRunLoopTimer *fLocationRequestTimer;
    double fLocationRequestTimeout;
    _Bool fCapabilitiesValid;
    struct {
        double bestAccuracy;
    } fCapabilities;
    _Bool fUpdatingHeading;
    double fHeadingFilter;
    int fHeadingOrientation;
    _Bool fPersistentMonitoringEnabled;
    _Bool fAllowsLocationPrompts;
    _Bool fAllowsAlteredAccessoryLocations;
    _Bool fDynamicAccuracyReductionEnabled;
    _Bool fPreviousAuthorizationStatusValid;
    int fPreviousAuthorizationStatus;
    long long fActivityType;
    int fPausesLocationUpdatesAutomatically;
    _Bool fPaused;
    _Bool fAllowsBackgroundLocationUpdates;
    _Bool fAllowsMapCorrection;
    _Bool fBatchingLocation;
    _Bool fUpdatingVehicleSpeed;
    _Bool fUpdatingVehicleHeading;
    _Bool fMatchInfoEnabled;
    _Bool fCourtesyPromptNeeded;
    NSMutableSet *fRangedRegions;
}

@property(readonly, nonatomic) NSMutableSet *rangedRegions; // @synthesize rangedRegions=fRangedRegions;
- (void)dealloc;
- (void)performCourtesyPromptIfNeeded;
- (void)cancelLocationRequest;
- (void)stopUpdatingLocationAutoPaused;
- (_Bool)allowsBackgroundLocationUpdates;
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;
- (int)PausesLocationUpdatesAutomatically;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;

@end

