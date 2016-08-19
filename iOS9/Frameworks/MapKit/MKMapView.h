//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <MapKit/MKAnnotationContainerViewDelegate-Protocol.h>
#import <MapKit/MKAnnotationManagerDelegate-Protocol.h>
#import <MapKit/MKAnnotationMarkerContainer-Protocol.h>
#import <MapKit/MKMapGestureControllerDelegate-Protocol.h>
#import <MapKit/MKOverlayContainerViewDelegate-Protocol.h>
#import <MapKit/MKVariableDelayTapRecognizerDelegate-Protocol.h>
#import <MapKit/NSCoding-Protocol.h>
#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>
#import <MapKit/VKMapViewDelegate-Protocol.h>
#import <MapKit/VKPuckAnimatorDelegate-Protocol.h>

@class CLLocation, GEOMapRegion, GEOResourceManifestConfiguration, MKAnnotationContainerView, MKAnnotationView, MKAttributionLabel, MKBasicMapView, MKCompassView, MKDebugLocationConsole, MKMapAnnotationManager, MKMapCamera, MKMapGestureController, MKMapViewInternal, MKOverlayContainerView, MKScaleView, MKUserLocation, NSArray, NSLayoutConstraint, NSString, NSTimer, UIGestureRecognizer, UIImageView, UILayoutGuide, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIPopoverController, UIRotationGestureRecognizer, UITapGestureRecognizer, UITextView, VKLabelMarker, VKMapView, VKPuckAnimator, VKRouteContext, _MKEnvironmentLabel;
@protocol MKMapViewDelegate, MKMapViewDelegate><MKMapViewDelegatePrivate;

@interface MKMapView : UIView <VKPuckAnimatorDelegate, MKOverlayContainerViewDelegate, MKAnnotationContainerViewDelegate, VKMapViewDelegate, MKMapGestureControllerDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, UIGestureRecognizerDelegate, MKVariableDelayTapRecognizerDelegate, GEOResourceManifestTileGroupObserver, NSCoding>
{
    MKMapViewInternal *_internal;
    UIView *_contentView;
    MKMapAnnotationManager *_annotationManager;
    MKAnnotationContainerView *_annotationContainer;
    MKAttributionLabel *_attributionLabel;
    CDUnknownBlockType _annotationRectTest;
    CDUnknownBlockType _annotationCoordinateTest;
    UIImageView *_attributionBadgeView;
    NSTimer *_startEffectsTimer;
    id <MKMapViewDelegate><MKMapViewDelegatePrivate> _safeDelegate;
    id <MKMapViewDelegate><MKMapViewDelegatePrivate> _unsafeDelegate;
    unsigned long long _suspendedEffectsCount;
    unsigned long long _userInteractionDisabledCount;
    unsigned long long _mapType;
    NSTimer *_defaultLocationTimer;
    MKDebugLocationConsole *_debugLocationConsole;
    CDUnknownBlockType _debugConsoleAdditionalInfoProvider;
    _MKEnvironmentLabel *_debugCurrentEnvironmentLabel;
    double _heading;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_selectingTapGestureRecognizer;
    UITapGestureRecognizer *_nonselectingTapGestureRecognizer;
    UIGestureRecognizer *_locationConsoleGesture;
    MKMapGestureController *_gestureController;
    MKOverlayContainerView *_overlayContainer;
    long long _userTrackingMode;
    MKBasicMapView *_basicMapView;
    VKMapView *_mapView;
    VKLabelMarker *_pressedLabelMarker;
    MKScaleView *_scaleView;
    MKCompassView *_compassView;
    _Bool _scaleVisible;
    _Bool _compassVisible;
    _Bool _showsScale;
    _Bool _showsCompass;
    _Bool _showsScaleDuringZoom;
    UIView *_scrollContainerView;
    CDUnknownBlockType _regionSetterWhenSized;
    MKUserLocation *_userLocation;
    VKPuckAnimator *_userLocationAnimator;
    VKRouteContext *_routeContext;
    MKMapCamera *_camera;
    id _topLayoutGuide;
    id _bottomLayoutGuide;
    CDUnknownBlockType _showCalloutAfterRegionChangeBlock;
    CDUnknownBlockType _selectAnnotationViewAfterRedrawBlock;
    UITextView *_vectorKitDebugView;
    struct UIEdgeInsets _edgeInsets;
    UIPanGestureRecognizer *_vectorKitStyleDebugGestureRecognizer;
    double _verticalYawOverride;
    long long _annotationTrackingZoomStyle;
    struct {
        unsigned int changingRegion:1;
        unsigned int debugViewHeading:1;
        unsigned int draggingInterrupted:1;
        unsigned int didStartSmoothScrolling:1;
        unsigned int hasRenderedSomething:1;
        unsigned int ignoreHeadingUpdates:1;
        unsigned int ignoreLocationUpdates:1;
        unsigned int isSuspended:1;
        unsigned int forceDisplayEffects:1;
        unsigned int longPressing:1;
        unsigned int persistFixedUserLocation:1;
        unsigned int regionChangeIsAnimated:1;
        unsigned int rotationSupported:1;
        unsigned int scrollEnabled:1;
        unsigned int scrolling:1;
        unsigned int showHeadingIndicator:1;
        unsigned int alwaysShowHeadingIndicator:1;
        unsigned int useVehicleHeading:1;
        unsigned int showsUserLocation:1;
        unsigned int zoomEnabled:1;
        unsigned int zoomIsAnimated:1;
        unsigned int zooming:1;
        unsigned int isChangingViewSize:1;
        unsigned int isChangingEdgeInsets:1;
        unsigned int showsAttribution:1;
        unsigned int showsAttributionBadge:1;
        unsigned int useOld2DAnnotationContainer:1;
        unsigned int rotating:1;
        unsigned int pitching:1;
        unsigned int rotateEnabled:1;
        unsigned int pitchEnabled:1;
        unsigned int showsBuildings:1;
        unsigned int showsPointsOfInterest:1;
        unsigned int showsTraffic:1;
        unsigned int hasPendingCameraChange:1;
        unsigned int currentRegionChangeShouldUpdateAnnotationsMidstream:1;
        unsigned int backdropViewQualityChangingDisabled:1;
        unsigned int canSelectPOIs:1;
        unsigned int canSelectAllLabels:1;
        unsigned int vectorKitConsoleEnabled:1;
        unsigned int edgeInsetsAreExplicit:1;
        unsigned int locationPropagationEnabled:1;
        unsigned int userInteractionPausesLocationUpdates:1;
        unsigned int locationPulseEnabled:1;
        unsigned int shouldSplitRouteLine:1;
        unsigned int shouldAnimatePositionWithRouteMatch:1;
        unsigned int clearUserLocationOnLocationReset:1;
        unsigned int showsCurrentEnvironmentName:1;
        unsigned int processingUserLocationUpdate:1;
        unsigned int changingMapType:1;
        unsigned int userRotatedAwayFromVerticalYaw:1;
        unsigned int goingToDefaultLocation:1;
        unsigned int delayLocationUpdatesUntilInitialRendering:1;
        unsigned int isDraggingAnnotationView:1;
        unsigned int showsPressedLabelMarkerEffect:1;
        unsigned int shouldLoadFallbackTiles:1;
        unsigned int iconPixelAlignmentExplicitlyDisabled:1;
        unsigned int userDidRotateDuringCurrentRegionChange:1;
        unsigned int isTwoFingerLongPressing:1;
        unsigned int delegateShouldReceiveTouch:1;
        unsigned int delegateShouldDelayTapResponse:1;
        unsigned int delegateDidUpdateUserLocation:1;
        unsigned int delegateWillChangeRegion:1;
        unsigned int delegateDidChangeUserTrackingMode:1;
        unsigned int delegateDidChangeUserTrackingModeButton:1;
    } _flags;
    _Bool _hasSetLayoutMargins;
    UILayoutGuide *_edgeInsetsGuide;
    NSLayoutConstraint *_edgeInsetsTopConstraint;
    NSLayoutConstraint *_edgeInsetsLeftConstraint;
    NSLayoutConstraint *_edgeInsetsRightConstraint;
    NSLayoutConstraint *_edgeInsetsBottomConstraint;
    _Bool _automaticallySnapsToNorth;
    _Bool _forceLayoutOnBoundsChange;
    long long _originalLoopRate;
    long long _preGesturingLoopRate;
    struct UIEdgeInsets _attributionInsets;
    long long _interactionMode;
    unsigned long long _currentFlyoverAnimationID;
}

+ (void)setRendersInBackgroundByDefault:(_Bool)arg1;
+ (CDStruct_90e2a262)regionThatFitsMapType:(unsigned long long)arg1 viewSize:(struct CGSize)arg2 region:(CDStruct_90e2a262)arg3;
+ (CDStruct_90e2a262)regionThatFitsMapType:(unsigned long long)arg1 viewSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3 region:(CDStruct_90e2a262)arg4;
+ (unsigned long long)minZoomLevelForMapType:(unsigned long long)arg1 viewSize:(struct CGSize)arg2;
+ (CDStruct_90e2a262)_mapRectThatFitsViewBounds:(struct CGRect)arg1 mapRect:(CDStruct_90e2a262)arg2 viewInsets:(struct UIEdgeInsets)arg3 edgePadding:(struct UIEdgeInsets)arg4 minZoomLevel:(double)arg5 maxZoomLevel:(double)arg6 snapToZoomLevel:(_Bool)arg7;
+ (CDStruct_90e2a262)_regionThatFitsMapType:(unsigned long long)arg1 viewSize:(struct CGSize)arg2 viewInsets:(struct UIEdgeInsets)arg3 edgePadding:(struct UIEdgeInsets)arg4 region:(CDStruct_90e2a262)arg5 minZoomLevel:(double)arg6 maxZoomLevel:(double)arg7 snapToZoomLevel:(_Bool)arg8;
@property(nonatomic, getter=_currentFlyoverAnimationID, setter=_setCurrentFlyoverAnimationID:) unsigned long long currentFlyoverAnimationID; // @synthesize currentFlyoverAnimationID=_currentFlyoverAnimationID;
@property(nonatomic, getter=_interactionMode, setter=_setInteractionMode:) long long interactionMode; // @synthesize interactionMode=_interactionMode;
@property(nonatomic, getter=_attributionInsets, setter=_setAttributionInsets:) struct UIEdgeInsets attributionInsets; // @synthesize attributionInsets=_attributionInsets;
@property(nonatomic, getter=_annotationTrackingZoomStyle, setter=_setAnnotationTrackingZoomStyle:) long long annotationTrackingZoomStyle; // @synthesize annotationTrackingZoomStyle=_annotationTrackingZoomStyle;
- (void).cxx_destruct;
- (void)setVehicleState:(CDStruct_b31ca263)arg1;
- (void)_stopPanningAtPoint:(struct CGPoint)arg1;
- (void)_updatePanWithTranslation:(struct CGPoint)arg1;
- (void)_startPanningAtPoint:(struct CGPoint)arg1;
- (void)_zoomOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_zoomOut;
- (void)_zoomInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_zoomIn;
- (void)_zoomWithAmount:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_zoomWithAmount:(double)arg1;
- (void)setCamera:(id)arg1 springMass:(float)arg2 springStiffness:(float)arg3 springDamping:(float)arg4 springVelocity:(float)arg5;
- (void)setCamera:(id)arg1 duration:(double)arg2 springMass:(float)arg3 springStiffness:(float)arg4 springDamping:(float)arg5 springVelocity:(float)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)setCamera:(id)arg1 duration:(double)arg2 springMass:(float)arg3 springStiffness:(float)arg4 springDamping:(float)arg5 springVelocity:(float)arg6;
- (void)setCamera:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) MKMapCamera *camera;
- (void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
- (id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
- (void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (CDStruct_90e2a262)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_90e2a262)arg2;
- (void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(CDStruct_c3b9c2ee)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)deselectAnnotationRepresentation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationRepresentation:(id)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;
- (void)removeAnnotationRepresentation:(id)arg1;
- (void)addAnnotationRepresentation:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)_showAnimationAtCoordinate:(CDStruct_c3b9c2ee)arg1 withMapRegion:(id)arg2;
- (_Bool)_canShowAnimationForSearchResultWithMapRegion:(id)arg1;
- (void)setFlyoverMode:(int)arg1;
- (void)_resumeFlyoverAnimation;
- (void)_pauseFlyoverAnimation;
- (void)_stopFlyoverAnimation;
- (void)_startFlyoverTourAnimation:(unsigned long long)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performFlyoverAnimation:(id)arg1 animateToStart:(_Bool)arg2;
- (void)_performFlyoverAnimation:(id)arg1;
- (void)_prepareFlyoverAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=_edgeInsets, setter=_setEdgeInsets:) struct UIEdgeInsets edgeInsets;
- (void)_setEdgeInsets:(struct UIEdgeInsets)arg1 explicit:(_Bool)arg2;
@property(nonatomic, getter=_labelEdgeInsets, setter=_setLabelEdgeInsets:) struct UIEdgeInsets labelEdgeInsets;
- (void)updateLayoutGuides;
- (void)_clearLayoutGuides;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)layoutMarginsDidChange;
- (void)_updateInsets;
- (id)_findLayoutGuideVC;
- (_Bool)_shouldCalculateAnimationDuration;
- (double)_goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (double)_zoomScaleForMapRegion:(id)arg1;
- (id)_mapRegionWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomScale:(double)arg2;
- (double)_zoomLevelForRegion:(CDStruct_90e2a262)arg1 includeAccessoryPadding:(_Bool)arg2;
- (double)_zoomLevelForMapRect:(CDStruct_90e2a262)arg1 includeAccessoryPadding:(_Bool)arg2;
- (double)_panDurationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)_defaultAnimationDurationForMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_90e2a262 visibleMapRect;
- (void)_setVisibleMapRect:(CDStruct_90e2a262)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setVisibleMapRect:(CDStruct_90e2a262)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)_setZoomScale:(double)arg1 centerCoordinate:(CDStruct_c3b9c2ee)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)_setZoomScale:(double)arg1 centerMapPoint:(CDStruct_c3b9c2ee)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (CDStruct_90e2a262)mapRectThatFits:(CDStruct_90e2a262)arg1;
- (CDStruct_90e2a262)mapRectThatFits:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_90e2a262)regionThatFits:(CDStruct_90e2a262)arg1;
- (CDStruct_46f4fb6f)_zoomRegionForMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2 maxZoomLevel:(long long)arg3 minZoomLevel:(long long)arg4;
@property(nonatomic) CDStruct_90e2a262 region;
- (void)setRegion:(CDStruct_90e2a262)arg1 animated:(_Bool)arg2;
- (CDStruct_c3b9c2ee)_centerMapPoint;
@property(readonly, nonatomic, getter=_mapRegionOfInterest) GEOMapRegion *mapRegionOfInterest;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 animated:(_Bool)arg2;
- (void)_addSetRegionBlockWhenSized:(CDUnknownBlockType)arg1;
- (_Bool)_mustWaitUntilSized;
- (void)_endZoomForExternalGesture;
- (void)_startZoomForExternalGesture;
- (void)drawRect:(struct CGRect)arg1 forViewPrintFormatter:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_willChangeStatusBarFrame:(id)arg1;
- (void)_removePersistentVectorOverlay:(id)arg1;
- (void)_addPersistentVectorOverlay:(id)arg1;
- (void)_removeVectorOverlay:(id)arg1;
- (void)_addVectorOverlay:(id)arg1;
@property(nonatomic, getter=_applicationState, setter=_setApplicationState:) int applicationState;
@property(nonatomic, getter=_userTrackingZoomStyle, setter=_setUserTrackingZoomStyle:) long long userTrackingZoomStyle;
@property(readonly, nonatomic, getter=_canEnterNightMode) _Bool canEnterNightMode;
@property(readonly, nonatomic, getter=_canEnter3DMode) _Bool canEnter3DMode;
@property(readonly, nonatomic, getter=_isPitched) _Bool pitched;
- (void)_exit3DMode;
- (void)_enter3DMode;
- (struct CGRect)convertMapRect:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;
- (CDStruct_90e2a262)convertRect:(struct CGRect)arg1 toMapRectFromView:(id)arg2;
- (CDStruct_90e2a262)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
@property(nonatomic, getter=_allowsPopoverWhenNotInWindow, setter=_setAllowsPopoverWhenNotInWindow:) _Bool allowsPopoverWhenNotInWindow;
@property(nonatomic) _Bool _annotationViewsAreAddedImmediately;
- (id)viewForAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)_addViewsForAnnotations:(id)arg1;
- (void)_replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)_addAnnotations:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)_addAnnotation:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)_selectAnnotation:(id)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;
- (id)_labelMarkerAtPoint:(struct CGPoint)arg1;
- (void)_selectLabelMarker:(id)arg1 animated:(_Bool)arg2;
- (void)_selectLabelMarker:(id)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;
- (void)_deselectLabelMarkerAnimated:(_Bool)arg1;
@property(readonly, nonatomic, getter=_selectedLabelMarker) VKLabelMarker *selectedLabelMarker;
@property(nonatomic, getter=_canSelectAllLabels, setter=_setCanSelectAllLabels:) _Bool canSelectAllLabels;
@property(nonatomic, getter=_canSelectPOIs, setter=_setCanSelectPOIs:) _Bool canSelectPOIs;
@property(copy, nonatomic) NSArray *selectedAnnotations;
@property(readonly, nonatomic, getter=_annotationViews) NSArray *annotationViews;
- (id)annotationsInMapRect:(CDStruct_90e2a262)arg1;
@property(readonly, nonatomic) struct CGRect annotationVisibleRect;
@property(readonly, nonatomic) NSArray *annotations;
- (void)goToDefaultLocation;
- (void)_displayWorld;
- (void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2;
- (double)annotationContainerZoomScale:(id)arg1;
- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)annotationContainerDidDropPins:(id)arg1;
- (void)annotationContainerWillDropPins:(id)arg1;
- (double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CDStruct_c3b9c2ee)arg2 maxDistance:(double *)arg3;
- (struct CGRect)annotationContainerVisibleRect:(id)arg1;
- (void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;
- (void)annotationContainerDidAnimateBubble:(id)arg1;
- (void)annotationContainerWillAnimateBubble:(id)arg1;
- (void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(CDStruct_c3b9c2ee)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)annotationContainerShouldAlignToPixels:(id)arg1;
- (_Bool)annotationContainerIsRotated:(id)arg1;
- (struct CGRect)visibleCenteringRectInView:(id)arg1;
- (struct CGRect)visibleRectInView:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishSuspensionSnapshot:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (struct CGRect)gestureControllerSignificantViewFrame:(id)arg1;
- (struct CGPoint)gestureController:(id)arg1 smartAimingPointForPoint:(struct CGPoint)arg2;
- (double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (_Bool)gestureController:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)gestureControllerWillStartTilting:(id)arg1;
- (void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)gestureControllerWillStartRotating:(id)arg1;
- (void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
- (void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
- (void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2;
- (void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 willDecelerate:(_Bool)arg3;
- (void)gestureControllerWillStartZooming:(id)arg1 animated:(_Bool)arg2;
- (void)gestureControllerDidStopPanningDecelerating:(id)arg1;
- (void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)gestureControllerWillStartPanning:(id)arg1;
- (void)gestureControllerDidStopUserInteraction:(id)arg1;
- (void)gestureControllerWillStartUserInteraction:(id)arg1;
- (void)mapLayer:(id)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapLayer:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapLayer:(id)arg1 showingFlyoverDidChange:(_Bool)arg2;
- (void)mapLayer:(id)arg1 canShowFlyoverDidChange:(_Bool)arg2;
- (void)mapLayer:(id)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)mapLayer:(id)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)mapLayer:(id)arg1 canZoomInDidChange:(_Bool)arg2;
- (void)mapLayer:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)mapLayer:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapLayer:(id)arg1 didChangeRegionAnimated:(_Bool)arg2;
- (void)mapLayer:(id)arg1 willChangeRegionAnimated:(_Bool)arg2;
- (void)mapLayerDidDraw:(id)arg1;
- (void)mapLayerDidChangeVisibleRegion:(id)arg1;
- (void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
- (void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(_Bool)arg2;
- (void)mapLayerWillStartFlyoverTour:(id)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (id)mapLayer:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (id)mapLayer:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(_Bool)arg2;
- (void)mapLayerDidBecomePartiallyDrawn:(id)arg1;
- (void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapLayerDidFinishLoadingTiles:(id)arg1;
- (void)mapLayerDidStartLoadingTiles:(id)arg1;
@property(nonatomic, getter=_automaticallySnapsToNorth, setter=_setAutomaticallySnapsToNorth:) _Bool automaticallySnapsToNorth;
- (void)_snapToTrueNorthAndCallBack:(_Bool)arg1;
- (void)snapToNorth:(id)arg1;
- (id)compassVisibilityAnimation;
- (_Bool)compassVisible;
- (void)_setCompassVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleCompassTap:(id)arg1;
- (void)_updateCompassPosition;
- (void)_updateCompassVisibility;
- (id)compassView;
- (_Bool)_roomForCompass;
@property(nonatomic) _Bool showsCompass;
@property(nonatomic, getter=isCompassEnabled) _Bool compassEnabled;
- (void)_updateScalePosition;
- (void)_showOrHideScaleIfNecessary:(_Bool)arg1;
- (void)_updateScale;
- (_Bool)_shouldDisplayScaleForCurrentRegion;
- (id)scaleView;
- (_Bool)drawsBlackOnWhiteScale;
@property(nonatomic, getter=_showsScaleDuringZoom, setter=_setShowsScaleDuringZoom:) _Bool showsScaleDuringZoom;
@property(nonatomic) _Bool showsScale;
- (void)_forceFrame;
- (id)_labelMarkersInCurrentViewportForType:(int)arg1;
- (id)_labelMarkersInCurrentViewport;
- (void)_sizeDidChangeWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_sizeWillChange;
- (void)_updateRotationAttributes;
@property(readonly, nonatomic, getter=_isChangingRegionForGesture) _Bool changingRegionForGesture;
- (void)_selectUserLocationTypeWithDeltaZoomLevel:(double)arg1;
- (void)resumeUserLocationUpdates;
- (void)pauseUserLocationUpdates;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_updateContentBounds;
- (void)_insertSubview:(id)arg1;
- (int)_viewIndexForSubview:(id)arg1;
- (void)_fixUserLocationFromPresentationValue;
- (void)_clearFixedUserLocation;
@property(nonatomic, getter=_forceDisplayEffects, setter=_setForceDisplayEffects:) _Bool forceDisplayEffects;
- (void)showAnnotations:(id)arg1 animated:(_Bool)arg2;
- (_Bool)effectsEnabled;
- (void)set_startEffectsTimer:(id)arg1;
- (id)_startEffectsTimer;
- (void)_updateEffects;
- (void)_updateShouldDisplayEffects;
- (void)_startEffects;
- (id)beginStoppingEffects;
- (void)_stopEffects;
- (void)_updateScrollContainerView:(_Bool)arg1;
- (void)_updateFallbackTileLoading;
- (void)_updateScrollingAndGestures;
- (double)_boundedZoomLevel:(double)arg1;
- (void)_annotationViewDragStateChanged:(id)arg1;
@property(nonatomic, getter=_shouldLoadFallbackTiles, setter=_setShouldLoadFallbackTiles:) _Bool shouldLoadFallbackTiles;
@property(nonatomic, getter=_shouldAnimatePositionWithRouteMatch, setter=_setShouldAnimatePositionWithRouteMatch:) _Bool shouldAnimatePositionWithRouteMatch;
@property(nonatomic, getter=_shouldSplitRouteLine, setter=_setShouldSplitRouteLine:) _Bool shouldSplitRouteLine;
@property(nonatomic, getter=_isLocationPulseEnabled, setter=_setLocationPulseEnabled:) _Bool locationPulseEnabled;
@property(nonatomic, getter=_userInteractionPausesLocationUpdates, setter=_setUserInteractionPausesLocationUpdates:) _Bool userInteractionPausesLocationUpdates;
- (void)_didEndZoom;
- (void)_willStartZoom:(_Bool)arg1;
- (void)_didChangeRegionMidstream:(_Bool)arg1;
- (void)_clearGestureRecognizers;
- (void)_willChangeRegionAnimated:(_Bool)arg1;
- (void)_updateIconsShouldAlignToPixels;
- (_Bool)_iconsShouldAlignToPixels;
- (void)toggleLocationConsole:(id)arg1;
@property(nonatomic, getter=_showsCurrentEnvironmentName, setter=_setShowsCurrentEnvironmentName:) _Bool showsCurrentEnvironmentName;
- (_Bool)_isUsingDevResourceStyleSheet;
- (void)_updateEnvironmentLabelText;
- (struct CGRect)_currentEnvironmentNameFrame;
@property(copy, nonatomic, getter=_debugConsoleAdditionalInfoProvider, setter=_setDebugConsoleAdditionalInfoProvider:) CDUnknownBlockType debugConsoleAdditionalInfoProvider;
@property(readonly, nonatomic, getter=_debugConsole) MKDebugLocationConsole *debugConsole;
- (void)_handleTapToDeselect:(id)arg1;
- (void)_handleSelectionAtPoint:(struct CGPoint)arg1;
- (void)_handleTapToSelect:(id)arg1;
@property(readonly, nonatomic, getter=_calloutPopoverTargetRect) struct CGRect calloutPopoverTargetRect;
@property(readonly, nonatomic, getter=_calloutContentRect) struct CGRect calloutContentRect;
- (_Bool)_isCalloutExpanded;
@property(readonly, nonatomic, getter=_calloutPopoverController) UIPopoverController *calloutPopoverController;
- (_Bool)calloutViewContainsPoint:(struct CGPoint)arg1;
- (void)handleLongPress:(id)arg1;
- (void)_dropDraggingAnnotationView:(_Bool)arg1;
- (id)_annotationAtPoint:(struct CGPoint)arg1 avoidCurrent:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_configureGestureRecognizers:(id)arg1;
- (void)_addDebugGesture;
- (void)_updateShowHeadingIndicator;
@property(nonatomic, getter=_alwaysShowHeadingIndicator, setter=_setAlwaysShowHeadingIndicator:) _Bool alwaysShowHeadingIndicator;
- (void)_setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2 fromTrackingButton:(_Bool)arg3;
- (void)setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long userTrackingMode;
- (_Bool)canRotateForHeading;
@property(readonly, nonatomic) _Bool hasUserLocation;
@property(readonly, nonatomic) MKUserLocation *userLocation;
- (_Bool)hasRenderedSomething;
@property(readonly, nonatomic, getter=isUserLocationVisible) _Bool userLocationVisible;
@property(nonatomic, getter=_shouldDelayLocationUpdatesUntilInitialRendering, setter=_setShouldDelayLocationUpdatesUntilInitialRendering:) _Bool shouldDelayLocationUpdatesUntilIntialRendering;
@property(nonatomic) _Bool showsUserLocation;
- (void)_setTracePlaybackSpeedMultiplier:(double)arg1;
@property(nonatomic, getter=_panWithMomentum, setter=_setPanWithMomentum:) _Bool panWithMomentum;
@property(nonatomic, getter=isPitchEnabled) _Bool pitchEnabled;
@property(nonatomic, getter=isRotateEnabled) _Bool rotateEnabled;
@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)_canZoomOut;
- (_Bool)_canZoomIn;
@property(readonly, nonatomic, getter=_maximumZoomLevel) double maximumZoomLevel;
@property(readonly, nonatomic, getter=_minimumZoomLevel) double minimumZoomLevel;
@property(readonly, nonatomic) double _zoomLevel;
@property(readonly, nonatomic) double _zoomScale;
- (long long)_roundedZoomLevel;
- (void)_updateVectorKitConsoleFrameWithEdgeInsets;
- (_Bool)_isHandlingUserEvent;
- (struct CGPoint)_centerPoint;
@property(readonly, nonatomic, getter=isRegionChanging) _Bool regionChanging;
- (_Bool)isSuspended;
- (void)setSuspended:(_Bool)arg1;
- (void)_resumeUserInteraction;
- (void)_suspendUserInteraction;
- (void)_handleStyleDebugGesture:(id)arg1;
@property(nonatomic, getter=_isVectorKitStyleDebugEnabled, setter=_setVectorKitStyleDebugEnabled:) _Bool vectorKitStyleDebugEnabled;
- (void)_setMapDisplayStyle:(CDStruct_f0cfbbbb)arg1;
- (CDStruct_f0cfbbbb)_mapDisplayStyle;
@property(nonatomic, getter=_showsNightMode, setter=_setShowsNightMode:) _Bool showsNightMode;
- (void)_setMapType:(unsigned long long)arg1 onInit:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_setMapType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)_supportsVKMapType:(long long)arg1;
@property(nonatomic) unsigned long long mapType;
@property(readonly, nonatomic, getter=_canShowFlyover) _Bool canShowFlyover;
@property(readonly, nonatomic, getter=_isShowingFlyover) _Bool showingFlyover;
- (long long)_interfaceOrientation;
- (void)_updateHeadingOrientation;
- (void)set_defaultLocationTimer:(id)arg1;
- (id)_defaultLocationTimer;
@property(nonatomic) _Bool rendersInBackground;
@property(readonly, nonatomic, getter=_isHandlingNonselectingTap) _Bool handlingNonselectingTap;
@property(readonly, nonatomic, getter=_twoFingerPanGestureRecognizer) UIPanGestureRecognizer *twoFingerPanGestureRecognizer;
@property(readonly, nonatomic, getter=_doubleTapGestureRecognizer) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property(readonly, nonatomic, getter=_pressureGestureRecognizer) UIGestureRecognizer *pressureGestureRecognizer;
@property(readonly, nonatomic, getter=_longPressGestureRecognizer) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property(readonly, nonatomic, getter=_nonselectingTapGestureRecognizer) UITapGestureRecognizer *nonselectingTapGestureRecognizer;
@property(readonly, nonatomic, getter=_selectingTapGestureRecognizer) UITapGestureRecognizer *selectingTapGestureRecognizer;
@property(readonly, nonatomic, getter=_rotationGestureRecognizer) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property(readonly, nonatomic, getter=_pinchGestureRecognizer) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic, getter=_panningGestureRecognizer) UIPanGestureRecognizer *panningGestureRecognizer;
@property(nonatomic, getter=_showsPressedLabelMarkerEffect, setter=_setShowsPressedLabelMarkerEffect:) _Bool showsPressedLabelMarkerEffect;
- (_Bool)isShowingNoDataPlaceholders;
@property(nonatomic) _Bool showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic, getter=_localizeLabels, setter=_setLocalizeLabels:) _Bool localizeLabels;
@property(nonatomic, getter=_showsTrafficIncidents, setter=_setShowsTrafficIncidents:) _Bool showsTrafficIncidents;
@property(nonatomic) _Bool showsTraffic;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)geoDefaultsDidChange:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
@property(nonatomic, getter=_isVectorKitConsoleEnabled, setter=_setVectorKitConsoleEnabled:) _Bool vectorKitConsoleEnabled;
- (id)mapAttributionWithStringAttributes:(id)arg1;
- (struct CGRect)attributionFrame;
- (void)_updateAttribution;
- (void)_layoutAttribution;
@property(nonatomic) _Bool showsAttributionBadge;
@property(nonatomic) _Bool showsAttribution;
- (void)_restoreViewportFromDictionary:(id)arg1;
- (id)_viewportDictionary;
@property(retain, nonatomic, getter=_additionalManifestConfiguration, setter=_setAdditionalManifestConfiguration:) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property(readonly, nonatomic, getter=_mapLayer) VKMapView *mapLayer;
- (void)setBackdropViewQualityChangingDisabled:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_setSafeDelegate:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromIBWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 gestureRecognizerHostView:(id)arg2 showsAttribution:(_Bool)arg3;
- (id)_commonInitFromIB:(_Bool)arg1 gestureRecognizerHostView:(id)arg2 showsAttribution:(_Bool)arg3;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
@property(nonatomic, getter=isScaleEnabled) _Bool scaleEnabled;
- (void)_setShowsTraffic:(_Bool)arg1;
- (_Bool)_showsTraffic;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(CDStruct_39925896)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(CDStruct_39925896)arg2 course:(double)arg3;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_updateUserLocationViewWithLocation:(id)arg1 hadUserLocation:(_Bool)arg2;
@property(readonly, retain, nonatomic) MKAnnotationView *userLocationView;
- (void)_updateUserLocation:(id)arg1 routeMatch:(id)arg2;
- (void)_resumeUserLocationUpdates:(_Bool)arg1;
- (void)_pauseUserLocationUpdates;
@property(nonatomic) _Bool ignoreLocationUpdates;
- (void)removeUserLocation;
@property(retain, nonatomic) CLLocation *predictedUserLocation;
- (_Bool)_userLocationWithinVisibleMapBounds;
- (_Bool)_isUserLocationViewCentered:(double)arg1;
- (_Bool)_isUserLocationInView:(_Bool)arg1;
- (void)_setClearUserLocationOnLocationReset:(_Bool)arg1;
- (_Bool)_clearUserLocationOnLocationReset;
- (void)_setLocationPropagationEnabled:(_Bool)arg1;
- (_Bool)_isLocationPropagationEnabled;
- (void)_updateLocationConsole;
- (void)setLocationConsoleEnabled:(_Bool)arg1;
- (_Bool)isLocationConsoleEnabled;
- (void)stopUpdatingUserLocation;
- (void)startUpdatingUserLocation;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)_updateCourseForMapViewHeading:(id)arg1;
- (void)_updateHeadingIndicatorAnimated:(_Bool)arg1;
- (void)_updateHeading:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_updateRotationSupported;
- (_Bool)_rotationPossible;
- (void)_stopTrackingHeading;
- (void)_startTrackingHeading;
- (void)enableMapRotationIfNeeded;
- (void)resumeUserHeadingUpdates;
- (void)pauseUserHeadingUpdates;
- (void)_setUseVehicleHeading:(_Bool)arg1;
- (_Bool)_useVehicleHeading;
- (void)_setShowHeadingIndicator:(_Bool)arg1;
- (_Bool)_showHeadingIndicator;
- (void)_snapToNorthIfNecessary;
- (void)_updateCameraState;
- (void)_updateFromCamera:(id)arg1;
- (void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setCamera:(id)arg1 duration:(double)arg2 springMass:(float)arg3 springStiffness:(float)arg4 springDamping:(float)arg5 springVelocity:(float)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_setCamera:(id)arg1 springMass:(float)arg2 springStiffness:(float)arg3 springDamping:(float)arg4 springVelocity:(float)arg5;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timing:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timingCurve:(long long)arg3;
- (void)_setCamera:(id)arg1 animated:(_Bool)arg2;
- (double)_durationFoCamera:(id)arg1;
- (void)_setCamera:(id)arg1;
- (id)_camera;
- (id)_selectedTransitLineIDs;
- (void)_deselectTransitLineMarker;
- (void)_selectTransitLineMarkerWithFeatureID:(unsigned long long)arg1;
- (void)_selectTransitLineMarker:(id)arg1;
- (id)_transitLineMarkerForFeatureID:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=_transitLineMarkersInCurrentViewport) NSArray *transitLineMarkersInCurrentViewport;
- (id)vk_mapLayer;
- (void)overlayContainerAddedDrawables:(id)arg1;
- (id)createDrawableForOverlay:(id)arg1;
- (id)overlayContainer;
- (id)overlaysInLevel:(long long)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (id)rendererForOverlay:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)addOverlays:(id)arg1 level:(long long)arg2;
- (void)addOverlay:(id)arg1 level:(long long)arg2;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)_resetMaximumZoomLevel;
- (void)_setMaximumZoomLevel:(double)arg1;
- (id)_transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=_detailedDescription) NSString *detailedDescription;
@property(readonly, nonatomic, getter=_visibleTileSets) NSArray *visibleTileSets;
- (void)_clearRouteContext;
- (void)_setRouteContextInspectedLegIndex:(unsigned long long)arg1 inspectedStepIndex:(unsigned long long)arg2;
- (void)_setRouteContextForRoute:(id)arg1;
@property(nonatomic) __weak id <MKMapViewDelegate> delegate; // @dynamic delegate;
- (double)_distanceFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 fromView:(id)arg3 withPrecision:(long long)arg4;
- (struct CGRect)_convertMapRect:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;
- (CDStruct_90e2a262)_convertRect:(struct CGRect)arg1 toMapRectFromView:(id)arg2;
- (CDStruct_90e2a262)_convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)_convertRegion:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;
- (CDStruct_c3b9c2ee)_convertPoint:(struct CGPoint)arg1 toMapPointFromView:(id)arg2;
- (struct CGPoint)_convertMapPoint:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
- (CDStruct_c3b9c2ee)_convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)_convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

