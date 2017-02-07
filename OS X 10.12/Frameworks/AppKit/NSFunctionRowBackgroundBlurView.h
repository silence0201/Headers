//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class _NSFunctionRowBackgroundBlurViewBackdropLayer, _NSFunctionRowBackgroundBlurViewLayer;

@interface NSFunctionRowBackgroundBlurView : NSView
{
    _NSFunctionRowBackgroundBlurViewLayer *_container;
    _NSFunctionRowBackgroundBlurViewBackdropLayer *_backdrop;
    double _blurRadius;
}

+ (id)defaultAnimationForKey:(id)arg1;
- (Class)_animatorClass;
@property double blurRadius;
- (void)setLayer:(id)arg1;
- (id)makeBackingLayer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
