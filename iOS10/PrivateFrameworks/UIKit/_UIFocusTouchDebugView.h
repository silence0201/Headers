//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIFocusTouchDebugView : UIView
{
    UIView *_touchView;
    UIView *_boundaryView;
}

- (void).cxx_destruct;
- (void)hideNavigationBoundary;
- (void)showNavigationBoundaryWithinNormalizedRect:(struct CGRect)arg1;
- (void)hideCurrentTouch;
- (void)showCurrentTouchAtNormalizedPoint:(struct CGPoint)arg1;
- (struct CGRect)_scaleNormalizedRect:(struct CGRect)arg1;
- (struct CGPoint)_scaleNormalizedPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

