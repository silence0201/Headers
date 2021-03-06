//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, QLPreviewViewController, UIScreen, UISnapshotView, _UIHostedWindow;

__attribute__((visibility("hidden")))
@interface QLAirPlayController : NSObject
{
    int _mode;
    UIScreen *_screen;
    _UIHostedWindow *_airPlayWindow;
    UISnapshotView *_snapshotView;
    QLPreviewViewController *_previewViewController;
    NSTimer *_refreshTimer;
}

- (void)refreshSnapshot;
- (void)updateGeometryForPreviewViewController:(id)arg1;
- (double)_screenScaleFactorForPreviewViewController:(id)arg1;
- (double)_screenAspectRatioForPreviewViewController:(id)arg1;
- (void)invalidate;
- (void)_removeAirPlayWindow;
- (void)_createAirPlayWindowIfNeeded;
- (void)_updateWindowSize;
- (void)update;
@property int mode;
- (void)_startUsingPreviewController;
- (void)_stopUsingPreviewController;
@property(retain) UIScreen *screen;
@property(retain) QLPreviewViewController *previewViewController;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;

@end

