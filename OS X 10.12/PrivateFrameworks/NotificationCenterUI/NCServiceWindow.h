//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NCServiceViewService;

@interface NCServiceWindow : NSPanel
{
    NCServiceViewService *_viewService;
}

@property __weak NCServiceViewService *viewService; // @synthesize viewService=_viewService;
- (void).cxx_destruct;
- (void)printViews;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)_updateCursorRectsDueToResigningKey;
- (BOOL)_shouldAutoFlattenLayerTree;
- (BOOL)canBecomeKeyWindow;
- (id)initWithSize:(struct CGSize)arg1;

@end

