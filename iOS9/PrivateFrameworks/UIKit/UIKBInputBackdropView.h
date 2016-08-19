//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIKBBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBInputBackdropView : UIView
{
    UIKBBackdropView *_inputBackdropFullView;
    UIKBBackdropView *_inputBackdropLeftView;
    UIKBBackdropView *_inputBackdropRightView;
    unsigned long long _innerCorners;
    _Bool _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    long long _style;
    _Bool _hasStartRect;
    _Bool _hasEndRect;
    struct CGRect _savedStartRect;
    struct CGRect _savedEndRect;
}

+ (_Bool)_retroactivelyRequiresConstraintBasedLayout;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropRightView; // @synthesize inputBackdropRightView=_inputBackdropRightView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropLeftView; // @synthesize inputBackdropLeftView=_inputBackdropLeftView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropFullView; // @synthesize inputBackdropFullView=_inputBackdropFullView;
- (_Bool)_isTransitioning;
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_setInitialProgressWithFrame:(struct CGRect)arg1;
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect)arg2;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg1;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect)arg1 andRightViewRect:(struct CGRect)arg2 innerCorners:(int)arg3;
- (void)transitionToStyle:(long long)arg1 isSplit:(_Bool)arg2;
- (void)setTintOpacity:(double)arg1;
- (void)_setRenderConfig:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 primaryBackdrop:(_Bool)arg2;

@end

