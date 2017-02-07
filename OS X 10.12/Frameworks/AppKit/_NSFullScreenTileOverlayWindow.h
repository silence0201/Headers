//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class CALayer, NSArray;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTileOverlayWindow : NSPanel
{
    BOOL _ignoreEvents;
    BOOL _applyBlur;
    BOOL _useLiveTileRect;
    CALayer *_rootLayer;
    NSArray *_tileLayers;
    BOOL _beginningPresentation;
    BOOL _endingPresentation;
    BOOL _presented;
    id _target;
    SEL _action;
}

@property BOOL useLiveTileRect; // @synthesize useLiveTileRect=_useLiveTileRect;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
- (void)dealloc;
- (void)disableAutomaticTermination;
- (void)enableAutomaticTermination;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
@property BOOL applyBlur;
- (void)updateOverlay;
- (void)endPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyPresentationFiltersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setWindowTag;
- (BOOL)_shouldAutoFlattenLayerTree;
- (void)sendEvent:(id)arg1;
- (void)addAuxiliaryView:(id)arg1 alignedTileID:(unsigned long long)arg2;
- (BOOL)_shouldAutoDecSubLevel;
- (BOOL)_shouldAutoIncSubLevel;
- (BOOL)_ignoreForFullScreenTransition;
- (id)initWithActiveTileID:(unsigned long long)arg1 coverTileID:(unsigned long long)arg2 coveredWindowTileFrame:(struct CGRect)arg3 parentSpaceID:(unsigned long long)arg4 ignoreEvents:(BOOL)arg5 screen:(id)arg6 joinTileID:(unsigned long long)arg7;

@end
