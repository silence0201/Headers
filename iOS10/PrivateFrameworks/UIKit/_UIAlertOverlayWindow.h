//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

__attribute__((visibility("hidden")))
@interface _UIAlertOverlayWindow : UIWindow
{
}

+ (_Bool)_isSystemWindow;
+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
- (int)textEffectsVisibilityLevel;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (void)_updateTransformLayerForClassicPresentation;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)isInternalWindow;
- (void)_handleMouseUp:(struct __GSEvent *)arg1;

@end

