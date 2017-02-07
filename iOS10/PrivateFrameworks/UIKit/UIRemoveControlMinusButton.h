//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

__attribute__((visibility("hidden")))
@interface UIRemoveControlMinusButton : UIControl
{
    unsigned int _rotated:1;
    unsigned int _rotating:1;
    unsigned int _hiding:1;
    unsigned int _showAsPlus:1;
    unsigned int _reserved:28;
    float _verticalOffset;
}

+ (id)plusImage;
+ (id)minusImage;
+ (float)defaultWidth;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)isRotating;
- (_Bool)isRotated;
- (void)toggleRotate:(_Bool)arg1;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isHiding;
- (void)setHiding:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRemoveControl:(id)arg1;

@end
