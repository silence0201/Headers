//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKCameraController-Protocol.h>

@class GEOMapRegion, NSString, VKCamera;
@protocol MDRenderTarget, VKCameraControllerDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraController : NSObject <VKCameraController>
{
    VKCamera *_camera;
    id <MDRenderTarget> _canvas;
    id <VKCameraControllerDelegate> _delegate;
    BOOL _gesturing;
    unsigned long long _regionChangeCount;
    BOOL _inProgressRegionChangeIsAnimated;
    struct VKEdgeInsets _edgeInsets;
    BOOL _staysCenteredDuringPinch;
    BOOL _staysCenteredDuringRotation;
    BOOL _isPitchEnabled;
    BOOL _isRotateEnabled;
    BOOL _allowDatelineWraparound;
}

@property(nonatomic) BOOL allowDatelineWraparound; // @synthesize allowDatelineWraparound=_allowDatelineWraparound;
@property(nonatomic) BOOL isRotateEnabled; // @synthesize isRotateEnabled=_isRotateEnabled;
@property(nonatomic) BOOL isPitchEnabled; // @synthesize isPitchEnabled=_isPitchEnabled;
@property(nonatomic) BOOL staysCenteredDuringRotation; // @synthesize staysCenteredDuringRotation=_staysCenteredDuringRotation;
@property(nonatomic) BOOL staysCenteredDuringPinch; // @synthesize staysCenteredDuringPinch=_staysCenteredDuringPinch;
- (BOOL)centerCoordinate:(CDStruct_c3b9c2ee *)arg1 andDistanceFromCenter:(double *)arg2 forMapRegion:(id)arg3;
- (void)updateWithTimestamp:(double)arg1;
- (BOOL)wantsTimerTick;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double maxPitch;
@property(nonatomic) double pitch;
@property(readonly, nonatomic) double presentationHeading;
@property(nonatomic) double heading;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)updateCameraToPositionOrientationLimits;
- (void)stylesheetDidReload;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) BOOL isRotated;
@property(readonly, nonatomic) BOOL isFullyPitched;
@property(readonly, nonatomic) BOOL isPitched;
@property(readonly, nonatomic) BOOL canRotate;
@property(readonly, nonatomic) BOOL canPitch;
- (BOOL)canZoomOutForTileSize:(long long)arg1;
- (BOOL)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (struct VKEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (Matrix_443f5d51)cursorFromScreenPoint:(struct CGPoint)arg1;
- (struct CGPoint)scaledScreenPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)centerScreenPoint;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (void)checkAndResetRegionChangeCount;
- (BOOL)isChangingRegion;
- (BOOL)isAnimating;
- (void)endRegionChange;
- (void)beginRegionChange:(BOOL)arg1;
- (void)canvasDidLayout;
- (void)setGesturing:(BOOL)arg1;
- (BOOL)isGesturing;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setCanvas:(id)arg1;
- (id)canvas;
- (id)camera;
- (void)setCamera:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
