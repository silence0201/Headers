//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPImageViewStyle, LPPadding, NSString;

__attribute__((visibility("hidden")))
@interface LPGlyphStyle : NSObject
{
    NSString *_name;
    LPPadding *_padding;
    double _opacity;
    LPImageViewStyle *_image;
}

@property(readonly, nonatomic) LPImageViewStyle *image; // @synthesize image=_image;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initSearchGlyph;

@end
