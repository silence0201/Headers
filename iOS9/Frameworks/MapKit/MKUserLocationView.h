//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

#import <MapKit/VKPuckAnimatorTarget-Protocol.h>

@class CALayer, CLLocation, MKUserLocationHeadingLayer, NSString, VKAnnotationMarker;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget>
{
    VKAnnotationMarker *_marker;
    long long _zoomDirection;
    CALayer *_pulseLayer;
    CALayer *_accuracyLayer;
    _Bool _allowsPulse;
    _Bool _shouldPulse;
    _Bool _allowsHeadingIndicator;
    _Bool _shouldDisplayHeading;
    _Bool _shouldDisplayInaccurateHeading;
    double _heading;
    double _headingAccuracy;
    MKUserLocationHeadingLayer *_headingLayer;
    _Bool _allowsAccuracyRing;
    _Bool _stale;
    _Bool _effectsEnabled;
    double _maxRadiusToShowAccuracyRing;
    double _presentationCourse;
    double _locationAccuracy;
    CLLocation *_lastLocation;
}

+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (double)accuracyDiameter:(double)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(readonly, nonatomic) double locationAccuracy; // @synthesize locationAccuracy=_locationAccuracy;
@property(nonatomic) double presentationCourse; // @synthesize presentationCourse=_presentationCourse;
@property(nonatomic, getter=isEffectsEnabled) _Bool effectsEnabled; // @synthesize effectsEnabled=_effectsEnabled;
@property(nonatomic, getter=isStale) _Bool stale; // @synthesize stale=_stale;
@property(nonatomic) double maxRadiusToShowAccuracyRing; // @synthesize maxRadiusToShowAccuracyRing=_maxRadiusToShowAccuracyRing;
@property(nonatomic) _Bool allowsAccuracyRing; // @synthesize allowsAccuracyRing=_allowsAccuracyRing;
@property(nonatomic) double headingAccuracy; // @synthesize headingAccuracy=_headingAccuracy;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) _Bool shouldDisplayInaccurateHeading; // @synthesize shouldDisplayInaccurateHeading=_shouldDisplayInaccurateHeading;
@property(nonatomic) _Bool shouldDisplayHeading; // @synthesize shouldDisplayHeading=_shouldDisplayHeading;
@property(nonatomic) _Bool allowsHeadingIndicator; // @synthesize allowsHeadingIndicator=_allowsHeadingIndicator;
@property(nonatomic) _Bool allowsPulse; // @synthesize allowsPulse=_allowsPulse;
@property(nonatomic) long long zoomDirection; // @synthesize zoomDirection=_zoomDirection;
- (void).cxx_destruct;
- (void)setAnimatingToCoordinate:(_Bool)arg1;
- (void)setPresentationCoordinate:(CDStruct_c3b9c2ee)arg1;
- (_Bool)_tracking;
- (void)_setTracking:(_Bool)arg1;
- (void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2;
- (void)_setPresentationCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_setAnimatingToCoordinate:(_Bool)arg1;
- (id)_vkMarker;
- (void)_updateLayers;
- (void)locationManagerFailedToUpdateLocation;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (_Bool)_isLocationStale:(id)arg1;
- (_Bool)_shouldPulseForLocation:(id)arg1;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (void)_resetLayerToMatchAccuracyRing;
- (id)_layerToMatchAccuracyRing;
- (id)_accuracyAnimation:(double)arg1;
@property(nonatomic) float opacity;
- (void)_updateShowHeadingLayer;
- (struct UIImage *)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint *)arg2;
- (id)_baseLayer;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGRect)_mapkit_visibleRect;
- (void)didMoveToWindow;
- (void)_updatePulse;
- (void)_removePulse;
- (void)_pausePulse;
- (void)_resumePulse;
- (id)_pulseAnimation;
- (id)_animationToSynchronizePulse:(id *)arg1;
- (id)_pulseLayer;
- (void)_setMapPitchRadians:(double)arg1;
- (_Bool)_shouldShowAccuracyRing;
- (_Bool)_hideLargeAccuracyRing;
- (void)_updateHideLargeAccuracyRing;
- (void)_updateFromMap;
- (void)layoutSubviews;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

