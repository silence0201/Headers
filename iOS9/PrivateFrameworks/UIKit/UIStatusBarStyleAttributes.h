//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

__attribute__((visibility("hidden")))
@interface UIStatusBarStyleAttributes : NSObject
{
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

- (void).cxx_destruct;
- (long long)tapButtonType;
- (_Bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;
- (double)glowAnimationDuration;
- (id)newForegroundStyleWithHeight:(double)arg1;
- (double)foregroundAlpha;
- (id)backgroundImageName;
- (id)backgroundColorWithTintColor:(id)arg1;
- (_Bool)shouldUseVisualAltitude;
- (_Bool)isDoubleHeight;
- (_Bool)usesVerticalLayout;
- (_Bool)isTransparent;
- (_Bool)isTranslucent;
- (_Bool)areTopCornersRounded;
- (int)cornerStyle;
- (double)heightForMetrics:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (long long)idiom;
- (id)foregroundStyle;
- (_Bool)supportsRasterization;
- (long long)legibilityStyle;
- (long long)style;
- (id)init;
- (id)initWithRequest:(id)arg1;

@end

