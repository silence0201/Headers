//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface _NSSplitViewShadowView : NSView
{
    double _shadowRevealAmount;
    unsigned long long _shadowEdge;
}

@property unsigned long long shadowEdge; // @synthesize shadowEdge=_shadowEdge;
@property double shadowRevealAmount; // @synthesize shadowRevealAmount=_shadowRevealAmount;
- (id)getShadowImage;
- (struct CGSize)intrinsicContentSize;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)updateLayer;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (BOOL)shouldBeArchived;

@end
