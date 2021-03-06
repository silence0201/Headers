//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/_NSBorderlessLayerTreeProjectionWindow.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface _NSFullScreenUnbufferedWindow : _NSBorderlessLayerTreeProjectionWindow
{
    BOOL _useBlurredBackground;
}

@property(copy) NSColor *customColor; // @dynamic customColor;
- (id)_createContentViewWithFrame:(struct CGRect)arg1 customColor:(id)arg2;
- (struct CGRect)_opaqueRect;
- (void)invalidateRestorableState;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)canEnterFullScreenMode;
- (void)_setWindowTag;
- (id)initWithContentRect:(struct CGRect)arg1 screen:(id)arg2 customColor:(id)arg3 useBlurredBackground:(BOOL)arg4;

@end

