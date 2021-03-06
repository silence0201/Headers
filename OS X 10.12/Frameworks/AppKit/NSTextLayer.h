//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/_NSBackingLayer.h>

#import <AppKit/CALinearMaskLayerDelegate-Protocol.h>
#import <AppKit/NSLinearMaskLayerController-Protocol.h>

@class CALayer, CALinearMaskLayer, NSColor, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSTextLayer : _NSBackingLayer <NSLinearMaskLayerController, CALinearMaskLayerDelegate>
{
    CALayer *_primaryOverlay;
    NSColor *_primaryOverlayColor;
    CDUnknownBlockType _primaryOverlayRenderer;
    NSMutableArray *_primaryOverlayRenderers;
    NSMutableDictionary *_layers;
    NSMapTable *_renderers;
}

- (void)renderInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInGraphicsContext:(id)arg1;
- (void)invalidateSublayers;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inLinearMaskContext:(struct CALinearMaskContext *)arg2;
- (id)renderersForLayer:(id)arg1;
- (void)addRenderer:(CDUnknownBlockType)arg1 forLayer:(id)arg2;
- (id)layerForColor:(id)arg1;
@property(retain) NSColor *primaryOverlayColor; // @dynamic primaryOverlayColor;
@property(copy) CDUnknownBlockType primaryOverlayRenderer; // @dynamic primaryOverlayRenderer;
@property(retain) CALinearMaskLayer *primaryOverlay; // @dynamic primaryOverlay;
- (BOOL)NS_needsLinearMaskOverlayForFontSmoothing;
- (BOOL)NS_usesLinearMaskOverlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

