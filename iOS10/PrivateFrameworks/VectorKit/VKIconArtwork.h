//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, VKImage;

__attribute__((visibility("hidden")))
@interface VKIconArtwork : NSObject
{
    _Bool _hasIcon;
    VKImage *_image;
    double _contentScale;
    double _leftCapWidth;
    double _rightCapWidth;
    double _textOffsetY;
    NSMutableArray *_completionHandlers;
    struct CGColor *_fullBleedColor;
}

@property(nonatomic) struct CGColor *fullBleedColor; // @synthesize fullBleedColor=_fullBleedColor;
@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (id)_newImageWithText:(id)arg1 fontName:(id)arg2;
- (void)getImage:(CDUnknownBlockType)arg1;
- (id)imageWithText:(id)arg1 fontName:(id)arg2;
- (id)image;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 contentScale:(double)arg2;

@end
