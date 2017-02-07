//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ACSHPreferenceController : NSObject
{
    NSDictionary *_preferenceDefaults;
    BOOL _showButtonLabels;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedController;
@property(nonatomic) BOOL showButtonLabels; // @synthesize showButtonLabels=_showButtonLabels;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)useDwellControl;
- (BOOL)reverseMouseWhenReachingScreenEdge;
- (id)colorForTheme:(int)arg1 attributeColor:(int)arg2;
- (int)highlightStyle;
- (id)copyPreferenceNumberForKey:(id)arg1;
- (id)copyPreferenceStringForKey:(id)arg1;
- (id)copyPreferenceValueForKey:(id)arg1;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
- (id)_preferenceDefaults;
- (void)setViewingAlpha:(double)arg1 forPanelUUID:(id)arg2;
- (double)viewingAlphaForPanelUUID:(id)arg1;
- (void)setViewingZoomScale:(double)arg1 forPanelUUID:(id)arg2;
- (double)viewingZoomScaleForPanelUUID:(id)arg1;
- (double)minimumPressBeforeRepeatDuration;
- (double)repeatInterval;
- (double)doublePressInterval;
- (double)firstElementDelay;
- (double)minimumPressDuration;
- (double)coalescePressesDuration;
- (double)sweepingRotationAngle;
- (double)rotatingCursorStage5PixelsPerSecond;
- (double)rotatingCursorStage4PixelsPerSecond;
- (double)rotatingCursorStage3AngleDegreesPerSecond;
- (double)rotatingCursorStage2AngleDegreesPerSecond;
- (double)rotatingCursorStage1AngleDegreesPerSecond;
- (double)sweepingCursorStage3PixelsPerSecond;
- (double)sweepingCursorStage2PixelsPerSecond;
- (double)sweepingCursorStage1PixelsPerSecond;
- (unsigned long long)maxScanCycleCount;
- (double)autoScanElementInterval;
- (double)autoScanPanelInterval;
- (BOOL)isAutoScanEnabled;
- (BOOL)playSounds;
- (BOOL)speakSelectedElement;
- (long long)cursorSize;
- (long long)mouseMoveStyle;
- (void)setDesiredPanelWindowPosition:(int)arg1 panelWindowFrame:(struct CGRect)arg2;
- (struct CGRect)desiredPanelWindowFrame;
- (int)desiredPanelWindowPosition;
- (void)setPanelPosition:(int)arg1 windowFrame:(struct CGRect)arg2;
- (void)setPanelPosition:(int)arg1;
- (struct CGRect)panelFrame;
- (int)panelPosition;
- (void)setshowButtonLabels:(BOOL)arg1;

@end
