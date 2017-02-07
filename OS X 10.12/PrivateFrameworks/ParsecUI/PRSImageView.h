//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

#import <ParsecUI/NSDraggingSource-Protocol.h>
#import <ParsecUI/NSPasteboardItemDataProvider-Protocol.h>

@class NSString, NSVisualEffectView;

@interface PRSImageView : NSImageView <NSPasteboardItemDataProvider, NSDraggingSource>
{
    BOOL _allowsVibrancy;
    NSVisualEffectView *_effectView;
    BOOL _dragEnabled;
}

@property(getter=isDragEnabled) BOOL dragEnabled; // @synthesize dragEnabled=_dragEnabled;
- (void).cxx_destruct;
- (void)addCoveringConstraintsForSubview:(id)arg1;
- (void)mouseDown:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (struct CGSize)fittingSize;
- (void)resetFrame;
- (void)awakeFromNib;
- (void)disableEffectView;
- (void)setHidden:(BOOL)arg1;
- (void)removeFromSuperview;
@property BOOL allowsVibrancy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
