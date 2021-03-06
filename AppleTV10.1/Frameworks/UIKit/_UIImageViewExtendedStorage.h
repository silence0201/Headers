//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/CAAnimationDelegate-Protocol.h>

@class CIContext, NSArray, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate>
{
    _Bool _highlighted;
    UIImage *_image;
    UIImage *_highlightedImage;
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
    int _drawMode;
    long long _defaultRenderingMode;
    _Bool _masksTemplateImages;
    unsigned long long _templateImageRenderingEffects;
    UIImage *_displayedImage;
    UIImage *_displayedHighlightedImage;
    CIContext *_CIContext;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

