//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSMutableArray, NSToolbarFullScreenWindowManager, _NSFullScreenTileOverlayWindow;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTileDividerWindow : NSPanel
{
    NSToolbarFullScreenWindowManager *_manager;
    struct CGRect _dividerRect;
    unsigned long long _edge;
    unsigned long long _tileSpace;
    unsigned long long _verticalIndex;
    unsigned long long _horizontalIndex;
    BOOL _overrideDrivingLiveResize;
    unsigned int _ackSemaphore;
    BOOL _drivingLiveResize;
    BOOL _liveResizeMoved;
    BOOL _shouldAbortLiveResize;
    _NSFullScreenTileOverlayWindow *_overlayWindow;
    BOOL _overlayNeedsBeginPresentation;
    NSMutableArray *_animatingOverlayWindows;
}

@property BOOL overrideDrivingLiveResize; // @synthesize overrideDrivingLiveResize=_overrideDrivingLiveResize;
- (void)_endLiveResizeAtDividerLocation:(double)arg1;
- (void)_liveResizeToDividerLocation:(double)arg1;
- (void)_forceOverlayPresentation;
- (void)_startLiveResizeWithOverlay:(BOOL)arg1;
- (void)performTileResizeToFit:(struct CGSize)arg1;
- (BOOL)drivingLiveResize;
- (id)_hitTestWithHysteresisCheck:(struct CGPoint)arg1 forEvent:(id)arg2 allowWindowDragging:(char *)arg3;
- (struct CGRect)_windowResizeEventHandlingRectForRect:(struct CGRect)arg1;
- (void)resizeToFiftyFifty;
- (BOOL)shouldAbortLiveResize;
- (void)abortLiveResize;
- (BOOL)performDividerDragWithEvent:(id)arg1;
- (void)dealloc;
- (void)disableAutomaticTermination;
- (void)enableAutomaticTermination;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (id)resizeCursor;
- (unsigned long long)horizontalIndex;
- (unsigned long long)verticalIndex;
- (unsigned long long)edge;
- (id)manager;
- (unsigned long long)tileSpaceID;
- (unsigned long long)parentSpaceID;
- (void)_setWindowTag;
- (void)close;
- (id)initWithDividerRect:(struct CGRect)arg1 edge:(unsigned long long)arg2 tileSpace:(unsigned long long)arg3 manager:(id)arg4;
- (void)cancelOverlayAnimations;
- (void)_removeOverlayWindow;
- (void)_updateOverlayWindow;
- (void)_beginOverlayPresentationIfNeeded;
- (void)_setupOverlayWindowImmediately:(BOOL)arg1;

@end
