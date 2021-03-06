//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/NSMagnifierWindowContentView-Protocol.h>

@class NSBezierPath, NSBitmapImageRep, NSColor, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface NSMagnifierWindowContentViewLegacy : NSView <NSMagnifierWindowContentView>
{
    NSBitmapImageRep *_contentImageRep;
    NSBezierPath *_clipPath;
    NSImage *_magGlassImage;
    NSColor *_cachedColor;
}

+ (struct CGSize)magnifierViewSize;
@property(retain) NSBitmapImageRep *contentImageRep; // @synthesize contentImageRep=_contentImageRep;
- (struct CGSize)intrinsicContentSize;
- (void)setNextMode;
- (void)drawRect:(struct CGRect)arg1;
- (id)color;
- (struct CGPoint)magnifyingGlassCenterPosition;
- (double)magnifyingGlassRadius;
- (double)magnifiedPointsPerPixel;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

