//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SafariServices/WBSFluidProgressControllerDelegate-Protocol.h>

@class UIColor, UIImageView, WBSFluidProgressState;
@protocol _SFFluidProgressViewDelegate;

@interface _SFFluidProgressView : UIView <WBSFluidProgressControllerDelegate>
{
    UIImageView *_progressBar;
    UIView *_clippingView;
    WBSFluidProgressState *_state;
    _Bool _progressAnimationSuppressed;
    float _progress;
    id <_SFFluidProgressViewDelegate> _delegate;
    UIColor *_progressBarFillColor;
    double _cornerRadius;
}

+ (double)defaultHeight;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *progressBarFillColor; // @synthesize progressBarFillColor=_progressBarFillColor;
@property(nonatomic) __weak id <_SFFluidProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool progressAnimationSuppressed; // @synthesize progressAnimationSuppressed=_progressAnimationSuppressed;
- (void).cxx_destruct;
- (void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2;
- (void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(_Bool)arg2;
- (void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2;
- (void)_animateUsingDefaultTiming:(_Bool)arg1 stepAnimationTime:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(_Bool)arg3;
- (void)_finishProgressBarWithDuration:(double)arg1;
- (struct CGRect)_progressBarBoundsForValue:(double)arg1;
- (void)_updateProgressBarImage;
@property(readonly, nonatomic, getter=isShowingProgress) _Bool showingProgress;
- (void)setProgressAnimationSuppressed:(_Bool)arg1 duringFluidProgressState:(id)arg2 animated:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

