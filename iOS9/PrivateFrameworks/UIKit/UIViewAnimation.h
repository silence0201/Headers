//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, UIView;

__attribute__((visibility("hidden")))
@interface UIViewAnimation : NSObject
{
    UIView *_view;
    NSIndexPath *_indexPath;
    struct CGRect _endRect;
    double _endAlpha;
    double _startFraction;
    double _endFraction;
    int _curve;
    _Bool _animateFromCurrentPosition;
    _Bool _shouldDeleteAfterAnimation;
    _Bool _editing;
    _Bool _shouldAnimateShadow;
    _Bool _shouldResetGroupOpacityAfterAnimation;
    _Bool _shouldAllowGroupOpacityAfterAnimation;
    _Bool _shouldClipToBoundsAfterAnimation;
    int _viewType;
}

@property(nonatomic) _Bool shouldClipToBoundsAfterAnimation; // @synthesize shouldClipToBoundsAfterAnimation=_shouldClipToBoundsAfterAnimation;
@property(nonatomic) _Bool shouldAllowGroupOpacityAfterAnimation; // @synthesize shouldAllowGroupOpacityAfterAnimation=_shouldAllowGroupOpacityAfterAnimation;
@property(nonatomic) _Bool shouldResetGroupOpacityAfterAnimation; // @synthesize shouldResetGroupOpacityAfterAnimation=_shouldResetGroupOpacityAfterAnimation;
@property(nonatomic) _Bool shouldAnimateShadow; // @synthesize shouldAnimateShadow=_shouldAnimateShadow;
@property(readonly, nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) _Bool shouldDeleteAfterAnimation; // @synthesize shouldDeleteAfterAnimation=_shouldDeleteAfterAnimation;
@property(readonly, nonatomic) _Bool animateFromCurrentPosition; // @synthesize animateFromCurrentPosition=_animateFromCurrentPosition;
@property(readonly, nonatomic) int curve; // @synthesize curve=_curve;
@property(readonly, nonatomic) double endFraction; // @synthesize endFraction=_endFraction;
@property(readonly, nonatomic) double startFraction; // @synthesize startFraction=_startFraction;
@property(readonly, nonatomic) double endAlpha; // @synthesize endAlpha=_endAlpha;
@property(readonly, nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(readonly, nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)description;
- (id)initWithView:(id)arg1 indexPath:(id)arg2 viewType:(int)arg3 endRect:(struct CGRect)arg4 endAlpha:(double)arg5 startFraction:(double)arg6 endFraction:(double)arg7 curve:(int)arg8 animateFromCurrentPosition:(_Bool)arg9 shouldDeleteAfterAnimation:(_Bool)arg10 editing:(_Bool)arg11;

@end

