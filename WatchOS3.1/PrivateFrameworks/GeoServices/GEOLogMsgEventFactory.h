//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface GEOLogMsgEventFactory : NSObject
{
    NSMutableDictionary *_appStateTransitionData;
    NSMutableDictionary *_appStateTransitionTimingData;
}

+ (id)sharedInstance;
- (id)logMsgEventForTelemetricWithEventKey:(int)arg1 eventValue:(unsigned long long)arg2 eventDetail:(id)arg3;
- (id)bookedTableWithBookedUsingMaps:(_Bool)arg1 cancelled:(_Bool)arg2 viewedInProactiveTray:(_Bool)arg3 tappedProactiveTrayItem:(_Bool)arg4 viewedInPlacecard:(_Bool)arg5 viewedDetailsInPlacecard:(_Bool)arg6 isAsync:(_Bool)arg7 bookedAppId:(id)arg8 muid:(unsigned long long)arg9 called:(_Bool)arg10 routed:(_Bool)arg11 tappedChangeReservation:(_Bool)arg12 tappedCancelReservation:(_Bool)arg13;
- (id)logMsgEventForTablebookedSessionWithSessionID:(id)arg1 bookedTables:(id)arg2;
- (id)logMsgEventForTablebookingWithSessionID:(id)arg1 endState:(int)arg2 endView:(int)arg3 bookTableAppId:(id)arg4 muid:(unsigned long long)arg5 blurredReservationTimestamp:(long long)arg6 blurredBookingTimestamp:(long long)arg7 durationOfSessionInSeconds:(double)arg8 installNeeded:(_Bool)arg9 installNeededTappedAppId:(id)arg10 installCompleted:(_Bool)arg11 tableSize:(unsigned int)arg12 addedSpecialRequest:(_Bool)arg13 swipedAvailableTimes:(_Bool)arg14 tappedDatePicker:(_Bool)arg15 errorMessages:(id)arg16;
- (id)logMsgEventForRidebookedWithSessionId:(id)arg1 bookedUsingMaps:(_Bool)arg2 cancelled:(_Bool)arg3 contactedDriver:(_Bool)arg4 viewedInProactiveTray:(_Bool)arg5 tappedProactiveTrayItem:(_Bool)arg6 viewedDetails:(_Bool)arg7 rideAppId:(id)arg8 numberOfAppsInstalled:(unsigned long long)arg9 enabled:(unsigned long long)arg10;
- (id)logMsgEventForSessionId:(id)arg1 ridebookingEndState:(int)arg2 endView:(int)arg3 rideAppId:(id)arg4 originBlurred:(id)arg5 destinationBlurred:(id)arg6 exploredOtherOptions:(_Bool)arg7 rideType:(id)arg8 distanceToPickupInMeters:(double)arg9 paymentIsApplePay:(_Bool)arg10 numberOfAvailableExtensions:(unsigned long long)arg11 switchedApp:(_Bool)arg12 showedSurgePricingAlert:(_Bool)arg13 durationOfSessionInSeconds:(double)arg14 installedApp:(_Bool)arg15 timestamp:(long long)arg16 unavailable:(_Bool)arg17 movedPickupLocation:(_Bool)arg18 errorMessages:(id)arg19 numberOfAppsInstalled:(unsigned long long)arg20 enabled:(unsigned long long)arg21;
- (id)logMsgEventForProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4;
- (id)logMsgsEventForMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(_Bool)arg4 startDate:(id)arg5 forDuration:(double)arg6;
- (id)logMsgEventForRefineSearchSessionOfType:(int)arg1 refineSearchType:(int)arg2 suggestionItems:(id)arg3 searchString:(id)arg4;
- (id)logMsgEventForListInteractionSessionOfType:(int)arg1 listResultItems:(id)arg2 searchString:(id)arg3;
- (id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 messageCount:(int)arg3 messageSize:(long long)arg4 retryCount:(int)arg5;
- (id)logMsgEventForTimeToLeaveIntialTravelTime:(double)arg1;
- (id)logMsgEventForTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (id)logMsgEventForTransitAppLaunchWithBundleId:(id)arg1 sourceLocation:(id)arg2 destinationLocation:(id)arg3;
- (id)logMsgEventForDirectionsFeedbacks:(id)arg1 finalLocation:(id)arg2 arrivedAtDestination:(_Bool)arg3 navigationAudioFeedback:(struct GEONavigationAudioFeedback)arg4 durationOfTrip:(double)arg5;
- (id)logMsgEventForCacheHitWithCacheType:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (id)logMsgEventForNetworkService:(int)arg1 requestAppId:(id)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 requestErrorDescription:(id)arg5 requestDataSize:(int)arg6 responseDataSize:(int)arg7 responseTime:(int)arg8;
- (id)logMsgEventForPlaceDataCacheFromAppWithID:(id)arg1;
- (id)logMsgEventForTileSetState:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4;
- (id)logMsgEventForStateTransition:(id)arg1 generateOnlyIfStateChanged:(_Bool)arg2;
- (id)logMsgEventForStaleResources:(id)arg1;
- (id)logMsgEventForMapLaunch:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(_Bool)arg3 ttlEventTime:(id)arg4;
- (id)logMsgEventForUserAction:(id)arg1 eventValue:(id)arg2 eventTarget:(int)arg3;
- (int)_bucketValueForTravelTime:(double)arg1;
- (int)_bucketValueForTimeDelta:(double)arg1;
- (void)clearStateTimingData;
- (void)dealloc;
- (id)init;

@end

