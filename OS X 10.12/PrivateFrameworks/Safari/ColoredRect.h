//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface ColoredRect : NSView
{
    int _colorType;
    NSColor *_color;
}

@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) int colorType; // @synthesize colorType=_colorType;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

