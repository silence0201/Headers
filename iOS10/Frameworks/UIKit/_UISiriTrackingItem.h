//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UISiriTrackingItem : NSObject
{
    _Bool _deleted;
    _Bool _isABigReplacement;
    _Bool _isASmallReplacement;
    _Bool _isAnIntroduction;
    UIImageView *_animatedView;
    UIColor *_textColor;
    double _offscreenXLocation;
    UIImage *_capturedGlyphImage;
    struct _NSRange _textRange;
    struct _NSRange _glyphRange;
    struct CGRect _targetFrame;
}

@property(retain, nonatomic) UIImage *capturedGlyphImage; // @synthesize capturedGlyphImage=_capturedGlyphImage;
@property(nonatomic) _Bool isAnIntroduction; // @synthesize isAnIntroduction=_isAnIntroduction;
@property(nonatomic) _Bool isASmallReplacement; // @synthesize isASmallReplacement=_isASmallReplacement;
@property(nonatomic) _Bool isABigReplacement; // @synthesize isABigReplacement=_isABigReplacement;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) double offscreenXLocation; // @synthesize offscreenXLocation=_offscreenXLocation;
@property(nonatomic) struct _NSRange glyphRange; // @synthesize glyphRange=_glyphRange;
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIImageView *animatedView; // @synthesize animatedView=_animatedView;
- (void).cxx_destruct;
- (id)description;
- (void)captureGlyphsInRect:(struct CGRect)arg1 containerOrigin:(struct CGPoint)arg2 fromLayoutManager:(id)arg3;
- (void)animateOut;
- (void)dealloc;
- (id)init;

@end

