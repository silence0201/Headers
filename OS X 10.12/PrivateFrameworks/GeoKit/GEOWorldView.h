//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, GEOWorldImageLayer, NSMutableArray, NSTrackingArea;

@interface GEOWorldView : NSView
{
    GEOWorldImageLayer *_dayMapLayer;
    GEOWorldImageLayer *_nightMapLayer;
    NSMutableArray *overlappingLayers;
    BOOL enabled;
    BOOL isDebugON;
    CALayer *primeMeridianLayer;
    CALayer *viewEquatorLayer;
    CALayer *copyrightLayer;
    unsigned char imageMonthOfTheYear;
    long long trackingRectTag;
    NSTrackingArea *mouseMoveTrackingArea;
    struct CGPoint previousMousePosition;
    double scaleFactor;
}

+ (struct CGImage *)_copyWorldMapDayImage;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)timedMouseMoved:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mouseExited:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mouseEntered:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mouseDragged:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mouseUp:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mouseDown:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_stopMouseMoveTracking;
- (void)_startMouseMoveTracking;
- (struct CLLocationCoordinate2D)_coordinateLocationForEvent:(id)arg1;
- (struct CGPoint)viewPointFromCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CLLocationCoordinate2D)coordinateFromViewPoint:(struct CGPoint)arg1;
- (struct CLLocationCoordinate2D)_coordinateFromLayerPoint:(struct CGPoint)arg1;
- (double)viewEquator;
- (double)viewPrimeMeridian;
- (void)updateContents;
- (void)viewWillDraw;
- (void)repositionLayers;
@property(nonatomic) double globeRotation;
@property(nonatomic, setter=setNightMap:) BOOL isNightMap;
@property(nonatomic, setter=setDebugON:) BOOL isDebugON;
- (double)_normalizeLongitude:(double)arg1;
- (struct CGSize)longLatSpanPerPoint;
- (void)removeOverlappingLayer:(id)arg1;
- (void)addOverlappingLayer:(id)arg1 centeredInCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)_repositionOverlappingLayers;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;
- (void)_setupCopyRightLayer;
- (void)_setHiddenToNOForLayer:(id)arg1;
- (id)makeBackingLayer;
- (struct CGImage *)_copyCopyRightImageWithString:(id)arg1 textColor:(id)arg2 fontSize:(double)arg3;
- (void)updateTrackingAreas;
- (void)_removeTrackingArea;
- (void)_addTrackingArea;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)systemClockDidChangeNotificationHandler;
- (void)_updateDayLayer;
- (id)nightMapLayer;
- (id)dayMapLayer;
- (id)_createDayMapLayer;
- (id)currentMapLayer;
- (double)_scaleFactor;

@end
