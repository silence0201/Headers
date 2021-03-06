//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPPointUnit, LPTextViewStyle, NSColor;

__attribute__((visibility("hidden")))
@interface LPTapToLoadViewStyle : NSObject
{
    NSColor *_backgroundColor;
    NSColor *_tapHighlightColor;
    LPTextViewStyle *_caption;
    LPPointUnit *_width;
    LPPointUnit *_height;
}

@property(retain, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property(retain, nonatomic) LPPointUnit *width; // @synthesize width=_width;
@property(readonly, nonatomic) LPTextViewStyle *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSColor *tapHighlightColor; // @synthesize tapHighlightColor=_tapHighlightColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)initWithPlatform:(long long)arg1;

@end

