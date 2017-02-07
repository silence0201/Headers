//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKAnnotationCalloutControllerDelegate-Protocol.h>
#import <MapKit/_MKPinAnnotationViewDelegate-Protocol.h>

@class MKAnnotationCalloutController, MKAnnotationView, MKPinAnnotationView, NSMutableArray, NSMutableSet, NSString, UIPopoverController, _MKBalloonAnnotationCalloutController;
@protocol MKAnnotationContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotationContainerView : UIView <MKAnnotationCalloutControllerDelegate, _MKPinAnnotationViewDelegate>
{
    NSMutableArray *_annotationViews;
    NSMutableArray *_awaitingDropPins;
    MKAnnotationView *_selectedAnnotationView;
    MKAnnotationView *_annotationViewToSelect;
    id <MKAnnotationContainerViewDelegate> _delegate;
    MKAnnotationView *_draggingAnnotationView;
    struct CGPoint _mouseDownPoint;
    struct CGPoint _draggingAnnotationViewCenter;
    unsigned long long _mapType;
    _Bool _clickedOnAnnotationView;
    _Bool _didDragAnnotationView;
    MKAnnotationView *_userLocationView;
    double _annotationViewsRotationRadians;
    struct CGAffineTransform _mapTransform;
    _Bool _addingSubview;
    _Bool _suppressCallout;
    NSMutableSet *_viewsToAnimate;
    MKAnnotationCalloutController *_calloutController;
    _MKBalloonAnnotationCalloutController *_balloonCalloutController;
    double _mapPitchRadians;
    CDStruct_80aa614a _mapDisplayStyle;
}

@property(nonatomic) _Bool suppressCallout; // @synthesize suppressCallout=_suppressCallout;
- (void).cxx_destruct;
- (CDStruct_02837cd9)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_02837cd9)arg2;
- (void)calloutControllerDidFinishMapsTransitionExpanding:(id)arg1;
- (void)calloutController:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2;
- (void)calloutDidAppearForAnnotationView:(id)arg1 inCalloutController:(id)arg2;
- (void)calloutController:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)calloutController:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(struct CLLocationCoordinate2D)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (struct CGRect)calloutController:(id)arg1 visibleCenteringRectInAnnotationView:(id)arg2;
- (void)transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3;
- (void)stopSuppressingUpdates;
- (void)suppressUpdates;
- (void)annotationViewDidChangeCenterOffset:(id)arg1;
- (void)annotationViewDidChangeZIndex:(id)arg1;
- (unsigned long long)indexForAnnotationView:(id)arg1;
@property(readonly, nonatomic) CDStruct_089f5ccb currentComparisonContext;
- (void)selectAnnotationView:(id)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;
- (void)addSubview:(id)arg1;
- (void)dropPinsIfNeeded;
- (void)removeAnnotationView:(id)arg1;
- (void)finishAddingAnnotationViews;
- (void)addAnnotationView:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)_updateAddedAnnotationRotation:(id)arg1;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (void)_dropPinsIfNeeded:(_Bool)arg1;
- (void)setUserLocationView:(id)arg1;
@property(readonly, nonatomic) MKAnnotationView *userLocationView;
@property(readonly, nonatomic) _Bool hasPendingAnimations;
@property(readonly, nonatomic) _Bool hasDroppingPins;
- (struct UIEdgeInsets)accessoryPadding;
- (void)pinDidDrop:(id)arg1 animated:(_Bool)arg2;
- (void)_dropDraggingAnnotationViewAnimated:(_Bool)arg1;
- (struct CGPoint)draggingAnnotationViewDropPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)draggingAnnotationViewDropPoint;
- (void)draggingTouchMovedToPoint:(struct CGPoint)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint)arg2;
- (id)annotationViewForPoint:(struct CGPoint)arg1;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(_Bool)arg2 maxDistance:(double)arg3;
- (void)updateAnnotationLocationsDuringAnimation:(_Bool)arg1;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (void)_updateOrientationOfViews:(id)arg1;
- (void)_updateOrientationOfViews:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViewsFast:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViewsCorrect:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_findNextView:(id *)arg1 orientation:(int *)arg2 context:(id)arg3;
@property(readonly, nonatomic) NSMutableArray *annotationViews;
- (void)updateUserLocationView;
- (void)updateAnnotationView:(id)arg1;
- (void)_updateAnnotationView:(id)arg1;
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CLLocationCoordinate2D)coordinateForAnnotationView:(id)arg1;
- (void)_updateAnnotationViewPerspective;
- (void)deselectAnnotationView:(id)arg1 animated:(_Bool)arg2;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(_Bool)arg2 pressed:(_Bool)arg3 scrollToFit:(_Bool)arg4;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(_Bool)arg2 pressed:(_Bool)arg3 scrollToFit:(_Bool)arg4 avoid:(struct CGRect)arg5;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(_Bool)arg2 scrollToFit:(_Bool)arg3;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(_Bool)arg2 scrollToFit:(_Bool)arg3 avoid:(struct CGRect)arg4;
- (void)removeAnnotationViewsRotationAnimations;
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;
@property(readonly, nonatomic) MKPinAnnotationView *bubblePin;
@property(readonly, nonatomic) MKAnnotationView *calloutAnnotationView;
- (struct CGRect)_visibleRect;
- (struct CGRect)_visibleCenteringRectInView:(id)arg1;
- (struct CGRect)_visibleCenteringRect;
- (_Bool)isCalloutExpanded;
- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;
- (void)setMapDisplayStyle:(CDStruct_80aa614a)arg1;
@property(nonatomic) unsigned long long mapType;
- (struct CGRect)popoverTargetRectForSelectedAnnotationInView:(id)arg1;
@property(nonatomic) _Bool allowsPopoverWhenNotInWindow;
@property(readonly, nonatomic) UIPopoverController *popoverController;
- (void)setMapPitchRadians:(double)arg1;
@property(nonatomic) __weak id <MKAnnotationContainerViewDelegate> delegate;
- (id)activeCalloutController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

