//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardBackdropCornerView : UIView
{
    int _corners;
    double _radius;
}

- (id)_generateBackdropMaskImage;
- (void)drawInRect:(struct CGRect)arg1;
- (void)updateFrame:(struct CGRect)arg1 withCorners:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withCorners:(int)arg2;

@end

